/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  /**
   * <p>Response from Amazon Cognito for a signing certificate request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetSigningCertificateResponse">AWS
   * API Reference</a></p>
   */
  class GetSigningCertificateResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetSigningCertificateResult();
    AWS_COGNITOIDENTITYPROVIDER_API GetSigningCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetSigningCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The signing certificate.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }
    inline void SetCertificate(const Aws::String& value) { m_certificate = value; }
    inline void SetCertificate(Aws::String&& value) { m_certificate = std::move(value); }
    inline void SetCertificate(const char* value) { m_certificate.assign(value); }
    inline GetSigningCertificateResult& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}
    inline GetSigningCertificateResult& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}
    inline GetSigningCertificateResult& WithCertificate(const char* value) { SetCertificate(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSigningCertificateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSigningCertificateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSigningCertificateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_certificate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
