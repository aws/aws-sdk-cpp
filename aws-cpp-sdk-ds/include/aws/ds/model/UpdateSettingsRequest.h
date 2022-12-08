/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/Setting.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class UpdateSettingsRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API UpdateSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSettings"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory for which to update settings.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory for which to update settings.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory for which to update settings.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory for which to update settings.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory for which to update settings.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory for which to update settings.</p>
     */
    inline UpdateSettingsRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory for which to update settings.</p>
     */
    inline UpdateSettingsRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory for which to update settings.</p>
     */
    inline UpdateSettingsRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The list of <a>Setting</a> objects.</p>
     */
    inline const Aws::Vector<Setting>& GetSettings() const{ return m_settings; }

    /**
     * <p>The list of <a>Setting</a> objects.</p>
     */
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }

    /**
     * <p>The list of <a>Setting</a> objects.</p>
     */
    inline void SetSettings(const Aws::Vector<Setting>& value) { m_settingsHasBeenSet = true; m_settings = value; }

    /**
     * <p>The list of <a>Setting</a> objects.</p>
     */
    inline void SetSettings(Aws::Vector<Setting>&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }

    /**
     * <p>The list of <a>Setting</a> objects.</p>
     */
    inline UpdateSettingsRequest& WithSettings(const Aws::Vector<Setting>& value) { SetSettings(value); return *this;}

    /**
     * <p>The list of <a>Setting</a> objects.</p>
     */
    inline UpdateSettingsRequest& WithSettings(Aws::Vector<Setting>&& value) { SetSettings(std::move(value)); return *this;}

    /**
     * <p>The list of <a>Setting</a> objects.</p>
     */
    inline UpdateSettingsRequest& AddSettings(const Setting& value) { m_settingsHasBeenSet = true; m_settings.push_back(value); return *this; }

    /**
     * <p>The list of <a>Setting</a> objects.</p>
     */
    inline UpdateSettingsRequest& AddSettings(Setting&& value) { m_settingsHasBeenSet = true; m_settings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Setting> m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
