/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/KmsConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BedrockAgentCoreControl
{
namespace Model
{
  class GetTokenVaultResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API GetTokenVaultResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API GetTokenVaultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API GetTokenVaultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the token vault.</p>
     */
    inline const Aws::String& GetTokenVaultId() const { return m_tokenVaultId; }
    template<typename TokenVaultIdT = Aws::String>
    void SetTokenVaultId(TokenVaultIdT&& value) { m_tokenVaultIdHasBeenSet = true; m_tokenVaultId = std::forward<TokenVaultIdT>(value); }
    template<typename TokenVaultIdT = Aws::String>
    GetTokenVaultResult& WithTokenVaultId(TokenVaultIdT&& value) { SetTokenVaultId(std::forward<TokenVaultIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS configuration for the token vault.</p>
     */
    inline const KmsConfiguration& GetKmsConfiguration() const { return m_kmsConfiguration; }
    template<typename KmsConfigurationT = KmsConfiguration>
    void SetKmsConfiguration(KmsConfigurationT&& value) { m_kmsConfigurationHasBeenSet = true; m_kmsConfiguration = std::forward<KmsConfigurationT>(value); }
    template<typename KmsConfigurationT = KmsConfiguration>
    GetTokenVaultResult& WithKmsConfiguration(KmsConfigurationT&& value) { SetKmsConfiguration(std::forward<KmsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the token vault was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    GetTokenVaultResult& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTokenVaultResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tokenVaultId;
    bool m_tokenVaultIdHasBeenSet = false;

    KmsConfiguration m_kmsConfiguration;
    bool m_kmsConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
