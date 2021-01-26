/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DatasetDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

DatasetDefinition::DatasetDefinition() : 
    m_athenaDatasetDefinitionHasBeenSet(false),
    m_redshiftDatasetDefinitionHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_dataDistributionType(DataDistributionType::NOT_SET),
    m_dataDistributionTypeHasBeenSet(false),
    m_inputMode(InputMode::NOT_SET),
    m_inputModeHasBeenSet(false)
{
}

DatasetDefinition::DatasetDefinition(JsonView jsonValue) : 
    m_athenaDatasetDefinitionHasBeenSet(false),
    m_redshiftDatasetDefinitionHasBeenSet(false),
    m_localPathHasBeenSet(false),
    m_dataDistributionType(DataDistributionType::NOT_SET),
    m_dataDistributionTypeHasBeenSet(false),
    m_inputMode(InputMode::NOT_SET),
    m_inputModeHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetDefinition& DatasetDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AthenaDatasetDefinition"))
  {
    m_athenaDatasetDefinition = jsonValue.GetObject("AthenaDatasetDefinition");

    m_athenaDatasetDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedshiftDatasetDefinition"))
  {
    m_redshiftDatasetDefinition = jsonValue.GetObject("RedshiftDatasetDefinition");

    m_redshiftDatasetDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalPath"))
  {
    m_localPath = jsonValue.GetString("LocalPath");

    m_localPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataDistributionType"))
  {
    m_dataDistributionType = DataDistributionTypeMapper::GetDataDistributionTypeForName(jsonValue.GetString("DataDistributionType"));

    m_dataDistributionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputMode"))
  {
    m_inputMode = InputModeMapper::GetInputModeForName(jsonValue.GetString("InputMode"));

    m_inputModeHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_athenaDatasetDefinitionHasBeenSet)
  {
   payload.WithObject("AthenaDatasetDefinition", m_athenaDatasetDefinition.Jsonize());

  }

  if(m_redshiftDatasetDefinitionHasBeenSet)
  {
   payload.WithObject("RedshiftDatasetDefinition", m_redshiftDatasetDefinition.Jsonize());

  }

  if(m_localPathHasBeenSet)
  {
   payload.WithString("LocalPath", m_localPath);

  }

  if(m_dataDistributionTypeHasBeenSet)
  {
   payload.WithString("DataDistributionType", DataDistributionTypeMapper::GetNameForDataDistributionType(m_dataDistributionType));
  }

  if(m_inputModeHasBeenSet)
  {
   payload.WithString("InputMode", InputModeMapper::GetNameForInputMode(m_inputMode));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
