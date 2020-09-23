/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class AWS_BACKUP_API UpdateRegionSettingsRequest : public BackupRequest
  {
  public:
    UpdateRegionSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRegionSettings"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Updates the list of services along with the opt-in preferences for the
     * Region.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetResourceTypeOptInPreference() const{ return m_resourceTypeOptInPreference; }

    /**
     * <p>Updates the list of services along with the opt-in preferences for the
     * Region.</p>
     */
    inline bool ResourceTypeOptInPreferenceHasBeenSet() const { return m_resourceTypeOptInPreferenceHasBeenSet; }

    /**
     * <p>Updates the list of services along with the opt-in preferences for the
     * Region.</p>
     */
    inline void SetResourceTypeOptInPreference(const Aws::Map<Aws::String, bool>& value) { m_resourceTypeOptInPreferenceHasBeenSet = true; m_resourceTypeOptInPreference = value; }

    /**
     * <p>Updates the list of services along with the opt-in preferences for the
     * Region.</p>
     */
    inline void SetResourceTypeOptInPreference(Aws::Map<Aws::String, bool>&& value) { m_resourceTypeOptInPreferenceHasBeenSet = true; m_resourceTypeOptInPreference = std::move(value); }

    /**
     * <p>Updates the list of services along with the opt-in preferences for the
     * Region.</p>
     */
    inline UpdateRegionSettingsRequest& WithResourceTypeOptInPreference(const Aws::Map<Aws::String, bool>& value) { SetResourceTypeOptInPreference(value); return *this;}

    /**
     * <p>Updates the list of services along with the opt-in preferences for the
     * Region.</p>
     */
    inline UpdateRegionSettingsRequest& WithResourceTypeOptInPreference(Aws::Map<Aws::String, bool>&& value) { SetResourceTypeOptInPreference(std::move(value)); return *this;}

    /**
     * <p>Updates the list of services along with the opt-in preferences for the
     * Region.</p>
     */
    inline UpdateRegionSettingsRequest& AddResourceTypeOptInPreference(const Aws::String& key, bool value) { m_resourceTypeOptInPreferenceHasBeenSet = true; m_resourceTypeOptInPreference.emplace(key, value); return *this; }

    /**
     * <p>Updates the list of services along with the opt-in preferences for the
     * Region.</p>
     */
    inline UpdateRegionSettingsRequest& AddResourceTypeOptInPreference(Aws::String&& key, bool value) { m_resourceTypeOptInPreferenceHasBeenSet = true; m_resourceTypeOptInPreference.emplace(std::move(key), value); return *this; }

    /**
     * <p>Updates the list of services along with the opt-in preferences for the
     * Region.</p>
     */
    inline UpdateRegionSettingsRequest& AddResourceTypeOptInPreference(const char* key, bool value) { m_resourceTypeOptInPreferenceHasBeenSet = true; m_resourceTypeOptInPreference.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, bool> m_resourceTypeOptInPreference;
    bool m_resourceTypeOptInPreferenceHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
