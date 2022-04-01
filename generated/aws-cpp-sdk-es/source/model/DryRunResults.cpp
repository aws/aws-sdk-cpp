/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DryRunResults.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

DryRunResults::DryRunResults() : 
    m_deploymentTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

DryRunResults::DryRunResults(JsonView jsonValue) : 
    m_deploymentTypeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

DryRunResults& DryRunResults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeploymentType"))
  {
    m_deploymentType = jsonValue.GetString("DeploymentType");

    m_deploymentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue DryRunResults::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("DeploymentType", m_deploymentType);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
