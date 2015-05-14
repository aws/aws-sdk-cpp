/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/model/ConditionalOperator.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int AND_HASH = HashingUtils::HashString("AND");
static const int OR_HASH = HashingUtils::HashString("OR");

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
namespace ConditionalOperatorMapper
{
ConditionalOperator GetConditionalOperatorForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == AND_HASH)
  {
    return ConditionalOperator::AND;
  }
  else if (hashCode == OR_HASH)
  {
    return ConditionalOperator::OR;
  }

  return ConditionalOperator::AND;
}

Aws::String GetNameForConditionalOperator(ConditionalOperator value)
{
  switch(value)
  {
  case ConditionalOperator::AND:
    return "AND";
  case ConditionalOperator::OR:
    return "OR";
  default:
    return "AND";
  }
}

} // namespace ConditionalOperatorMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
