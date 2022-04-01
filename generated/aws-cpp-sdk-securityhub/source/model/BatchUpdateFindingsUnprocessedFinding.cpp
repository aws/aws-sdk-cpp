/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/BatchUpdateFindingsUnprocessedFinding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

BatchUpdateFindingsUnprocessedFinding::BatchUpdateFindingsUnprocessedFinding() : 
    m_findingIdentifierHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

BatchUpdateFindingsUnprocessedFinding::BatchUpdateFindingsUnprocessedFinding(JsonView jsonValue) : 
    m_findingIdentifierHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

BatchUpdateFindingsUnprocessedFinding& BatchUpdateFindingsUnprocessedFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FindingIdentifier"))
  {
    m_findingIdentifier = jsonValue.GetObject("FindingIdentifier");

    m_findingIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchUpdateFindingsUnprocessedFinding::Jsonize() const
{
  JsonValue payload;

  if(m_findingIdentifierHasBeenSet)
  {
   payload.WithObject("FindingIdentifier", m_findingIdentifier.Jsonize());

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
