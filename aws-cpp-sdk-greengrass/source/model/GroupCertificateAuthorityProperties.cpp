/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/greengrass/model/GroupCertificateAuthorityProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

GroupCertificateAuthorityProperties::GroupCertificateAuthorityProperties() : 
    m_groupCertificateAuthorityArnHasBeenSet(false),
    m_groupCertificateAuthorityIdHasBeenSet(false)
{
}

GroupCertificateAuthorityProperties::GroupCertificateAuthorityProperties(const JsonValue& jsonValue) : 
    m_groupCertificateAuthorityArnHasBeenSet(false),
    m_groupCertificateAuthorityIdHasBeenSet(false)
{
  *this = jsonValue;
}

GroupCertificateAuthorityProperties& GroupCertificateAuthorityProperties::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("GroupCertificateAuthorityArn"))
  {
    m_groupCertificateAuthorityArn = jsonValue.GetString("GroupCertificateAuthorityArn");

    m_groupCertificateAuthorityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupCertificateAuthorityId"))
  {
    m_groupCertificateAuthorityId = jsonValue.GetString("GroupCertificateAuthorityId");

    m_groupCertificateAuthorityIdHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupCertificateAuthorityProperties::Jsonize() const
{
  JsonValue payload;

  if(m_groupCertificateAuthorityArnHasBeenSet)
  {
   payload.WithString("GroupCertificateAuthorityArn", m_groupCertificateAuthorityArn);

  }

  if(m_groupCertificateAuthorityIdHasBeenSet)
  {
   payload.WithString("GroupCertificateAuthorityId", m_groupCertificateAuthorityId);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
