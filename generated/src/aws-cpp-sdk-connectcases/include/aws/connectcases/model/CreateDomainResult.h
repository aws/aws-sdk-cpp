﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/DomainStatus.h>
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
namespace ConnectCases
{
namespace Model
{
  class CreateDomainResult
  {
  public:
    AWS_CONNECTCASES_API CreateDomainResult();
    AWS_CONNECTCASES_API CreateDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API CreateDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the Cases domain.</p>
     */
    inline const Aws::String& GetDomainArn() const{ return m_domainArn; }
    inline void SetDomainArn(const Aws::String& value) { m_domainArn = value; }
    inline void SetDomainArn(Aws::String&& value) { m_domainArn = std::move(value); }
    inline void SetDomainArn(const char* value) { m_domainArn.assign(value); }
    inline CreateDomainResult& WithDomainArn(const Aws::String& value) { SetDomainArn(value); return *this;}
    inline CreateDomainResult& WithDomainArn(Aws::String&& value) { SetDomainArn(std::move(value)); return *this;}
    inline CreateDomainResult& WithDomainArn(const char* value) { SetDomainArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Cases domain. </p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline CreateDomainResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline CreateDomainResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline CreateDomainResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the domain.</p>
     */
    inline const DomainStatus& GetDomainStatus() const{ return m_domainStatus; }
    inline void SetDomainStatus(const DomainStatus& value) { m_domainStatus = value; }
    inline void SetDomainStatus(DomainStatus&& value) { m_domainStatus = std::move(value); }
    inline CreateDomainResult& WithDomainStatus(const DomainStatus& value) { SetDomainStatus(value); return *this;}
    inline CreateDomainResult& WithDomainStatus(DomainStatus&& value) { SetDomainStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainArn;

    Aws::String m_domainId;

    DomainStatus m_domainStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
