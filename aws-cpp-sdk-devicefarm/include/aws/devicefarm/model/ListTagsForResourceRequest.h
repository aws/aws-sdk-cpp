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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class AWS_DEVICEFARM_API ListTagsForResourceRequest : public DeviceFarmRequest
  {
  public:
    ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource(s) for which to list tags. You
     * can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource(s) for which to list tags. You
     * can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource(s) for which to list tags. You
     * can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource(s) for which to list tags. You
     * can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource(s) for which to list tags. You
     * can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource(s) for which to list tags. You
     * can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource(s) for which to list tags. You
     * can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource(s) for which to list tags. You
     * can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
