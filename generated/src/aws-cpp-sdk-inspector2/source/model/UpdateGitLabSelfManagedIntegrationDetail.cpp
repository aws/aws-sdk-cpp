/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/UpdateGitLabSelfManagedIntegrationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

UpdateGitLabSelfManagedIntegrationDetail::UpdateGitLabSelfManagedIntegrationDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateGitLabSelfManagedIntegrationDetail& UpdateGitLabSelfManagedIntegrationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authCode"))
  {
    m_authCode = jsonValue.GetString("authCode");
    m_authCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateGitLabSelfManagedIntegrationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_authCodeHasBeenSet)
  {
   payload.WithString("authCode", m_authCode);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
