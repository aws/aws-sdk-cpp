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
    AWS_APPSTREAM_API CreateStreamingURLRequest();

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
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline CreateStreamingURLRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline CreateStreamingURLRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline CreateStreamingURLRequest& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }
    inline void SetFleetName(const Aws::String& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }
    inline void SetFleetName(Aws::String&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::move(value); }
    inline void SetFleetName(const char* value) { m_fleetNameHasBeenSet = true; m_fleetName.assign(value); }
    inline CreateStreamingURLRequest& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}
    inline CreateStreamingURLRequest& WithFleetName(Aws::String&& value) { SetFleetName(std::move(value)); return *this;}
    inline CreateStreamingURLRequest& WithFleetName(const char* value) { SetFleetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline CreateStreamingURLRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline CreateStreamingURLRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline CreateStreamingURLRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application to launch after the session starts. This is the
     * name that you specified as <b>Name</b> in the Image Assistant. If your fleet is
     * enabled for the <b>Desktop</b> stream view, you can also choose to launch
     * directly to the operating system desktop. To do so, specify <b>Desktop</b>.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline CreateStreamingURLRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline CreateStreamingURLRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline CreateStreamingURLRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the streaming URL will be valid, in seconds. Specify a value
     * between 1 and 604800 seconds. The default is 60 seconds.</p>
     */
    inline long long GetValidity() const{ return m_validity; }
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
    inline const Aws::String& GetSessionContext() const{ return m_sessionContext; }
    inline bool SessionContextHasBeenSet() const { return m_sessionContextHasBeenSet; }
    inline void SetSessionContext(const Aws::String& value) { m_sessionContextHasBeenSet = true; m_sessionContext = value; }
    inline void SetSessionContext(Aws::String&& value) { m_sessionContextHasBeenSet = true; m_sessionContext = std::move(value); }
    inline void SetSessionContext(const char* value) { m_sessionContextHasBeenSet = true; m_sessionContext.assign(value); }
    inline CreateStreamingURLRequest& WithSessionContext(const Aws::String& value) { SetSessionContext(value); return *this;}
    inline CreateStreamingURLRequest& WithSessionContext(Aws::String&& value) { SetSessionContext(std::move(value)); return *this;}
    inline CreateStreamingURLRequest& WithSessionContext(const char* value) { SetSessionContext(value); return *this;}
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

    long long m_validity;
    bool m_validityHasBeenSet = false;

    Aws::String m_sessionContext;
    bool m_sessionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
