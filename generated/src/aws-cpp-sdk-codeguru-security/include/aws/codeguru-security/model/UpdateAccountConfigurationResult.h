/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/model/EncryptionConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeGuruSecurity
{
namespace Model
{
  class UpdateAccountConfigurationResult
  {
  public:
    AWS_CODEGURUSECURITY_API UpdateAccountConfigurationResult() = default;
    AWS_CODEGURUSECURITY_API UpdateAccountConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API UpdateAccountConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An <code>EncryptionConfig</code> object that contains the KMS key ARN that is
     * used for encryption. If you did not specify a customer-managed KMS key in the
     * request, returns empty. </p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const { return m_encryptionConfig; }
    template<typename EncryptionConfigT = EncryptionConfig>
    void SetEncryptionConfig(EncryptionConfigT&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::forward<EncryptionConfigT>(value); }
    template<typename EncryptionConfigT = EncryptionConfig>
    UpdateAccountConfigurationResult& WithEncryptionConfig(EncryptionConfigT&& value) { SetEncryptionConfig(std::forward<EncryptionConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAccountConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
