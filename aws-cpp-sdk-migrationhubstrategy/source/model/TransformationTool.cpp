/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/TransformationTool.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

TransformationTool::TransformationTool() : 
    m_descriptionHasBeenSet(false),
    m_name(TransformationToolName::NOT_SET),
    m_nameHasBeenSet(false),
    m_tranformationToolInstallationLinkHasBeenSet(false)
{
}

TransformationTool::TransformationTool(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_name(TransformationToolName::NOT_SET),
    m_nameHasBeenSet(false),
    m_tranformationToolInstallationLinkHasBeenSet(false)
{
  *this = jsonValue;
}

TransformationTool& TransformationTool::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = TransformationToolNameMapper::GetTransformationToolNameForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tranformationToolInstallationLink"))
  {
    m_tranformationToolInstallationLink = jsonValue.GetString("tranformationToolInstallationLink");

    m_tranformationToolInstallationLinkHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformationTool::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", TransformationToolNameMapper::GetNameForTransformationToolName(m_name));
  }

  if(m_tranformationToolInstallationLinkHasBeenSet)
  {
   payload.WithString("tranformationToolInstallationLink", m_tranformationToolInstallationLink);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
