/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class BatchGetTracesRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API BatchGetTracesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetTraces"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    /**
     * <p>Specify the trace IDs of requests for which to retrieve segments.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTraceIds() const{ return m_traceIds; }

    /**
     * <p>Specify the trace IDs of requests for which to retrieve segments.</p>
     */
    inline bool TraceIdsHasBeenSet() const { return m_traceIdsHasBeenSet; }

    /**
     * <p>Specify the trace IDs of requests for which to retrieve segments.</p>
     */
    inline void SetTraceIds(const Aws::Vector<Aws::String>& value) { m_traceIdsHasBeenSet = true; m_traceIds = value; }

    /**
     * <p>Specify the trace IDs of requests for which to retrieve segments.</p>
     */
    inline void SetTraceIds(Aws::Vector<Aws::String>&& value) { m_traceIdsHasBeenSet = true; m_traceIds = std::move(value); }

    /**
     * <p>Specify the trace IDs of requests for which to retrieve segments.</p>
     */
    inline BatchGetTracesRequest& WithTraceIds(const Aws::Vector<Aws::String>& value) { SetTraceIds(value); return *this;}

    /**
     * <p>Specify the trace IDs of requests for which to retrieve segments.</p>
     */
    inline BatchGetTracesRequest& WithTraceIds(Aws::Vector<Aws::String>&& value) { SetTraceIds(std::move(value)); return *this;}

    /**
     * <p>Specify the trace IDs of requests for which to retrieve segments.</p>
     */
    inline BatchGetTracesRequest& AddTraceIds(const Aws::String& value) { m_traceIdsHasBeenSet = true; m_traceIds.push_back(value); return *this; }

    /**
     * <p>Specify the trace IDs of requests for which to retrieve segments.</p>
     */
    inline BatchGetTracesRequest& AddTraceIds(Aws::String&& value) { m_traceIdsHasBeenSet = true; m_traceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specify the trace IDs of requests for which to retrieve segments.</p>
     */
    inline BatchGetTracesRequest& AddTraceIds(const char* value) { m_traceIdsHasBeenSet = true; m_traceIds.push_back(value); return *this; }


    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline BatchGetTracesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline BatchGetTracesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline BatchGetTracesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_traceIds;
    bool m_traceIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
