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
#include <aws/datapipeline/model/OperatorType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int EQ_HASH = HashingUtils::HashString("EQ");
static const int REF_EQ_HASH = HashingUtils::HashString("REF_EQ");
static const int LE_HASH = HashingUtils::HashString("LE");
static const int GE_HASH = HashingUtils::HashString("GE");
static const int BETWEEN_HASH = HashingUtils::HashString("BETWEEN");

namespace Aws
{
namespace DataPipeline
{
namespace Model
{
namespace OperatorTypeMapper
{
OperatorType GetOperatorTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == EQ_HASH)
  {
    return OperatorType::EQ;
  }
  else if (hashCode == REF_EQ_HASH)
  {
    return OperatorType::REF_EQ;
  }
  else if (hashCode == LE_HASH)
  {
    return OperatorType::LE;
  }
  else if (hashCode == GE_HASH)
  {
    return OperatorType::GE;
  }
  else if (hashCode == BETWEEN_HASH)
  {
    return OperatorType::BETWEEN;
  }

  return OperatorType::EQ;
}

Aws::String GetNameForOperatorType(OperatorType value)
{
  switch(value)
  {
  case OperatorType::EQ:
    return "EQ";
  case OperatorType::REF_EQ:
    return "REF_EQ";
  case OperatorType::LE:
    return "LE";
  case OperatorType::GE:
    return "GE";
  case OperatorType::BETWEEN:
    return "BETWEEN";
  default:
    return "EQ";
  }
}

} // namespace OperatorTypeMapper
} // namespace Model
} // namespace DataPipeline
} // namespace Aws
