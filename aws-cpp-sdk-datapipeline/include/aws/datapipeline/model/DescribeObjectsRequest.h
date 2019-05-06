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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeObjects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribeObjectsInput">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API DescribeObjectsRequest : public DataPipelineRequest
  {
  public:
    DescribeObjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeObjects"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the pipeline that contains the object definitions.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p>The ID of the pipeline that contains the object definitions.</p>
     */
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }

    /**
     * <p>The ID of the pipeline that contains the object definitions.</p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline that contains the object definitions.</p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }

    /**
     * <p>The ID of the pipeline that contains the object definitions.</p>
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * <p>The ID of the pipeline that contains the object definitions.</p>
     */
    inline DescribeObjectsRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline that contains the object definitions.</p>
     */
    inline DescribeObjectsRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pipeline that contains the object definitions.</p>
     */
    inline DescribeObjectsRequest& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}


    /**
     * <p>The IDs of the pipeline objects that contain the definitions to be described.
     * You can pass as many as 25 identifiers in a single call to
     * <code>DescribeObjects</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectIds() const{ return m_objectIds; }

    /**
     * <p>The IDs of the pipeline objects that contain the definitions to be described.
     * You can pass as many as 25 identifiers in a single call to
     * <code>DescribeObjects</code>.</p>
     */
    inline bool ObjectIdsHasBeenSet() const { return m_objectIdsHasBeenSet; }

    /**
     * <p>The IDs of the pipeline objects that contain the definitions to be described.
     * You can pass as many as 25 identifiers in a single call to
     * <code>DescribeObjects</code>.</p>
     */
    inline void SetObjectIds(const Aws::Vector<Aws::String>& value) { m_objectIdsHasBeenSet = true; m_objectIds = value; }

    /**
     * <p>The IDs of the pipeline objects that contain the definitions to be described.
     * You can pass as many as 25 identifiers in a single call to
     * <code>DescribeObjects</code>.</p>
     */
    inline void SetObjectIds(Aws::Vector<Aws::String>&& value) { m_objectIdsHasBeenSet = true; m_objectIds = std::move(value); }

    /**
     * <p>The IDs of the pipeline objects that contain the definitions to be described.
     * You can pass as many as 25 identifiers in a single call to
     * <code>DescribeObjects</code>.</p>
     */
    inline DescribeObjectsRequest& WithObjectIds(const Aws::Vector<Aws::String>& value) { SetObjectIds(value); return *this;}

    /**
     * <p>The IDs of the pipeline objects that contain the definitions to be described.
     * You can pass as many as 25 identifiers in a single call to
     * <code>DescribeObjects</code>.</p>
     */
    inline DescribeObjectsRequest& WithObjectIds(Aws::Vector<Aws::String>&& value) { SetObjectIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the pipeline objects that contain the definitions to be described.
     * You can pass as many as 25 identifiers in a single call to
     * <code>DescribeObjects</code>.</p>
     */
    inline DescribeObjectsRequest& AddObjectIds(const Aws::String& value) { m_objectIdsHasBeenSet = true; m_objectIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the pipeline objects that contain the definitions to be described.
     * You can pass as many as 25 identifiers in a single call to
     * <code>DescribeObjects</code>.</p>
     */
    inline DescribeObjectsRequest& AddObjectIds(Aws::String&& value) { m_objectIdsHasBeenSet = true; m_objectIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the pipeline objects that contain the definitions to be described.
     * You can pass as many as 25 identifiers in a single call to
     * <code>DescribeObjects</code>.</p>
     */
    inline DescribeObjectsRequest& AddObjectIds(const char* value) { m_objectIdsHasBeenSet = true; m_objectIds.push_back(value); return *this; }


    /**
     * <p>Indicates whether any expressions in the object should be evaluated when the
     * object descriptions are returned.</p>
     */
    inline bool GetEvaluateExpressions() const{ return m_evaluateExpressions; }

    /**
     * <p>Indicates whether any expressions in the object should be evaluated when the
     * object descriptions are returned.</p>
     */
    inline bool EvaluateExpressionsHasBeenSet() const { return m_evaluateExpressionsHasBeenSet; }

    /**
     * <p>Indicates whether any expressions in the object should be evaluated when the
     * object descriptions are returned.</p>
     */
    inline void SetEvaluateExpressions(bool value) { m_evaluateExpressionsHasBeenSet = true; m_evaluateExpressions = value; }

    /**
     * <p>Indicates whether any expressions in the object should be evaluated when the
     * object descriptions are returned.</p>
     */
    inline DescribeObjectsRequest& WithEvaluateExpressions(bool value) { SetEvaluateExpressions(value); return *this;}


    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>DescribeObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>DescribeObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>DescribeObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>DescribeObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>DescribeObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>DescribeObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline DescribeObjectsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>DescribeObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline DescribeObjectsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>DescribeObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline DescribeObjectsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet;

    Aws::Vector<Aws::String> m_objectIds;
    bool m_objectIdsHasBeenSet;

    bool m_evaluateExpressions;
    bool m_evaluateExpressionsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
