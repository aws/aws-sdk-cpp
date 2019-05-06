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
#include <aws/datapipeline/model/Query.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for QueryObjects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/QueryObjectsInput">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API QueryObjectsRequest : public DataPipelineRequest
  {
  public:
    QueryObjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "QueryObjects"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineId() const{ return m_pipelineId; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline bool PipelineIdHasBeenSet() const { return m_pipelineIdHasBeenSet; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(const Aws::String& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = value; }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(Aws::String&& value) { m_pipelineIdHasBeenSet = true; m_pipelineId = std::move(value); }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline void SetPipelineId(const char* value) { m_pipelineIdHasBeenSet = true; m_pipelineId.assign(value); }

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline QueryObjectsRequest& WithPipelineId(const Aws::String& value) { SetPipelineId(value); return *this;}

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline QueryObjectsRequest& WithPipelineId(Aws::String&& value) { SetPipelineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pipeline.</p>
     */
    inline QueryObjectsRequest& WithPipelineId(const char* value) { SetPipelineId(value); return *this;}


    /**
     * <p>The query that defines the objects to be returned. The <code>Query</code>
     * object can contain a maximum of ten selectors. The conditions in the query are
     * limited to top-level String fields in the object. These filters can be applied
     * to components, instances, and attempts.</p>
     */
    inline const Query& GetQuery() const{ return m_query; }

    /**
     * <p>The query that defines the objects to be returned. The <code>Query</code>
     * object can contain a maximum of ten selectors. The conditions in the query are
     * limited to top-level String fields in the object. These filters can be applied
     * to components, instances, and attempts.</p>
     */
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }

    /**
     * <p>The query that defines the objects to be returned. The <code>Query</code>
     * object can contain a maximum of ten selectors. The conditions in the query are
     * limited to top-level String fields in the object. These filters can be applied
     * to components, instances, and attempts.</p>
     */
    inline void SetQuery(const Query& value) { m_queryHasBeenSet = true; m_query = value; }

    /**
     * <p>The query that defines the objects to be returned. The <code>Query</code>
     * object can contain a maximum of ten selectors. The conditions in the query are
     * limited to top-level String fields in the object. These filters can be applied
     * to components, instances, and attempts.</p>
     */
    inline void SetQuery(Query&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }

    /**
     * <p>The query that defines the objects to be returned. The <code>Query</code>
     * object can contain a maximum of ten selectors. The conditions in the query are
     * limited to top-level String fields in the object. These filters can be applied
     * to components, instances, and attempts.</p>
     */
    inline QueryObjectsRequest& WithQuery(const Query& value) { SetQuery(value); return *this;}

    /**
     * <p>The query that defines the objects to be returned. The <code>Query</code>
     * object can contain a maximum of ten selectors. The conditions in the query are
     * limited to top-level String fields in the object. These filters can be applied
     * to components, instances, and attempts.</p>
     */
    inline QueryObjectsRequest& WithQuery(Query&& value) { SetQuery(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the query applies to components or instances. The possible
     * values are: <code>COMPONENT</code>, <code>INSTANCE</code>, and
     * <code>ATTEMPT</code>.</p>
     */
    inline const Aws::String& GetSphere() const{ return m_sphere; }

    /**
     * <p>Indicates whether the query applies to components or instances. The possible
     * values are: <code>COMPONENT</code>, <code>INSTANCE</code>, and
     * <code>ATTEMPT</code>.</p>
     */
    inline bool SphereHasBeenSet() const { return m_sphereHasBeenSet; }

    /**
     * <p>Indicates whether the query applies to components or instances. The possible
     * values are: <code>COMPONENT</code>, <code>INSTANCE</code>, and
     * <code>ATTEMPT</code>.</p>
     */
    inline void SetSphere(const Aws::String& value) { m_sphereHasBeenSet = true; m_sphere = value; }

    /**
     * <p>Indicates whether the query applies to components or instances. The possible
     * values are: <code>COMPONENT</code>, <code>INSTANCE</code>, and
     * <code>ATTEMPT</code>.</p>
     */
    inline void SetSphere(Aws::String&& value) { m_sphereHasBeenSet = true; m_sphere = std::move(value); }

    /**
     * <p>Indicates whether the query applies to components or instances. The possible
     * values are: <code>COMPONENT</code>, <code>INSTANCE</code>, and
     * <code>ATTEMPT</code>.</p>
     */
    inline void SetSphere(const char* value) { m_sphereHasBeenSet = true; m_sphere.assign(value); }

    /**
     * <p>Indicates whether the query applies to components or instances. The possible
     * values are: <code>COMPONENT</code>, <code>INSTANCE</code>, and
     * <code>ATTEMPT</code>.</p>
     */
    inline QueryObjectsRequest& WithSphere(const Aws::String& value) { SetSphere(value); return *this;}

    /**
     * <p>Indicates whether the query applies to components or instances. The possible
     * values are: <code>COMPONENT</code>, <code>INSTANCE</code>, and
     * <code>ATTEMPT</code>.</p>
     */
    inline QueryObjectsRequest& WithSphere(Aws::String&& value) { SetSphere(std::move(value)); return *this;}

    /**
     * <p>Indicates whether the query applies to components or instances. The possible
     * values are: <code>COMPONENT</code>, <code>INSTANCE</code>, and
     * <code>ATTEMPT</code>.</p>
     */
    inline QueryObjectsRequest& WithSphere(const char* value) { SetSphere(value); return *this;}


    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>QueryObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>QueryObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>QueryObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>QueryObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>QueryObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>QueryObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline QueryObjectsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>QueryObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline QueryObjectsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The starting point for the results to be returned. For the first call, this
     * value should be empty. As long as there are more results, continue to call
     * <code>QueryObjects</code> with the marker value from the previous call to
     * retrieve the next set of results.</p>
     */
    inline QueryObjectsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of object names that <code>QueryObjects</code> will return
     * in a single call. The default value is 100. </p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of object names that <code>QueryObjects</code> will return
     * in a single call. The default value is 100. </p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of object names that <code>QueryObjects</code> will return
     * in a single call. The default value is 100. </p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of object names that <code>QueryObjects</code> will return
     * in a single call. The default value is 100. </p>
     */
    inline QueryObjectsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_pipelineId;
    bool m_pipelineIdHasBeenSet;

    Query m_query;
    bool m_queryHasBeenSet;

    Aws::String m_sphere;
    bool m_sphereHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
