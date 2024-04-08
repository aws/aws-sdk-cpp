/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controlcatalog/model/CommonControlSummary.h>
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
namespace ControlCatalog
{
namespace Model
{
  class ListCommonControlsResult
  {
  public:
    AWS_CONTROLCATALOG_API ListCommonControlsResult();
    AWS_CONTROLCATALOG_API ListCommonControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLCATALOG_API ListCommonControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of common controls that the <code>ListCommonControls</code> API
     * returns.</p>
     */
    inline const Aws::Vector<CommonControlSummary>& GetCommonControls() const{ return m_commonControls; }

    /**
     * <p>The list of common controls that the <code>ListCommonControls</code> API
     * returns.</p>
     */
    inline void SetCommonControls(const Aws::Vector<CommonControlSummary>& value) { m_commonControls = value; }

    /**
     * <p>The list of common controls that the <code>ListCommonControls</code> API
     * returns.</p>
     */
    inline void SetCommonControls(Aws::Vector<CommonControlSummary>&& value) { m_commonControls = std::move(value); }

    /**
     * <p>The list of common controls that the <code>ListCommonControls</code> API
     * returns.</p>
     */
    inline ListCommonControlsResult& WithCommonControls(const Aws::Vector<CommonControlSummary>& value) { SetCommonControls(value); return *this;}

    /**
     * <p>The list of common controls that the <code>ListCommonControls</code> API
     * returns.</p>
     */
    inline ListCommonControlsResult& WithCommonControls(Aws::Vector<CommonControlSummary>&& value) { SetCommonControls(std::move(value)); return *this;}

    /**
     * <p>The list of common controls that the <code>ListCommonControls</code> API
     * returns.</p>
     */
    inline ListCommonControlsResult& AddCommonControls(const CommonControlSummary& value) { m_commonControls.push_back(value); return *this; }

    /**
     * <p>The list of common controls that the <code>ListCommonControls</code> API
     * returns.</p>
     */
    inline ListCommonControlsResult& AddCommonControls(CommonControlSummary&& value) { m_commonControls.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline ListCommonControlsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline ListCommonControlsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's used to fetch the next set of results.</p>
     */
    inline ListCommonControlsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCommonControlsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCommonControlsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCommonControlsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CommonControlSummary> m_commonControls;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
