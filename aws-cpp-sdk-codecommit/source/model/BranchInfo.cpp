/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

BranchInfo::BranchInfo(const JsonValue& jsonValue) : 
    m_branchNameHasBeenSet(false),
    m_commitIdHasBeenSet(false)
{
  *this = jsonValue;
}

BranchInfo& BranchInfo::operator =(const JsonValue& jsonValue)
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