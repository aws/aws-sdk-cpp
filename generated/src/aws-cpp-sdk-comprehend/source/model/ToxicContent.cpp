/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ToxicContent.h>
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

ToxicContent::ToxicContent() : 
    m_name(ToxicContentType::NOT_SET),
    m_nameHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
}

ToxicContent::ToxicContent(JsonView jsonValue) : 
    m_name(ToxicContentType::NOT_SET),
    m_nameHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

ToxicContent& ToxicContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = ToxicContentTypeMapper::GetToxicContentTypeForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue ToxicContent::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", ToxicContentTypeMapper::GetNameForToxicContentType(m_name));
  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
