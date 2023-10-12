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

static constexpr uint32_t RESOURCE_IN_USE_HASH = ConstExprHashingUtils::HashString("ResourceInUse");
static constexpr uint32_t INVALID_ERROR_CODE_HASH = ConstExprHashingUtils::HashString("InvalidErrorCode");
static constexpr uint32_t TOO_MANY_STREAMING_DISTRIBUTION_C_N_A_M_ES_HASH = ConstExprHashingUtils::HashString("TooManyStreamingDistributionCNAMEs");
static constexpr uint32_t ORIGIN_REQUEST_POLICY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("OriginRequestPolicyAlreadyExists");
static constexpr uint32_t NO_SUCH_ORIGIN_HASH = ConstExprHashingUtils::HashString("NoSuchOrigin");
static constexpr uint32_t NO_SUCH_RESOURCE_HASH = ConstExprHashingUtils::HashString("NoSuchResource");
static constexpr uint32_t TOO_MANY_ORIGIN_REQUEST_POLICIES_HASH = ConstExprHashingUtils::HashString("TooManyOriginRequestPolicies");
static constexpr uint32_t FIELD_LEVEL_ENCRYPTION_CONFIG_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("FieldLevelEncryptionConfigAlreadyExists");
static constexpr uint32_t TOO_MANY_HEADERS_IN_FORWARDED_VALUES_HASH = ConstExprHashingUtils::HashString("TooManyHeadersInForwardedValues");
static constexpr uint32_t TOO_MANY_ORIGIN_ACCESS_CONTROLS_HASH = ConstExprHashingUtils::HashString("TooManyOriginAccessControls");
static constexpr uint32_t INCONSISTENT_QUANTITIES_HASH = ConstExprHashingUtils::HashString("InconsistentQuantities");
static constexpr uint32_t TOO_MANY_COOKIES_IN_ORIGIN_REQUEST_POLICY_HASH = ConstExprHashingUtils::HashString("TooManyCookiesInOriginRequestPolicy");
static constexpr uint32_t INVALID_IF_MATCH_VERSION_HASH = ConstExprHashingUtils::HashString("InvalidIfMatchVersion");
static constexpr uint32_t FUNCTION_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("FunctionAlreadyExists");
static constexpr uint32_t INVALID_TAGGING_HASH = ConstExprHashingUtils::HashString("InvalidTagging");
static constexpr uint32_t NO_SUCH_FUNCTION_EXISTS_HASH = ConstExprHashingUtils::HashString("NoSuchFunctionExists");
static constexpr uint32_t REALTIME_LOG_CONFIG_OWNER_MISMATCH_HASH = ConstExprHashingUtils::HashString("RealtimeLogConfigOwnerMismatch");
static constexpr uint32_t TOO_MANY_DISTRIBUTIONS_HASH = ConstExprHashingUtils::HashString("TooManyDistributions");
static constexpr uint32_t CACHE_POLICY_IN_USE_HASH = ConstExprHashingUtils::HashString("CachePolicyInUse");
static constexpr uint32_t INVALID_LOCATION_CODE_HASH = ConstExprHashingUtils::HashString("InvalidLocationCode");
static constexpr uint32_t PUBLIC_KEY_IN_USE_HASH = ConstExprHashingUtils::HashString("PublicKeyInUse");
static constexpr uint32_t TOO_MANY_QUERY_STRING_PARAMETERS_HASH = ConstExprHashingUtils::HashString("TooManyQueryStringParameters");
static constexpr uint32_t TOO_MANY_CERTIFICATES_HASH = ConstExprHashingUtils::HashString("TooManyCertificates");
static constexpr uint32_t MONITORING_SUBSCRIPTION_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("MonitoringSubscriptionAlreadyExists");
static constexpr uint32_t REALTIME_LOG_CONFIG_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("RealtimeLogConfigAlreadyExists");
static constexpr uint32_t NO_SUCH_PUBLIC_KEY_HASH = ConstExprHashingUtils::HashString("NoSuchPublicKey");
static constexpr uint32_t TOO_MANY_DISTRIBUTIONS_WITH_FUNCTION_ASSOCIATIONS_HASH = ConstExprHashingUtils::HashString("TooManyDistributionsWithFunctionAssociations");
static constexpr uint32_t TOO_MANY_CACHE_POLICIES_HASH = ConstExprHashingUtils::HashString("TooManyCachePolicies");
static constexpr uint32_t ORIGIN_REQUEST_POLICY_IN_USE_HASH = ConstExprHashingUtils::HashString("OriginRequestPolicyInUse");
static constexpr uint32_t TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_ORIGIN_ACCESS_CONTROL_HASH = ConstExprHashingUtils::HashString("TooManyDistributionsAssociatedToOriginAccessControl");
static constexpr uint32_t NO_SUCH_CACHE_POLICY_HASH = ConstExprHashingUtils::HashString("NoSuchCachePolicy");
static constexpr uint32_t NO_SUCH_FIELD_LEVEL_ENCRYPTION_PROFILE_HASH = ConstExprHashingUtils::HashString("NoSuchFieldLevelEncryptionProfile");
static constexpr uint32_t INVALID_ORIGIN_READ_TIMEOUT_HASH = ConstExprHashingUtils::HashString("InvalidOriginReadTimeout");
static constexpr uint32_t INVALID_ORIGIN_KEEPALIVE_TIMEOUT_HASH = ConstExprHashingUtils::HashString("InvalidOriginKeepaliveTimeout");
static constexpr uint32_t TOO_MANY_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITIES_HASH = ConstExprHashingUtils::HashString("TooManyCloudFrontOriginAccessIdentities");
static constexpr uint32_t INVALID_HEADERS_FOR_S3_ORIGIN_HASH = ConstExprHashingUtils::HashString("InvalidHeadersForS3Origin");
static constexpr uint32_t FIELD_LEVEL_ENCRYPTION_PROFILE_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("FieldLevelEncryptionProfileAlreadyExists");
static constexpr uint32_t TOO_MANY_HEADERS_IN_ORIGIN_REQUEST_POLICY_HASH = ConstExprHashingUtils::HashString("TooManyHeadersInOriginRequestPolicy");
static constexpr uint32_t CONTINUOUS_DEPLOYMENT_POLICY_IN_USE_HASH = ConstExprHashingUtils::HashString("ContinuousDeploymentPolicyInUse");
static constexpr uint32_t CONTINUOUS_DEPLOYMENT_POLICY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ContinuousDeploymentPolicyAlreadyExists");
static constexpr uint32_t TOO_MANY_KEY_GROUPS_ASSOCIATED_TO_DISTRIBUTION_HASH = ConstExprHashingUtils::HashString("TooManyKeyGroupsAssociatedToDistribution");
static constexpr uint32_t KEY_GROUP_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("KeyGroupAlreadyExists");
static constexpr uint32_t TOO_MANY_ORIGIN_CUSTOM_HEADERS_HASH = ConstExprHashingUtils::HashString("TooManyOriginCustomHeaders");
static constexpr uint32_t INVALID_GEO_RESTRICTION_PARAMETER_HASH = ConstExprHashingUtils::HashString("InvalidGeoRestrictionParameter");
static constexpr uint32_t TOO_MANY_REALTIME_LOG_CONFIGS_HASH = ConstExprHashingUtils::HashString("TooManyRealtimeLogConfigs");
static constexpr uint32_t TOO_MANY_FIELD_LEVEL_ENCRYPTION_PROFILES_HASH = ConstExprHashingUtils::HashString("TooManyFieldLevelEncryptionProfiles");
static constexpr uint32_t RESPONSE_HEADERS_POLICY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ResponseHeadersPolicyAlreadyExists");
static constexpr uint32_t ILLEGAL_DELETE_HASH = ConstExprHashingUtils::HashString("IllegalDelete");
static constexpr uint32_t NO_SUCH_MONITORING_SUBSCRIPTION_HASH = ConstExprHashingUtils::HashString("NoSuchMonitoringSubscription");
static constexpr uint32_t TOO_MANY_FIELD_LEVEL_ENCRYPTION_FIELD_PATTERNS_HASH = ConstExprHashingUtils::HashString("TooManyFieldLevelEncryptionFieldPatterns");
static constexpr uint32_t NO_SUCH_STREAMING_DISTRIBUTION_HASH = ConstExprHashingUtils::HashString("NoSuchStreamingDistribution");
static constexpr uint32_t INVALID_T_T_L_ORDER_HASH = ConstExprHashingUtils::HashString("InvalidTTLOrder");
static constexpr uint32_t TOO_MANY_FIELD_LEVEL_ENCRYPTION_QUERY_ARG_PROFILES_HASH = ConstExprHashingUtils::HashString("TooManyFieldLevelEncryptionQueryArgProfiles");
static constexpr uint32_t C_N_A_M_E_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("CNAMEAlreadyExists");
static constexpr uint32_t TOO_MANY_RESPONSE_HEADERS_POLICIES_HASH = ConstExprHashingUtils::HashString("TooManyResponseHeadersPolicies");
static constexpr uint32_t INVALID_REQUIRED_PROTOCOL_HASH = ConstExprHashingUtils::HashString("InvalidRequiredProtocol");
static constexpr uint32_t TOO_MANY_DISTRIBUTIONS_WITH_LAMBDA_ASSOCIATIONS_HASH = ConstExprHashingUtils::HashString("TooManyDistributionsWithLambdaAssociations");
static constexpr uint32_t TOO_MANY_COOKIES_IN_CACHE_POLICY_HASH = ConstExprHashingUtils::HashString("TooManyCookiesInCachePolicy");
static constexpr uint32_t FUNCTION_SIZE_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("FunctionSizeLimitExceeded");
static constexpr uint32_t UNSUPPORTED_OPERATION_HASH = ConstExprHashingUtils::HashString("UnsupportedOperation");
static constexpr uint32_t INVALID_FUNCTION_ASSOCIATION_HASH = ConstExprHashingUtils::HashString("InvalidFunctionAssociation");
static constexpr uint32_t TOO_MANY_LAMBDA_FUNCTION_ASSOCIATIONS_HASH = ConstExprHashingUtils::HashString("TooManyLambdaFunctionAssociations");
static constexpr uint32_t TOO_MANY_FUNCTION_ASSOCIATIONS_HASH = ConstExprHashingUtils::HashString("TooManyFunctionAssociations");
static constexpr uint32_t TOO_MANY_QUERY_STRINGS_IN_ORIGIN_REQUEST_POLICY_HASH = ConstExprHashingUtils::HashString("TooManyQueryStringsInOriginRequestPolicy");
static constexpr uint32_t TOO_MANY_PUBLIC_KEYS_HASH = ConstExprHashingUtils::HashString("TooManyPublicKeys");
static constexpr uint32_t TOO_MANY_CONTINUOUS_DEPLOYMENT_POLICIES_HASH = ConstExprHashingUtils::HashString("TooManyContinuousDeploymentPolicies");
static constexpr uint32_t TOO_MANY_STREAMING_DISTRIBUTIONS_HASH = ConstExprHashingUtils::HashString("TooManyStreamingDistributions");
static constexpr uint32_t ILLEGAL_FIELD_LEVEL_ENCRYPTION_CONFIG_ASSOCIATION_WITH_CACHE_BEHAVIOR_HASH = ConstExprHashingUtils::HashString("IllegalFieldLevelEncryptionConfigAssociationWithCacheBehavior");
static constexpr uint32_t INVALID_ORIGIN_HASH = ConstExprHashingUtils::HashString("InvalidOrigin");
static constexpr uint32_t TRUSTED_SIGNER_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("TrustedSignerDoesNotExist");
static constexpr uint32_t TOO_LONG_C_S_P_IN_RESPONSE_HEADERS_POLICY_HASH = ConstExprHashingUtils::HashString("TooLongCSPInResponseHeadersPolicy");
static constexpr uint32_t TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONFIGS_HASH = ConstExprHashingUtils::HashString("TooManyFieldLevelEncryptionConfigs");
static constexpr uint32_t NO_SUCH_INVALIDATION_HASH = ConstExprHashingUtils::HashString("NoSuchInvalidation");
static constexpr uint32_t RESPONSE_HEADERS_POLICY_IN_USE_HASH = ConstExprHashingUtils::HashString("ResponseHeadersPolicyInUse");
static constexpr uint32_t NO_SUCH_CONTINUOUS_DEPLOYMENT_POLICY_HASH = ConstExprHashingUtils::HashString("NoSuchContinuousDeploymentPolicy");
static constexpr uint32_t NO_SUCH_REALTIME_LOG_CONFIG_HASH = ConstExprHashingUtils::HashString("NoSuchRealtimeLogConfig");
static constexpr uint32_t TOO_MANY_ORIGINS_HASH = ConstExprHashingUtils::HashString("TooManyOrigins");
static constexpr uint32_t TOO_MANY_QUERY_STRINGS_IN_CACHE_POLICY_HASH = ConstExprHashingUtils::HashString("TooManyQueryStringsInCachePolicy");
static constexpr uint32_t DISTRIBUTION_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("DistributionAlreadyExists");
static constexpr uint32_t FUNCTION_IN_USE_HASH = ConstExprHashingUtils::HashString("FunctionInUse");
static constexpr uint32_t TOO_MANY_FUNCTIONS_HASH = ConstExprHashingUtils::HashString("TooManyFunctions");
static constexpr uint32_t FIELD_LEVEL_ENCRYPTION_PROFILE_SIZE_EXCEEDED_HASH = ConstExprHashingUtils::HashString("FieldLevelEncryptionProfileSizeExceeded");
static constexpr uint32_t TOO_MANY_CACHE_BEHAVIORS_HASH = ConstExprHashingUtils::HashString("TooManyCacheBehaviors");
static constexpr uint32_t TOO_MANY_ORIGIN_GROUPS_PER_DISTRIBUTION_HASH = ConstExprHashingUtils::HashString("TooManyOriginGroupsPerDistribution");
static constexpr uint32_t TOO_MANY_HEADERS_IN_CACHE_POLICY_HASH = ConstExprHashingUtils::HashString("TooManyHeadersInCachePolicy");
static constexpr uint32_t FIELD_LEVEL_ENCRYPTION_CONFIG_IN_USE_HASH = ConstExprHashingUtils::HashString("FieldLevelEncryptionConfigInUse");
static constexpr uint32_t TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_ORIGIN_REQUEST_POLICY_HASH = ConstExprHashingUtils::HashString("TooManyDistributionsAssociatedToOriginRequestPolicy");
static constexpr uint32_t FIELD_LEVEL_ENCRYPTION_PROFILE_IN_USE_HASH = ConstExprHashingUtils::HashString("FieldLevelEncryptionProfileInUse");
static constexpr uint32_t TOO_MANY_INVALIDATIONS_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("TooManyInvalidationsInProgress");
static constexpr uint32_t NO_SUCH_DISTRIBUTION_HASH = ConstExprHashingUtils::HashString("NoSuchDistribution");
static constexpr uint32_t INVALID_RESPONSE_CODE_HASH = ConstExprHashingUtils::HashString("InvalidResponseCode");
static constexpr uint32_t TOO_MANY_PUBLIC_KEYS_IN_KEY_GROUP_HASH = ConstExprHashingUtils::HashString("TooManyPublicKeysInKeyGroup");
static constexpr uint32_t INVALID_DEFAULT_ROOT_OBJECT_HASH = ConstExprHashingUtils::HashString("InvalidDefaultRootObject");
static constexpr uint32_t ORIGIN_ACCESS_CONTROL_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("OriginAccessControlAlreadyExists");
static constexpr uint32_t NO_SUCH_FIELD_LEVEL_ENCRYPTION_CONFIG_HASH = ConstExprHashingUtils::HashString("NoSuchFieldLevelEncryptionConfig");
static constexpr uint32_t STAGING_DISTRIBUTION_IN_USE_HASH = ConstExprHashingUtils::HashString("StagingDistributionInUse");
static constexpr uint32_t INVALID_WEB_A_C_L_ID_HASH = ConstExprHashingUtils::HashString("InvalidWebACLId");
static constexpr uint32_t INVALID_ORIGIN_ACCESS_CONTROL_HASH = ConstExprHashingUtils::HashString("InvalidOriginAccessControl");
static constexpr uint32_t STREAMING_DISTRIBUTION_NOT_DISABLED_HASH = ConstExprHashingUtils::HashString("StreamingDistributionNotDisabled");
static constexpr uint32_t TOO_MANY_TRUSTED_SIGNERS_HASH = ConstExprHashingUtils::HashString("TooManyTrustedSigners");
static constexpr uint32_t NO_SUCH_CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_HASH = ConstExprHashingUtils::HashString("NoSuchCloudFrontOriginAccessIdentity");
static constexpr uint32_t CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("CloudFrontOriginAccessIdentityAlreadyExists");
static constexpr uint32_t INVALID_FORWARD_COOKIES_HASH = ConstExprHashingUtils::HashString("InvalidForwardCookies");
static constexpr uint32_t TRUSTED_KEY_GROUP_DOES_NOT_EXIST_HASH = ConstExprHashingUtils::HashString("TrustedKeyGroupDoesNotExist");
static constexpr uint32_t ILLEGAL_ORIGIN_ACCESS_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("IllegalOriginAccessConfiguration");
static constexpr uint32_t QUERY_ARG_PROFILE_EMPTY_HASH = ConstExprHashingUtils::HashString("QueryArgProfileEmpty");
static constexpr uint32_t PRECONDITION_FAILED_HASH = ConstExprHashingUtils::HashString("PreconditionFailed");
static constexpr uint32_t TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_CACHE_POLICY_HASH = ConstExprHashingUtils::HashString("TooManyDistributionsAssociatedToCachePolicy");
static constexpr uint32_t NO_SUCH_ORIGIN_ACCESS_CONTROL_HASH = ConstExprHashingUtils::HashString("NoSuchOriginAccessControl");
static constexpr uint32_t TOO_MANY_COOKIE_NAMES_IN_WHITE_LIST_HASH = ConstExprHashingUtils::HashString("TooManyCookieNamesInWhiteList");
static constexpr uint32_t TEST_FUNCTION_FAILED_HASH = ConstExprHashingUtils::HashString("TestFunctionFailed");
static constexpr uint32_t INVALID_DOMAIN_NAME_FOR_ORIGIN_ACCESS_CONTROL_HASH = ConstExprHashingUtils::HashString("InvalidDomainNameForOriginAccessControl");
static constexpr uint32_t INVALID_LAMBDA_FUNCTION_ASSOCIATION_HASH = ConstExprHashingUtils::HashString("InvalidLambdaFunctionAssociation");
static constexpr uint32_t TOO_MANY_FIELD_LEVEL_ENCRYPTION_CONTENT_TYPE_PROFILES_HASH = ConstExprHashingUtils::HashString("TooManyFieldLevelEncryptionContentTypeProfiles");
static constexpr uint32_t TOO_MANY_FIELD_LEVEL_ENCRYPTION_ENCRYPTION_ENTITIES_HASH = ConstExprHashingUtils::HashString("TooManyFieldLevelEncryptionEncryptionEntities");
static constexpr uint32_t INVALID_QUERY_STRING_PARAMETERS_HASH = ConstExprHashingUtils::HashString("InvalidQueryStringParameters");
static constexpr uint32_t INVALID_PROTOCOL_SETTINGS_HASH = ConstExprHashingUtils::HashString("InvalidProtocolSettings");
static constexpr uint32_t BATCH_TOO_LARGE_HASH = ConstExprHashingUtils::HashString("BatchTooLarge");
static constexpr uint32_t INVALID_ORIGIN_ACCESS_IDENTITY_HASH = ConstExprHashingUtils::HashString("InvalidOriginAccessIdentity");
static constexpr uint32_t INVALID_MINIMUM_PROTOCOL_VERSION_HASH = ConstExprHashingUtils::HashString("InvalidMinimumProtocolVersion");
static constexpr uint32_t TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_RESPONSE_HEADERS_POLICY_HASH = ConstExprHashingUtils::HashString("TooManyDistributionsAssociatedToResponseHeadersPolicy");
static constexpr uint32_t TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_KEY_GROUP_HASH = ConstExprHashingUtils::HashString("TooManyDistributionsAssociatedToKeyGroup");
static constexpr uint32_t STREAMING_DISTRIBUTION_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("StreamingDistributionAlreadyExists");
static constexpr uint32_t NO_SUCH_RESPONSE_HEADERS_POLICY_HASH = ConstExprHashingUtils::HashString("NoSuchResponseHeadersPolicy");
static constexpr uint32_t ILLEGAL_UPDATE_HASH = ConstExprHashingUtils::HashString("IllegalUpdate");
static constexpr uint32_t TOO_MANY_DISTRIBUTIONS_WITH_SINGLE_FUNCTION_A_R_N_HASH = ConstExprHashingUtils::HashString("TooManyDistributionsWithSingleFunctionARN");
static constexpr uint32_t NO_SUCH_ORIGIN_REQUEST_POLICY_HASH = ConstExprHashingUtils::HashString("NoSuchOriginRequestPolicy");
static constexpr uint32_t CACHE_POLICY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("CachePolicyAlreadyExists");
static constexpr uint32_t TOO_MANY_DISTRIBUTION_C_N_A_M_ES_HASH = ConstExprHashingUtils::HashString("TooManyDistributionCNAMEs");
static constexpr uint32_t INVALID_RELATIVE_PATH_HASH = ConstExprHashingUtils::HashString("InvalidRelativePath");
static constexpr uint32_t INVALID_VIEWER_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("InvalidViewerCertificate");
static constexpr uint32_t CANNOT_CHANGE_IMMUTABLE_PUBLIC_KEY_FIELDS_HASH = ConstExprHashingUtils::HashString("CannotChangeImmutablePublicKeyFields");
static constexpr uint32_t TOO_MANY_DISTRIBUTIONS_ASSOCIATED_TO_FIELD_LEVEL_ENCRYPTION_CONFIG_HASH = ConstExprHashingUtils::HashString("TooManyDistributionsAssociatedToFieldLevelEncryptionConfig");
static constexpr uint32_t DISTRIBUTION_NOT_DISABLED_HASH = ConstExprHashingUtils::HashString("DistributionNotDisabled");
static constexpr uint32_t INVALID_ARGUMENT_HASH = ConstExprHashingUtils::HashString("InvalidArgument");
static constexpr uint32_t TOO_MANY_KEY_GROUPS_HASH = ConstExprHashingUtils::HashString("TooManyKeyGroups");
static constexpr uint32_t PUBLIC_KEY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("PublicKeyAlreadyExists");
static constexpr uint32_t TOO_MANY_REMOVE_HEADERS_IN_RESPONSE_HEADERS_POLICY_HASH = ConstExprHashingUtils::HashString("TooManyRemoveHeadersInResponseHeadersPolicy");
static constexpr uint32_t REALTIME_LOG_CONFIG_IN_USE_HASH = ConstExprHashingUtils::HashString("RealtimeLogConfigInUse");
static constexpr uint32_t CLOUD_FRONT_ORIGIN_ACCESS_IDENTITY_IN_USE_HASH = ConstExprHashingUtils::HashString("CloudFrontOriginAccessIdentityInUse");
static constexpr uint32_t TOO_MANY_CUSTOM_HEADERS_IN_RESPONSE_HEADERS_POLICY_HASH = ConstExprHashingUtils::HashString("TooManyCustomHeadersInResponseHeadersPolicy");
static constexpr uint32_t ORIGIN_ACCESS_CONTROL_IN_USE_HASH = ConstExprHashingUtils::HashString("OriginAccessControlInUse");
static constexpr uint32_t MISSING_BODY_HASH = ConstExprHashingUtils::HashString("MissingBody");


/*
The if-else chains in this file are converted into a jump table by the compiler,
which allows constant time lookup. The chain has been broken into helper functions
because MSVC has a maximum of 122 chained if-else blocks.
*/

static bool GetErrorForNameHelper0(uint32_t hashCode, AWSError<CoreErrors>& error)
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

static bool GetErrorForNameHelper1(uint32_t hashCode, AWSError<CoreErrors>& error)
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
  else if (hashCode == TOO_MANY_REMOVE_HEADERS_IN_RESPONSE_HEADERS_POLICY_HASH)
  {
    error = AWSError<CoreErrors>(static_cast<CoreErrors>(CloudFrontErrors::TOO_MANY_REMOVE_HEADERS_IN_RESPONSE_HEADERS_POLICY), false);
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
  uint32_t hashCode = HashingUtils::HashString(errorName);
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
