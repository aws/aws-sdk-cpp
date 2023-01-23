/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/BranchDiffSourceCodeType.h>
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

BranchDiffSourceCodeType::BranchDiffSourceCodeType() : 
    m_sourceBranchNameHasBeenSet(false),
    m_destinationBranchNameHasBeenSet(false)
{
}

BranchDiffSourceCodeType::BranchDiffSourceCodeType(JsonView jsonValue) : 
    m_sourceBranchNameHasBeenSet(false),
    m_destinationBranchNameHasBeenSet(false)
{
  *this = jsonValue;
}

BranchDiffSourceCodeType& BranchDiffSourceCodeType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceBranchName"))
  {
    m_sourceBranchName = jsonValue.GetString("SourceBranchName");

    m_sourceBranchNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationBranchName"))
  {
    m_destinationBranchName = jsonValue.GetString("DestinationBranchName");

    m_destinationBranchNameHasBeenSet = true;
  }

  return *this;
}

JsonValue BranchDiffSourceCodeType::Jsonize() const
{
  JsonValue payload;

  if(m_sourceBranchNameHasBeenSet)
  {
   payload.WithString("SourceBranchName", m_sourceBranchName);

  }

  if(m_destinationBranchNameHasBeenSet)
  {
   payload.WithString("DestinationBranchName", m_destinationBranchName);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
