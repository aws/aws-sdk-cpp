/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentLabel.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

DocumentLabel::DocumentLabel(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentLabel& DocumentLabel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");
    m_scoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Page"))
  {
    m_page = jsonValue.GetInteger("Page");
    m_pageHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentLabel::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  if(m_pageHasBeenSet)
  {
   payload.WithInteger("Page", m_page);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
