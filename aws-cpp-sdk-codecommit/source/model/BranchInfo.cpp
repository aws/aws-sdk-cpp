/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/BranchInfo.h>
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

BranchInfo::BranchInfo() : 
    m_branchNameHasBeenSet(false),
    m_commitIdHasBeenSet(false)
{
}

BranchInfo::BranchInfo(JsonView jsonValue) : 
    m_branchNameHasBeenSet(false),
    m_commitIdHasBeenSet(false)
{
  *this = jsonValue;
}

BranchInfo& BranchInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("branchName"))
  {
    m_branchName = jsonValue.GetString("branchName");

    m_branchNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("commitId"))
  {
    m_commitId = jsonValue.GetString("commitId");

    m_commitIdHasBeenSet = true;
  }

  return *this;
}

JsonValue BranchInfo::Jsonize() const
{
  JsonValue payload;

  if(m_branchNameHasBeenSet)
  {
   payload.WithString("branchName", m_branchName);

  }

  if(m_commitIdHasBeenSet)
  {
   payload.WithString("commitId", m_commitId);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
