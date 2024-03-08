/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataSourceErrorMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

DataSourceErrorMessage::DataSourceErrorMessage() : 
    m_errorDetailHasBeenSet(false),
    m_errorType(DataSourceErrorType::NOT_SET),
    m_errorTypeHasBeenSet(false)
{
}

DataSourceErrorMessage::DataSourceErrorMessage(JsonView jsonValue) : 
    m_errorDetailHasBeenSet(false),
    m_errorType(DataSourceErrorType::NOT_SET),
    m_errorTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceErrorMessage& DataSourceErrorMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorDetail"))
  {
    m_errorDetail = jsonValue.GetString("errorDetail");

    m_errorDetailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorType"))
  {
    m_errorType = DataSourceErrorTypeMapper::GetDataSourceErrorTypeForName(jsonValue.GetString("errorType"));

    m_errorTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceErrorMessage::Jsonize() const
{
  JsonValue payload;

  if(m_errorDetailHasBeenSet)
  {
   payload.WithString("errorDetail", m_errorDetail);

  }

  if(m_errorTypeHasBeenSet)
  {
   payload.WithString("errorType", DataSourceErrorTypeMapper::GetNameForDataSourceErrorType(m_errorType));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
