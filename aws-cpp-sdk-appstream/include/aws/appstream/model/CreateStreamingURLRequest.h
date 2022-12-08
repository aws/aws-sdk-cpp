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


    /**
     * <p>The name of the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name of the stack.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name of the stack.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack.</p>
     */
    inline CreateStreamingURLRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack.</p>
     */
    inline CreateStreamingURLRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack.</p>
     */
    inline CreateStreamingURLRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetFleetName() const{ return m_fleetName; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetFleetName(const Aws::String& value) { m_fleetNameHasBeenSet = true; m_fleetName = value; }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetFleetName(Aws::String&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::move(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline void SetFleetName(const char* value) { m_fleetNameHasBeenSet = true; m_fleetName.assign(value); }

    /**
     * <p>The name of the fleet.</p>
     */
    inline CreateStreamingURLRequest& WithFleetName(const Aws::String& value) { SetFleetName(value); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline CreateStreamingURLRequest& WithFleetName(Aws::String&& value) { SetFleetName(std::move(value)); return *this;}

    /**
     * <p>The name of the fleet.</p>
     */
    inline CreateStreamingURLRequest& WithFleetName(const char* value) { SetFleetName(value); return *this;}


    /**
     * <p>The identifier of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier of the user.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier of the user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier of the user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier of the user.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier of the user.</p>
     */
    inline CreateStreamingURLRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier of the user.</p>
     */
    inline CreateStreamingURLRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user.</p>
     */
    inline CreateStreamingURLRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The name of the application to launch after the session starts. This is the
     * name that you specified as <b>Name</b> in the Image Assistant. If your fleet is
     * enabled for the <b>Desktop</b> stream view, you can also choose to launch
     * directly to the operating system desktop. To do so, specify <b>Desktop</b>.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The name of the application to launch after the session starts. This is the
     * name that you specified as <b>Name</b> in the Image Assistant. If your fleet is
     * enabled for the <b>Desktop</b> stream view, you can also choose to launch
     * directly to the operating system desktop. To do so, specify <b>Desktop</b>.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The name of the application to launch after the session starts. This is the
     * name that you specified as <b>Name</b> in the Image Assistant. If your fleet is
     * enabled for the <b>Desktop</b> stream view, you can also choose to launch
     * directly to the operating system desktop. To do so, specify <b>Desktop</b>.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The name of the application to launch after the session starts. This is the
     * name that you specified as <b>Name</b> in the Image Assistant. If your fleet is
     * enabled for the <b>Desktop</b> stream view, you can also choose to launch
     * directly to the operating system desktop. To do so, specify <b>Desktop</b>.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The name of the application to launch after the session starts. This is the
     * name that you specified as <b>Name</b> in the Image Assistant. If your fleet is
     * enabled for the <b>Desktop</b> stream view, you can also choose to launch
     * directly to the operating system desktop. To do so, specify <b>Desktop</b>.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The name of the application to launch after the session starts. This is the
     * name that you specified as <b>Name</b> in the Image Assistant. If your fleet is
     * enabled for the <b>Desktop</b> stream view, you can also choose to launch
     * directly to the operating system desktop. To do so, specify <b>Desktop</b>.</p>
     */
    inline CreateStreamingURLRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The name of the application to launch after the session starts. This is the
     * name that you specified as <b>Name</b> in the Image Assistant. If your fleet is
     * enabled for the <b>Desktop</b> stream view, you can also choose to launch
     * directly to the operating system desktop. To do so, specify <b>Desktop</b>.</p>
     */
    inline CreateStreamingURLRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The name of the application to launch after the session starts. This is the
     * name that you specified as <b>Name</b> in the Image Assistant. If your fleet is
     * enabled for the <b>Desktop</b> stream view, you can also choose to launch
     * directly to the operating system desktop. To do so, specify <b>Desktop</b>.</p>
     */
    inline CreateStreamingURLRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The time that the streaming URL will be valid, in seconds. Specify a value
     * between 1 and 604800 seconds. The default is 60 seconds.</p>
     */
    inline long long GetValidity() const{ return m_validity; }

    /**
     * <p>The time that the streaming URL will be valid, in seconds. Specify a value
     * between 1 and 604800 seconds. The default is 60 seconds.</p>
     */
    inline bool ValidityHasBeenSet() const { return m_validityHasBeenSet; }

    /**
     * <p>The time that the streaming URL will be valid, in seconds. Specify a value
     * between 1 and 604800 seconds. The default is 60 seconds.</p>
     */
    inline void SetValidity(long long value) { m_validityHasBeenSet = true; m_validity = value; }

    /**
     * <p>The time that the streaming URL will be valid, in seconds. Specify a value
     * between 1 and 604800 seconds. The default is 60 seconds.</p>
     */
    inline CreateStreamingURLRequest& WithValidity(long long value) { SetValidity(value); return *this;}


    /**
     * <p>The session context. For more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/managing-stacks-fleets.html#managing-stacks-fleets-parameters">Session
     * Context</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline const Aws::String& GetSessionContext() const{ return m_sessionContext; }

    /**
     * <p>The session context. For more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/managing-stacks-fleets.html#managing-stacks-fleets-parameters">Session
     * Context</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline bool SessionContextHasBeenSet() const { return m_sessionContextHasBeenSet; }

    /**
     * <p>The session context. For more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/managing-stacks-fleets.html#managing-stacks-fleets-parameters">Session
     * Context</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline void SetSessionContext(const Aws::String& value) { m_sessionContextHasBeenSet = true; m_sessionContext = value; }

    /**
     * <p>The session context. For more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/managing-stacks-fleets.html#managing-stacks-fleets-parameters">Session
     * Context</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline void SetSessionContext(Aws::String&& value) { m_sessionContextHasBeenSet = true; m_sessionContext = std::move(value); }

    /**
     * <p>The session context. For more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/managing-stacks-fleets.html#managing-stacks-fleets-parameters">Session
     * Context</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline void SetSessionContext(const char* value) { m_sessionContextHasBeenSet = true; m_sessionContext.assign(value); }

    /**
     * <p>The session context. For more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/managing-stacks-fleets.html#managing-stacks-fleets-parameters">Session
     * Context</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline CreateStreamingURLRequest& WithSessionContext(const Aws::String& value) { SetSessionContext(value); return *this;}

    /**
     * <p>The session context. For more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/managing-stacks-fleets.html#managing-stacks-fleets-parameters">Session
     * Context</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline CreateStreamingURLRequest& WithSessionContext(Aws::String&& value) { SetSessionContext(std::move(value)); return *this;}

    /**
     * <p>The session context. For more information, see <a
     * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/managing-stacks-fleets.html#managing-stacks-fleets-parameters">Session
     * Context</a> in the <i>Amazon AppStream 2.0 Administration Guide</i>.</p>
     */
    inline CreateStreamingURLRequest& WithSessionContext(const char* value) { SetSessionContext(value); return *this;}

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
