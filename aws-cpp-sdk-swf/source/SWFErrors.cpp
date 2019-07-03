/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/swf/SWFErrors.h>

using namespace Aws::Client;
using namespace Aws::SWF;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace SWFErrorMapper
{

static const int LIMIT_EXCEEDED_FAULT_HASH = HashingUtils::HashString("LimitExceededFault");
static const int OPERATION_NOT_PERMITTED_FAULT_HASH = HashingUtils::HashString("OperationNotPermittedFault");
static const int UNKNOWN_RESOURCE_FAULT_HASH = HashingUtils::HashString("UnknownResourceFault");
static const int TYPE_DEPRECATED_FAULT_HASH = HashingUtils::HashString("TypeDeprecatedFault");
static const int DEFAULT_UNDEFINED_FAULT_HASH = HashingUtils::HashString("DefaultUndefinedFault");
static const int DOMAIN_DEPRECATED_FAULT_HASH = HashingUtils::HashString("DomainDeprecatedFault");
static const int TYPE_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("TypeAlreadyExistsFault");
static const int TOO_MANY_TAGS_FAULT_HASH = HashingUtils::HashString("TooManyTagsFault");
static const int DOMAIN_ALREADY_EXISTS_FAULT_HASH = HashingUtils::HashString("DomainAlreadyExistsFault");
static const int WORKFLOW_EXECUTION_ALREADY_STARTED_FAULT_HASH = HashingUtils::HashString("WorkflowExecutionAlreadyStartedFault");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == LIMIT_EXCEEDED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::LIMIT_EXCEEDED_FAULT), false);
  }
  else if (hashCode == OPERATION_NOT_PERMITTED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::OPERATION_NOT_PERMITTED_FAULT), false);
  }
  else if (hashCode == UNKNOWN_RESOURCE_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::UNKNOWN_RESOURCE_FAULT), false);
  }
  else if (hashCode == TYPE_DEPRECATED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::TYPE_DEPRECATED_FAULT), false);
  }
  else if (hashCode == DEFAULT_UNDEFINED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::DEFAULT_UNDEFINED_FAULT), false);
  }
  else if (hashCode == DOMAIN_DEPRECATED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::DOMAIN_DEPRECATED_FAULT), false);
  }
  else if (hashCode == TYPE_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::TYPE_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == TOO_MANY_TAGS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::TOO_MANY_TAGS_FAULT), false);
  }
  else if (hashCode == DOMAIN_ALREADY_EXISTS_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::DOMAIN_ALREADY_EXISTS_FAULT), false);
  }
  else if (hashCode == WORKFLOW_EXECUTION_ALREADY_STARTED_FAULT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SWFErrors::WORKFLOW_EXECUTION_ALREADY_STARTED_FAULT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SWFErrorMapper
} // namespace SWF
} // namespace Aws
