/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeRepositoryMetadata.h>
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

CodeRepositoryMetadata::CodeRepositoryMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeRepositoryMetadata& CodeRepositoryMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");
    m_projectNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("integrationArn"))
  {
    m_integrationArn = jsonValue.GetString("integrationArn");
    m_integrationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerType"))
  {
    m_providerType = jsonValue.GetString("providerType");
    m_providerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("providerTypeVisibility"))
  {
    m_providerTypeVisibility = jsonValue.GetString("providerTypeVisibility");
    m_providerTypeVisibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastScannedCommitId"))
  {
    m_lastScannedCommitId = jsonValue.GetString("lastScannedCommitId");
    m_lastScannedCommitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanConfiguration"))
  {
    m_scanConfiguration = jsonValue.GetObject("scanConfiguration");
    m_scanConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("onDemandScan"))
  {
    m_onDemandScan = jsonValue.GetObject("onDemandScan");
    m_onDemandScanHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeRepositoryMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_integrationArnHasBeenSet)
  {
   payload.WithString("integrationArn", m_integrationArn);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("providerType", m_providerType);

  }

  if(m_providerTypeVisibilityHasBeenSet)
  {
   payload.WithString("providerTypeVisibility", m_providerTypeVisibility);

  }

  if(m_lastScannedCommitIdHasBeenSet)
  {
   payload.WithString("lastScannedCommitId", m_lastScannedCommitId);

  }

  if(m_scanConfigurationHasBeenSet)
  {
   payload.WithObject("scanConfiguration", m_scanConfiguration.Jsonize());

  }

  if(m_onDemandScanHasBeenSet)
  {
   payload.WithObject("onDemandScan", m_onDemandScan.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
