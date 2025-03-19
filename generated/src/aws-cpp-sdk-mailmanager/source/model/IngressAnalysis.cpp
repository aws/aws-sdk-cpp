/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressAnalysis.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

IngressAnalysis::IngressAnalysis(JsonView jsonValue)
{
  *this = jsonValue;
}

IngressAnalysis& IngressAnalysis::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Analyzer"))
  {
    m_analyzer = jsonValue.GetString("Analyzer");
    m_analyzerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResultField"))
  {
    m_resultField = jsonValue.GetString("ResultField");
    m_resultFieldHasBeenSet = true;
  }
  return *this;
}

JsonValue IngressAnalysis::Jsonize() const
{
  JsonValue payload;

  if(m_analyzerHasBeenSet)
  {
   payload.WithString("Analyzer", m_analyzer);

  }

  if(m_resultFieldHasBeenSet)
  {
   payload.WithString("ResultField", m_resultField);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
