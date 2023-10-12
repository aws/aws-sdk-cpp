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

static constexpr uint32_t CLOUD_HSM_CLUSTER_NOT_ACTIVE_HASH = ConstExprHashingUtils::HashString("CloudHsmClusterNotActiveException");
static constexpr uint32_t INCORRECT_TRUST_ANCHOR_HASH = ConstExprHashingUtils::HashString("IncorrectTrustAnchorException");
static constexpr uint32_t INVALID_GRANT_ID_HASH = ConstExprHashingUtils::HashString("InvalidGrantIdException");
static constexpr uint32_t XKS_PROXY_INVALID_RESPONSE_HASH = ConstExprHashingUtils::HashString("XksProxyInvalidResponseException");
static constexpr uint32_t INVALID_IMPORT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidImportTokenException");
static constexpr uint32_t K_M_S_INVALID_STATE_HASH = ConstExprHashingUtils::HashString("KMSInvalidStateException");
static constexpr uint32_t XKS_KEY_INVALID_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("XksKeyInvalidConfigurationException");
static constexpr uint32_t INVALID_KEY_USAGE_HASH = ConstExprHashingUtils::HashString("InvalidKeyUsageException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t INCORRECT_KEY_HASH = ConstExprHashingUtils::HashString("IncorrectKeyException");
static constexpr uint32_t CUSTOM_KEY_STORE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("CustomKeyStoreNotFoundException");
static constexpr uint32_t K_M_S_INTERNAL_HASH = ConstExprHashingUtils::HashString("KMSInternalException");
static constexpr uint32_t CLOUD_HSM_CLUSTER_NOT_RELATED_HASH = ConstExprHashingUtils::HashString("CloudHsmClusterNotRelatedException");
static constexpr uint32_t MALFORMED_POLICY_DOCUMENT_HASH = ConstExprHashingUtils::HashString("MalformedPolicyDocumentException");
static constexpr uint32_t INVALID_ALIAS_NAME_HASH = ConstExprHashingUtils::HashString("InvalidAliasNameException");
static constexpr uint32_t XKS_PROXY_URI_UNREACHABLE_HASH = ConstExprHashingUtils::HashString("XksProxyUriUnreachableException");
static constexpr uint32_t K_M_S_INVALID_MAC_HASH = ConstExprHashingUtils::HashString("KMSInvalidMacException");
static constexpr uint32_t XKS_PROXY_VPC_ENDPOINT_SERVICE_IN_USE_HASH = ConstExprHashingUtils::HashString("XksProxyVpcEndpointServiceInUseException");
static constexpr uint32_t XKS_PROXY_INCORRECT_AUTHENTICATION_CREDENTIAL_HASH = ConstExprHashingUtils::HashString("XksProxyIncorrectAuthenticationCredentialException");
static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DisabledException");
static constexpr uint32_t UNSUPPORTED_OPERATION_HASH = ConstExprHashingUtils::HashString("UnsupportedOperationException");
static constexpr uint32_t XKS_KEY_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("XksKeyNotFoundException");
static constexpr uint32_t CUSTOM_KEY_STORE_HAS_C_M_KS_HASH = ConstExprHashingUtils::HashString("CustomKeyStoreHasCMKsException");
static constexpr uint32_t CLOUD_HSM_CLUSTER_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("CloudHsmClusterNotFoundException");
static constexpr uint32_t INVALID_GRANT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidGrantTokenException");
static constexpr uint32_t INCORRECT_KEY_MATERIAL_HASH = ConstExprHashingUtils::HashString("IncorrectKeyMaterialException");
static constexpr uint32_t INVALID_MARKER_HASH = ConstExprHashingUtils::HashString("InvalidMarkerException");
static constexpr uint32_t XKS_PROXY_VPC_ENDPOINT_SERVICE_INVALID_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("XksProxyVpcEndpointServiceInvalidConfigurationException");
static constexpr uint32_t XKS_PROXY_URI_IN_USE_HASH = ConstExprHashingUtils::HashString("XksProxyUriInUseException");
static constexpr uint32_t CLOUD_HSM_CLUSTER_INVALID_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("CloudHsmClusterInvalidConfigurationException");
static constexpr uint32_t DEPENDENCY_TIMEOUT_HASH = ConstExprHashingUtils::HashString("DependencyTimeoutException");
static constexpr uint32_t ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("AlreadyExistsException");
static constexpr uint32_t XKS_PROXY_VPC_ENDPOINT_SERVICE_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("XksProxyVpcEndpointServiceNotFoundException");
static constexpr uint32_t CUSTOM_KEY_STORE_NAME_IN_USE_HASH = ConstExprHashingUtils::HashString("CustomKeyStoreNameInUseException");
static constexpr uint32_t TAG_HASH = ConstExprHashingUtils::HashString("TagException");
static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NotFoundException");
static constexpr uint32_t CLOUD_HSM_CLUSTER_IN_USE_HASH = ConstExprHashingUtils::HashString("CloudHsmClusterInUseException");
static constexpr uint32_t XKS_PROXY_URI_ENDPOINT_IN_USE_HASH = ConstExprHashingUtils::HashString("XksProxyUriEndpointInUseException");
static constexpr uint32_t INVALID_ARN_HASH = ConstExprHashingUtils::HashString("InvalidArnException");
static constexpr uint32_t KEY_UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("KeyUnavailableException");
static constexpr uint32_t INVALID_CIPHERTEXT_HASH = ConstExprHashingUtils::HashString("InvalidCiphertextException");
static constexpr uint32_t XKS_KEY_ALREADY_IN_USE_HASH = ConstExprHashingUtils::HashString("XksKeyAlreadyInUseException");
static constexpr uint32_t K_M_S_INVALID_SIGNATURE_HASH = ConstExprHashingUtils::HashString("KMSInvalidSignatureException");
static constexpr uint32_t CUSTOM_KEY_STORE_INVALID_STATE_HASH = ConstExprHashingUtils::HashString("CustomKeyStoreInvalidStateException");
static constexpr uint32_t DRY_RUN_OPERATION_HASH = ConstExprHashingUtils::HashString("DryRunOperationException");
static constexpr uint32_t XKS_PROXY_INVALID_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("XksProxyInvalidConfigurationException");
static constexpr uint32_t EXPIRED_IMPORT_TOKEN_HASH = ConstExprHashingUtils::HashString("ExpiredImportTokenException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
  else if (hashCode == DRY_RUN_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::DRY_RUN_OPERATION), false);
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
