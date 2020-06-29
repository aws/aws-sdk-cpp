/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2NetworkInterfaceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2NetworkInterfaceDetails::AwsEc2NetworkInterfaceDetails() : 
    m_attachmentHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sourceDestCheck(false),
    m_sourceDestCheckHasBeenSet(false)
{
}

AwsEc2NetworkInterfaceDetails::AwsEc2NetworkInterfaceDetails(JsonView jsonValue) : 
    m_attachmentHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sourceDestCheck(false),
    m_sourceDestCheckHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2NetworkInterfaceDetails& AwsEc2NetworkInterfaceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attachment"))
  {
    m_attachment = jsonValue.GetObject("Attachment");

    m_attachmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("NetworkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsObject());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceDestCheck"))
  {
    m_sourceDestCheck = jsonValue.GetBool("SourceDestCheck");

    m_sourceDestCheckHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2NetworkInterfaceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentHasBeenSet)
  {
   payload.WithObject("Attachment", m_attachment.Jsonize());

  }

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("NetworkInterfaceId", m_networkInterfaceId);

  }

  if(m_securityGroupsHasBeenSet)
  {
   Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsObject(m_securityGroups[securityGroupsIndex].Jsonize());
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  if(m_sourceDestCheckHasBeenSet)
  {
   payload.WithBool("SourceDestCheck", m_sourceDestCheck);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
