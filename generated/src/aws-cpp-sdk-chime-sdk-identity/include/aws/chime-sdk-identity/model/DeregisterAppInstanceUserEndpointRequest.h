/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   */
  class DeregisterAppInstanceUserEndpointRequest : public ChimeSDKIdentityRequest
  {
  public:
    AWS_CHIMESDKIDENTITY_API DeregisterAppInstanceUserEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterAppInstanceUserEndpoint"; }

    AWS_CHIMESDKIDENTITY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const { return m_appInstanceUserArn; }
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }
    template<typename AppInstanceUserArnT = Aws::String>
    void SetAppInstanceUserArn(AppInstanceUserArnT&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::forward<AppInstanceUserArnT>(value); }
    template<typename AppInstanceUserArnT = Aws::String>
    DeregisterAppInstanceUserEndpointRequest& WithAppInstanceUserArn(AppInstanceUserArnT&& value) { SetAppInstanceUserArn(std::forward<AppInstanceUserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    DeregisterAppInstanceUserEndpointRequest& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
