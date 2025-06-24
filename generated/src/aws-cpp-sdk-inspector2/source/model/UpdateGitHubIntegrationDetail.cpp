/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/UpdateGitHubIntegrationDetail.h>
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

UpdateGitHubIntegrationDetail::UpdateGitHubIntegrationDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

UpdateGitHubIntegrationDetail& UpdateGitHubIntegrationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("installationId"))
  {
    m_installationId = jsonValue.GetString("installationId");
    m_installationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue UpdateGitHubIntegrationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_installationIdHasBeenSet)
  {
   payload.WithString("installationId", m_installationId);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
