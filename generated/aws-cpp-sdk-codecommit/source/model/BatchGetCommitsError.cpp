/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/BatchGetCommitsError.h>
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

BatchGetCommitsError::BatchGetCommitsError() : 
    m_commitIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

BatchGetCommitsError::BatchGetCommitsError(JsonView jsonValue) : 
    m_commitIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetCommitsError& BatchGetCommitsError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("commitId"))
  {
    m_commitId = jsonValue.GetString("commitId");

    m_commitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetCommitsError::Jsonize() const
{
  JsonValue payload;

  if(m_commitIdHasBeenSet)
  {
   payload.WithString("commitId", m_commitId);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

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
