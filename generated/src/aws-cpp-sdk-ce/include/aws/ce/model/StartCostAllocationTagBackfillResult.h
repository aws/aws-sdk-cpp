/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/CostAllocationTagBackfillRequest.h>
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
namespace CostExplorer
{
namespace Model
{
  class StartCostAllocationTagBackfillResult
  {
  public:
    AWS_COSTEXPLORER_API StartCostAllocationTagBackfillResult();
    AWS_COSTEXPLORER_API StartCostAllocationTagBackfillResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API StartCostAllocationTagBackfillResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An object containing detailed metadata of your new backfill request. </p>
     */
    inline const CostAllocationTagBackfillRequest& GetBackfillRequest() const{ return m_backfillRequest; }

    /**
     * <p> An object containing detailed metadata of your new backfill request. </p>
     */
    inline void SetBackfillRequest(const CostAllocationTagBackfillRequest& value) { m_backfillRequest = value; }

    /**
     * <p> An object containing detailed metadata of your new backfill request. </p>
     */
    inline void SetBackfillRequest(CostAllocationTagBackfillRequest&& value) { m_backfillRequest = std::move(value); }

    /**
     * <p> An object containing detailed metadata of your new backfill request. </p>
     */
    inline StartCostAllocationTagBackfillResult& WithBackfillRequest(const CostAllocationTagBackfillRequest& value) { SetBackfillRequest(value); return *this;}

    /**
     * <p> An object containing detailed metadata of your new backfill request. </p>
     */
    inline StartCostAllocationTagBackfillResult& WithBackfillRequest(CostAllocationTagBackfillRequest&& value) { SetBackfillRequest(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartCostAllocationTagBackfillResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartCostAllocationTagBackfillResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartCostAllocationTagBackfillResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CostAllocationTagBackfillRequest m_backfillRequest;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
