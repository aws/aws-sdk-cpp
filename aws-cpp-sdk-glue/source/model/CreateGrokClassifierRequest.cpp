/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateGrokClassifierRequest.h>
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

CreateGrokClassifierRequest::CreateGrokClassifierRequest() : 
    m_classificationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_grokPatternHasBeenSet(false),
    m_customPatternsHasBeenSet(false)
{
}

CreateGrokClassifierRequest::CreateGrokClassifierRequest(JsonView jsonValue) : 
    m_classificationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_grokPatternHasBeenSet(false),
    m_customPatternsHasBeenSet(false)
{
  *this = jsonValue;
}

CreateGrokClassifierRequest& CreateGrokClassifierRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Classification"))
  {
    m_classification = jsonValue.GetString("Classification");

    m_classificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GrokPattern"))
  {
    m_grokPattern = jsonValue.GetString("GrokPattern");

    m_grokPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomPatterns"))
  {
    m_customPatterns = jsonValue.GetString("CustomPatterns");

    m_customPatternsHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateGrokClassifierRequest::Jsonize() const
{
  JsonValue payload;

  if(m_classificationHasBeenSet)
  {
   payload.WithString("Classification", m_classification);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_grokPatternHasBeenSet)
  {
   payload.WithString("GrokPattern", m_grokPattern);

  }

  if(m_customPatternsHasBeenSet)
  {
   payload.WithString("CustomPatterns", m_customPatterns);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
