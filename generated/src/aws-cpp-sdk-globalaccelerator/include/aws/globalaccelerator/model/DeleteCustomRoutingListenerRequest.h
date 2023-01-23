/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class DeleteCustomRoutingListenerRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API DeleteCustomRoutingListenerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCustomRoutingListener"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the listener to delete.</p>
     */
    inline const Aws::String& GetListenerArn() const{ return m_listenerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to delete.</p>
     */
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to delete.</p>
     */
    inline void SetListenerArn(const Aws::String& value) { m_listenerArnHasBeenSet = true; m_listenerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to delete.</p>
     */
    inline void SetListenerArn(Aws::String&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to delete.</p>
     */
    inline void SetListenerArn(const char* value) { m_listenerArnHasBeenSet = true; m_listenerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to delete.</p>
     */
    inline DeleteCustomRoutingListenerRequest& WithListenerArn(const Aws::String& value) { SetListenerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to delete.</p>
     */
    inline DeleteCustomRoutingListenerRequest& WithListenerArn(Aws::String&& value) { SetListenerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the listener to delete.</p>
     */
    inline DeleteCustomRoutingListenerRequest& WithListenerArn(const char* value) { SetListenerArn(value); return *this;}

  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
