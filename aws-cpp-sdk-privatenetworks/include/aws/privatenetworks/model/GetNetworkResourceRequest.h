/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class AWS_PRIVATENETWORKS_API GetNetworkResourceRequest : public PrivateNetworksRequest
  {
  public:
    GetNetworkResourceRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<GetNetworkResourceRequest> Clone() const
    {
      return Aws::MakeUnique<GetNetworkResourceRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetNetworkResource"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline const Aws::String& GetNetworkResourceArn() const{ return m_networkResourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline bool NetworkResourceArnHasBeenSet() const { return m_networkResourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline void SetNetworkResourceArn(const Aws::String& value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline void SetNetworkResourceArn(Aws::String&& value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline void SetNetworkResourceArn(const char* value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline GetNetworkResourceRequest& WithNetworkResourceArn(const Aws::String& value) { SetNetworkResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline GetNetworkResourceRequest& WithNetworkResourceArn(Aws::String&& value) { SetNetworkResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline GetNetworkResourceRequest& WithNetworkResourceArn(const char* value) { SetNetworkResourceArn(value); return *this;}

  private:

    Aws::String m_networkResourceArn;
    bool m_networkResourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
