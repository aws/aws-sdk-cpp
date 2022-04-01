/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/RevisionPublished.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

RevisionPublished::RevisionPublished() : 
    m_dataSetIdHasBeenSet(false)
{
}

RevisionPublished::RevisionPublished(JsonView jsonValue) : 
    m_dataSetIdHasBeenSet(false)
{
  *this = jsonValue;
}

RevisionPublished& RevisionPublished::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RevisionPublished::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
