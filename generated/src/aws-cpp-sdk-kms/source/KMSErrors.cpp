/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kms/KMSErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::KMS;

namespace Aws
{
namespace KMS
{
namespace KMSErrorMapper
{

static const int CLOUD_HSM_CLUSTER_NOT_ACTIVE_HASH = HashingUtils::HashString("CloudHsmClusterNotActiveException");
static const int INCORRECT_TRUST_ANCHOR_HASH = HashingUtils::HashString("IncorrectTrustAnchorException");
static const int INVALID_GRANT_ID_HASH = HashingUtils::HashString("InvalidGrantIdException");
static const int XKS_PROXY_INVALID_RESPONSE_HASH = HashingUtils::HashString("XksProxyInvalidResponseException");
static const int INVALID_IMPORT_TOKEN_HASH = HashingUtils::HashString("InvalidImportTokenException");
static const int K_M_S_INVALID_STATE_HASH = HashingUtils::HashString("KMSInvalidStateException");
static const int XKS_KEY_INVALID_CONFIGURATION_HASH = HashingUtils::HashString("XksKeyInvalidConfigurationException");
static const int INVALID_KEY_USAGE_HASH = HashingUtils::HashString("InvalidKeyUsageException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int INCORRECT_KEY_HASH = HashingUtils::HashString("IncorrectKeyException");
static const int CUSTOM_KEY_STORE_NOT_FOUND_HASH = HashingUtils::HashString("CustomKeyStoreNotFoundException");
static const int K_M_S_INTERNAL_HASH = HashingUtils::HashString("KMSInternalException");
static const int CLOUD_HSM_CLUSTER_NOT_RELATED_HASH = HashingUtils::HashString("CloudHsmClusterNotRelatedException");
static const int MALFORMED_POLICY_DOCUMENT_HASH = HashingUtils::HashString("MalformedPolicyDocumentException");
static const int INVALID_ALIAS_NAME_HASH = HashingUtils::HashString("InvalidAliasNameException");
static const int XKS_PROXY_URI_UNREACHABLE_HASH = HashingUtils::HashString("XksProxyUriUnreachableException");
static const int K_M_S_INVALID_MAC_HASH = HashingUtils::HashString("KMSInvalidMacException");
static const int XKS_PROXY_VPC_ENDPOINT_SERVICE_IN_USE_HASH = HashingUtils::HashString("XksProxyVpcEndpointServiceInUseException");
static const int XKS_PROXY_INCORRECT_AUTHENTICATION_CREDENTIAL_HASH = HashingUtils::HashString("XksProxyIncorrectAuthenticationCredentialException");
static const int DISABLED_HASH = HashingUtils::HashString("DisabledException");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperationException");
static const int XKS_KEY_NOT_FOUND_HASH = HashingUtils::HashString("XksKeyNotFoundException");
static const int CUSTOM_KEY_STORE_HAS_C_M_KS_HASH = HashingUtils::HashString("CustomKeyStoreHasCMKsException");
static const int CLOUD_HSM_CLUSTER_NOT_FOUND_HASH = HashingUtils::HashString("CloudHsmClusterNotFoundException");
static const int INVALID_GRANT_TOKEN_HASH = HashingUtils::HashString("InvalidGrantTokenException");
static const int INCORRECT_KEY_MATERIAL_HASH = HashingUtils::HashString("IncorrectKeyMaterialException");
static const int INVALID_MARKER_HASH = HashingUtils::HashString("InvalidMarkerException");
static const int XKS_PROXY_VPC_ENDPOINT_SERVICE_INVALID_CONFIGURATION_HASH = HashingUtils::HashString("XksProxyVpcEndpointServiceInvalidConfigurationException");
static const int XKS_PROXY_URI_IN_USE_HASH = HashingUtils::HashString("XksProxyUriInUseException");
static const int CLOUD_HSM_CLUSTER_INVALID_CONFIGURATION_HASH = HashingUtils::HashString("CloudHsmClusterInvalidConfigurationException");
static const int DEPENDENCY_TIMEOUT_HASH = HashingUtils::HashString("DependencyTimeoutException");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExistsException");
static const int XKS_PROXY_VPC_ENDPOINT_SERVICE_NOT_FOUND_HASH = HashingUtils::HashString("XksProxyVpcEndpointServiceNotFoundException");
static const int CUSTOM_KEY_STORE_NAME_IN_USE_HASH = HashingUtils::HashString("CustomKeyStoreNameInUseException");
static const int TAG_HASH = HashingUtils::HashString("TagException");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFoundException");
static const int CLOUD_HSM_CLUSTER_IN_USE_HASH = HashingUtils::HashString("CloudHsmClusterInUseException");
static const int XKS_PROXY_URI_ENDPOINT_IN_USE_HASH = HashingUtils::HashString("XksProxyUriEndpointInUseException");
static const int INVALID_ARN_HASH = HashingUtils::HashString("InvalidArnException");
static const int KEY_UNAVAILABLE_HASH = HashingUtils::HashString("KeyUnavailableException");
static const int INVALID_CIPHERTEXT_HASH = HashingUtils::HashString("InvalidCiphertextException");
static const int XKS_KEY_ALREADY_IN_USE_HASH = HashingUtils::HashString("XksKeyAlreadyInUseException");
static const int K_M_S_INVALID_SIGNATURE_HASH = HashingUtils::HashString("KMSInvalidSignatureException");
static const int CUSTOM_KEY_STORE_INVALID_STATE_HASH = HashingUtils::HashString("CustomKeyStoreInvalidStateException");
static const int XKS_PROXY_INVALID_CONFIGURATION_HASH = HashingUtils::HashString("XksProxyInvalidConfigurationException");
static const int EXPIRED_IMPORT_TOKEN_HASH = HashingUtils::HashString("ExpiredImportTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CLOUD_HSM_CLUSTER_NOT_ACTIVE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::CLOUD_HSM_CLUSTER_NOT_ACTIVE), false);
  }
  else if (hashCode == INCORRECT_TRUST_ANCHOR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INCORRECT_TRUST_ANCHOR), false);
  }
  else if (hashCode == INVALID_GRANT_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_GRANT_ID), false);
  }
  else if (hashCode == XKS_PROXY_INVALID_RESPONSE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::XKS_PROXY_INVALID_RESPONSE), false);
  }
  else if (hashCode == INVALID_IMPORT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_IMPORT_TOKEN), false);
  }
  else if (hashCode == K_M_S_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::K_M_S_INVALID_STATE), false);
  }
  else if (hashCode == XKS_KEY_INVALID_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::XKS_KEY_INVALID_CONFIGURATION), false);
  }
  else if (hashCode == INVALID_KEY_USAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_KEY_USAGE), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == INCORRECT_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INCORRECT_KEY), false);
  }
  else if (hashCode == CUSTOM_KEY_STORE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::CUSTOM_KEY_STORE_NOT_FOUND), false);
  }
  else if (hashCode == K_M_S_INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::K_M_S_INTERNAL), false);
  }
  else if (hashCode == CLOUD_HSM_CLUSTER_NOT_RELATED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::CLOUD_HSM_CLUSTER_NOT_RELATED), false);
  }
  else if (hashCode == MALFORMED_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::MALFORMED_POLICY_DOCUMENT), false);
  }
  else if (hashCode == INVALID_ALIAS_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_ALIAS_NAME), false);
  }
  else if (hashCode == XKS_PROXY_URI_UNREACHABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::XKS_PROXY_URI_UNREACHABLE), false);
  }
  else if (hashCode == K_M_S_INVALID_MAC_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::K_M_S_INVALID_MAC), false);
  }
  else if (hashCode == XKS_PROXY_VPC_ENDPOINT_SERVICE_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::XKS_PROXY_VPC_ENDPOINT_SERVICE_IN_USE), false);
  }
  else if (hashCode == XKS_PROXY_INCORRECT_AUTHENTICATION_CREDENTIAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::XKS_PROXY_INCORRECT_AUTHENTICATION_CREDENTIAL), false);
  }
  else if (hashCode == DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::DISABLED), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == XKS_KEY_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::XKS_KEY_NOT_FOUND), false);
  }
  else if (hashCode == CUSTOM_KEY_STORE_HAS_C_M_KS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::CUSTOM_KEY_STORE_HAS_C_M_KS), false);
  }
  else if (hashCode == CLOUD_HSM_CLUSTER_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::CLOUD_HSM_CLUSTER_NOT_FOUND), false);
  }
  else if (hashCode == INVALID_GRANT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_GRANT_TOKEN), false);
  }
  else if (hashCode == INCORRECT_KEY_MATERIAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INCORRECT_KEY_MATERIAL), false);
  }
  else if (hashCode == INVALID_MARKER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_MARKER), false);
  }
  else if (hashCode == XKS_PROXY_VPC_ENDPOINT_SERVICE_INVALID_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::XKS_PROXY_VPC_ENDPOINT_SERVICE_INVALID_CONFIGURATION), false);
  }
  else if (hashCode == XKS_PROXY_URI_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::XKS_PROXY_URI_IN_USE), false);
  }
  else if (hashCode == CLOUD_HSM_CLUSTER_INVALID_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::CLOUD_HSM_CLUSTER_INVALID_CONFIGURATION), false);
  }
  else if (hashCode == DEPENDENCY_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::DEPENDENCY_TIMEOUT), false);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == XKS_PROXY_VPC_ENDPOINT_SERVICE_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::XKS_PROXY_VPC_ENDPOINT_SERVICE_NOT_FOUND), false);
  }
  else if (hashCode == CUSTOM_KEY_STORE_NAME_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::CUSTOM_KEY_STORE_NAME_IN_USE), false);
  }
  else if (hashCode == TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::TAG), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::NOT_FOUND), false);
  }
  else if (hashCode == CLOUD_HSM_CLUSTER_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::CLOUD_HSM_CLUSTER_IN_USE), false);
  }
  else if (hashCode == XKS_PROXY_URI_ENDPOINT_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::XKS_PROXY_URI_ENDPOINT_IN_USE), false);
  }
  else if (hashCode == INVALID_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_ARN), false);
  }
  else if (hashCode == KEY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::KEY_UNAVAILABLE), false);
  }
  else if (hashCode == INVALID_CIPHERTEXT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_CIPHERTEXT), false);
  }
  else if (hashCode == XKS_KEY_ALREADY_IN_USE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::XKS_KEY_ALREADY_IN_USE), false);
  }
  else if (hashCode == K_M_S_INVALID_SIGNATURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::K_M_S_INVALID_SIGNATURE), false);
  }
  else if (hashCode == CUSTOM_KEY_STORE_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::CUSTOM_KEY_STORE_INVALID_STATE), false);
  }
  else if (hashCode == XKS_PROXY_INVALID_CONFIGURATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::XKS_PROXY_INVALID_CONFIGURATION), false);
  }
  else if (hashCode == EXPIRED_IMPORT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::EXPIRED_IMPORT_TOKEN), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KMSErrorMapper
} // namespace KMS
} // namespace Aws
