/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/EvaluateDataQuality.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

EvaluateDataQuality::EvaluateDataQuality() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_rulesetHasBeenSet(false),
    m_output(DQTransformOutput::NOT_SET),
    m_outputHasBeenSet(false),
    m_publishingOptionsHasBeenSet(false),
    m_stopJobOnFailureOptionsHasBeenSet(false)
{
}

EvaluateDataQuality::EvaluateDataQuality(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_rulesetHasBeenSet(false),
    m_output(DQTransformOutput::NOT_SET),
    m_outputHasBeenSet(false),
    m_publishingOptionsHasBeenSet(false),
    m_stopJobOnFailureOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluateDataQuality& EvaluateDataQuality::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("Inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
    m_inputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ruleset"))
  {
    m_ruleset = jsonValue.GetString("Ruleset");

    m_rulesetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Output"))
  {
    m_output = DQTransformOutputMapper::GetDQTransformOutputForName(jsonValue.GetString("Output"));

    m_outputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublishingOptions"))
  {
    m_publishingOptions = jsonValue.GetObject("PublishingOptions");

    m_publishingOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StopJobOnFailureOptions"))
  {
    m_stopJobOnFailureOptions = jsonValue.GetObject("StopJobOnFailureOptions");

    m_stopJobOnFailureOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluateDataQuality::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsString(m_inputs[inputsIndex]);
   }
   payload.WithArray("Inputs", std::move(inputsJsonList));

  }

  if(m_rulesetHasBeenSet)
  {
   payload.WithString("Ruleset", m_ruleset);

  }

  if(m_outputHasBeenSet)
  {
   payload.WithString("Output", DQTransformOutputMapper::GetNameForDQTransformOutput(m_output));
  }

  if(m_publishingOptionsHasBeenSet)
  {
   payload.WithObject("PublishingOptions", m_publishingOptions.Jsonize());

  }

  if(m_stopJobOnFailureOptionsHasBeenSet)
  {
   payload.WithObject("StopJobOnFailureOptions", m_stopJobOnFailureOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
