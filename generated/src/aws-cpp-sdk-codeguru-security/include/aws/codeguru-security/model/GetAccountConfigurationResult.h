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
  class GetAccountConfigurationResult
  {
  public:
    AWS_CODEGURUSECURITY_API GetAccountConfigurationResult();
    AWS_CODEGURUSECURITY_API GetAccountConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUSECURITY_API GetAccountConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An <code>EncryptionConfig</code> object that contains the KMS key ARN to use
     * for encryption. By default, CodeGuru Security uses an AWS-managed key for
     * encryption. To specify your own key, call
     * <code>UpdateAccountConfiguration</code>.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    /**
     * <p>An <code>EncryptionConfig</code> object that contains the KMS key ARN to use
     * for encryption. By default, CodeGuru Security uses an AWS-managed key for
     * encryption. To specify your own key, call
     * <code>UpdateAccountConfiguration</code>.</p>
     */
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfig = value; }

    /**
     * <p>An <code>EncryptionConfig</code> object that contains the KMS key ARN to use
     * for encryption. By default, CodeGuru Security uses an AWS-managed key for
     * encryption. To specify your own key, call
     * <code>UpdateAccountConfiguration</code>.</p>
     */
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfig = std::move(value); }

    /**
     * <p>An <code>EncryptionConfig</code> object that contains the KMS key ARN to use
     * for encryption. By default, CodeGuru Security uses an AWS-managed key for
     * encryption. To specify your own key, call
     * <code>UpdateAccountConfiguration</code>.</p>
     */
    inline GetAccountConfigurationResult& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>An <code>EncryptionConfig</code> object that contains the KMS key ARN to use
     * for encryption. By default, CodeGuru Security uses an AWS-managed key for
     * encryption. To specify your own key, call
     * <code>UpdateAccountConfiguration</code>.</p>
     */
    inline GetAccountConfigurationResult& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAccountConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAccountConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAccountConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EncryptionConfig m_encryptionConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
