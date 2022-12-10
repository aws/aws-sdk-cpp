/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cloudfront/CloudFrontErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CloudFront;

namespace Aws
{
namespace CloudFront
{
namespace CloudFrontErrorMapper
{

static const int RESOURCE_IN_USE_HASH = HashingUtils::HashString("ResourceInUse");
static const int INVALID_ERROR_CODE_HASH = HashingUtils::HashString("InvalidErrorCode");
static const int TOO_MANY_STREAMING_DISTRIBUTION_C_N_A_M_ES_HASH = HashingUtils::HashString("TooManyStreamingDistributionCNAMEs");
static const int ORIGIN_REQUEST_POLICY_ALREADY_EXISTS_HASH = HashingUtils::HashString("OriginRequestPolicyAlreadyExists");
static const int NO_SUCH_ORIGIN_HASH = HashingUtils::HashString("NoSuchOrigin");
static const int NO_SUCH_RESOURCE_HASH = HashingUtils::HashString("NoSuchResource");
static const int TOO_MANY_ORIGIN_REQUEST_POLICIES_HASH = HashingUtils::HashString("TooManyOriginRequestPolicies");
static const int FIELD_LEVEL_ENCRYPTION_CONFIG_ALREADY_EXISTS_HASH = HashingUtils::HashString("FieldLevelEncryptionConfigAlreadyExists");
static const int TOO_MANY_HEADERS_IN_FORWARDED_VALUES_HASH = HashingUtils::HashString("TooManyHeadersInForwardedValues");
static const int TOO_MANY_ORIGIN_ACCESS_CONTROLS_HASH = HashingUtils::HashString("TooManyOriginAccessControls");
static const int INCONSISTENT_QUANTITIES_HASH = HashingUtils::HashString("InconsistentQuantities");
static const int TOO_MANY_COOKIES_IN_ORIGIN_REQUEST_POLICY_HASH = HashingUtils::HashString("TooManyCookiesInOriginRequestPolicy");
static const int INVALID_IF_MATCH_VERSION_HASH = HashingUtils::HashString("InvalidIfMatchVersion");
static const int FUNCTION_ALREADY_EXISTS_HASH = HashingUtils::HashString("FunctionAlreadyExists");
static const int INVALID_TAGGING_HASH = HashingUtils::HashString("InvalidTagging");
static const int NO_SUCH_FUNCTION_EXISTS_HASH = HashingUtils::HashString("NoSuchFunctionExists");
static const int REALTIME_LOG_CONFIG_OWNER_MISMATCH_HASH = HashingUtils::HashString("RealtimeLogConfigOwnerMismatch");
static const int TOO_MANY_DISTRIBUTIONS_HASH = HashingUtils::HashString("TooManyDistributions");
static const int CACHE_POLICY_IN_USE_HASH = HashingUtils::HashString("CachePolicyInUse");
static const int INVALID_LOCATION_CODE_HASH = HashingUtils::HashString("InvalidLocationCode");
static const int PUBLIC_KEY_IN_USE_HASH = HashingUtils::HashString("PublicKeyInUse");
static const int TOO_MANY_QUERY_STRING_PARAMETERS_HASH = HashingUtils::HashString("TooManyQueryStringParameters");
static const int TOO_MANY_CERTIFICATES_HASH = HashingUtils::HashString("TooManyCertificates");
static const int MONITORING_SUBSCRIPTION_ALREADY_EXISTS_HASH = HashingUtils::HashString("MonitoringSubscriptionAlreadyExists");
static const int REALTIME_LOG_CONFIG_ALREADY_EXISTS_HASH = HashingUtils::HashString("RealtimeLogConfigAlreadyExists");
static const int NO_SUCH_PUBLIC_KEY_HASH = HashingUtils::HashString("NoSuchPublicKey");
static const int TOO_MANY_DISTRIBUTIONS_WITH_FUNCTION_ASSOCIATIONS_HASH = HashingUtils::HashString("TooManyDistributionsWithFunctionAssociations");
static const int TOO_MANY_CACHE_POLICIES_HASH = HashingUtils::HashString("TooManyCachePolicies");
static const int ORIGIN_REQUEST_POLICY_IN_USE_HASH = HashingUtils::HashString("OriginRequestPolicyInUse");
static const int TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_ORIGIN_ACCESS_CONTROL_HASH = HashingUtils::HashString("TooManyDistributionsAssociatedToOriginAccessControl");
static const int NO_SUCH_CACHE_POLICY_HASH = HashingUtils::HashString("NoSuchCachePolicy");
static const int NO_SUCH_FIELD_LEVEL_ENCRYPTION_PROFILE_HASH = HashingUtils::HashString("NoSuchFieldLevelEncryptionProfile");
static const int INVALID_ORIGIN_READ_TIMEOUT_HASH = HashingUtils::HashString("InvalidOriginReadTimeout");
static const int INVALID_ORIGIN_KEEPALIVE_TIMEOUT_HASH = HashingUtils::HashString("InvalidOriginKeepaliveTimeout");
static const int TOO_MANY_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITIES_HASH = HashingUtils::HashString("TooManyCloudFrontOriginAccessIdentities");
static const int INVALID_HEADERS_FOR_S3_ORIGIN_HASH = HashingUtils::HashString("InvalidHeadersForS3Origin");
static const int FIELD_LEVEL_ENCRYPTION_PROFILE_ALREADY_EXISTS_HASH = HashingUtils::HashString("FieldLevelEncryptionProfileAlreadyExists");
static const int TOO_MANY_HEADERS_IN_ORIGIN_REQUEST_POLICY_HASH = HashingUtils::HashString("TooManyHeadersInOriginRequestPolicy");
static const int CONTINUOUS_DEPLOYMENT_POLICY_IN_USE_HASH = HashingUtils::HashString("ContinuousDeploymentPolicyInUse");
static const int CONTINUOUS_DEPLOYMENT_POLICY_ALREADY_EXISTS_HASH = HashingUtils::HashString("ContinuousDeploymentPolicyAlreadyExists");
static const int TOO_MANY_KEY_GROUPS_ASSOCIATED_TO_DISTRIBUTION_HASH = HashingUtils::HashString("TooManyKeyGroupsAssociatedToDistribution");
static const int KEY_GROUP_ALREADY_EXISTS_HASH = HashingUtils::HashString("KeyGroupAlreadyExists");
static const int TOO_MANY_ORIGIN_CUSTOM_HEADERS_HASH = HashingUtils::HashString("TooManyOriginCustomHeaders");
static const int INVALID_GEO_RESTRICTION_PARAMETER_HASH = HashingUtils::HashString("InvalidGeoRestrictionParameter");
static const int TOO_MANY_REALTIME_LOG_CONFIGS_HASH = HashingUtils::HashString("TooManyRealtimeLogConfigs");
static const int TOO_MANY_FIELD_LEVEL_ENCRYPTION_PROFILES_HASH = HashingUtils::HashString("TooManyFieldLevelEncryptionProfiles");
static const int RESPONSE_HEADERS_POLICY_ALREADY_EXISTS_HASH = HashingUtils::HashString("ResponseHeadersPolicyAlreadyExists");
static const int ILLEGAL_DELETE_HASH = HashingUtils::HashString("IllegalDelete");
static const int NO_SUCH_MONITORING_SUBSCRIPTION_HASH = HashingUtils::HashString("NoSuchMonitoringSubscription");
static const int TOO_MANY_FIELD_LEVEL_ENCRYPTION_FIELD_PATTERNS_HASH = HashingUtils::HashString("TooManyFieldLevelEncryptionFieldPatterns");
static const int NO_SUCH_STREAMING_DISTRIBUTION_HASH = HashingUtils::HashString("NoSuchStreamingDistribution");
static const int INVALID_T_T_L_ORDER_HASH = HashingUtils::HashString("InvalidTTLOrder");
static const int TOO_MANY_FIELD_LEVEL_ENCRYPTION_QUERY_ARG_PROFILES_HASH = HashingUtils::HashString("TooManyFieldLevelEncryptionQueryArgProfiles");
static const int C_N_A_M_E_ALREADY_EXISTS_HASH = HashingUtils::HashString("CNAMEAlreadyExists");
static const int TOO_MANY_RESPONSE_HEADERS_POLICIES_HASH = HashingUtils::HashString("TooManyResponseHeadersPolicies");
static const int INVALID_REQUIRED_PROTOCOL_HASH = HashingUtils::HashString("InvalidRequiredProtocol");
static const int TOO_MANY_DISTRIBUTIONS_WITH_LAMBDA_ASSOCIATIONS_HASH = HashingUtils::HashString("TooManyDistributionsWithLambdaAssociations");
static const int TOO_MANY_COOKIES_IN_CACHE_POLICY_HASH = HashingUtils::HashString("TooManyCookiesInCachePolicy");
static const int FUNCTION_SIZE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("FunctionSizeLimitExceeded");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperation");
static const int INVALID_FUNCTION_ASSOCIATION_HASH = HashingUtils::HashString("InvalidFunctionAssociation");
static const int TOO_MANY_LAMBDA_FUNCTION_ASSOCIATIONS_HASH = HashingUtils::HashString("TooManyLambdaFunctionAssociations");
static const int TOO_MANY_FUNCTION_ASSOCIATIONS_HASH = HashingUtils::HashString("TooManyFunctionAssociations");
static const int TOO_MANY_QUERY_STRINGS_IN_ORIGIN_REQUEST_POLICY_HASH = HashingUtils::HashString("TooManyQueryStringsInOriginRequestPolicy");
static const int TOO_MANY_PUBLIC_KEYS_HASH = HashingUtils::HashString("TooManyPublicKeys");
static const int TOO_MANY_CONTINUOUS_DEPLOYMENT_POLICIES_HASH = HashingUtils::HashString("TooManyContinuousDeploymentPolicies");
static const int TOO_MANY_STREAMING_DISTRIBUTIONS_HASH = HashingUtils::HashString("TooManyStreamingDistributions");
static const int ILLEGAL_FIELD_LEVEL_ENCRYPTION_CONFIG_ASSOCIATION_WITH_CACHE_BEHAVIOR_HASH = HashingUtils::HashString("IllegalFieldLevelEncryptionConfigAssociationWithCacheBehavior");
static const int INVALID_ORIGIN_HASH = HashingUtils::HashString("InvalidOrigin");
static const int TRUSTED_SIGNER_DOES_NOT_EXIST_HASH = HashingUtils::HashString("TrustedSignerDoesNotExist");
static const int TOO_LONG_C_S_P_IN_RESPONSE_HEADERS_POLICY_HASH = HashingUtils::HashString("TooLongCSPInResponseHeadersPolicy");
static const int TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONFIGS_HASH = HashingUtils::HashString("TooManyFieldLevelEncryptionConfigs");
static const int NO_SUCH_INVALIDATION_HASH = HashingUtils::HashString("NoSuchInvalidation");
static const int RESPONSE_HEADERS_POLICY_IN_USE_HASH = HashingUtils::HashString("ResponseHeadersPolicyInUse");
static const int NO_SUCH_CONTINUOUS_DEPLOYMENT_POLICY_HASH = HashingUtils::HashString("NoSuchContinuousDeploymentPolicy");
static const int NO_SUCH_REALTIME_LOG_CONFIG_HASH = HashingUtils::HashString("NoSuchRealtimeLogConfig");
static const int TOO_MANY_ORIGINS_HASH = HashingUtils::HashString("TooManyOrigins");
static const int TOO_MANY_QUERY_STRINGS_IN_CACHE_POLICY_HASH = HashingUtils::HashString("TooManyQueryStringsInCachePolicy");
static const int DISTRIBUTION_ALREADY_EXISTS_HASH = HashingUtils::HashString("DistributionAlreadyExists");
static const int FUNCTION_IN_USE_HASH = HashingUtils::HashString("FunctionInUse");
static const int TOO_MANY_FUNCTIONS_HASH = HashingUtils::HashString("TooManyFunctions");
static const int FIELD_LEVEL_ENCRYPTION_PROFILE_SIZE_EXCEEDED_HASH = HashingUtils::HashString("FieldLevelEncryptionProfileSizeExceeded");
static const int TOO_MANY_CACHE_BEHAVIORS_HASH = HashingUtils::HashString("TooManyCacheBehaviors");
static const int TOO_MANY_ORIGIN_GROUPS_PER_DISTRIBUTION_HASH = HashingUtils::HashString("TooManyOriginGroupsPerDistribution");
static const int TOO_MANY_HEADERS_IN_CACHE_POLICY_HASH = HashingUtils::HashString("TooManyHeadersInCachePolicy");
static const int FIELD_LEVEL_ENCRYPTION_CONFIG_IN_USE_HASH = HashingUtils::HashString("FieldLevelEncryptionConfigInUse");
static const int TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_ORIGIN_REQUEST_POLICY_HASH = HashingUtils::HashString("TooManyDistributionsAssociatedToOriginRequestPolicy");
static const int FIELD_LEVEL_ENCRYPTION_PROFILE_IN_USE_HASH = HashingUtils::HashString("FieldLevelEncryptionProfileInUse");
static const int TOO_MANY_INVALIDATIONS_IN_PROGRESS_HASH = HashingUtils::HashString("TooManyInvalidationsInProgress");
static const int NO_SUCH_DISTRIBUTION_HASH = HashingUtils::HashString("NoSuchDistribution");
static const int INVALID_RESPONSE_CODE_HASH = HashingUtils::HashString("InvalidResponseCode");
static const int TOO_MANY_PUBLIC_KEYS_IN_KEY_GROUP_HASH = HashingUtils::HashString("TooManyPublicKeysInKeyGroup");
static const int INVALID_DEFAULT_ROOT_OBJECT_HASH = HashingUtils::HashString("InvalidDefaultRootObject");
static const int ORIGIN_ACCESS_CONTROL_ALREADY_EXISTS_HASH = HashingUtils::HashString("OriginAccessControlAlreadyExists");
static const int NO_SUCH_FIELD_LEVEL_ENCRYPTION_CONFIG_HASH = HashingUtils::HashString("NoSuchFieldLevelEncryptionConfig");
static const int STAGING_DISTRIBUTION_IN_USE_HASH = HashingUtils::HashString("StagingDistributionInUse");
static const int INVALID_WEB_A_C_L_ID_HASH = HashingUtils::HashString("InvalidWebACLId");
static const int INVALID_ORIGIN_ACCESS_CONTROL_HASH = HashingUtils::HashString("InvalidOriginAccessControl");
static const int STREAMING_DISTRIBUTION_NOT_DISABLED_HASH = HashingUtils::HashString("StreamingDistributionNotDisabled");
static const int TOO_MANY_TRUSTED_SIGNERS_HASH = HashingUtils::HashString("TooManyTrustedSigners");
static const int NO_SUCH_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_HASH = HashingUtils::HashString("NoSuchCloudFrontOriginAccessIdentity");
static const int CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_ALREADY_EXISTS_HASH = HashingUtils::HashString("CloudFrontOriginAccessIdentityAlreadyExists");
static const int INVALID_FORWARD_COOKIES_HASH = HashingUtils::HashString("InvalidForwardCookies");
static const int TRUSTED_KEY_GROUP_DOES_NOT_EXIST_HASH = HashingUtils::HashString("TrustedKeyGroupDoesNotExist");
static const int ILLEGAL_ORIGIN_ACCESS_CONFIGURATION_HASH = HashingUtils::HashString("IllegalOriginAccessConfiguration");
static const int QUERY_ARG_PROFILE_EMPTY_HASH = HashingUtils::HashString("QueryArgProfileEmpty");
static const int PRECONDITION_FAILED_HASH = HashingUtils::HashString("PreconditionFailed");
static const int TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_CACHE_POLICY_HASH = HashingUtils::HashString("TooManyDistributionsAssociatedToCachePolicy");
static const int NO_SUCH_ORIGIN_ACCESS_CONTROL_HASH = HashingUtils::HashString("NoSuchOriginAccessControl");
static const int TOO_MANY_COOKIE_NAMES_IN_WHITE_LIST_HASH = HashingUtils::HashString("TooManyCookieNamesInWhiteList");
static const int TEST_FUNCTION_FAILED_HASH = HashingUtils::HashString("TestFunctionFailed");
static const int INVALID_DOMAIN_NAME_FOR_ORIGIN_ACCESS_CONTROL_HASH = HashingUtils::HashString("InvalidDomainNameForOriginAccessControl");
static const int INVALID_LAMBDA_FUNCTION_ASSOCIATION_HASH = HashingUtils::HashString("InvalidLambdaFunctionAssociation");
static const int TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONTENT_TYPE_PROFILES_HASH = HashingUtils::HashString("TooManyFieldLevelEncryptionContentTypeProfiles");
static const int TOO_MANY_FIELD_LEVEL_ENCRYPTION_ENCRYPTION_ENTITIES_HASH = HashingUtils::HashString("TooManyFieldLevelEncryptionEncryptionEntities");
static const int INVALID_QUERY_STRING_PARAMETERS_HASH = HashingUtils::HashString("InvalidQueryStringParameters");
static const int INVALID_PROTOCOL_SETTINGS_HASH = HashingUtils::HashString("InvalidProtocolSettings");
static const int BATCH_TOO_LARGE_HASH = HashingUtils::HashString("BatchTooLarge");
static const int INVALID_ORIGIN_ACCESS_IDENTITY_HASH = HashingUtils::HashString("InvalidOriginAccessIdentity");
static const int INVALID_MINIMUM_PROTOCOL_VERSION_HASH = HashingUtils::HashString("InvalidMinimumProtocolVersion");
static const int TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_RESPONSE_HEADERS_POLICY_HASH = HashingUtils::HashString("TooManyDistributionsAssociatedToResponseHeadersPolicy");
static const int TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_KEY_GROUP_HASH = HashingUtils::HashString("TooManyDistributionsAssociatedToKeyGroup");
static const int STREAMING_DISTRIBUTION_ALREADY_EXISTS_HASH = HashingUtils::HashString("StreamingDistributionAlreadyExists");
static const int NO_SUCH_RESPONSE_HEADERS_POLICY_HASH = HashingUtils::HashString("NoSuchResponseHeadersPolicy");
static const int ILLEGAL_UPDATE_HASH = HashingUtils::HashString("IllegalUpdate");
static const int TOO_MANY_DISTRIBUTIONS_WITH_SINGLE_FUNCTION_A_R_N_HASH = HashingUtils::HashString("TooManyDistributionsWithSingleFunctionARN");
static const int NO_SUCH_ORIGIN_REQUEST_POLICY_HASH = HashingUtils::HashString("NoSuchOriginRequestPolicy");
static const int CACHE_POLICY_ALREADY_EXISTS_HASH = HashingUtils::HashString("CachePolicyAlreadyExists");
static const int TOO_MANY_DISTRIBUTION_C_N_A_M_ES_HASH = HashingUtils::HashString("TooManyDistributionCNAMEs");
static const int INVALID_RELATIVE_PATH_HASH = HashingUtils::HashString("InvalidRelativePath");
static const int INVALID_VIEWER_CERTIFICATE_HASH = HashingUtils::HashString("InvalidViewerCertificate");
static const int CANNOT_CHANGE_IMMUTABLE_PUBLIC_KEY_FIELDS_HASH = HashingUtils::HashString("CannotChangeImmutablePublicKeyFields");
static const int TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_FIELD_LEVEL_ENCRYPTION_CONFIG_HASH = HashingUtils::HashString("TooManyDistributionsAssociatedToFieldLevelEncryptionConfig");
static const int DISTRIBUTION_NOT_DISABLED_HASH = HashingUtils::HashString("DistributionNotDisabled");
static const int INVALID_ARGUMENT_HASH = HashingUtils::HashString("InvalidArgument");
static const int TOO_MANY_KEY_GROUPS_HASH = HashingUtils::HashString("TooManyKeyGroups");
static const int PUBLIC_KEY_ALREADY_EXISTS_HASH = HashingUtils::HashString("PublicKeyAlreadyExists");
static const int REALTIME_LOG_CONFIG_IN_USE_HASH = HashingUtils::HashString("RealtimeLogConfigInUse");
static const int CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_IN_USE_HASH = HashingUtils::HashString("CloudFrontOriginAccessIdentityInUse");
static const int TOO_MANY_CUSTOM_HEADERS_IN_RESPONSE_HEADERS_POLICY_HASH = HashingUtils::HashString("TooManyCustomHeadersInResponseHeadersPolicy");
static const int ORIGIN_ACCESS_CONTROL_IN_USE_HASH = HashingUtils::HashString("OriginAccessControlInUse");
static const int MISSING_BODY_HASH = HashingUtils::HashString("MissingBody");


/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/

static bool GetErrorForNameHelper0(int hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == RESOURCE_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::RESOURCE_IN_USE), false);
    return true;
  }
  else if (hashCode == INVALID_ERROR_CODE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ERROR_CODE), false);
    return true;
  }
  else if (hashCode == TOO_MANY_STREAMING_DISTRIBUTION_C_N_A_M_ES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_STREAMING_DISTRIBUTION_C_N_A_M_ES), false);
    return true;
  }
  else if (hashCode == ORIGIN_REQUEST_POLICY_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::ORIGIN_REQUEST_POLICY_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == NO_SUCH_ORIGIN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_ORIGIN), false);
    return true;
  }
  else if (hashCode == NO_SUCH_RESOURCE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_RESOURCE), false);
    return true;
  }
  else if (hashCode == TOO_MANY_ORIGIN_REQUEST_POLICIES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_ORIGIN_REQUEST_POLICIES), false);
    return true;
  }
  else if (hashCode == FIELD_LEVEL_ENCRYPTION_CONFIG_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::FIELD_LEVEL_ENCRYPTION_CONFIG_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_HEADERS_IN_FORWARDED_VALUES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_HEADERS_IN_FORWARDED_VALUES), false);
    return true;
  }
  else if (hashCode == TOO_MANY_ORIGIN_ACCESS_CONTROLS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_ORIGIN_ACCESS_CONTROLS), false);
    return true;
  }
  else if (hashCode == INCONSISTENT_QUANTITIES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INCONSISTENT_QUANTITIES), false);
    return true;
  }
  else if (hashCode == TOO_MANY_COOKIES_IN_ORIGIN_REQUEST_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_COOKIES_IN_ORIGIN_REQUEST_POLICY), false);
    return true;
  }
  else if (hashCode == INVALID_IF_MATCH_VERSION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_IF_MATCH_VERSION), false);
    return true;
  }
  else if (hashCode == FUNCTION_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::FUNCTION_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == INVALID_TAGGING_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_TAGGING), false);
    return true;
  }
  else if (hashCode == NO_SUCH_FUNCTION_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_FUNCTION_EXISTS), false);
    return true;
  }
  else if (hashCode == REALTIME_LOG_CONFIG_OWNER_MISMATCH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::REALTIME_LOG_CONFIG_OWNER_MISMATCH), false);
    return true;
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS), false);
    return true;
  }
  else if (hashCode == CACHE_POLICY_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::CACHE_POLICY_IN_USE), false);
    return true;
  }
  else if (hashCode == INVALID_LOCATION_CODE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_LOCATION_CODE), false);
    return true;
  }
  else if (hashCode == PUBLIC_KEY_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::PUBLIC_KEY_IN_USE), false);
    return true;
  }
  else if (hashCode == TOO_MANY_QUERY_STRING_PARAMETERS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_QUERY_STRING_PARAMETERS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_CERTIFICATES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_CERTIFICATES), false);
    return true;
  }
  else if (hashCode == MONITORING_SUBSCRIPTION_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::MONITORING_SUBSCRIPTION_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == REALTIME_LOG_CONFIG_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::REALTIME_LOG_CONFIG_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == NO_SUCH_PUBLIC_KEY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_PUBLIC_KEY), false);
    return true;
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_WITH_FUNCTION_ASSOCIATIONS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS_WITH_FUNCTION_ASSOCIATIONS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_CACHE_POLICIES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_CACHE_POLICIES), false);
    return true;
  }
  else if (hashCode == ORIGIN_REQUEST_POLICY_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::ORIGIN_REQUEST_POLICY_IN_USE), false);
    return true;
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_ORIGIN_ACCESS_CONTROL_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_ORIGIN_ACCESS_CONTROL), false);
    return true;
  }
  else if (hashCode == NO_SUCH_CACHE_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_CACHE_POLICY), false);
    return true;
  }
  else if (hashCode == NO_SUCH_FIELD_LEVEL_ENCRYPTION_PROFILE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_FIELD_LEVEL_ENCRYPTION_PROFILE), false);
    return true;
  }
  else if (hashCode == INVALID_ORIGIN_READ_TIMEOUT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ORIGIN_READ_TIMEOUT), false);
    return true;
  }
  else if (hashCode == INVALID_ORIGIN_KEEPALIVE_TIMEOUT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ORIGIN_KEEPALIVE_TIMEOUT), false);
    return true;
  }
  else if (hashCode == TOO_MANY_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITIES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITIES), false);
    return true;
  }
  else if (hashCode == INVALID_HEADERS_FOR_S3_ORIGIN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_HEADERS_FOR_S3_ORIGIN), false);
    return true;
  }
  else if (hashCode == FIELD_LEVEL_ENCRYPTION_PROFILE_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::FIELD_LEVEL_ENCRYPTION_PROFILE_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_HEADERS_IN_ORIGIN_REQUEST_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_HEADERS_IN_ORIGIN_REQUEST_POLICY), false);
    return true;
  }
  else if (hashCode == CONTINUOUS_DEPLOYMENT_POLICY_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::CONTINUOUS_DEPLOYMENT_POLICY_IN_USE), false);
    return true;
  }
  else if (hashCode == CONTINUOUS_DEPLOYMENT_POLICY_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::CONTINUOUS_DEPLOYMENT_POLICY_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_KEY_GROUPS_ASSOCIATED_TO_DISTRIBUTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_KEY_GROUPS_ASSOCIATED_TO_DISTRIBUTION), false);
    return true;
  }
  else if (hashCode == KEY_GROUP_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::KEY_GROUP_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_ORIGIN_CUSTOM_HEADERS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_ORIGIN_CUSTOM_HEADERS), false);
    return true;
  }
  else if (hashCode == INVALID_GEO_RESTRICTION_PARAMETER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_GEO_RESTRICTION_PARAMETER), false);
    return true;
  }
  else if (hashCode == TOO_MANY_REALTIME_LOG_CONFIGS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_REALTIME_LOG_CONFIGS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_FIELD_LEVEL_ENCRYPTION_PROFILES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FIELD_LEVEL_ENCRYPTION_PROFILES), false);
    return true;
  }
  else if (hashCode == RESPONSE_HEADERS_POLICY_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::RESPONSE_HEADERS_POLICY_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == ILLEGAL_DELETE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::ILLEGAL_DELETE), false);
    return true;
  }
  else if (hashCode == NO_SUCH_MONITORING_SUBSCRIPTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_MONITORING_SUBSCRIPTION), false);
    return true;
  }
  else if (hashCode == TOO_MANY_FIELD_LEVEL_ENCRYPTION_FIELD_PATTERNS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FIELD_LEVEL_ENCRYPTION_FIELD_PATTERNS), false);
    return true;
  }
  else if (hashCode == NO_SUCH_STREAMING_DISTRIBUTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_STREAMING_DISTRIBUTION), false);
    return true;
  }
  else if (hashCode == INVALID_T_T_L_ORDER_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_T_T_L_ORDER), false);
    return true;
  }
  else if (hashCode == TOO_MANY_FIELD_LEVEL_ENCRYPTION_QUERY_ARG_PROFILES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FIELD_LEVEL_ENCRYPTION_QUERY_ARG_PROFILES), false);
    return true;
  }
  else if (hashCode == C_N_A_M_E_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::C_N_A_M_E_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_RESPONSE_HEADERS_POLICIES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_RESPONSE_HEADERS_POLICIES), false);
    return true;
  }
  else if (hashCode == INVALID_REQUIRED_PROTOCOL_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_REQUIRED_PROTOCOL), false);
    return true;
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_WITH_LAMBDA_ASSOCIATIONS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS_WITH_LAMBDA_ASSOCIATIONS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_COOKIES_IN_CACHE_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_COOKIES_IN_CACHE_POLICY), false);
    return true;
  }
  else if (hashCode == FUNCTION_SIZE_LIMIT_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::FUNCTION_SIZE_LIMIT_EXCEEDED), false);
    return true;
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::UNSUPPORTED_OPERATION), false);
    return true;
  }
  else if (hashCode == INVALID_FUNCTION_ASSOCIATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_FUNCTION_ASSOCIATION), false);
    return true;
  }
  else if (hashCode == TOO_MANY_LAMBDA_FUNCTION_ASSOCIATIONS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_LAMBDA_FUNCTION_ASSOCIATIONS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_FUNCTION_ASSOCIATIONS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FUNCTION_ASSOCIATIONS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_QUERY_STRINGS_IN_ORIGIN_REQUEST_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_QUERY_STRINGS_IN_ORIGIN_REQUEST_POLICY), false);
    return true;
  }
  else if (hashCode == TOO_MANY_PUBLIC_KEYS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_PUBLIC_KEYS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_CONTINUOUS_DEPLOYMENT_POLICIES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_CONTINUOUS_DEPLOYMENT_POLICIES), false);
    return true;
  }
  else if (hashCode == TOO_MANY_STREAMING_DISTRIBUTIONS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_STREAMING_DISTRIBUTIONS), false);
    return true;
  }
  else if (hashCode == ILLEGAL_FIELD_LEVEL_ENCRYPTION_CONFIG_ASSOCIATION_WITH_CACHE_BEHAVIOR_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::ILLEGAL_FIELD_LEVEL_ENCRYPTION_CONFIG_ASSOCIATION_WITH_CACHE_BEHAVIOR), false);
    return true;
  }
  else if (hashCode == INVALID_ORIGIN_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ORIGIN), false);
    return true;
  }
  else if (hashCode == TRUSTED_SIGNER_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TRUSTED_SIGNER_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == TOO_LONG_C_S_P_IN_RESPONSE_HEADERS_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_LONG_C_S_P_IN_RESPONSE_HEADERS_POLICY), false);
    return true;
  }
  else if (hashCode == TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONFIGS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONFIGS), false);
    return true;
  }
  else if (hashCode == NO_SUCH_INVALIDATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_INVALIDATION), false);
    return true;
  }
  else if (hashCode == RESPONSE_HEADERS_POLICY_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::RESPONSE_HEADERS_POLICY_IN_USE), false);
    return true;
  }
  else if (hashCode == NO_SUCH_CONTINUOUS_DEPLOYMENT_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_CONTINUOUS_DEPLOYMENT_POLICY), false);
    return true;
  }
  else if (hashCode == NO_SUCH_REALTIME_LOG_CONFIG_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_REALTIME_LOG_CONFIG), false);
    return true;
  }
  else if (hashCode == TOO_MANY_ORIGINS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_ORIGINS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_QUERY_STRINGS_IN_CACHE_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_QUERY_STRINGS_IN_CACHE_POLICY), false);
    return true;
  }
  else if (hashCode == DISTRIBUTION_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::DISTRIBUTION_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == FUNCTION_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::FUNCTION_IN_USE), false);
    return true;
  }
  else if (hashCode == TOO_MANY_FUNCTIONS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FUNCTIONS), false);
    return true;
  }
  else if (hashCode == FIELD_LEVEL_ENCRYPTION_PROFILE_SIZE_EXCEEDED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::FIELD_LEVEL_ENCRYPTION_PROFILE_SIZE_EXCEEDED), false);
    return true;
  }
  else if (hashCode == TOO_MANY_CACHE_BEHAVIORS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_CACHE_BEHAVIORS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_ORIGIN_GROUPS_PER_DISTRIBUTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_ORIGIN_GROUPS_PER_DISTRIBUTION), false);
    return true;
  }
  else if (hashCode == TOO_MANY_HEADERS_IN_CACHE_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_HEADERS_IN_CACHE_POLICY), false);
    return true;
  }
  else if (hashCode == FIELD_LEVEL_ENCRYPTION_CONFIG_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::FIELD_LEVEL_ENCRYPTION_CONFIG_IN_USE), false);
    return true;
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_ORIGIN_REQUEST_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_ORIGIN_REQUEST_POLICY), false);
    return true;
  }
  else if (hashCode == FIELD_LEVEL_ENCRYPTION_PROFILE_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::FIELD_LEVEL_ENCRYPTION_PROFILE_IN_USE), false);
    return true;
  }
  else if (hashCode == TOO_MANY_INVALIDATIONS_IN_PROGRESS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_INVALIDATIONS_IN_PROGRESS), false);
    return true;
  }
  else if (hashCode == NO_SUCH_DISTRIBUTION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_DISTRIBUTION), false);
    return true;
  }
  else if (hashCode == INVALID_RESPONSE_CODE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_RESPONSE_CODE), false);
    return true;
  }
  else if (hashCode == TOO_MANY_PUBLIC_KEYS_IN_KEY_GROUP_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_PUBLIC_KEYS_IN_KEY_GROUP), false);
    return true;
  }
  else if (hashCode == INVALID_DEFAULT_ROOT_OBJECT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_DEFAULT_ROOT_OBJECT), false);
    return true;
  }
  else if (hashCode == ORIGIN_ACCESS_CONTROL_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::ORIGIN_ACCESS_CONTROL_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == NO_SUCH_FIELD_LEVEL_ENCRYPTION_CONFIG_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_FIELD_LEVEL_ENCRYPTION_CONFIG), false);
    return true;
  }
  else if (hashCode == STAGING_DISTRIBUTION_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::STAGING_DISTRIBUTION_IN_USE), false);
    return true;
  }
  else if (hashCode == INVALID_WEB_A_C_L_ID_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_WEB_A_C_L_ID), false);
    return true;
  }
  else if (hashCode == INVALID_ORIGIN_ACCESS_CONTROL_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ORIGIN_ACCESS_CONTROL), false);
    return true;
  }
  else if (hashCode == STREAMING_DISTRIBUTION_NOT_DISABLED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::STREAMING_DISTRIBUTION_NOT_DISABLED), false);
    return true;
  }
  else if (hashCode == TOO_MANY_TRUSTED_SIGNERS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_TRUSTED_SIGNERS), false);
    return true;
  }
  else if (hashCode == NO_SUCH_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY), false);
    return true;
  }
  else if (hashCode == CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == INVALID_FORWARD_COOKIES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_FORWARD_COOKIES), false);
    return true;
  }
  else if (hashCode == TRUSTED_KEY_GROUP_DOES_NOT_EXIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TRUSTED_KEY_GROUP_DOES_NOT_EXIST), false);
    return true;
  }
  else if (hashCode == ILLEGAL_ORIGIN_ACCESS_CONFIGURATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::ILLEGAL_ORIGIN_ACCESS_CONFIGURATION), false);
    return true;
  }
  else if (hashCode == QUERY_ARG_PROFILE_EMPTY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::QUERY_ARG_PROFILE_EMPTY), false);
    return true;
  }
  else if (hashCode == PRECONDITION_FAILED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::PRECONDITION_FAILED), false);
    return true;
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_CACHE_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_CACHE_POLICY), false);
    return true;
  }
  else if (hashCode == NO_SUCH_ORIGIN_ACCESS_CONTROL_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_ORIGIN_ACCESS_CONTROL), false);
    return true;
  }
  else if (hashCode == TOO_MANY_COOKIE_NAMES_IN_WHITE_LIST_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_COOKIE_NAMES_IN_WHITE_LIST), false);
    return true;
  }
  else if (hashCode == TEST_FUNCTION_FAILED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TEST_FUNCTION_FAILED), false);
    return true;
  }
  else if (hashCode == INVALID_DOMAIN_NAME_FOR_ORIGIN_ACCESS_CONTROL_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_DOMAIN_NAME_FOR_ORIGIN_ACCESS_CONTROL), false);
    return true;
  }
  else if (hashCode == INVALID_LAMBDA_FUNCTION_ASSOCIATION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_LAMBDA_FUNCTION_ASSOCIATION), false);
    return true;
  }
  else if (hashCode == TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONTENT_TYPE_PROFILES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONTENT_TYPE_PROFILES), false);
    return true;
  }
  else if (hashCode == TOO_MANY_FIELD_LEVEL_ENCRYPTION_ENCRYPTION_ENTITIES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_FIELD_LEVEL_ENCRYPTION_ENCRYPTION_ENTITIES), false);
    return true;
  }
  else if (hashCode == INVALID_QUERY_STRING_PARAMETERS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_QUERY_STRING_PARAMETERS), false);
    return true;
  }
  else if (hashCode == INVALID_PROTOCOL_SETTINGS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_PROTOCOL_SETTINGS), false);
    return true;
  }
  else if (hashCode == BATCH_TOO_LARGE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::BATCH_TOO_LARGE), false);
    return true;
  }
  else if (hashCode == INVALID_ORIGIN_ACCESS_IDENTITY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ORIGIN_ACCESS_IDENTITY), false);
    return true;
  }
  else if (hashCode == INVALID_MINIMUM_PROTOCOL_VERSION_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_MINIMUM_PROTOCOL_VERSION), false);
    return true;
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_RESPONSE_HEADERS_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_RESPONSE_HEADERS_POLICY), false);
    return true;
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_KEY_GROUP_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_KEY_GROUP), false);
    return true;
  }
  return false;
}

