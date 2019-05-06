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
  class AWS_XRAY_API PutTraceSegmentsRequest : public XRayRequest
  {
  public:
    PutTraceSegmentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutTraceSegments"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A string containing a JSON document defining one or more segments or
     * subsegments.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTraceSegmentDocuments() const{ return m_traceSegmentDocuments; }

    /**
     * <p>A string containing a JSON document defining one or more segments or
     * subsegments.</p>
     */
    inline bool TraceSegmentDocumentsHasBeenSet() const { return m_traceSegmentDocumentsHasBeenSet; }

    /**
     * <p>A string containing a JSON document defining one or more segments or
     * subsegments.</p>
     */
    inline void SetTraceSegmentDocuments(const Aws::Vector<Aws::String>& value) { m_traceSegmentDocumentsHasBeenSet = true; m_traceSegmentDocuments = value; }

    /**
     * <p>A string containing a JSON document defining one or more segments or
     * subsegments.</p>
     */
    inline void SetTraceSegmentDocuments(Aws::Vector<Aws::String>&& value) { m_traceSegmentDocumentsHasBeenSet = true; m_traceSegmentDocuments = std::move(value); }

    /**
     * <p>A string containing a JSON document defining one or more segments or
     * subsegments.</p>
     */
    inline PutTraceSegmentsRequest& WithTraceSegmentDocuments(const Aws::Vector<Aws::String>& value) { SetTraceSegmentDocuments(value); return *this;}

    /**
     * <p>A string containing a JSON document defining one or more segments or
     * subsegments.</p>
     */
    inline PutTraceSegmentsRequest& WithTraceSegmentDocuments(Aws::Vector<Aws::String>&& value) { SetTraceSegmentDocuments(std::move(value)); return *this;}

    /**
     * <p>A string containing a JSON document defining one or more segments or
     * subsegments.</p>
     */
    inline PutTraceSegmentsRequest& AddTraceSegmentDocuments(const Aws::String& value) { m_traceSegmentDocumentsHasBeenSet = true; m_traceSegmentDocuments.push_back(value); return *this; }

    /**
     * <p>A string containing a JSON document defining one or more segments or
     * subsegments.</p>
     */
    inline PutTraceSegmentsRequest& AddTraceSegmentDocuments(Aws::String&& value) { m_traceSegmentDocumentsHasBeenSet = true; m_traceSegmentDocuments.push_back(std::move(value)); return *this; }

    /**
     * <p>A string containing a JSON document defining one or more segments or
     * subsegments.</p>
     */
    inline PutTraceSegmentsRequest& AddTraceSegmentDocuments(const char* value) { m_traceSegmentDocumentsHasBeenSet = true; m_traceSegmentDocuments.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_traceSegmentDocuments;
    bool m_traceSegmentDocumentsHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
