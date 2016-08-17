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
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cloudfront/CloudFrontErrors.h>

using namespace Aws::Client;
using namespace Aws::CloudFront;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace CloudFrontErrorMapper
{

static const int INVALID_WEB_A_C_L_ID_HASH = HashingUtils::HashString("InvalidWebACLId");
static const int CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_ALREADY_EXISTS_HASH = HashingUtils::HashString("CloudFrontOriginAccessIdentityAlreadyExists");
static const int NO_SUCH_ORIGIN_HASH = HashingUtils::HashString("NoSuchOrigin");
static const int NO_SUCH_STREAMING_DISTRIBUTION_HASH = HashingUtils::HashString("NoSuchStreamingDistribution");
static const int INVALID_DEFAULT_ROOT_OBJECT_HASH = HashingUtils::HashString("InvalidDefaultRootObject");
static const int MISSING_BODY_HASH = HashingUtils::HashString("MissingBody");
static const int TOO_MANY_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITIES_HASH = HashingUtils::HashString("TooManyCloudFrontOriginAccessIdentities");
static const int NO_SUCH_INVALIDATION_HASH = HashingUtils::HashString("NoSuchInvalidation");
static const int INVALID_ORIGIN_ACCESS_IDENTITY_HASH = HashingUtils::HashString("InvalidOriginAccessIdentity");
static const int INVALID_VIEWER_CERTIFICATE_HASH = HashingUtils::HashString("InvalidViewerCertificate");
static const int STREAMING_DISTRIBUTION_NOT_DISABLED_HASH = HashingUtils::HashString("StreamingDistributionNotDisabled");
static const int TOO_MANY_CACHE_BEHAVIORS_HASH = HashingUtils::HashString("TooManyCacheBehaviors");
static const int TRUSTED_SIGNER_DOES_NOT_EXIST_HASH = HashingUtils::HashString("TrustedSignerDoesNotExist");
static const int NO_SUCH_DISTRIBUTION_HASH = HashingUtils::HashString("NoSuchDistribution");
static const int TOO_MANY_INVALIDATIONS_IN_PROGRESS_HASH = HashingUtils::HashString("TooManyInvalidationsInProgress");
static const int INVALID_RESPONSE_CODE_HASH = HashingUtils::HashString("InvalidResponseCode");
static const int C_N_A_M_E_ALREADY_EXISTS_HASH = HashingUtils::HashString("CNAMEAlreadyExists");
static const int DISTRIBUTION_ALREADY_EXISTS_HASH = HashingUtils::HashString("DistributionAlreadyExists");
static const int TOO_MANY_DISTRIBUTIONS_HASH = HashingUtils::HashString("TooManyDistributions");
static const int CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_IN_USE_HASH = HashingUtils::HashString("CloudFrontOriginAccessIdentityInUse");
static const int INVALID_MINIMUM_PROTOCOL_VERSION_HASH = HashingUtils::HashString("InvalidMinimumProtocolVersion");
static const int TOO_MANY_TRUSTED_SIGNERS_HASH = HashingUtils::HashString("TooManyTrustedSigners");
static const int NO_SUCH_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_HASH = HashingUtils::HashString("NoSuchCloudFrontOriginAccessIdentity");
static const int INVALID_LOCATION_CODE_HASH = HashingUtils::HashString("InvalidLocationCode");
static const int INVALID_ORIGIN_HASH = HashingUtils::HashString("InvalidOrigin");
static const int INVALID_REQUIRED_PROTOCOL_HASH = HashingUtils::HashString("InvalidRequiredProtocol");
static const int INCONSISTENT_QUANTITIES_HASH = HashingUtils::HashString("InconsistentQuantities");
static const int TOO_MANY_ORIGIN_CUSTOM_HEADERS_HASH = HashingUtils::HashString("TooManyOriginCustomHeaders");
static const int INVALID_PROTOCOL_SETTINGS_HASH = HashingUtils::HashString("InvalidProtocolSettings");
static const int STREAMING_DISTRIBUTION_ALREADY_EXISTS_HASH = HashingUtils::HashString("StreamingDistributionAlreadyExists");
static const int TOO_MANY_COOKIE_NAMES_IN_WHITE_LIST_HASH = HashingUtils::HashString("TooManyCookieNamesInWhiteList");
static const int TOO_MANY_CERTIFICATES_HASH = HashingUtils::HashString("TooManyCertificates");
static const int ILLEGAL_UPDATE_HASH = HashingUtils::HashString("IllegalUpdate");
static const int TOO_MANY_STREAMING_DISTRIBUTIONS_HASH = HashingUtils::HashString("TooManyStreamingDistributions");
static const int INVALID_FORWARD_COOKIES_HASH = HashingUtils::HashString("InvalidForwardCookies");
static const int INVALID_RELATIVE_PATH_HASH = HashingUtils::HashString("InvalidRelativePath");
static const int DISTRIBUTION_NOT_DISABLED_HASH = HashingUtils::HashString("DistributionNotDisabled");
static const int INVALID_IF_MATCH_VERSION_HASH = HashingUtils::HashString("InvalidIfMatchVersion");
static const int TOO_MANY_ORIGINS_HASH = HashingUtils::HashString("TooManyOrigins");
static const int INVALID_HEADERS_FOR_S3_ORIGIN_HASH = HashingUtils::HashString("InvalidHeadersForS3Origin");
static const int INVALID_ERROR_CODE_HASH = HashingUtils::HashString("InvalidErrorCode");
static const int INVALID_T_T_L_ORDER_HASH = HashingUtils::HashString("InvalidTTLOrder");
static const int PRECONDITION_FAILED_HASH = HashingUtils::HashString("PreconditionFailed");
static const int INVALID_GEO_RESTRICTION_PARAMETER_HASH = HashingUtils::HashString("InvalidGeoRestrictionParameter");
static const int TOO_MANY_STREAMING_DISTRIBUTION_C_N_A_M_ES_HASH = HashingUtils::HashString("TooManyStreamingDistributionCNAMEs");
static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("InvalidArgument");
static const int TOO_MANY_HEADERS_IN_FORWARDED_VALUES_HASH = HashingUtils::HashString("TooManyHeadersInForwardedValues");
static const int BATCH_TOO_LARGE_HASH = HashingUtils::HashString("BatchTooLarge");
static const int TOO_MANY_DISTRIBUTION_C_N_A_M_ES_HASH = HashingUtils::HashString("TooManyDistributionCNAMEs");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_WEB_A_C_L_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_WEB_A_C_L_ID), false);
  }
  else if (hashCode == CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_ALREADY_EXISTS), false);
  }
  else if (hashCode == NO_SUCH_ORIGIN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_ORIGIN), false);
  }
  else if (hashCode == NO_SUCH_STREAMING_DISTRIBUTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_STREAMING_DISTRIBUTION), false);
  }
  else if (hashCode == INVALID_DEFAULT_ROOT_OBJECT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_DEFAULT_ROOT_OBJECT), false);
  }
  else if (hashCode == MISSING_BODY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::MISSING_BODY), false);
  }
  else if (hashCode == TOO_MANY_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITIES), false);
  }
  else if (hashCode == NO_SUCH_INVALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_INVALIDATION), false);
  }
  else if (hashCode == INVALID_ORIGIN_ACCESS_IDENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ORIGIN_ACCESS_IDENTITY), false);
  }
  else if (hashCode == INVALID_VIEWER_CERTIFICATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_VIEWER_CERTIFICATE), false);
  }
  else if (hashCode == STREAMING_DISTRIBUTION_NOT_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::STREAMING_DISTRIBUTION_NOT_DISABLED), false);
  }
  else if (hashCode == TOO_MANY_CACHE_BEHAVIORS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_CACHE_BEHAVIORS), false);
  }
  else if (hashCode == TRUSTED_SIGNER_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TRUSTED_SIGNER_DOES_NOT_EXIST), false);
  }
  else if (hashCode == NO_SUCH_DISTRIBUTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_DISTRIBUTION), false);
  }
  else if (hashCode == TOO_MANY_INVALIDATIONS_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_INVALIDATIONS_IN_PROGRESS), false);
  }
  else if (hashCode == INVALID_RESPONSE_CODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_RESPONSE_CODE), false);
  }
  else if (hashCode == C_N_A_M_E_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::C_N_A_M_E_ALREADY_EXISTS), false);
  }
  else if (hashCode == DISTRIBUTION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::DISTRIBUTION_ALREADY_EXISTS), false);
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS), false);
  }
  else if (hashCode == CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_IN_USE), false);
  }
  else if (hashCode == INVALID_MINIMUM_PROTOCOL_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_MINIMUM_PROTOCOL_VERSION), false);
  }
  else if (hashCode == TOO_MANY_TRUSTED_SIGNERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_TRUSTED_SIGNERS), false);
  }
  else if (hashCode == NO_SUCH_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY), false);
  }
  else if (hashCode == INVALID_LOCATION_CODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_LOCATION_CODE), false);
  }
  else if (hashCode == INVALID_ORIGIN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ORIGIN), false);
  }
  else if (hashCode == INVALID_REQUIRED_PROTOCOL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_REQUIRED_PROTOCOL), false);
  }
  else if (hashCode == INCONSISTENT_QUANTITIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INCONSISTENT_QUANTITIES), false);
  }
  else if (hashCode == TOO_MANY_ORIGIN_CUSTOM_HEADERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_ORIGIN_CUSTOM_HEADERS), false);
  }
  else if (hashCode == INVALID_PROTOCOL_SETTINGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_PROTOCOL_SETTINGS), false);
  }
  else if (hashCode == STREAMING_DISTRIBUTION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::STREAMING_DISTRIBUTION_ALREADY_EXISTS), false);
  }
  else if (hashCode == TOO_MANY_COOKIE_NAMES_IN_WHITE_LIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_COOKIE_NAMES_IN_WHITE_LIST), false);
  }
  else if (hashCode == TOO_MANY_CERTIFICATES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_CERTIFICATES), false);
  }
  else if (hashCode == ILLEGAL_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::ILLEGAL_UPDATE), false);
  }
  else if (hashCode == TOO_MANY_STREAMING_DISTRIBUTIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_STREAMING_DISTRIBUTIONS), false);
  }
  else if (hashCode == INVALID_FORWARD_COOKIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_FORWARD_COOKIES), false);
  }
  else if (hashCode == INVALID_RELATIVE_PATH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_RELATIVE_PATH), false);
  }
  else if (hashCode == DISTRIBUTION_NOT_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::DISTRIBUTION_NOT_DISABLED), false);
  }
  else if (hashCode == INVALID_IF_MATCH_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_IF_MATCH_VERSION), false);
  }
  else if (hashCode == TOO_MANY_ORIGINS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_ORIGINS), false);
  }
  else if (hashCode == INVALID_HEADERS_FOR_S3_ORIGIN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_HEADERS_FOR_S3_ORIGIN), false);
  }
  else if (hashCode == INVALID_ERROR_CODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ERROR_CODE), false);
  }
  else if (hashCode == INVALID_T_T_L_ORDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_T_T_L_ORDER), false);
  }
  else if (hashCode == PRECONDITION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::PRECONDITION_FAILED), false);
  }
  else if (hashCode == INVALID_GEO_RESTRICTION_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_GEO_RESTRICTION_PARAMETER), false);
  }
  else if (hashCode == TOO_MANY_STREAMING_DISTRIBUTION_C_N_A_M_ES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_STREAMING_DISTRIBUTION_C_N_A_M_ES), false);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ARGUMENT), false);
  }
  else if (hashCode == TOO_MANY_HEADERS_IN_FORWARDED_VALUES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_HEADERS_IN_FORWARDED_VALUES), false);
  }
  else if (hashCode == BATCH_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::BATCH_TOO_LARGE), false);
  }
  else if (hashCode == TOO_MANY_DISTRIBUTION_C_N_A_M_ES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTION_C_N_A_M_ES), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudFrontErrorMapper
} // namespace CloudFront
} // namespace Aws
