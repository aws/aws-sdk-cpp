/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/Stream.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KeyspacesStreams
{
namespace Model
{

Stream::Stream(JsonView jsonValue)
{
  *this = jsonValue;
}

Stream& Stream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streamArn"))
  {
    m_streamArn = jsonValue.GetString("streamArn");
    m_streamArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("keyspaceName"))
  {
    m_keyspaceName = jsonValue.GetString("keyspaceName");
    m_keyspaceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tableName"))
  {
    m_tableName = jsonValue.GetString("tableName");
    m_tableNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streamLabel"))
  {
    m_streamLabel = jsonValue.GetString("streamLabel");
    m_streamLabelHasBeenSet = true;
  }
  return *this;
}

JsonValue Stream::Jsonize() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("streamArn", m_streamArn);

  }

  if(m_keyspaceNameHasBeenSet)
  {
   payload.WithString("keyspaceName", m_keyspaceName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("tableName", m_tableName);

  }

  if(m_streamLabelHasBeenSet)
  {
   payload.WithString("streamLabel", m_streamLabel);

  }

  return payload;
}

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
