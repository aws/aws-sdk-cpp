/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/BatchDescribeMergeConflictsError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

BatchDescribeMergeConflictsError::BatchDescribeMergeConflictsError() : 
    m_filePathHasBeenSet(false),
    m_exceptionNameHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

BatchDescribeMergeConflictsError::BatchDescribeMergeConflictsError(JsonView jsonValue) : 
    m_filePathHasBeenSet(false),
    m_exceptionNameHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDescribeMergeConflictsError& BatchDescribeMergeConflictsError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");

    m_filePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exceptionName"))
  {
    m_exceptionName = jsonValue.GetString("exceptionName");

    m_exceptionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDescribeMergeConflictsError::Jsonize() const
{
  JsonValue payload;

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  if(m_exceptionNameHasBeenSet)
  {
   payload.WithString("exceptionName", m_exceptionName);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
