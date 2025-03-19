/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class CreateStreamingURLRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API CreateStreamingURLRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStreamingURL"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the stack.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    CreateStreamingURLRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetFleetName() const { return m_fleetName; }
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }
    template<typename FleetNameT = Aws::String>
    void SetFleetName(FleetNameT&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::forward<FleetNameT>(value); }
    template<typename FleetNameT = Aws::String>
    CreateStreamingURLRequest& WithFleetName(FleetNameT&& value) { SetFleetName(std::forward<FleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    CreateStreamingURLRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application to launch after the session starts. This is the
     * name that you specified as <b>Name</b> in the Image Assistant. If your fleet is
     * enabled for the <b>Desktop</b> stream view, you can also choose to launch
     * directly to the operating system desktop. To do so, specify <b>Desktop</b>.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    CreateStreamingURLRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the streaming URL will be valid, in seconds. Specify a value
     * between 1 and 604800 seconds. The default is 60 seconds.</p>
     */
    inline long long GetValidity() const { return m_validity; }
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }
    inline void SetValidity(long long value) { m_validityHasBeenSet = true; m_validity = value; }
    inline CreateStreamingURLRequest& WithValidity(long long value) { SetValidity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session context. For more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/managing-stacks-fleets.html#managing-stacks-fleets-parameters">Session
     * Context</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline const Aws::String& GetSessionContext() const { return m_sessionContext; }
    inline bool SessionContextHasBeenSet() const { return m_sessionContextHasBeenSet; }
    template<typename SessionContextT = Aws::String>
    void SetSessionContext(SessionContextT&& value) { m_sessionContextHasBeenSet = true; m_sessionContext = std::forward<SessionContextT>(value); }
    template<typename SessionContextT = Aws::String>
    CreateStreamingURLRequest& WithSessionContext(SessionContextT&& value) { SetSessionContext(std::forward<SessionContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    long long m_validity{0};
    bool m_validityHasBeenSet = false;

    Aws::String m_sessionContext;
    bool m_sessionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
