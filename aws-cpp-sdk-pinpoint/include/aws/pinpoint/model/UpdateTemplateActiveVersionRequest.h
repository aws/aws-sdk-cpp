/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/TemplateActiveVersionRequest.h>
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
  class UpdateTemplateActiveVersionRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API UpdateTemplateActiveVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTemplateActiveVersion"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    
    inline const TemplateActiveVersionRequest& GetTemplateActiveVersionRequest() const{ return m_templateActiveVersionRequest; }

    
    inline bool TemplateActiveVersionRequestHasBeenSet() const { return m_templateActiveVersionRequestHasBeenSet; }

    
    inline void SetTemplateActiveVersionRequest(const TemplateActiveVersionRequest& value) { m_templateActiveVersionRequestHasBeenSet = true; m_templateActiveVersionRequest = value; }

    
    inline void SetTemplateActiveVersionRequest(TemplateActiveVersionRequest&& value) { m_templateActiveVersionRequestHasBeenSet = true; m_templateActiveVersionRequest = std::move(value); }

    
    inline UpdateTemplateActiveVersionRequest& WithTemplateActiveVersionRequest(const TemplateActiveVersionRequest& value) { SetTemplateActiveVersionRequest(value); return *this;}

    
    inline UpdateTemplateActiveVersionRequest& WithTemplateActiveVersionRequest(TemplateActiveVersionRequest&& value) { SetTemplateActiveVersionRequest(std::move(value)); return *this;}


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
    inline UpdateTemplateActiveVersionRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline UpdateTemplateActiveVersionRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline UpdateTemplateActiveVersionRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline const Aws::String& GetTemplateType() const{ return m_templateType; }

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline void SetTemplateType(const Aws::String& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline void SetTemplateType(Aws::String&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline void SetTemplateType(const char* value) { m_templateTypeHasBeenSet = true; m_templateType.assign(value); }

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline UpdateTemplateActiveVersionRequest& WithTemplateType(const Aws::String& value) { SetTemplateType(value); return *this;}

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline UpdateTemplateActiveVersionRequest& WithTemplateType(Aws::String&& value) { SetTemplateType(std::move(value)); return *this;}

    /**
     * <p>The type of channel that the message template is designed for. Valid values
     * are: EMAIL, PUSH, SMS, and VOICE.</p>
     */
    inline UpdateTemplateActiveVersionRequest& WithTemplateType(const char* value) { SetTemplateType(value); return *this;}

  private:

    TemplateActiveVersionRequest m_templateActiveVersionRequest;
    bool m_templateActiveVersionRequestHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateType;
    bool m_templateTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