static bool GetErrorForNameHelper1(int hashCode, AWSError<CoreErrors>& error)
{
  if (hashCode == STREAMING_DISTRIBUTION_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::STREAMING_DISTRIBUTION_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == NO_SUCH_RESPONSE_HEADERS_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_RESPONSE_HEADERS_POLICY), false);
    return true;
  }
  else if (hashCode == ILLEGAL_UPDATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::ILLEGAL_UPDATE), false);
    return true;
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_WITH_SINGLE_FUNCTION_A_R_N_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS_WITH_SINGLE_FUNCTION_A_R_N), false);
    return true;
  }
  else if (hashCode == NO_SUCH_ORIGIN_REQUEST_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::NO_SUCH_ORIGIN_REQUEST_POLICY), false);
    return true;
  }
  else if (hashCode == CACHE_POLICY_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::CACHE_POLICY_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_DISTRIBUTION_C_N_A_M_ES_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTION_C_N_A_M_ES), false);
    return true;
  }
  else if (hashCode == INVALID_RELATIVE_PATH_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_RELATIVE_PATH), false);
    return true;
  }
  else if (hashCode == INVALID_VIEWER_CERTIFICATE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_VIEWER_CERTIFICATE), false);
    return true;
  }
  else if (hashCode == CANNOT_CHANGE_IMMUTABLE_PUBLIC_KEY_FIELDS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::CANNOT_CHANGE_IMMUTABLE_PUBLIC_KEY_FIELDS), false);
    return true;
  }
  else if (hashCode == TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_FIELD_LEVEL_ENCRYPTION_CONFIG_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_FIELD_LEVEL_ENCRYPTION_CONFIG), false);
    return true;
  }
  else if (hashCode == DISTRIBUTION_NOT_DISABLED_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::DISTRIBUTION_NOT_DISABLED), false);
    return true;
  }
  else if (hashCode == INVALID_ARGUMENT_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::INVALID_ARGUMENT), false);
    return true;
  }
  else if (hashCode == TOO_MANY_KEY_GROUPS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_KEY_GROUPS), false);
    return true;
  }
  else if (hashCode == PUBLIC_KEY_ALREADY_EXISTS_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::PUBLIC_KEY_ALREADY_EXISTS), false);
    return true;
  }
  else if (hashCode == REALTIME_LOG_CONFIG_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::REALTIME_LOG_CONFIG_IN_USE), false);
    return true;
  }
  else if (hashCode == CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_IN_USE), false);
    return true;
  }
  else if (hashCode == TOO_MANY_CUSTOM_HEADERS_IN_RESPONSE_HEADERS_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_CUSTOM_HEADERS_IN_RESPONSE_HEADERS_POLICY), false);
    return true;
  }
  else if (hashCode == ORIGIN_ACCESS_CONTROL_IN_USE_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::ORIGIN_ACCESS_CONTROL_IN_USE), false);
    return true;
  }
  else if (hashCode == MISSING_BODY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::MISSING_BODY), false);
    return true;
  }
  return false;
}

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);
  AWSError<CoreErrors> error;
  if (GetErrorForNameHelper0(hashCode, error))
  {
    return error;
  }
  else if (GetErrorForNameHelper1(hashCode, error))
  {
    return error;
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CloudFrontErrorMapper
} // namespace CloudFront
} // namespace Aws
