/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/b2bi/model/TransformerSummary.h>
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
  class ListTransformersResult
  {
  public:
    AWS_B2BI_API ListTransformersResult();
    AWS_B2BI_API ListTransformersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API ListTransformersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns an array of one or more transformer objects.</p> <p>For each
     * transformer, a <code>TransformerSummary</code> object is returned. The
     * <code>TransformerSummary</code> contains all the details for a specific
     * transformer.</p>
     */
    inline const Aws::Vector<TransformerSummary>& GetTransformers() const{ return m_transformers; }

    /**
     * <p>Returns an array of one or more transformer objects.</p> <p>For each
     * transformer, a <code>TransformerSummary</code> object is returned. The
     * <code>TransformerSummary</code> contains all the details for a specific
     * transformer.</p>
     */
    inline void SetTransformers(const Aws::Vector<TransformerSummary>& value) { m_transformers = value; }

    /**
     * <p>Returns an array of one or more transformer objects.</p> <p>For each
     * transformer, a <code>TransformerSummary</code> object is returned. The
     * <code>TransformerSummary</code> contains all the details for a specific
     * transformer.</p>
     */
    inline void SetTransformers(Aws::Vector<TransformerSummary>&& value) { m_transformers = std::move(value); }

    /**
     * <p>Returns an array of one or more transformer objects.</p> <p>For each
     * transformer, a <code>TransformerSummary</code> object is returned. The
     * <code>TransformerSummary</code> contains all the details for a specific
     * transformer.</p>
     */
    inline ListTransformersResult& WithTransformers(const Aws::Vector<TransformerSummary>& value) { SetTransformers(value); return *this;}

    /**
     * <p>Returns an array of one or more transformer objects.</p> <p>For each
     * transformer, a <code>TransformerSummary</code> object is returned. The
     * <code>TransformerSummary</code> contains all the details for a specific
     * transformer.</p>
     */
    inline ListTransformersResult& WithTransformers(Aws::Vector<TransformerSummary>&& value) { SetTransformers(std::move(value)); return *this;}

    /**
     * <p>Returns an array of one or more transformer objects.</p> <p>For each
     * transformer, a <code>TransformerSummary</code> object is returned. The
     * <code>TransformerSummary</code> contains all the details for a specific
     * transformer.</p>
     */
    inline ListTransformersResult& AddTransformers(const TransformerSummary& value) { m_transformers.push_back(value); return *this; }

    /**
     * <p>Returns an array of one or more transformer objects.</p> <p>For each
     * transformer, a <code>TransformerSummary</code> object is returned. The
     * <code>TransformerSummary</code> contains all the details for a specific
     * transformer.</p>
     */
    inline ListTransformersResult& AddTransformers(TransformerSummary&& value) { m_transformers.push_back(std::move(value)); return *this; }


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
    inline ListTransformersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline ListTransformersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When additional results are obtained from the command, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass
     * the <code>NextToken</code> parameter in a subsequent command to continue listing
     * additional resources.</p>
     */
    inline ListTransformersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTransformersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTransformersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTransformersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<TransformerSummary> m_transformers;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
