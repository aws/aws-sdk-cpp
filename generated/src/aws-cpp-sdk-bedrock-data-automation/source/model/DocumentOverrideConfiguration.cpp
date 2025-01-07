/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DocumentOverrideConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

DocumentOverrideConfiguration::DocumentOverrideConfiguration() : 
    m_splitterHasBeenSet(false)
{
}

DocumentOverrideConfiguration::DocumentOverrideConfiguration(JsonView jsonValue)
  : DocumentOverrideConfiguration()
{
  *this = jsonValue;
}

DocumentOverrideConfiguration& DocumentOverrideConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("splitter"))
  {
    m_splitter = jsonValue.GetObject("splitter");

    m_splitterHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentOverrideConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_splitterHasBeenSet)
  {
   payload.WithObject("splitter", m_splitter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
