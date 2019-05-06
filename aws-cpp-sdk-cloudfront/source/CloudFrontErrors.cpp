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

static const int NO_SUCH_INVALIDATION_HASH = HashingUtils::HashString("NoSuchInvalidation");
static const int INVALID_ERROR_CODE_HASH = HashingUtils::HashString("InvalidErrorCode");
static const int TOO_MANY_STREAMING_DISTRIBUTION_C_N_A_M_ES_HASH = HashingUtils::HashString("TooManyStreamingDistributionCNAMEs");
static const int TOO_MANY_ORIGINS_HASH = HashingUtils::HashString("TooManyOrigins");
static const int NO_SUCH_ORIGIN_HASH = HashingUtils::HashString("NoSuchOrigin");
static const int NO_SUCH_RESOURCE_HASH = HashingUtils::HashString("NoSuchResource");
static const int DISTRIBUTION_ALREADY_EXISTS_HASH = HashingUtils::HashString("DistributionAlreadyExists");
static const int FIELD_LEVEL_ENCRYPTION_PROFILE_SIZE_EXCEEDED_HASH = HashingUtils::HashString("FieldLevelEncryptionProfileSizeExceeded");
static const int FIELD_LEVEL_ENCRYPTION_CONFIG_ALREADY_EXISTS_HASH = HashingUtils::HashString("FieldLevelEncryptionConfigAlreadyExists");
static const int TOO_MANY_CACHE_BEHAVIORS_HASH = HashingUtils::HashString("TooManyCacheBehaviors");
static const int TOO_MANY_ORIGIN_GROUPS_PER_DISTRIBUTION_HASH = HashingUtils::HashString("TooManyOriginGroupsPerDistribution");
static const int TOO_MANY_HEADERS_IN_FORWARDED_VALUES_HASH = HashingUtils::HashString("TooManyHeadersInForwardedValues");
static const int FIELD_LEVEL_ENCRYPTION_CONFIG_IN_USE_HASH = HashingUtils::HashString("FieldLevelEncryptionConfigInUse");
static const int FIELD_LEVEL_ENCRYPTION_PROFILE_IN_USE_HASH = HashingUtils::HashString("FieldLevelEncryptionProfileInUse");
static const int INCONSISTENT_QUANTITIES_HASH = HashingUtils::HashString("InconsistentQuantities");
static const int TOO_MANY_INVALIDATIONS_IN_PROGRESS_HASH = HashingUtils::HashString("TooManyInvalidationsInProgress");
static const int NO_SUCH_DISTRIBUTION_HASH = HashingUtils::HashString("NoSuchDistribution");
static const int INVALID_IF_MATCH_VERSION_HASH = HashingUtils::HashString("InvalidIfMatchVersion");
static const int INVALID_RESPONSE_CODE_HASH = HashingUtils::HashString("InvalidResponseCode");
static const int INVALID_TAGGING_HASH = HashingUtils::HashString("InvalidTagging");
static const int TOO_MANY_DISTRIBUTIONS_HASH = HashingUtils::HashString("TooManyDistributions");
static const int INVALID_LOCATION_CODE_HASH = HashingUtils::HashString("InvalidLocationCode");
static const int INVALID_DEFAULT_ROOT_OBJECT_HASH = HashingUtils::HashString("InvalidDefaultRootObject");
static const int PUBLIC_KEY_IN_USE_HASH = HashingUtils::HashString("PublicKeyInUse");
static const int TOO_MANY_QUERY_STRING_PARAMETERS_HASH = HashingUtils::HashString("TooManyQueryStringParameters");
static const int NO_SUCH_FIELD_LEVEL_ENCRYPTION_CONFIG_HASH = HashingUtils::HashString("NoSuchFieldLevelEncryptionConfig");
static const int TOO_MANY_CERTIFICATES_HASH = HashingUtils::HashString("TooManyCertificates");
static const int NO_SUCH_PUBLIC_KEY_HASH = HashingUtils::HashString("NoSuchPublicKey");
static const int INVALID_WEB_A_C_L_ID_HASH = HashingUtils::HashString("InvalidWebACLId");
static const int STREAMING_DISTRIBUTION_NOT_DISABLED_HASH = HashingUtils::HashString("StreamingDistributionNotDisabled");
static const int TOO_MANY_TRUSTED_SIGNERS_HASH = HashingUtils::HashString("TooManyTrustedSigners");
static const int NO_SUCH_FIELD_LEVEL_ENCRYPTION_PROFILE_HASH = HashingUtils::HashString("NoSuchFieldLevelEncryptionProfile");
static const int NO_SUCH_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_HASH = HashingUtils::HashString("NoSuchCloudFrontOriginAccessIdentity");
static const int CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_ALREADY_EXISTS_HASH = HashingUtils::HashString("CloudFrontOriginAccessIdentityAlreadyExists");
static const int INVALID_ORIGIN_READ_TIMEOUT_HASH = HashingUtils::HashString("InvalidOriginReadTimeout");
static const int INVALID_ORIGIN_KEEPALIVE_TIMEOUT_HASH = HashingUtils::HashString("InvalidOriginKeepaliveTimeout");
static const int INVALID_FORWARD_COOKIES_HASH = HashingUtils::HashString("InvalidForwardCookies");
static const int QUERY_ARG_PROFILE_EMPTY_HASH = HashingUtils::HashString("QueryArgProfileEmpty");
static const int TOO_MANY_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITIES_HASH = HashingUtils::HashString("TooManyCloudFrontOriginAccessIdentities");
static const int PRECONDITION_FAILED_HASH = HashingUtils::HashString("PreconditionFailed");
static const int TOO_MANY_COOKIE_NAMES_IN_WHITE_LIST_HASH = HashingUtils::HashString("TooManyCookieNamesInWhiteList");
static const int INVALID_HEADERS_FOR_S3_ORIGIN_HASH = HashingUtils::HashString("InvalidHeadersForS3Origin");
static const int FIELD_LEVEL_ENCRYPTION_PROFILE_ALREADY_EXISTS_HASH = HashingUtils::HashString("FieldLevelEncryptionProfileAlreadyExists");
static const int INVALID_LAMBDA_FUNCTION_ASSOCIATION_HASH = HashingUtils::HashString("InvalidLambdaFunctionAssociation");
static const int TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONTENT_TYPE_PROFILES_HASH = HashingUtils::HashString("TooManyFieldLevelEncryptionContentTypeProfiles");
static const int TOO_MANY_ORIGIN_CUSTOM_HEADERS_HASH = HashingUtils::HashString("TooManyOriginCustomHeaders");
static const int TOO_MANY_FIELD_LEVEL_ENCRYPTION_ENCRYPTION_ENTITIES_HASH = HashingUtils::HashString("TooManyFieldLevelEncryptionEncryptionEntities");
static const int INVALID_QUERY_STRING_PARAMETERS_HASH = HashingUtils::HashString("InvalidQueryStringParameters");
static const int INVALID_GEO_RESTRICTION_PARAMETER_HASH = HashingUtils::HashString("InvalidGeoRestrictionParameter");
static const int INVALID_PROTOCOL_SETTINGS_HASH = HashingUtils::HashString("InvalidProtocolSettings");
static const int BATCH_TOO_LARGE_HASH = HashingUtils::HashString("BatchTooLarge");
static const int TOO_MANY_FIELD_LEVEL_ENCRYPTION_PROFILES_HASH = HashingUtils::HashString("TooManyFieldLevelEncryptionProfiles");
static const int INVALID_ORIGIN_ACCESS_IDENTITY_HASH = HashingUtils::HashString("InvalidOriginAccessIdentity");
static const int INVALID_MINIMUM_PROTOCOL_VERSION_HASH = HashingUtils::HashString("InvalidMinimumProtocolVersion");
static const int TOO_MANY_FIELD_LEVEL_ENCRYPTION_FIELD_PATTERNS_HASH = HashingUtils::HashString("TooManyFieldLevelEncryptionFieldPatterns");
static const int STREAMING_DISTRIBUTION_ALREADY_EXISTS_HASH = HashingUtils::HashString("StreamingDistributionAlreadyExists");
static const int ILLEGAL_UPDATE_HASH = HashingUtils::HashString("IllegalUpdate");
static const int NO_SUCH_STREAMING_DISTRIBUTION_HASH = HashingUtils::HashString("NoSuchStreamingDistribution");
static const int TOO_MANY_DISTRIBUTION_C_N_A_M_ES_HASH = HashingUtils::HashString("TooManyDistributionCNAMEs");
static const int INVALID_T_T_L_ORDER_HASH = HashingUtils::HashString("InvalidTTLOrder");
static const int TOO_MANY_FIELD_LEVEL_ENCRYPTION_QUERY_ARG_PROFILES_HASH = HashingUtils::HashString("TooManyFieldLevelEncryptionQueryArgProfiles");
static const int INVALID_RELATIVE_PATH_HASH = HashingUtils::HashString("InvalidRelativePath");
static const int C_N_A_M_E_ALREADY_EXISTS_HASH = HashingUtils::HashString("CNAMEAlreadyExists");
static const int INVALID_REQUIRED_PROTOCOL_HASH = HashingUtils::HashString("InvalidRequiredProtocol");
static const int TOO_MANY_DISTRIBUTIONS_WITH_LAMBDA_ASSOCIATIONS_HASH = HashingUtils::HashString("TooManyDistributionsWithLambdaAssociations");
static const int INVALID_VIEWER_CERTIFICATE_HASH = HashingUtils::HashString("InvalidViewerCertificate");
static const int CANNOT_CHANGE_IMMUTABLE_PUBLIC_KEY_FIELDS_HASH = HashingUtils::HashString("CannotChangeImmutablePublicKeyFields");
static const int TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_FIELD_LEVEL_ENCRYPTION_CONFIG_HASH = HashingUtils::HashString("TooManyDistributionsAssociatedToFieldLevelEncryptionConfig");
static const int DISTRIBUTION_NOT_DISABLED_HASH = HashingUtils::HashString("DistributionNotDisabled");
static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("InvalidArgument");
static const int TOO_MANY_LAMBDA_FUNCTION_ASSOCIATIONS_HASH = HashingUtils::HashString("TooManyLambdaFunctionAssociations");
static const int PUBLIC_KEY_ALREADY_EXISTS_HASH = HashingUtils::HashString("PublicKeyAlreadyExists");
static const int TOO_MANY_PUBLIC_KEYS_HASH = HashingUtils::HashString("TooManyPublicKeys");
static const int CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_IN_USE_HASH = HashingUtils::HashString("CloudFrontOriginAccessIdentityInUse");
static const int TOO_MANY_STREAMING_DISTRIBUTIONS_HASH = HashingUtils::HashString("TooManyStreamingDistributions");
static const int ILLEGAL_FIELD_LEVEL_ENCRYPTION_CONFIG_ASSOCIATION_WITH_CACHE_BEHAVIOR_HASH = HashingUtils::HashString("IllegalFieldLevelEncryptionConfigAssociationWithCacheBehavior");
static const int INVALID_ORIGIN_HASH = HashingUtils::HashString("InvalidOrigin");
static const int TRUSTED_SIGNER_DOES_NOT_EXIST_HASH = HashingUtils::HashString("TrustedSignerDoesNotExist");
static const int MISSING_BODY_HASH = HashingUtils::HashString("MissingBody");
static const int TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONFIGS_HASH = HashingUtils::HashString("TooManyFieldLevelEncryptionConfigs");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == NO_SUCH_INVALIDATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_INVALIDATION), false);
  }
  else if (hashCode == INVALID_ERROR_CODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ERROR_CODE), false);
  }
  else if (hashCode == TOO_MANY_STREAMING_DISTRIBUTION_C_N_A_M_ES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_STREAMING_DISTRIBUTION_C_N_A_M_ES), false);
  }
  else if (hashCode == TOO_MANY_ORIGINS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_ORIGINS), false);
  }
  else if (hashCode == NO_SUCH_ORIGIN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_ORIGIN), false);
  }
  else if (hashCode == NO_SUCH_RESOURCE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_RESOURCE), false);
  }
  else if (hashCode == DISTRIBUTION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::DISTRIBUTION_ALREADY_EXISTS), false);
  }
  else if (hashCode == FIELD_LEVEL_ENCRYPTION_PROFILE_SIZE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::FIELD_LEVEL_ENCRYPTION_PROFILE_SIZE_EXCEEDED), false);
  }
  else if (hashCode == FIELD_LEVEL_ENCRYPTION_CONFIG_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::FIELD_LEVEL_ENCRYPTION_CONFIG_ALREADY_EXISTS), false);
  }
  else if (hashCode == TOO_MANY_CACHE_BEHAVIORS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_CACHE_BEHAVIORS), false);
  }
  else if (hashCode == TOO_MANY_ORIGIN_GROUPS_PER_DISTRIBUTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_ORIGIN_GROUPS_PER_DISTRIBUTION), false);
  }
  else if (hashCode == TOO_MANY_HEADERS_IN_FORWARDED_VALUES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_HEADERS_IN_FORWARDED_VALUES), false);
  }
  else if (hashCode == FIELD_LEVEL_ENCRYPTION_CONFIG_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::FIELD_LEVEL_ENCRYPTION_CONFIG_IN_USE), false);
  }
  else if (hashCode == FIELD_LEVEL_ENCRYPTION_PROFILE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::FIELD_LEVEL_ENCRYPTION_PROFILE_IN_USE), false);
  }
  else if (hashCode == INCONSISTENT_QUANTITIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INCONSISTENT_QUANTITIES), false);
  }
  else if (hashCode == TOO_MANY_INVALIDATIONS_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_INVALIDATIONS_IN_PROGRESS), false);
  }
  else if (hashCode == NO_SUCH_DISTRIBUTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_DISTRIBUTION), false);
  }
  else if (hashCode == INVALID_IF_MATCH_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_IF_MATCH_VERSION), false);
  }
  else if (hashCode == INVALID_RESPONSE_CODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_RESPONSE_CODE), false);
  }
  else if (hashCode == INVALID_TAGGING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_TAGGING), false);
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS), false);
  }
  else if (hashCode == INVALID_LOCATION_CODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_LOCATION_CODE), false);
  }
  else if (hashCode == INVALID_DEFAULT_ROOT_OBJECT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_DEFAULT_ROOT_OBJECT), false);
  }
  else if (hashCode == PUBLIC_KEY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::PUBLIC_KEY_IN_USE), false);
  }
  else if (hashCode == TOO_MANY_QUERY_STRING_PARAMETERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_QUERY_STRING_PARAMETERS), false);
  }
  else if (hashCode == NO_SUCH_FIELD_LEVEL_ENCRYPTION_CONFIG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_FIELD_LEVEL_ENCRYPTION_CONFIG), false);
  }
  else if (hashCode == TOO_MANY_CERTIFICATES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_CERTIFICATES), false);
  }
  else if (hashCode == NO_SUCH_PUBLIC_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_PUBLIC_KEY), false);
  }
  else if (hashCode == INVALID_WEB_A_C_L_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_WEB_A_C_L_ID), false);
  }
  else if (hashCode == STREAMING_DISTRIBUTION_NOT_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::STREAMING_DISTRIBUTION_NOT_DISABLED), false);
  }
  else if (hashCode == TOO_MANY_TRUSTED_SIGNERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_TRUSTED_SIGNERS), false);
  }
  else if (hashCode == NO_SUCH_FIELD_LEVEL_ENCRYPTION_PROFILE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_FIELD_LEVEL_ENCRYPTION_PROFILE), false);
  }
  else if (hashCode == NO_SUCH_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY), false);
  }
  else if (hashCode == CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_ORIGIN_READ_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ORIGIN_READ_TIMEOUT), false);
  }
  else if (hashCode == INVALID_ORIGIN_KEEPALIVE_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ORIGIN_KEEPALIVE_TIMEOUT), false);
  }
  else if (hashCode == INVALID_FORWARD_COOKIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_FORWARD_COOKIES), false);
  }
  else if (hashCode == QUERY_ARG_PROFILE_EMPTY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::QUERY_ARG_PROFILE_EMPTY), false);
  }
  else if (hashCode == TOO_MANY_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITIES), false);
  }
  else if (hashCode == PRECONDITION_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::PRECONDITION_FAILED), false);
  }
  else if (hashCode == TOO_MANY_COOKIE_NAMES_IN_WHITE_LIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_COOKIE_NAMES_IN_WHITE_LIST), false);
  }
  else if (hashCode == INVALID_HEADERS_FOR_S3_ORIGIN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_HEADERS_FOR_S3_ORIGIN), false);
  }
  else if (hashCode == FIELD_LEVEL_ENCRYPTION_PROFILE_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::FIELD_LEVEL_ENCRYPTION_PROFILE_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_LAMBDA_FUNCTION_ASSOCIATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_LAMBDA_FUNCTION_ASSOCIATION), false);
  }
  else if (hashCode == TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONTENT_TYPE_PROFILES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONTENT_TYPE_PROFILES), false);
  }
  else if (hashCode == TOO_MANY_ORIGIN_CUSTOM_HEADERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_ORIGIN_CUSTOM_HEADERS), false);
  }
  else if (hashCode == TOO_MANY_FIELD_LEVEL_ENCRYPTION_ENCRYPTION_ENTITIES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FIELD_LEVEL_ENCRYPTION_ENCRYPTION_ENTITIES), false);
  }
  else if (hashCode == INVALID_QUERY_STRING_PARAMETERS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_QUERY_STRING_PARAMETERS), false);
  }
  else if (hashCode == INVALID_GEO_RESTRICTION_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_GEO_RESTRICTION_PARAMETER), false);
  }
  else if (hashCode == INVALID_PROTOCOL_SETTINGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_PROTOCOL_SETTINGS), false);
  }
  else if (hashCode == BATCH_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::BATCH_TOO_LARGE), false);
  }
  else if (hashCode == TOO_MANY_FIELD_LEVEL_ENCRYPTION_PROFILES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FIELD_LEVEL_ENCRYPTION_PROFILES), false);
  }
  else if (hashCode == INVALID_ORIGIN_ACCESS_IDENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ORIGIN_ACCESS_IDENTITY), false);
  }
  else if (hashCode == INVALID_MINIMUM_PROTOCOL_VERSION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_MINIMUM_PROTOCOL_VERSION), false);
  }
  else if (hashCode == TOO_MANY_FIELD_LEVEL_ENCRYPTION_FIELD_PATTERNS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FIELD_LEVEL_ENCRYPTION_FIELD_PATTERNS), false);
  }
  else if (hashCode == STREAMING_DISTRIBUTION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::STREAMING_DISTRIBUTION_ALREADY_EXISTS), false);
  }
  else if (hashCode == ILLEGAL_UPDATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::ILLEGAL_UPDATE), false);
  }
  else if (hashCode == NO_SUCH_STREAMING_DISTRIBUTION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_STREAMING_DISTRIBUTION), false);
  }
  else if (hashCode == TOO_MANY_DISTRIBUTION_C_N_A_M_ES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTION_C_N_A_M_ES), false);
  }
  else if (hashCode == INVALID_T_T_L_ORDER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_T_T_L_ORDER), false);
  }
  else if (hashCode == TOO_MANY_FIELD_LEVEL_ENCRYPTION_QUERY_ARG_PROFILES_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FIELD_LEVEL_ENCRYPTION_QUERY_ARG_PROFILES), false);
  }
  else if (hashCode == INVALID_RELATIVE_PATH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_RELATIVE_PATH), false);
  }
  else if (hashCode == C_N_A_M_E_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::C_N_A_M_E_ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_REQUIRED_PROTOCOL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_REQUIRED_PROTOCOL), false);
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_WITH_LAMBDA_ASSOCIATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS_WITH_LAMBDA_ASSOCIATIONS), false);
  }
  else if (hashCode == INVALID_VIEWER_CERTIFICATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_VIEWER_CERTIFICATE), false);
  }
  else if (hashCode == CANNOT_CHANGE_IMMUTABLE_PUBLIC_KEY_FIELDS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::CANNOT_CHANGE_IMMUTABLE_PUBLIC_KEY_FIELDS), false);
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_FIELD_LEVEL_ENCRYPTION_CONFIG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_FIELD_LEVEL_ENCRYPTION_CONFIG), false);
  }
  else if (hashCode == DISTRIBUTION_NOT_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::DISTRIBUTION_NOT_DISABLED), false);
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ARGUMENT), false);
  }
  else if (hashCode == TOO_MANY_LAMBDA_FUNCTION_ASSOCIATIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_LAMBDA_FUNCTION_ASSOCIATIONS), false);
  }
  else if (hashCode == PUBLIC_KEY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::PUBLIC_KEY_ALREADY_EXISTS), false);
  }
  else if (hashCode == TOO_MANY_PUBLIC_KEYS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_PUBLIC_KEYS), false);
  }
  else if (hashCode == CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_IN_USE), false);
  }
  else if (hashCode == TOO_MANY_STREAMING_DISTRIBUTIONS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_STREAMING_DISTRIBUTIONS), false);
  }
  else if (hashCode == ILLEGAL_FIELD_LEVEL_ENCRYPTION_CONFIG_ASSOCIATION_WITH_CACHE_BEHAVIOR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::ILLEGAL_FIELD_LEVEL_ENCRYPTION_CONFIG_ASSOCIATION_WITH_CACHE_BEHAVIOR), false);
  }
  else if (hashCode == INVALID_ORIGIN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ORIGIN), false);
  }
  else if (hashCode == TRUSTED_SIGNER_DOES_NOT_EXIST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TRUSTED_SIGNER_DOES_NOT_EXIST), false);
  }
  else if (hashCode == MISSING_BODY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::MISSING_BODY), false);
  }
  else if (hashCode == TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONFIGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONFIGS), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudFrontErrorMapper
} // namespace CloudFront
} // namespace Aws
