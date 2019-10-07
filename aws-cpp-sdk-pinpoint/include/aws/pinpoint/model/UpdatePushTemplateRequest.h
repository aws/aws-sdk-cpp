/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/PushNotificationTemplateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API UpdatePushTemplateRequest : public PinpointRequest
  {
  public:
    UpdatePushTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePushTemplate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Updates an existing message template that you can use in messages that are
     * sent through a push notification channel.</p>
     */
    inline const PushNotificationTemplateRequest& GetPushNotificationTemplateRequest() const{ return m_pushNotificationTemplateRequest; }

    /**
     * <p>Updates an existing message template that you can use in messages that are
     * sent through a push notification channel.</p>
     */
    inline bool PushNotificationTemplateRequestHasBeenSet() const { return m_pushNotificationTemplateRequestHasBeenSet; }

    /**
     * <p>Updates an existing message template that you can use in messages that are
     * sent through a push notification channel.</p>
     */
    inline void SetPushNotificationTemplateRequest(const PushNotificationTemplateRequest& value) { m_pushNotificationTemplateRequestHasBeenSet = true; m_pushNotificationTemplateRequest = value; }

    /**
     * <p>Updates an existing message template that you can use in messages that are
     * sent through a push notification channel.</p>
     */
    inline void SetPushNotificationTemplateRequest(PushNotificationTemplateRequest&& value) { m_pushNotificationTemplateRequestHasBeenSet = true; m_pushNotificationTemplateRequest = std::move(value); }

    /**
     * <p>Updates an existing message template that you can use in messages that are
     * sent through a push notification channel.</p>
     */
    inline UpdatePushTemplateRequest& WithPushNotificationTemplateRequest(const PushNotificationTemplateRequest& value) { SetPushNotificationTemplateRequest(value); return *this;}

    /**
     * <p>Updates an existing message template that you can use in messages that are
     * sent through a push notification channel.</p>
     */
    inline UpdatePushTemplateRequest& WithPushNotificationTemplateRequest(PushNotificationTemplateRequest&& value) { SetPushNotificationTemplateRequest(std::move(value)); return *this;}


    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline UpdatePushTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline UpdatePushTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline UpdatePushTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    PushNotificationTemplateRequest m_pushNotificationTemplateRequest;
    bool m_pushNotificationTemplateRequestHasBeenSet;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
