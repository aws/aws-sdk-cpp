/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/lambda/model/EventSourceMappingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

EventSourceMappingConfiguration::EventSourceMappingConfiguration() : 
    m_uUIDHasBeenSet(false),
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_eventSourceArnHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_lastProcessingResultHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_stateTransitionReasonHasBeenSet(false)
{
}

EventSourceMappingConfiguration::EventSourceMappingConfiguration(const JsonValue& jsonValue) : 
    m_uUIDHasBeenSet(false),
    m_batchSize(0),
    m_batchSizeHasBeenSet(false),
    m_eventSourceArnHasBeenSet(false),
    m_functionArnHasBeenSet(false),
    m_lastModifiedHasBeenSet(false),
    m_lastProcessingResultHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_stateTransitionReasonHasBeenSet(false)
{
  *this = jsonValue;
}

EventSourceMappingConfiguration& EventSourceMappingConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("UUID"))
  {
    m_uUID = jsonValue.GetString("UUID");

    m_uUIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BatchSize"))
  {
    m_batchSize = jsonValue.GetInteger("BatchSize");

    m_batchSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventSourceArn"))
  {
    m_eventSourceArn = jsonValue.GetString("EventSourceArn");

    m_eventSourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FunctionArn"))
  {
    m_functionArn = jsonValue.GetString("FunctionArn");

    m_functionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetDouble("LastModified");

    m_lastModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastProcessingResult"))
  {
    m_lastProcessingResult = jsonValue.GetString("LastProcessingResult");

    m_lastProcessingResultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateTransitionReason"))
  {
    m_stateTransitionReason = jsonValue.GetString("StateTransitionReason");

    m_stateTransitionReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue EventSourceMappingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_uUIDHasBeenSet)
  {
   payload.WithString("UUID", m_uUID);

  }

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("BatchSize", m_batchSize);

  }

  if(m_eventSourceArnHasBeenSet)
  {
   payload.WithString("EventSourceArn", m_eventSourceArn);

  }

  if(m_functionArnHasBeenSet)
  {
   payload.WithString("FunctionArn", m_functionArn);

  }

  if(m_lastModifiedHasBeenSet)
  {
   payload.WithDouble("LastModified", m_lastModified.SecondsWithMSPrecision());
  }

  if(m_lastProcessingResultHasBeenSet)
  {
   payload.WithString("LastProcessingResult", m_lastProcessingResult);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_stateTransitionReasonHasBeenSet)
  {
   payload.WithString("StateTransitionReason", m_stateTransitionReason);

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws