/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ImportedModelSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

ImportedModelSummary::ImportedModelSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ImportedModelSummary& ImportedModelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelName"))
  {
    m_modelName = jsonValue.GetString("modelName");
    m_modelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instructSupported"))
  {
    m_instructSupported = jsonValue.GetBool("instructSupported");
    m_instructSupportedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelArchitecture"))
  {
    m_modelArchitecture = jsonValue.GetString("modelArchitecture");
    m_modelArchitectureHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportedModelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("modelName", m_modelName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_instructSupportedHasBeenSet)
  {
   payload.WithBool("instructSupported", m_instructSupported);

  }

  if(m_modelArchitectureHasBeenSet)
  {
   payload.WithString("modelArchitecture", m_modelArchitecture);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
