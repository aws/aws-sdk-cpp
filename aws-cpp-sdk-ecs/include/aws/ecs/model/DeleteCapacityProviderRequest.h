/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API DeleteCapacityProviderRequest : public ECSRequest
  {
  public:
    DeleteCapacityProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCapacityProvider"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the capacity provider to
     * delete.</p>
     */
    inline const Aws::String& GetCapacityProvider() const{ return m_capacityProvider; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the capacity provider to
     * delete.</p>
     */
    inline bool CapacityProviderHasBeenSet() const { return m_capacityProviderHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the capacity provider to
     * delete.</p>
     */
    inline void SetCapacityProvider(const Aws::String& value) { m_capacityProviderHasBeenSet = true; m_capacityProvider = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the capacity provider to
     * delete.</p>
     */
    inline void SetCapacityProvider(Aws::String&& value) { m_capacityProviderHasBeenSet = true; m_capacityProvider = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the capacity provider to
     * delete.</p>
     */
    inline void SetCapacityProvider(const char* value) { m_capacityProviderHasBeenSet = true; m_capacityProvider.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the capacity provider to
     * delete.</p>
     */
    inline DeleteCapacityProviderRequest& WithCapacityProvider(const Aws::String& value) { SetCapacityProvider(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the capacity provider to
     * delete.</p>
     */
    inline DeleteCapacityProviderRequest& WithCapacityProvider(Aws::String&& value) { SetCapacityProvider(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the capacity provider to
     * delete.</p>
     */
    inline DeleteCapacityProviderRequest& WithCapacityProvider(const char* value) { SetCapacityProvider(value); return *this;}

  private:

    Aws::String m_capacityProvider;
    bool m_capacityProviderHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
