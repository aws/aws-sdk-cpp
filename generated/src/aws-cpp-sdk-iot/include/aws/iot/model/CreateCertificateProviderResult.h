/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class CreateCertificateProviderResult
  {
  public:
    AWS_IOT_API CreateCertificateProviderResult();
    AWS_IOT_API CreateCertificateProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateCertificateProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderName() const{ return m_certificateProviderName; }
    inline void SetCertificateProviderName(const Aws::String& value) { m_certificateProviderName = value; }
    inline void SetCertificateProviderName(Aws::String&& value) { m_certificateProviderName = std::move(value); }
    inline void SetCertificateProviderName(const char* value) { m_certificateProviderName.assign(value); }
    inline CreateCertificateProviderResult& WithCertificateProviderName(const Aws::String& value) { SetCertificateProviderName(value); return *this;}
    inline CreateCertificateProviderResult& WithCertificateProviderName(Aws::String&& value) { SetCertificateProviderName(std::move(value)); return *this;}
    inline CreateCertificateProviderResult& WithCertificateProviderName(const char* value) { SetCertificateProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderArn() const{ return m_certificateProviderArn; }
    inline void SetCertificateProviderArn(const Aws::String& value) { m_certificateProviderArn = value; }
    inline void SetCertificateProviderArn(Aws::String&& value) { m_certificateProviderArn = std::move(value); }
    inline void SetCertificateProviderArn(const char* value) { m_certificateProviderArn.assign(value); }
    inline CreateCertificateProviderResult& WithCertificateProviderArn(const Aws::String& value) { SetCertificateProviderArn(value); return *this;}
    inline CreateCertificateProviderResult& WithCertificateProviderArn(Aws::String&& value) { SetCertificateProviderArn(std::move(value)); return *this;}
    inline CreateCertificateProviderResult& WithCertificateProviderArn(const char* value) { SetCertificateProviderArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateCertificateProviderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateCertificateProviderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateCertificateProviderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateProviderName;

    Aws::String m_certificateProviderArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
