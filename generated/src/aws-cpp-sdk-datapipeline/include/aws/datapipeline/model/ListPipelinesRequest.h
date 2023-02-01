/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for ListPipelines.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ListPipelinesInput">AWS
   * API Reference</a></p>
   */
  class ListPipelinesRequest : public DataPipelineRequest
  {
  public:
    AWS_DATAPIPELINE_API ListPipelinesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPipelines"; }

    AWS_DATAPIPELINE_API Aws::String SerializePayload() const override;

    AWS_DATAPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

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
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

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
    inline ListPipelinesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>ListPipelines</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline ListPipelinesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
