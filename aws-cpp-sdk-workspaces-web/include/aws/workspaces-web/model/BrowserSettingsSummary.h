/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
   * <p>The summary for browser settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/BrowserSettingsSummary">AWS
   * API Reference</a></p>
   */
  class BrowserSettingsSummary
  {
  public:
    AWS_WORKSPACESWEB_API BrowserSettingsSummary();
    AWS_WORKSPACESWEB_API BrowserSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API BrowserSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline const Aws::String& GetBrowserSettingsArn() const{ return m_browserSettingsArn; }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline bool BrowserSettingsArnHasBeenSet() const { return m_browserSettingsArnHasBeenSet; }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(const Aws::String& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = value; }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(Aws::String&& value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline void SetBrowserSettingsArn(const char* value) { m_browserSettingsArnHasBeenSet = true; m_browserSettingsArn.assign(value); }

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline BrowserSettingsSummary& WithBrowserSettingsArn(const Aws::String& value) { SetBrowserSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline BrowserSettingsSummary& WithBrowserSettingsArn(Aws::String&& value) { SetBrowserSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the browser settings.</p>
     */
    inline BrowserSettingsSummary& WithBrowserSettingsArn(const char* value) { SetBrowserSettingsArn(value); return *this;}

  private:

    Aws::String m_browserSettingsArn;
    bool m_browserSettingsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
