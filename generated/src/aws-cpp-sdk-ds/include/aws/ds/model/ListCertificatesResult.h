﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/CertificateInfo.h>
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
namespace DirectoryService
{
namespace Model
{
  class ListCertificatesResult
  {
  public:
    AWS_DIRECTORYSERVICE_API ListCertificatesResult();
    AWS_DIRECTORYSERVICE_API ListCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API ListCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether another page of certificates is available when the number
     * of available certificates exceeds the page limit.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCertificatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCertificatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCertificatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of certificates with basic details including certificate ID,
     * certificate common name, certificate state.</p>
     */
    inline const Aws::Vector<CertificateInfo>& GetCertificatesInfo() const{ return m_certificatesInfo; }
    inline void SetCertificatesInfo(const Aws::Vector<CertificateInfo>& value) { m_certificatesInfo = value; }
    inline void SetCertificatesInfo(Aws::Vector<CertificateInfo>&& value) { m_certificatesInfo = std::move(value); }
    inline ListCertificatesResult& WithCertificatesInfo(const Aws::Vector<CertificateInfo>& value) { SetCertificatesInfo(value); return *this;}
    inline ListCertificatesResult& WithCertificatesInfo(Aws::Vector<CertificateInfo>&& value) { SetCertificatesInfo(std::move(value)); return *this;}
    inline ListCertificatesResult& AddCertificatesInfo(const CertificateInfo& value) { m_certificatesInfo.push_back(value); return *this; }
    inline ListCertificatesResult& AddCertificatesInfo(CertificateInfo&& value) { m_certificatesInfo.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCertificatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCertificatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCertificatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CertificateInfo> m_certificatesInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
