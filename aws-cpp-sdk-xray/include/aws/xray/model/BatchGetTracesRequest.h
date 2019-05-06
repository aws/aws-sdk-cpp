/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_XRAY_API BatchGetTracesRequest : public XRayRequest
  {
  public:
    BatchGetTracesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetTraces"; }

    Aws::String SerializePayload() const override;


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
     * <p>Pagination token. Not used.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline BatchGetTracesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline BatchGetTracesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline BatchGetTracesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_traceIds;
    bool m_traceIdsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
