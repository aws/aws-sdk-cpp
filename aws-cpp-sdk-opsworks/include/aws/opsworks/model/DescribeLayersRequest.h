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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API DescribeLayersRequest : public OpsWorksRequest
  {
  public:
    DescribeLayersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLayers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline DescribeLayersRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline DescribeLayersRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline DescribeLayersRequest& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>An array of layer IDs that specify the layers to be described. If you omit
     * this parameter, <code>DescribeLayers</code> returns a description of every layer
     * in the specified stack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const{ return m_layerIds; }

    /**
     * <p>An array of layer IDs that specify the layers to be described. If you omit
     * this parameter, <code>DescribeLayers</code> returns a description of every layer
     * in the specified stack.</p>
     */
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }

    /**
     * <p>An array of layer IDs that specify the layers to be described. If you omit
     * this parameter, <code>DescribeLayers</code> returns a description of every layer
     * in the specified stack.</p>
     */
    inline void SetLayerIds(const Aws::Vector<Aws::String>& value) { m_layerIdsHasBeenSet = true; m_layerIds = value; }

    /**
     * <p>An array of layer IDs that specify the layers to be described. If you omit
     * this parameter, <code>DescribeLayers</code> returns a description of every layer
     * in the specified stack.</p>
     */
    inline void SetLayerIds(Aws::Vector<Aws::String>&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::move(value); }

    /**
     * <p>An array of layer IDs that specify the layers to be described. If you omit
     * this parameter, <code>DescribeLayers</code> returns a description of every layer
     * in the specified stack.</p>
     */
    inline DescribeLayersRequest& WithLayerIds(const Aws::Vector<Aws::String>& value) { SetLayerIds(value); return *this;}

    /**
     * <p>An array of layer IDs that specify the layers to be described. If you omit
     * this parameter, <code>DescribeLayers</code> returns a description of every layer
     * in the specified stack.</p>
     */
    inline DescribeLayersRequest& WithLayerIds(Aws::Vector<Aws::String>&& value) { SetLayerIds(std::move(value)); return *this;}

    /**
     * <p>An array of layer IDs that specify the layers to be described. If you omit
     * this parameter, <code>DescribeLayers</code> returns a description of every layer
     * in the specified stack.</p>
     */
    inline DescribeLayersRequest& AddLayerIds(const Aws::String& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }

    /**
     * <p>An array of layer IDs that specify the layers to be described. If you omit
     * this parameter, <code>DescribeLayers</code> returns a description of every layer
     * in the specified stack.</p>
     */
    inline DescribeLayersRequest& AddLayerIds(Aws::String&& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of layer IDs that specify the layers to be described. If you omit
     * this parameter, <code>DescribeLayers</code> returns a description of every layer
     * in the specified stack.</p>
     */
    inline DescribeLayersRequest& AddLayerIds(const char* value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::Vector<Aws::String> m_layerIds;
    bool m_layerIdsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
