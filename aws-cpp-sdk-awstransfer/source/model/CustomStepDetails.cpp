/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CustomStepDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

CustomStepDetails::CustomStepDetails() : 
    m_nameHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false),
    m_sourceFileLocationHasBeenSet(false)
{
}

CustomStepDetails::CustomStepDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_timeoutSeconds(0),
    m_timeoutSecondsHasBeenSet(false),
    m_sourceFileLocationHasBeenSet(false)
{
  *this = jsonValue;
}

CustomStepDetails& CustomStepDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeoutSeconds"))
  {
    m_timeoutSeconds = jsonValue.GetInteger("TimeoutSeconds");

    m_timeoutSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceFileLocation"))
  {
    m_sourceFileLocation = jsonValue.GetString("SourceFileLocation");

    m_sourceFileLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomStepDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_timeoutSecondsHasBeenSet)
  {
   payload.WithInteger("TimeoutSeconds", m_timeoutSeconds);

  }

  if(m_sourceFileLocationHasBeenSet)
  {
   payload.WithString("SourceFileLocation", m_sourceFileLocation);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
