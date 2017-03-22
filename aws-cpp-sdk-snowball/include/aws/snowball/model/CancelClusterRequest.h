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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class AWS_SNOWBALL_API CancelClusterRequest : public SnowballRequest
  {
  public:
    CancelClusterRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline CancelClusterRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline CancelClusterRequest& WithClusterId(Aws::String&& value) { SetClusterId(value); return *this;}

    /**
     * <p>The 39-character ID for the cluster that you want to cancel, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline CancelClusterRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}

  private:
    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
