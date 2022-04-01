/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ChangesetErrorInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

ChangesetErrorInfo::ChangesetErrorInfo() : 
    m_errorMessageHasBeenSet(false),
    m_errorCategory(ErrorCategory::NOT_SET),
    m_errorCategoryHasBeenSet(false)
{
}

ChangesetErrorInfo::ChangesetErrorInfo(JsonView jsonValue) : 
    m_errorMessageHasBeenSet(false),
    m_errorCategory(ErrorCategory::NOT_SET),
    m_errorCategoryHasBeenSet(false)
{
  *this = jsonValue;
}

ChangesetErrorInfo& ChangesetErrorInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCategory"))
  {
    m_errorCategory = ErrorCategoryMapper::GetErrorCategoryForName(jsonValue.GetString("errorCategory"));

    m_errorCategoryHasBeenSet = true;
  }

  return *this;
}

JsonValue ChangesetErrorInfo::Jsonize() const
{
  JsonValue payload;

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_errorCategoryHasBeenSet)
  {
   payload.WithString("errorCategory", ErrorCategoryMapper::GetNameForErrorCategory(m_errorCategory));
  }

  return payload;
}

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
