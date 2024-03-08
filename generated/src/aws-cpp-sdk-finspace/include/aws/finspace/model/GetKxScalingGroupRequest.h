/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/FinspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace finspace
{
namespace Model
{

  /**
   */
  class GetKxScalingGroupRequest : public FinspaceRequest
  {
  public:
    AWS_FINSPACE_API GetKxScalingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetKxScalingGroup"; }

    AWS_FINSPACE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the kdb environment. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment. </p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>A unique identifier for the kdb environment. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment. </p>
     */
    inline GetKxScalingGroupRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment. </p>
     */
    inline GetKxScalingGroupRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment. </p>
     */
    inline GetKxScalingGroupRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline const Aws::String& GetScalingGroupName() const{ return m_scalingGroupName; }

    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline bool ScalingGroupNameHasBeenSet() const { return m_scalingGroupNameHasBeenSet; }

    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline void SetScalingGroupName(const Aws::String& value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName = value; }

    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline void SetScalingGroupName(Aws::String&& value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName = std::move(value); }

    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline void SetScalingGroupName(const char* value) { m_scalingGroupNameHasBeenSet = true; m_scalingGroupName.assign(value); }

    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline GetKxScalingGroupRequest& WithScalingGroupName(const Aws::String& value) { SetScalingGroupName(value); return *this;}

    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline GetKxScalingGroupRequest& WithScalingGroupName(Aws::String&& value) { SetScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb scaling group. </p>
     */
    inline GetKxScalingGroupRequest& WithScalingGroupName(const char* value) { SetScalingGroupName(value); return *this;}

  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_scalingGroupName;
    bool m_scalingGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
