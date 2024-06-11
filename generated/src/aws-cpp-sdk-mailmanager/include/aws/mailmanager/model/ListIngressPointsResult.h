/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/IngressPoint.h>
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
namespace MailManager
{
namespace Model
{
  class ListIngressPointsResult
  {
  public:
    AWS_MAILMANAGER_API ListIngressPointsResult();
    AWS_MAILMANAGER_API ListIngressPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API ListIngressPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of ingress endpoints.</p>
     */
    inline const Aws::Vector<IngressPoint>& GetIngressPoints() const{ return m_ingressPoints; }
    inline void SetIngressPoints(const Aws::Vector<IngressPoint>& value) { m_ingressPoints = value; }
    inline void SetIngressPoints(Aws::Vector<IngressPoint>&& value) { m_ingressPoints = std::move(value); }
    inline ListIngressPointsResult& WithIngressPoints(const Aws::Vector<IngressPoint>& value) { SetIngressPoints(value); return *this;}
    inline ListIngressPointsResult& WithIngressPoints(Aws::Vector<IngressPoint>&& value) { SetIngressPoints(std::move(value)); return *this;}
    inline ListIngressPointsResult& AddIngressPoints(const IngressPoint& value) { m_ingressPoints.push_back(value); return *this; }
    inline ListIngressPointsResult& AddIngressPoints(IngressPoint&& value) { m_ingressPoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If NextToken is returned, there are more results available. The value of
     * NextToken is a unique pagination token for each page. Make the call again using
     * the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListIngressPointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIngressPointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIngressPointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListIngressPointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListIngressPointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListIngressPointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IngressPoint> m_ingressPoints;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
