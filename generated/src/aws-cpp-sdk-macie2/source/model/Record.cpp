/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Record.h>
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

Record::Record() : 
    m_jsonPathHasBeenSet(false),
    m_recordIndex(0),
    m_recordIndexHasBeenSet(false)
{
}

Record::Record(JsonView jsonValue) : 
    m_jsonPathHasBeenSet(false),
    m_recordIndex(0),
    m_recordIndexHasBeenSet(false)
{
  *this = jsonValue;
}

Record& Record::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jsonPath"))
  {
    m_jsonPath = jsonValue.GetString("jsonPath");

    m_jsonPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordIndex"))
  {
    m_recordIndex = jsonValue.GetInt64("recordIndex");

    m_recordIndexHasBeenSet = true;
  }

  return *this;
}

JsonValue Record::Jsonize() const
{
  JsonValue payload;

  if(m_jsonPathHasBeenSet)
  {
   payload.WithString("jsonPath", m_jsonPath);

  }

  if(m_recordIndexHasBeenSet)
  {
   payload.WithInt64("recordIndex", m_recordIndex);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
