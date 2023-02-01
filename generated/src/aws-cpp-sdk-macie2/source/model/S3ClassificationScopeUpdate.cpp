/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/S3ClassificationScopeUpdate.h>
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

S3ClassificationScopeUpdate::S3ClassificationScopeUpdate() : 
    m_excludesHasBeenSet(false)
{
}

S3ClassificationScopeUpdate::S3ClassificationScopeUpdate(JsonView jsonValue) : 
    m_excludesHasBeenSet(false)
{
  *this = jsonValue;
}

S3ClassificationScopeUpdate& S3ClassificationScopeUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("excludes"))
  {
    m_excludes = jsonValue.GetObject("excludes");

    m_excludesHasBeenSet = true;
  }

  return *this;
}

JsonValue S3ClassificationScopeUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_excludesHasBeenSet)
  {
   payload.WithObject("excludes", m_excludes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
