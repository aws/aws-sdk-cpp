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
  class AWS_OPSWORKS_API AssignInstanceRequest : public OpsWorksRequest
  {
  public:
    AssignInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssignInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline AssignInstanceRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline AssignInstanceRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline AssignInstanceRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The layer ID, which must correspond to a custom layer. You cannot assign a
     * registered instance to a built-in layer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const{ return m_layerIds; }

    /**
     * <p>The layer ID, which must correspond to a custom layer. You cannot assign a
     * registered instance to a built-in layer.</p>
     */
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }

    /**
     * <p>The layer ID, which must correspond to a custom layer. You cannot assign a
     * registered instance to a built-in layer.</p>
     */
    inline void SetLayerIds(const Aws::Vector<Aws::String>& value) { m_layerIdsHasBeenSet = true; m_layerIds = value; }

    /**
     * <p>The layer ID, which must correspond to a custom layer. You cannot assign a
     * registered instance to a built-in layer.</p>
     */
    inline void SetLayerIds(Aws::Vector<Aws::String>&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::move(value); }

    /**
     * <p>The layer ID, which must correspond to a custom layer. You cannot assign a
     * registered instance to a built-in layer.</p>
     */
    inline AssignInstanceRequest& WithLayerIds(const Aws::Vector<Aws::String>& value) { SetLayerIds(value); return *this;}

    /**
     * <p>The layer ID, which must correspond to a custom layer. You cannot assign a
     * registered instance to a built-in layer.</p>
     */
    inline AssignInstanceRequest& WithLayerIds(Aws::Vector<Aws::String>&& value) { SetLayerIds(std::move(value)); return *this;}

    /**
     * <p>The layer ID, which must correspond to a custom layer. You cannot assign a
     * registered instance to a built-in layer.</p>
     */
    inline AssignInstanceRequest& AddLayerIds(const Aws::String& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }

    /**
     * <p>The layer ID, which must correspond to a custom layer. You cannot assign a
     * registered instance to a built-in layer.</p>
     */
    inline AssignInstanceRequest& AddLayerIds(Aws::String&& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The layer ID, which must correspond to a custom layer. You cannot assign a
     * registered instance to a built-in layer.</p>
     */
    inline AssignInstanceRequest& AddLayerIds(const char* value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::Vector<Aws::String> m_layerIds;
    bool m_layerIdsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
