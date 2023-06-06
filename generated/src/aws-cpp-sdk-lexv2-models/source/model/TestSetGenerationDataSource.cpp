/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetGenerationDataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

TestSetGenerationDataSource::TestSetGenerationDataSource() : 
    m_conversationLogsDataSourceHasBeenSet(false)
{
}

TestSetGenerationDataSource::TestSetGenerationDataSource(JsonView jsonValue) : 
    m_conversationLogsDataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

TestSetGenerationDataSource& TestSetGenerationDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conversationLogsDataSource"))
  {
    m_conversationLogsDataSource = jsonValue.GetObject("conversationLogsDataSource");

    m_conversationLogsDataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue TestSetGenerationDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_conversationLogsDataSourceHasBeenSet)
  {
   payload.WithObject("conversationLogsDataSource", m_conversationLogsDataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
