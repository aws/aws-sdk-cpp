/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/RetrieveResultItem.h>
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
namespace kendra
{
namespace Model
{
  class RetrieveResult
  {
  public:
    AWS_KENDRA_API RetrieveResult();
    AWS_KENDRA_API RetrieveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API RetrieveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of query used for the search. You also use
     * <code>QueryId</code> to identify the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">Submitfeedback</a>
     * API.</p>
     */
    inline const Aws::String& GetQueryId() const{ return m_queryId; }

    /**
     * <p>The identifier of query used for the search. You also use
     * <code>QueryId</code> to identify the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">Submitfeedback</a>
     * API.</p>
     */
    inline void SetQueryId(const Aws::String& value) { m_queryId = value; }

    /**
     * <p>The identifier of query used for the search. You also use
     * <code>QueryId</code> to identify the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">Submitfeedback</a>
     * API.</p>
     */
    inline void SetQueryId(Aws::String&& value) { m_queryId = std::move(value); }

    /**
     * <p>The identifier of query used for the search. You also use
     * <code>QueryId</code> to identify the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">Submitfeedback</a>
     * API.</p>
     */
    inline void SetQueryId(const char* value) { m_queryId.assign(value); }

    /**
     * <p>The identifier of query used for the search. You also use
     * <code>QueryId</code> to identify the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">Submitfeedback</a>
     * API.</p>
     */
    inline RetrieveResult& WithQueryId(const Aws::String& value) { SetQueryId(value); return *this;}

    /**
     * <p>The identifier of query used for the search. You also use
     * <code>QueryId</code> to identify the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">Submitfeedback</a>
     * API.</p>
     */
    inline RetrieveResult& WithQueryId(Aws::String&& value) { SetQueryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of query used for the search. You also use
     * <code>QueryId</code> to identify the search when using the <a
     * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_SubmitFeedback.html">Submitfeedback</a>
     * API.</p>
     */
    inline RetrieveResult& WithQueryId(const char* value) { SetQueryId(value); return *this;}


    /**
     * <p>The results of the retrieved relevant passages for the search.</p>
     */
    inline const Aws::Vector<RetrieveResultItem>& GetResultItems() const{ return m_resultItems; }

    /**
     * <p>The results of the retrieved relevant passages for the search.</p>
     */
    inline void SetResultItems(const Aws::Vector<RetrieveResultItem>& value) { m_resultItems = value; }

    /**
     * <p>The results of the retrieved relevant passages for the search.</p>
     */
    inline void SetResultItems(Aws::Vector<RetrieveResultItem>&& value) { m_resultItems = std::move(value); }

    /**
     * <p>The results of the retrieved relevant passages for the search.</p>
     */
    inline RetrieveResult& WithResultItems(const Aws::Vector<RetrieveResultItem>& value) { SetResultItems(value); return *this;}

    /**
     * <p>The results of the retrieved relevant passages for the search.</p>
     */
    inline RetrieveResult& WithResultItems(Aws::Vector<RetrieveResultItem>&& value) { SetResultItems(std::move(value)); return *this;}

    /**
     * <p>The results of the retrieved relevant passages for the search.</p>
     */
    inline RetrieveResult& AddResultItems(const RetrieveResultItem& value) { m_resultItems.push_back(value); return *this; }

    /**
     * <p>The results of the retrieved relevant passages for the search.</p>
     */
    inline RetrieveResult& AddResultItems(RetrieveResultItem&& value) { m_resultItems.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RetrieveResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RetrieveResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RetrieveResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_queryId;

    Aws::Vector<RetrieveResultItem> m_resultItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
