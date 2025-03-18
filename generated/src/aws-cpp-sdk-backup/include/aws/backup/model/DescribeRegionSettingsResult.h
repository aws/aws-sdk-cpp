/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{
  class DescribeRegionSettingsResult
  {
  public:
    AWS_BACKUP_API DescribeRegionSettingsResult() = default;
    AWS_BACKUP_API DescribeRegionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeRegionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The services along with the opt-in preferences in the Region.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetResourceTypeOptInPreference() const { return m_resourceTypeOptInPreference; }
    template<typename ResourceTypeOptInPreferenceT = Aws::Map<Aws::String, bool>>
    void SetResourceTypeOptInPreference(ResourceTypeOptInPreferenceT&& value) { m_resourceTypeOptInPreferenceHasBeenSet = true; m_resourceTypeOptInPreference = std::forward<ResourceTypeOptInPreferenceT>(value); }
    template<typename ResourceTypeOptInPreferenceT = Aws::Map<Aws::String, bool>>
    DescribeRegionSettingsResult& WithResourceTypeOptInPreference(ResourceTypeOptInPreferenceT&& value) { SetResourceTypeOptInPreference(std::forward<ResourceTypeOptInPreferenceT>(value)); return *this;}
    inline DescribeRegionSettingsResult& AddResourceTypeOptInPreference(Aws::String key, bool value) {
      m_resourceTypeOptInPreferenceHasBeenSet = true; m_resourceTypeOptInPreference.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Returns whether Backup fully manages the backups for a resource type.</p>
     * <p>For the benefits of full Backup management, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#full-management">Full
     * Backup management</a>.</p> <p>For a list of resource types and whether each
     * supports full Backup management, see the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/backup-feature-availability.html#features-by-resource">Feature
     * availability by resource</a> table.</p> <p>If <code>"DynamoDB":false</code>, you
     * can enable full Backup management for DynamoDB backup by enabling <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/advanced-ddb-backup.html#advanced-ddb-backup-enable-cli">
     * Backup's advanced DynamoDB backup features</a>.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetResourceTypeManagementPreference() const { return m_resourceTypeManagementPreference; }
    template<typename ResourceTypeManagementPreferenceT = Aws::Map<Aws::String, bool>>
    void SetResourceTypeManagementPreference(ResourceTypeManagementPreferenceT&& value) { m_resourceTypeManagementPreferenceHasBeenSet = true; m_resourceTypeManagementPreference = std::forward<ResourceTypeManagementPreferenceT>(value); }
    template<typename ResourceTypeManagementPreferenceT = Aws::Map<Aws::String, bool>>
    DescribeRegionSettingsResult& WithResourceTypeManagementPreference(ResourceTypeManagementPreferenceT&& value) { SetResourceTypeManagementPreference(std::forward<ResourceTypeManagementPreferenceT>(value)); return *this;}
    inline DescribeRegionSettingsResult& AddResourceTypeManagementPreference(Aws::String key, bool value) {
      m_resourceTypeManagementPreferenceHasBeenSet = true; m_resourceTypeManagementPreference.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRegionSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, bool> m_resourceTypeOptInPreference;
    bool m_resourceTypeOptInPreferenceHasBeenSet = false;

    Aws::Map<Aws::String, bool> m_resourceTypeManagementPreference;
    bool m_resourceTypeManagementPreferenceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
