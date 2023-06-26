/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityLabel.h>
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

EntityLabel::EntityLabel() : 
    m_name(PiiEntityType::NOT_SET),
    m_nameHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
}

EntityLabel::EntityLabel(JsonView jsonValue) : 
    m_name(PiiEntityType::NOT_SET),
    m_nameHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

EntityLabel& EntityLabel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = PiiEntityTypeMapper::GetPiiEntityTypeForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityLabel::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", PiiEntityTypeMapper::GetNameForPiiEntityType(m_name));
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
