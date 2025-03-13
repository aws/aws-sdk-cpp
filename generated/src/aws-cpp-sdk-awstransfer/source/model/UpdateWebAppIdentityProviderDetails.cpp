/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/UpdateWebAppIdentityProviderDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

UpdateWebAppIdentityProviderDetails::UpdateWebAppIdentityProviderDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateWebAppIdentityProviderDetails& UpdateWebAppIdentityProviderDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IdentityCenterConfig"))
  {
    m_identityCenterConfig = jsonValue.GetObject("IdentityCenterConfig");
    m_identityCenterConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateWebAppIdentityProviderDetails::Jsonize() const
{
  JsonValue payload;

  if(m_identityCenterConfigHasBeenSet)
  {
   payload.WithObject("IdentityCenterConfig", m_identityCenterConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
