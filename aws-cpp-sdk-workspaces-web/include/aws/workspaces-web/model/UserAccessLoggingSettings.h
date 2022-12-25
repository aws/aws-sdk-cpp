/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>A user access logging settings resource that can be associated with a web
   * portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/UserAccessLoggingSettings">AWS
   * API Reference</a></p>
   */
  class UserAccessLoggingSettings
  {
  public:
    AWS_WORKSPACESWEB_API UserAccessLoggingSettings();
    AWS_WORKSPACESWEB_API UserAccessLoggingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API UserAccessLoggingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of web portal ARNs that this user access logging settings is
     * associated with.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedPortalArns() const{ return m_associatedPortalArns; }

    /**
     * <p>A list of web portal ARNs that this user access logging settings is
     * associated with.</p>
     */
    inline bool AssociatedPortalArnsHasBeenSet() const { return m_associatedPortalArnsHasBeenSet; }

    /**
     * <p>A list of web portal ARNs that this user access logging settings is
     * associated with.</p>
     */
    inline void SetAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = value; }

    /**
     * <p>A list of web portal ARNs that this user access logging settings is
     * associated with.</p>
     */
    inline void SetAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns = std::move(value); }

    /**
     * <p>A list of web portal ARNs that this user access logging settings is
     * associated with.</p>
     */
    inline UserAccessLoggingSettings& WithAssociatedPortalArns(const Aws::Vector<Aws::String>& value) { SetAssociatedPortalArns(value); return *this;}

    /**
     * <p>A list of web portal ARNs that this user access logging settings is
     * associated with.</p>
     */
    inline UserAccessLoggingSettings& WithAssociatedPortalArns(Aws::Vector<Aws::String>&& value) { SetAssociatedPortalArns(std::move(value)); return *this;}

    /**
     * <p>A list of web portal ARNs that this user access logging settings is
     * associated with.</p>
     */
    inline UserAccessLoggingSettings& AddAssociatedPortalArns(const Aws::String& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }

    /**
     * <p>A list of web portal ARNs that this user access logging settings is
     * associated with.</p>
     */
    inline UserAccessLoggingSettings& AddAssociatedPortalArns(Aws::String&& value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of web portal ARNs that this user access logging settings is
     * associated with.</p>
     */
    inline UserAccessLoggingSettings& AddAssociatedPortalArns(const char* value) { m_associatedPortalArnsHasBeenSet = true; m_associatedPortalArns.push_back(value); return *this; }


    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline const Aws::String& GetKinesisStreamArn() const{ return m_kinesisStreamArn; }

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline bool KinesisStreamArnHasBeenSet() const { return m_kinesisStreamArnHasBeenSet; }

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline void SetKinesisStreamArn(const Aws::String& value) { m_kinesisStreamArnHasBeenSet = true; m_kinesisStreamArn = value; }

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline void SetKinesisStreamArn(Aws::String&& value) { m_kinesisStreamArnHasBeenSet = true; m_kinesisStreamArn = std::move(value); }

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline void SetKinesisStreamArn(const char* value) { m_kinesisStreamArnHasBeenSet = true; m_kinesisStreamArn.assign(value); }

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline UserAccessLoggingSettings& WithKinesisStreamArn(const Aws::String& value) { SetKinesisStreamArn(value); return *this;}

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline UserAccessLoggingSettings& WithKinesisStreamArn(Aws::String&& value) { SetKinesisStreamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Kinesis stream.</p>
     */
    inline UserAccessLoggingSettings& WithKinesisStreamArn(const char* value) { SetKinesisStreamArn(value); return *this;}


    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline const Aws::String& GetUserAccessLoggingSettingsArn() const{ return m_userAccessLoggingSettingsArn; }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline bool UserAccessLoggingSettingsArnHasBeenSet() const { return m_userAccessLoggingSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(const Aws::String& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = value; }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(Aws::String&& value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline void SetUserAccessLoggingSettingsArn(const char* value) { m_userAccessLoggingSettingsArnHasBeenSet = true; m_userAccessLoggingSettingsArn.assign(value); }

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline UserAccessLoggingSettings& WithUserAccessLoggingSettingsArn(const Aws::String& value) { SetUserAccessLoggingSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline UserAccessLoggingSettings& WithUserAccessLoggingSettingsArn(Aws::String&& value) { SetUserAccessLoggingSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user access logging settings.</p>
     */
    inline UserAccessLoggingSettings& WithUserAccessLoggingSettingsArn(const char* value) { SetUserAccessLoggingSettingsArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_associatedPortalArns;
    bool m_associatedPortalArnsHasBeenSet = false;

    Aws::String m_kinesisStreamArn;
    bool m_kinesisStreamArnHasBeenSet = false;

    Aws::String m_userAccessLoggingSettingsArn;
    bool m_userAccessLoggingSettingsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
