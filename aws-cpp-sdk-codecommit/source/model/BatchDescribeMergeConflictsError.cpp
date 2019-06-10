/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
