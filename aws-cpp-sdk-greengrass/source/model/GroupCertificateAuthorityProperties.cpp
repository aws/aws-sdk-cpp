/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

GroupCertificateAuthorityProperties::GroupCertificateAuthorityProperties(JsonView jsonValue) : 
    m_groupCertificateAuthorityArnHasBeenSet(false),
    m_groupCertificateAuthorityIdHasBeenSet(false)
{
  *this = jsonValue;
}

GroupCertificateAuthorityProperties& GroupCertificateAuthorityProperties::operator =(JsonView jsonValue)
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
