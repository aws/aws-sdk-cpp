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
#include <aws/swf/model/StartLambdaFunctionFailedCause.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int ASSUME_ROLE_FAILED_HASH = HashingUtils::HashString("ASSUME_ROLE_FAILED");

namespace Aws
{
namespace SWF
{
namespace Model
{
namespace StartLambdaFunctionFailedCauseMapper
{
StartLambdaFunctionFailedCause GetStartLambdaFunctionFailedCauseForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == ASSUME_ROLE_FAILED_HASH)
  {
    return StartLambdaFunctionFailedCause::ASSUME_ROLE_FAILED;
  }

  return StartLambdaFunctionFailedCause::NOT_SET;
}

Aws::String GetNameForStartLambdaFunctionFailedCause(StartLambdaFunctionFailedCause value)
{
  switch(value)
  {
  case StartLambdaFunctionFailedCause::ASSUME_ROLE_FAILED:
    return "ASSUME_ROLE_FAILED";
  default:
    return "";
  }
}

} // namespace StartLambdaFunctionFailedCauseMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
