/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/CapabilitySummary.h>
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
  class ListCapabilitiesResult
  {
  public:
    AWS_B2BI_API ListCapabilitiesResult();
    AWS_B2BI_API ListCapabilitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API ListCapabilitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline const Aws::Vector<CapabilitySummary>& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline void SetCapabilities(const Aws::Vector<CapabilitySummary>& value) { m_capabilities = value; }

    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline void SetCapabilities(Aws::Vector<CapabilitySummary>&& value) { m_capabilities = std::move(value); }

    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline ListCapabilitiesResult& WithCapabilities(const Aws::Vector<CapabilitySummary>& value) { SetCapabilities(value); return *this;}

    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline ListCapabilitiesResult& WithCapabilities(Aws::Vector<CapabilitySummary>&& value) { SetCapabilities(std::move(value)); return *this;}

    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline ListCapabilitiesResult& AddCapabilities(const CapabilitySummary& value) { m_capabilities.push_back(value); return *this; }

    /**
     * <p>Returns one or more capabilities associated with this partnership.</p>
     */
    inline ListCapabilitiesResult& AddCapabilities(CapabilitySummary&& value) { m_capabilities.push_back(std::move(value)); return *this; }


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
    inline ListCapabilitiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline ListCapabilitiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline ListCapabilitiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCapabilitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCapabilitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCapabilitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CapabilitySummary> m_capabilities;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
