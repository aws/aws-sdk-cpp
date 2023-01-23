/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iottwinmaker/IoTTwinMakerErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IoTTwinMaker;

namespace Aws
{
namespace IoTTwinMaker
{
namespace IoTTwinMakerErrorMapper
{

static const int CONFLICT_HASH = HashingUtils::HashString("ConflictException");
static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("ServiceQuotaExceededException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int CONNECTOR_FAILURE_HASH = HashingUtils::HashString("ConnectorFailureException");
static const int QUERY_TIMEOUT_HASH = HashingUtils::HashString("QueryTimeoutException");
static const int CONNECTOR_TIMEOUT_HASH = HashingUtils::HashString("ConnectorTimeoutException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTTwinMakerErrors::CONFLICT), false);
  }
  else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTTwinMakerErrors::SERVICE_QUOTA_EXCEEDED), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTTwinMakerErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == CONNECTOR_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTTwinMakerErrors::CONNECTOR_FAILURE), false);
  }
  else if (hashCode == QUERY_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTTwinMakerErrors::QUERY_TIMEOUT), false);
  }
  else if (hashCode == CONNECTOR_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTTwinMakerErrors::CONNECTOR_TIMEOUT), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IoTTwinMakerErrors::TOO_MANY_TAGS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IoTTwinMakerErrorMapper
} // namespace IoTTwinMaker
} // namespace Aws
