/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/QueryRuntimeStatisticsRows.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

QueryRuntimeStatisticsRows::QueryRuntimeStatisticsRows() : 
    m_inputRows(0),
    m_inputRowsHasBeenSet(false),
    m_inputBytes(0),
    m_inputBytesHasBeenSet(false),
    m_outputBytes(0),
    m_outputBytesHasBeenSet(false),
    m_outputRows(0),
    m_outputRowsHasBeenSet(false)
{
}

QueryRuntimeStatisticsRows::QueryRuntimeStatisticsRows(JsonView jsonValue) : 
    m_inputRows(0),
    m_inputRowsHasBeenSet(false),
    m_inputBytes(0),
    m_inputBytesHasBeenSet(false),
    m_outputBytes(0),
    m_outputBytesHasBeenSet(false),
    m_outputRows(0),
    m_outputRowsHasBeenSet(false)
{
  *this = jsonValue;
}

QueryRuntimeStatisticsRows& QueryRuntimeStatisticsRows::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputRows"))
  {
    m_inputRows = jsonValue.GetInt64("InputRows");

    m_inputRowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputBytes"))
  {
    m_inputBytes = jsonValue.GetInt64("InputBytes");

    m_inputBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputBytes"))
  {
    m_outputBytes = jsonValue.GetInt64("OutputBytes");

    m_outputBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputRows"))
  {
    m_outputRows = jsonValue.GetInt64("OutputRows");

    m_outputRowsHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryRuntimeStatisticsRows::Jsonize() const
{
  JsonValue payload;

  if(m_inputRowsHasBeenSet)
  {
   payload.WithInt64("InputRows", m_inputRows);

  }

  if(m_inputBytesHasBeenSet)
  {
   payload.WithInt64("InputBytes", m_inputBytes);

  }

  if(m_outputBytesHasBeenSet)
  {
   payload.WithInt64("OutputBytes", m_outputBytes);

  }

  if(m_outputRowsHasBeenSet)
  {
   payload.WithInt64("OutputRows", m_outputRows);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
