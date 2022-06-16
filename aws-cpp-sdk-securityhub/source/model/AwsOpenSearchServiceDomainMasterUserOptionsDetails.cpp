/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsOpenSearchServiceDomainMasterUserOptionsDetails.h>
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

AwsOpenSearchServiceDomainMasterUserOptionsDetails::AwsOpenSearchServiceDomainMasterUserOptionsDetails() : 
    m_masterUserArnHasBeenSet(false),
    m_masterUserNameHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false)
{
}

AwsOpenSearchServiceDomainMasterUserOptionsDetails::AwsOpenSearchServiceDomainMasterUserOptionsDetails(JsonView jsonValue) : 
    m_masterUserArnHasBeenSet(false),
    m_masterUserNameHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false)
{
  *this = jsonValue;
}

AwsOpenSearchServiceDomainMasterUserOptionsDetails& AwsOpenSearchServiceDomainMasterUserOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MasterUserArn"))
  {
    m_masterUserArn = jsonValue.GetString("MasterUserArn");

    m_masterUserArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterUserName"))
  {
    m_masterUserName = jsonValue.GetString("MasterUserName");

    m_masterUserNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterUserPassword"))
  {
    m_masterUserPassword = jsonValue.GetString("MasterUserPassword");

    m_masterUserPasswordHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsOpenSearchServiceDomainMasterUserOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_masterUserArnHasBeenSet)
  {
   payload.WithString("MasterUserArn", m_masterUserArn);

  }

  if(m_masterUserNameHasBeenSet)
  {
   payload.WithString("MasterUserName", m_masterUserName);

  }

  if(m_masterUserPasswordHasBeenSet)
  {
   payload.WithString("MasterUserPassword", m_masterUserPassword);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
