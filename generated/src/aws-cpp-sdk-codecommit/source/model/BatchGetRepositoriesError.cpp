/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/BatchGetRepositoriesError.h>
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

BatchGetRepositoriesError::BatchGetRepositoriesError() : 
    m_repositoryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_errorCode(BatchGetRepositoriesErrorCodeEnum::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

BatchGetRepositoriesError::BatchGetRepositoriesError(JsonView jsonValue) : 
    m_repositoryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_errorCode(BatchGetRepositoriesErrorCodeEnum::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetRepositoriesError& BatchGetRepositoriesError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryId"))
  {
    m_repositoryId = jsonValue.GetString("repositoryId");

    m_repositoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = BatchGetRepositoriesErrorCodeEnumMapper::GetBatchGetRepositoriesErrorCodeEnumForName(jsonValue.GetString("errorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetRepositoriesError::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryIdHasBeenSet)
  {
   payload.WithString("repositoryId", m_repositoryId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", BatchGetRepositoriesErrorCodeEnumMapper::GetNameForBatchGetRepositoriesErrorCodeEnum(m_errorCode));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
