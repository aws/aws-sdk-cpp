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
  class UpdateCertificateProviderResult
  {
  public:
    AWS_IOT_API UpdateCertificateProviderResult();
    AWS_IOT_API UpdateCertificateProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateCertificateProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderName() const{ return m_certificateProviderName; }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline void SetCertificateProviderName(const Aws::String& value) { m_certificateProviderName = value; }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline void SetCertificateProviderName(Aws::String&& value) { m_certificateProviderName = std::move(value); }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline void SetCertificateProviderName(const char* value) { m_certificateProviderName.assign(value); }

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline UpdateCertificateProviderResult& WithCertificateProviderName(const Aws::String& value) { SetCertificateProviderName(value); return *this;}

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline UpdateCertificateProviderResult& WithCertificateProviderName(Aws::String&& value) { SetCertificateProviderName(std::move(value)); return *this;}

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline UpdateCertificateProviderResult& WithCertificateProviderName(const char* value) { SetCertificateProviderName(value); return *this;}


    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline const Aws::String& GetCertificateProviderArn() const{ return m_certificateProviderArn; }

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline void SetCertificateProviderArn(const Aws::String& value) { m_certificateProviderArn = value; }

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline void SetCertificateProviderArn(Aws::String&& value) { m_certificateProviderArn = std::move(value); }

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline void SetCertificateProviderArn(const char* value) { m_certificateProviderArn.assign(value); }

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline UpdateCertificateProviderResult& WithCertificateProviderArn(const Aws::String& value) { SetCertificateProviderArn(value); return *this;}

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline UpdateCertificateProviderResult& WithCertificateProviderArn(Aws::String&& value) { SetCertificateProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline UpdateCertificateProviderResult& WithCertificateProviderArn(const char* value) { SetCertificateProviderArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateCertificateProviderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateCertificateProviderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateCertificateProviderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_certificateProviderName;

    Aws::String m_certificateProviderArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
