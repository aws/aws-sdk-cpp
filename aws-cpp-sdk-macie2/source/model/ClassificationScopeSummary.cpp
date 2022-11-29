/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ClassificationScopeSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

ClassificationScopeSummary::ClassificationScopeSummary() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

ClassificationScopeSummary::ClassificationScopeSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

ClassificationScopeSummary& ClassificationScopeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue ClassificationScopeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
