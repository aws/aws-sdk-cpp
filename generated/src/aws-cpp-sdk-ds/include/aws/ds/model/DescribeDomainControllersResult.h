﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/DomainController.h>
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
  class DescribeDomainControllersResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeDomainControllersResult();
    AWS_DIRECTORYSERVICE_API DescribeDomainControllersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeDomainControllersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of the <a>DomainController</a> objects that were retrieved.</p>
     */
    inline const Aws::Vector<DomainController>& GetDomainControllers() const{ return m_domainControllers; }
    inline void SetDomainControllers(const Aws::Vector<DomainController>& value) { m_domainControllers = value; }
    inline void SetDomainControllers(Aws::Vector<DomainController>&& value) { m_domainControllers = std::move(value); }
    inline DescribeDomainControllersResult& WithDomainControllers(const Aws::Vector<DomainController>& value) { SetDomainControllers(value); return *this;}
    inline DescribeDomainControllersResult& WithDomainControllers(Aws::Vector<DomainController>&& value) { SetDomainControllers(std::move(value)); return *this;}
    inline DescribeDomainControllersResult& AddDomainControllers(const DomainController& value) { m_domainControllers.push_back(value); return *this; }
    inline DescribeDomainControllersResult& AddDomainControllers(DomainController&& value) { m_domainControllers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If not null, more results are available. Pass this value for the
     * <code>NextToken</code> parameter in a subsequent call to
     * <a>DescribeDomainControllers</a> retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeDomainControllersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDomainControllersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDomainControllersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDomainControllersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDomainControllersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDomainControllersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DomainController> m_domainControllers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
