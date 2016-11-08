/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for ListPipelines.</p>
   */
  class AWS_DATAPIPELINE_API ListPipelinesRequest : public DataPipelineRequest
  {
  public:
    ListPipelinesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>ListPipelines</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>ListPipelines</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>ListPipelines</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>ListPipelines</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>ListPipelines</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline ListPipelinesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>ListPipelines</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline ListPipelinesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>ListPipelines</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline ListPipelinesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
