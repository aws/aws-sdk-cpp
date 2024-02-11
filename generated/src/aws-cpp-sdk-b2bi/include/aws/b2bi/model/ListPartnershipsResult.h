/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/PartnershipSummary.h>
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
namespace B2BI
{
namespace Model
{
  class ListPartnershipsResult
  {
  public:
    AWS_B2BI_API ListPartnershipsResult();
    AWS_B2BI_API ListPartnershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API ListPartnershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies a list of your partnerships.</p>
     */
    inline const Aws::Vector<PartnershipSummary>& GetPartnerships() const{ return m_partnerships; }

    /**
     * <p>Specifies a list of your partnerships.</p>
     */
    inline void SetPartnerships(const Aws::Vector<PartnershipSummary>& value) { m_partnerships = value; }

    /**
     * <p>Specifies a list of your partnerships.</p>
     */
    inline void SetPartnerships(Aws::Vector<PartnershipSummary>&& value) { m_partnerships = std::move(value); }

    /**
     * <p>Specifies a list of your partnerships.</p>
     */
    inline ListPartnershipsResult& WithPartnerships(const Aws::Vector<PartnershipSummary>& value) { SetPartnerships(value); return *this;}

    /**
     * <p>Specifies a list of your partnerships.</p>
     */
    inline ListPartnershipsResult& WithPartnerships(Aws::Vector<PartnershipSummary>&& value) { SetPartnerships(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of your partnerships.</p>
     */
    inline ListPartnershipsResult& AddPartnerships(const PartnershipSummary& value) { m_partnerships.push_back(value); return *this; }

    /**
     * <p>Specifies a list of your partnerships.</p>
     */
    inline ListPartnershipsResult& AddPartnerships(PartnershipSummary&& value) { m_partnerships.push_back(std::move(value)); return *this; }


    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline ListPartnershipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline ListPartnershipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline ListPartnershipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPartnershipsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPartnershipsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPartnershipsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PartnershipSummary> m_partnerships;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
