/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LakeFormation
{
namespace Model
{
  class GetTemporaryGlueTableCredentialsResult
  {
  public:
    AWS_LAKEFORMATION_API GetTemporaryGlueTableCredentialsResult() = default;
    AWS_LAKEFORMATION_API GetTemporaryGlueTableCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API GetTemporaryGlueTableCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The access key ID for the temporary credentials.</p>
     */
    inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
    template<typename AccessKeyIdT = Aws::String>
    void SetAccessKeyId(AccessKeyIdT&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::forward<AccessKeyIdT>(value); }
    template<typename AccessKeyIdT = Aws::String>
    GetTemporaryGlueTableCredentialsResult& WithAccessKeyId(AccessKeyIdT&& value) { SetAccessKeyId(std::forward<AccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret key for the temporary credentials.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const { return m_secretAccessKey; }
    template<typename SecretAccessKeyT = Aws::String>
    void SetSecretAccessKey(SecretAccessKeyT&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::forward<SecretAccessKeyT>(value); }
    template<typename SecretAccessKeyT = Aws::String>
    GetTemporaryGlueTableCredentialsResult& WithSecretAccessKey(SecretAccessKeyT&& value) { SetSecretAccessKey(std::forward<SecretAccessKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session token for the temporary credentials.</p>
     */
    inline const Aws::String& GetSessionToken() const { return m_sessionToken; }
    template<typename SessionTokenT = Aws::String>
    void SetSessionToken(SessionTokenT&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::forward<SessionTokenT>(value); }
    template<typename SessionTokenT = Aws::String>
    GetTemporaryGlueTableCredentialsResult& WithSessionToken(SessionTokenT&& value) { SetSessionToken(std::forward<SessionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the temporary credentials expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
    template<typename ExpirationT = Aws::Utils::DateTime>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::Utils::DateTime>
    GetTemporaryGlueTableCredentialsResult& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path for the temporary credentials.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVendedS3Path() const { return m_vendedS3Path; }
    template<typename VendedS3PathT = Aws::Vector<Aws::String>>
    void SetVendedS3Path(VendedS3PathT&& value) { m_vendedS3PathHasBeenSet = true; m_vendedS3Path = std::forward<VendedS3PathT>(value); }
    template<typename VendedS3PathT = Aws::Vector<Aws::String>>
    GetTemporaryGlueTableCredentialsResult& WithVendedS3Path(VendedS3PathT&& value) { SetVendedS3Path(std::forward<VendedS3PathT>(value)); return *this;}
    template<typename VendedS3PathT = Aws::String>
    GetTemporaryGlueTableCredentialsResult& AddVendedS3Path(VendedS3PathT&& value) { m_vendedS3PathHasBeenSet = true; m_vendedS3Path.emplace_back(std::forward<VendedS3PathT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTemporaryGlueTableCredentialsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;

    Aws::Utils::DateTime m_expiration{};
    bool m_expirationHasBeenSet = false;

    Aws::Vector<Aws::String> m_vendedS3Path;
    bool m_vendedS3PathHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
