/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/EMRContainersRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

  /**
   */
  class DescribeJobRunRequest : public EMRContainersRequest
  {
  public:
    AWS_EMRCONTAINERS_API DescribeJobRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJobRun"; }

    AWS_EMRCONTAINERS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the job run request. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the job run request. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the job run request. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the job run request. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the job run request. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the job run request. </p>
     */
    inline DescribeJobRunRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the job run request. </p>
     */
    inline DescribeJobRunRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job run request. </p>
     */
    inline DescribeJobRunRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the virtual cluster for which the job run is submitted.</p>
     */
    inline const Aws::String& GetVirtualClusterId() const{ return m_virtualClusterId; }

    /**
     * <p>The ID of the virtual cluster for which the job run is submitted.</p>
     */
    inline bool VirtualClusterIdHasBeenSet() const { return m_virtualClusterIdHasBeenSet; }

    /**
     * <p>The ID of the virtual cluster for which the job run is submitted.</p>
     */
    inline void SetVirtualClusterId(const Aws::String& value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId = value; }

    /**
     * <p>The ID of the virtual cluster for which the job run is submitted.</p>
     */
    inline void SetVirtualClusterId(Aws::String&& value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId = std::move(value); }

    /**
     * <p>The ID of the virtual cluster for which the job run is submitted.</p>
     */
    inline void SetVirtualClusterId(const char* value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId.assign(value); }

    /**
     * <p>The ID of the virtual cluster for which the job run is submitted.</p>
     */
    inline DescribeJobRunRequest& WithVirtualClusterId(const Aws::String& value) { SetVirtualClusterId(value); return *this;}

    /**
     * <p>The ID of the virtual cluster for which the job run is submitted.</p>
     */
    inline DescribeJobRunRequest& WithVirtualClusterId(Aws::String&& value) { SetVirtualClusterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual cluster for which the job run is submitted.</p>
     */
    inline DescribeJobRunRequest& WithVirtualClusterId(const char* value) { SetVirtualClusterId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_virtualClusterId;
    bool m_virtualClusterIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
