/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/CertificateProviderOperation.h>
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
  class DescribeCertificateProviderResult
  {
  public:
    AWS_IOT_API DescribeCertificateProviderResult();
    AWS_IOT_API DescribeCertificateProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeCertificateProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeCertificateProviderResult& WithCertificateProviderName(const Aws::String& value) { SetCertificateProviderName(value); return *this;}

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline DescribeCertificateProviderResult& WithCertificateProviderName(Aws::String&& value) { SetCertificateProviderName(std::move(value)); return *this;}

    /**
     * <p>The name of the certificate provider.</p>
     */
    inline DescribeCertificateProviderResult& WithCertificateProviderName(const char* value) { SetCertificateProviderName(value); return *this;}


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
    inline DescribeCertificateProviderResult& WithCertificateProviderArn(const Aws::String& value) { SetCertificateProviderArn(value); return *this;}

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline DescribeCertificateProviderResult& WithCertificateProviderArn(Aws::String&& value) { SetCertificateProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the certificate provider.</p>
     */
    inline DescribeCertificateProviderResult& WithCertificateProviderArn(const char* value) { SetCertificateProviderArn(value); return *this;}


    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline const Aws::String& GetLambdaFunctionArn() const{ return m_lambdaFunctionArn; }

    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline void SetLambdaFunctionArn(const Aws::String& value) { m_lambdaFunctionArn = value; }

    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline void SetLambdaFunctionArn(Aws::String&& value) { m_lambdaFunctionArn = std::move(value); }

    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline void SetLambdaFunctionArn(const char* value) { m_lambdaFunctionArn.assign(value); }

    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline DescribeCertificateProviderResult& WithLambdaFunctionArn(const Aws::String& value) { SetLambdaFunctionArn(value); return *this;}

    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline DescribeCertificateProviderResult& WithLambdaFunctionArn(Aws::String&& value) { SetLambdaFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The Lambda function ARN that's associated with the certificate provider.</p>
     */
    inline DescribeCertificateProviderResult& WithLambdaFunctionArn(const char* value) { SetLambdaFunctionArn(value); return *this;}


    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline const Aws::Vector<CertificateProviderOperation>& GetAccountDefaultForOperations() const{ return m_accountDefaultForOperations; }

    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline void SetAccountDefaultForOperations(const Aws::Vector<CertificateProviderOperation>& value) { m_accountDefaultForOperations = value; }

    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline void SetAccountDefaultForOperations(Aws::Vector<CertificateProviderOperation>&& value) { m_accountDefaultForOperations = std::move(value); }

    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline DescribeCertificateProviderResult& WithAccountDefaultForOperations(const Aws::Vector<CertificateProviderOperation>& value) { SetAccountDefaultForOperations(value); return *this;}

    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline DescribeCertificateProviderResult& WithAccountDefaultForOperations(Aws::Vector<CertificateProviderOperation>&& value) { SetAccountDefaultForOperations(std::move(value)); return *this;}

    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline DescribeCertificateProviderResult& AddAccountDefaultForOperations(const CertificateProviderOperation& value) { m_accountDefaultForOperations.push_back(value); return *this; }

    /**
     * <p>A list of the operations that the certificate provider will use to generate
     * certificates. Valid value: <code>CreateCertificateFromCsr</code>.</p>
     */
    inline DescribeCertificateProviderResult& AddAccountDefaultForOperations(CertificateProviderOperation&& value) { m_accountDefaultForOperations.push_back(std::move(value)); return *this; }


    /**
     * <p>The date-time string that indicates when the certificate provider was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date-time string that indicates when the certificate provider was
     * created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date-time string that indicates when the certificate provider was
     * created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date-time string that indicates when the certificate provider was
     * created.</p>
     */
    inline DescribeCertificateProviderResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date-time string that indicates when the certificate provider was
     * created.</p>
     */
    inline DescribeCertificateProviderResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date-time string that indicates when the certificate provider was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date-time string that indicates when the certificate provider was last
     * updated.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDate = value; }

    /**
     * <p>The date-time string that indicates when the certificate provider was last
     * updated.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date-time string that indicates when the certificate provider was last
     * updated.</p>
     */
    inline DescribeCertificateProviderResult& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date-time string that indicates when the certificate provider was last
     * updated.</p>
     */
    inline DescribeCertificateProviderResult& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeCertificateProviderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeCertificateProviderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeCertificateProviderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_certificateProviderName;

    Aws::String m_certificateProviderArn;

    Aws::String m_lambdaFunctionArn;

    Aws::Vector<CertificateProviderOperation> m_accountDefaultForOperations;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModifiedDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
