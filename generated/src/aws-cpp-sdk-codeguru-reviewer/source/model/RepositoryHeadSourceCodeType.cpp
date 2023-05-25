/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/RepositoryHeadSourceCodeType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

RepositoryHeadSourceCodeType::RepositoryHeadSourceCodeType() : 
    m_branchNameHasBeenSet(false)
{
}

RepositoryHeadSourceCodeType::RepositoryHeadSourceCodeType(JsonView jsonValue) : 
    m_branchNameHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryHeadSourceCodeType& RepositoryHeadSourceCodeType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BranchName"))
  {
    m_branchName = jsonValue.GetString("BranchName");

    m_branchNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryHeadSourceCodeType::Jsonize() const
{
  JsonValue payload;

  if(m_branchNameHasBeenSet)
  {
   payload.WithString("BranchName", m_branchName);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
