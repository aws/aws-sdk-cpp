/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AllowListCriteria.h>
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

AllowListCriteria::AllowListCriteria() : 
    m_regexHasBeenSet(false),
    m_s3WordsListHasBeenSet(false)
{
}

AllowListCriteria::AllowListCriteria(JsonView jsonValue) : 
    m_regexHasBeenSet(false),
    m_s3WordsListHasBeenSet(false)
{
  *this = jsonValue;
}

AllowListCriteria& AllowListCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("regex"))
  {
    m_regex = jsonValue.GetString("regex");

    m_regexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3WordsList"))
  {
    m_s3WordsList = jsonValue.GetObject("s3WordsList");

    m_s3WordsListHasBeenSet = true;
  }

  return *this;
}

JsonValue AllowListCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_regexHasBeenSet)
  {
   payload.WithString("regex", m_regex);

  }

  if(m_s3WordsListHasBeenSet)
  {
   payload.WithObject("s3WordsList", m_s3WordsList.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
