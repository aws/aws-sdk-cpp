﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API GetBulkDeploymentStatusRequest : public GreengrassRequest
  {
  public:
    GetBulkDeploymentStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBulkDeploymentStatus"; }

    Aws::String SerializePayload() const override;


    /**
     * The ID of the bulk deployment.
     */
    inline const Aws::String& GetBulkDeploymentId() const{ return m_bulkDeploymentId; }

    /**
     * The ID of the bulk deployment.
     */
    inline bool BulkDeploymentIdHasBeenSet() const { return m_bulkDeploymentIdHasBeenSet; }

    /**
     * The ID of the bulk deployment.
     */
    inline void SetBulkDeploymentId(const Aws::String& value) { m_bulkDeploymentIdHasBeenSet = true; m_bulkDeploymentId = value; }

    /**
     * The ID of the bulk deployment.
     */
    inline void SetBulkDeploymentId(Aws::String&& value) { m_bulkDeploymentIdHasBeenSet = true; m_bulkDeploymentId = std::move(value); }

    /**
     * The ID of the bulk deployment.
     */
    inline void SetBulkDeploymentId(const char* value) { m_bulkDeploymentIdHasBeenSet = true; m_bulkDeploymentId.assign(value); }

    /**
     * The ID of the bulk deployment.
     */
    inline GetBulkDeploymentStatusRequest& WithBulkDeploymentId(const Aws::String& value) { SetBulkDeploymentId(value); return *this;}

    /**
     * The ID of the bulk deployment.
     */
    inline GetBulkDeploymentStatusRequest& WithBulkDeploymentId(Aws::String&& value) { SetBulkDeploymentId(std::move(value)); return *this;}

    /**
     * The ID of the bulk deployment.
     */
    inline GetBulkDeploymentStatusRequest& WithBulkDeploymentId(const char* value) { SetBulkDeploymentId(value); return *this;}

  private:

    Aws::String m_bulkDeploymentId;
    bool m_bulkDeploymentIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
