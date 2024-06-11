﻿/**
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
    AWS_BACKUP_API DescribeRegionSettingsResult();
    AWS_BACKUP_API DescribeRegionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeRegionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of all services along with the opt-in preferences in the
     * Region.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetResourceTypeOptInPreference() const{ return m_resourceTypeOptInPreference; }
    inline void SetResourceTypeOptInPreference(const Aws::Map<Aws::String, bool>& value) { m_resourceTypeOptInPreference = value; }
    inline void SetResourceTypeOptInPreference(Aws::Map<Aws::String, bool>&& value) { m_resourceTypeOptInPreference = std::move(value); }
    inline DescribeRegionSettingsResult& WithResourceTypeOptInPreference(const Aws::Map<Aws::String, bool>& value) { SetResourceTypeOptInPreference(value); return *this;}
    inline DescribeRegionSettingsResult& WithResourceTypeOptInPreference(Aws::Map<Aws::String, bool>&& value) { SetResourceTypeOptInPreference(std::move(value)); return *this;}
    inline DescribeRegionSettingsResult& AddResourceTypeOptInPreference(const Aws::String& key, bool value) { m_resourceTypeOptInPreference.emplace(key, value); return *this; }
    inline DescribeRegionSettingsResult& AddResourceTypeOptInPreference(Aws::String&& key, bool value) { m_resourceTypeOptInPreference.emplace(std::move(key), value); return *this; }
    inline DescribeRegionSettingsResult& AddResourceTypeOptInPreference(const char* key, bool value) { m_resourceTypeOptInPreference.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns whether Backup fully manages the backups for a resource type.</p>
     * <p>For the benefits of full Backup management, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#full-management">
     * Full Backup management</a>.</p> <p>For a list of resource types and whether each
     * supports full Backup management, see the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
     * Feature availability by resource</a> table.</p> <p>If
     * <code>"DynamoDB":false</code>, you can enable full Backup management for
     * DynamoDB backup by enabling <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/advanced-ddb-backup.html#advanced-ddb-backup-enable-cli">
     * Backup's advanced DynamoDB backup features</a>.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetResourceTypeManagementPreference() const{ return m_resourceTypeManagementPreference; }
    inline void SetResourceTypeManagementPreference(const Aws::Map<Aws::String, bool>& value) { m_resourceTypeManagementPreference = value; }
    inline void SetResourceTypeManagementPreference(Aws::Map<Aws::String, bool>&& value) { m_resourceTypeManagementPreference = std::move(value); }
    inline DescribeRegionSettingsResult& WithResourceTypeManagementPreference(const Aws::Map<Aws::String, bool>& value) { SetResourceTypeManagementPreference(value); return *this;}
    inline DescribeRegionSettingsResult& WithResourceTypeManagementPreference(Aws::Map<Aws::String, bool>&& value) { SetResourceTypeManagementPreference(std::move(value)); return *this;}
    inline DescribeRegionSettingsResult& AddResourceTypeManagementPreference(const Aws::String& key, bool value) { m_resourceTypeManagementPreference.emplace(key, value); return *this; }
    inline DescribeRegionSettingsResult& AddResourceTypeManagementPreference(Aws::String&& key, bool value) { m_resourceTypeManagementPreference.emplace(std::move(key), value); return *this; }
    inline DescribeRegionSettingsResult& AddResourceTypeManagementPreference(const char* key, bool value) { m_resourceTypeManagementPreference.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRegionSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRegionSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRegionSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, bool> m_resourceTypeOptInPreference;

    Aws::Map<Aws::String, bool> m_resourceTypeManagementPreference;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
