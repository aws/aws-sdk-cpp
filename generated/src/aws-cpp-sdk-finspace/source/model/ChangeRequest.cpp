/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/ChangeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

ChangeRequest::ChangeRequest() : 
    m_changeType(ChangeType::NOT_SET),
    m_changeTypeHasBeenSet(false),
    m_s3PathHasBeenSet(false),
    m_dbPathHasBeenSet(false)
{
}

ChangeRequest::ChangeRequest(JsonView jsonValue) : 
    m_changeType(ChangeType::NOT_SET),
    m_changeTypeHasBeenSet(false),
    m_s3PathHasBeenSet(false),
    m_dbPathHasBeenSet(false)
{
  *this = jsonValue;
}

ChangeRequest& ChangeRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("changeType"))
  {
    m_changeType = ChangeTypeMapper::GetChangeTypeForName(jsonValue.GetString("changeType"));

    m_changeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Path"))
  {
    m_s3Path = jsonValue.GetString("s3Path");

    m_s3PathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dbPath"))
  {
    m_dbPath = jsonValue.GetString("dbPath");

    m_dbPathHasBeenSet = true;
  }

  return *this;
}

JsonValue ChangeRequest::Jsonize() const
{
  JsonValue payload;

  if(m_changeTypeHasBeenSet)
  {
   payload.WithString("changeType", ChangeTypeMapper::GetNameForChangeType(m_changeType));
  }

  if(m_s3PathHasBeenSet)
  {
   payload.WithString("s3Path", m_s3Path);

  }

  if(m_dbPathHasBeenSet)
  {
   payload.WithString("dbPath", m_dbPath);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
