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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/lambda/model/Runtime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API ListLayerVersionsRequest : public LambdaRequest
  {
  public:
    ListLayerVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLayerVersions"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A runtime identifier. For example, <code>go1.x</code>.</p>
     */
    inline const Runtime& GetCompatibleRuntime() const{ return m_compatibleRuntime; }

    /**
     * <p>A runtime identifier. For example, <code>go1.x</code>.</p>
     */
    inline bool CompatibleRuntimeHasBeenSet() const { return m_compatibleRuntimeHasBeenSet; }

    /**
     * <p>A runtime identifier. For example, <code>go1.x</code>.</p>
     */
    inline void SetCompatibleRuntime(const Runtime& value) { m_compatibleRuntimeHasBeenSet = true; m_compatibleRuntime = value; }

    /**
     * <p>A runtime identifier. For example, <code>go1.x</code>.</p>
     */
    inline void SetCompatibleRuntime(Runtime&& value) { m_compatibleRuntimeHasBeenSet = true; m_compatibleRuntime = std::move(value); }

    /**
     * <p>A runtime identifier. For example, <code>go1.x</code>.</p>
     */
    inline ListLayerVersionsRequest& WithCompatibleRuntime(const Runtime& value) { SetCompatibleRuntime(value); return *this;}

    /**
     * <p>A runtime identifier. For example, <code>go1.x</code>.</p>
     */
    inline ListLayerVersionsRequest& WithCompatibleRuntime(Runtime&& value) { SetCompatibleRuntime(std::move(value)); return *this;}


    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline const Aws::String& GetLayerName() const{ return m_layerName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline bool LayerNameHasBeenSet() const { return m_layerNameHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline void SetLayerName(const Aws::String& value) { m_layerNameHasBeenSet = true; m_layerName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline void SetLayerName(Aws::String&& value) { m_layerNameHasBeenSet = true; m_layerName = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline void SetLayerName(const char* value) { m_layerNameHasBeenSet = true; m_layerName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline ListLayerVersionsRequest& WithLayerName(const Aws::String& value) { SetLayerName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline ListLayerVersionsRequest& WithLayerName(Aws::String&& value) { SetLayerName(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the layer.</p>
     */
    inline ListLayerVersionsRequest& WithLayerName(const char* value) { SetLayerName(value); return *this;}


    /**
     * <p>A pagination token returned by a previous call.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token returned by a previous call.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>A pagination token returned by a previous call.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>A pagination token returned by a previous call.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>A pagination token returned by a previous call.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>A pagination token returned by a previous call.</p>
     */
    inline ListLayerVersionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token returned by a previous call.</p>
     */
    inline ListLayerVersionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token returned by a previous call.</p>
     */
    inline ListLayerVersionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of versions to return.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of versions to return.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>The maximum number of versions to return.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of versions to return.</p>
     */
    inline ListLayerVersionsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:

    Runtime m_compatibleRuntime;
    bool m_compatibleRuntimeHasBeenSet;

    Aws::String m_layerName;
    bool m_layerNameHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
