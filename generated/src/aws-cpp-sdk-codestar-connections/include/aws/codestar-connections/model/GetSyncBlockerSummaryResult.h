/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/model/SyncBlockerSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class GetSyncBlockerSummaryResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API GetSyncBlockerSummaryResult();
    AWS_CODESTARCONNECTIONS_API GetSyncBlockerSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API GetSyncBlockerSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of sync blockers for a specified resource.</p>
     */
    inline const SyncBlockerSummary& GetSyncBlockerSummary() const{ return m_syncBlockerSummary; }

    /**
     * <p>The list of sync blockers for a specified resource.</p>
     */
    inline void SetSyncBlockerSummary(const SyncBlockerSummary& value) { m_syncBlockerSummary = value; }

    /**
     * <p>The list of sync blockers for a specified resource.</p>
     */
    inline void SetSyncBlockerSummary(SyncBlockerSummary&& value) { m_syncBlockerSummary = std::move(value); }

    /**
     * <p>The list of sync blockers for a specified resource.</p>
     */
    inline GetSyncBlockerSummaryResult& WithSyncBlockerSummary(const SyncBlockerSummary& value) { SetSyncBlockerSummary(value); return *this;}

    /**
     * <p>The list of sync blockers for a specified resource.</p>
     */
    inline GetSyncBlockerSummaryResult& WithSyncBlockerSummary(SyncBlockerSummary&& value) { SetSyncBlockerSummary(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSyncBlockerSummaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSyncBlockerSummaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSyncBlockerSummaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SyncBlockerSummary m_syncBlockerSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
