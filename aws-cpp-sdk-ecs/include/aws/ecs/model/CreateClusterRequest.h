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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API CreateClusterRequest : public ECSRequest
  {
  public:
    CreateClusterRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline CreateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline CreateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of your cluster. If you do not specify a name for your cluster, you
     * create a cluster named <code>default</code>. Up to 255 letters (uppercase and
     * lowercase), numbers, hyphens, and underscores are allowed.</p>
     */
    inline CreateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}

  private:
    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
