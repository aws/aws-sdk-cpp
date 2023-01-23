/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/AutoScalingGroupProviderUpdate.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class UpdateCapacityProviderRequest : public ECSRequest
  {
  public:
    AWS_ECS_API UpdateCapacityProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCapacityProvider"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the capacity provider to update.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the capacity provider to update.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the capacity provider to update.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the capacity provider to update.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the capacity provider to update.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the capacity provider to update.</p>
     */
    inline UpdateCapacityProviderRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the capacity provider to update.</p>
     */
    inline UpdateCapacityProviderRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the capacity provider to update.</p>
     */
    inline UpdateCapacityProviderRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>An object that represent the parameters to update for the Auto Scaling group
     * capacity provider.</p>
     */
    inline const AutoScalingGroupProviderUpdate& GetAutoScalingGroupProvider() const{ return m_autoScalingGroupProvider; }

    /**
     * <p>An object that represent the parameters to update for the Auto Scaling group
     * capacity provider.</p>
     */
    inline bool AutoScalingGroupProviderHasBeenSet() const { return m_autoScalingGroupProviderHasBeenSet; }

    /**
     * <p>An object that represent the parameters to update for the Auto Scaling group
     * capacity provider.</p>
     */
    inline void SetAutoScalingGroupProvider(const AutoScalingGroupProviderUpdate& value) { m_autoScalingGroupProviderHasBeenSet = true; m_autoScalingGroupProvider = value; }

    /**
     * <p>An object that represent the parameters to update for the Auto Scaling group
     * capacity provider.</p>
     */
    inline void SetAutoScalingGroupProvider(AutoScalingGroupProviderUpdate&& value) { m_autoScalingGroupProviderHasBeenSet = true; m_autoScalingGroupProvider = std::move(value); }

    /**
     * <p>An object that represent the parameters to update for the Auto Scaling group
     * capacity provider.</p>
     */
    inline UpdateCapacityProviderRequest& WithAutoScalingGroupProvider(const AutoScalingGroupProviderUpdate& value) { SetAutoScalingGroupProvider(value); return *this;}

    /**
     * <p>An object that represent the parameters to update for the Auto Scaling group
     * capacity provider.</p>
     */
    inline UpdateCapacityProviderRequest& WithAutoScalingGroupProvider(AutoScalingGroupProviderUpdate&& value) { SetAutoScalingGroupProvider(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AutoScalingGroupProviderUpdate m_autoScalingGroupProvider;
    bool m_autoScalingGroupProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
