/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/TeacherModelConfig.h>
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

TeacherModelConfig::TeacherModelConfig() : 
    m_teacherModelIdentifierHasBeenSet(false),
    m_maxResponseLengthForInference(0),
    m_maxResponseLengthForInferenceHasBeenSet(false)
{
}

TeacherModelConfig::TeacherModelConfig(JsonView jsonValue)
  : TeacherModelConfig()
{
  *this = jsonValue;
}

TeacherModelConfig& TeacherModelConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("teacherModelIdentifier"))
  {
    m_teacherModelIdentifier = jsonValue.GetString("teacherModelIdentifier");

    m_teacherModelIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxResponseLengthForInference"))
  {
    m_maxResponseLengthForInference = jsonValue.GetInteger("maxResponseLengthForInference");

    m_maxResponseLengthForInferenceHasBeenSet = true;
  }

  return *this;
}

JsonValue TeacherModelConfig::Jsonize() const
{
  JsonValue payload;

  if(m_teacherModelIdentifierHasBeenSet)
  {
   payload.WithString("teacherModelIdentifier", m_teacherModelIdentifier);

  }

  if(m_maxResponseLengthForInferenceHasBeenSet)
  {
   payload.WithInteger("maxResponseLengthForInference", m_maxResponseLengthForInference);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
