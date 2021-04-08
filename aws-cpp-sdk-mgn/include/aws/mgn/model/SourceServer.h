/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/DataReplicationInfo.h>
#include <aws/mgn/model/LaunchedInstance.h>
#include <aws/mgn/model/LifeCycle.h>
#include <aws/mgn/model/SourceProperties.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace mgn
{
namespace Model
{

  class AWS_MGN_API SourceServer
  {
  public:
    SourceServer();
    SourceServer(Aws::Utils::Json::JsonView jsonValue);
    SourceServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Source server ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Source server ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Source server ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Source server ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Source server ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Source server ARN.</p>
     */
    inline SourceServer& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Source server ARN.</p>
     */
    inline SourceServer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Source server ARN.</p>
     */
    inline SourceServer& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Source server data replication info.</p>
     */
    inline const DataReplicationInfo& GetDataReplicationInfo() const{ return m_dataReplicationInfo; }

    /**
     * <p>Source server data replication info.</p>
     */
    inline bool DataReplicationInfoHasBeenSet() const { return m_dataReplicationInfoHasBeenSet; }

    /**
     * <p>Source server data replication info.</p>
     */
    inline void SetDataReplicationInfo(const DataReplicationInfo& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = value; }

    /**
     * <p>Source server data replication info.</p>
     */
    inline void SetDataReplicationInfo(DataReplicationInfo&& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = std::move(value); }

    /**
     * <p>Source server data replication info.</p>
     */
    inline SourceServer& WithDataReplicationInfo(const DataReplicationInfo& value) { SetDataReplicationInfo(value); return *this;}

    /**
     * <p>Source server data replication info.</p>
     */
    inline SourceServer& WithDataReplicationInfo(DataReplicationInfo&& value) { SetDataReplicationInfo(std::move(value)); return *this;}


    /**
     * <p>Source server archived status.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }

    /**
     * <p>Source server archived status.</p>
     */
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }

    /**
     * <p>Source server archived status.</p>
     */
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }

    /**
     * <p>Source server archived status.</p>
     */
    inline SourceServer& WithIsArchived(bool value) { SetIsArchived(value); return *this;}


    /**
     * <p>Source server launched instance.</p>
     */
    inline const LaunchedInstance& GetLaunchedInstance() const{ return m_launchedInstance; }

    /**
     * <p>Source server launched instance.</p>
     */
    inline bool LaunchedInstanceHasBeenSet() const { return m_launchedInstanceHasBeenSet; }

    /**
     * <p>Source server launched instance.</p>
     */
    inline void SetLaunchedInstance(const LaunchedInstance& value) { m_launchedInstanceHasBeenSet = true; m_launchedInstance = value; }

    /**
     * <p>Source server launched instance.</p>
     */
    inline void SetLaunchedInstance(LaunchedInstance&& value) { m_launchedInstanceHasBeenSet = true; m_launchedInstance = std::move(value); }

    /**
     * <p>Source server launched instance.</p>
     */
    inline SourceServer& WithLaunchedInstance(const LaunchedInstance& value) { SetLaunchedInstance(value); return *this;}

    /**
     * <p>Source server launched instance.</p>
     */
    inline SourceServer& WithLaunchedInstance(LaunchedInstance&& value) { SetLaunchedInstance(std::move(value)); return *this;}


    /**
     * <p>Source server lifecycle state.</p>
     */
    inline const LifeCycle& GetLifeCycle() const{ return m_lifeCycle; }

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline void SetLifeCycle(const LifeCycle& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = value; }

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline void SetLifeCycle(LifeCycle&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::move(value); }

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline SourceServer& WithLifeCycle(const LifeCycle& value) { SetLifeCycle(value); return *this;}

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline SourceServer& WithLifeCycle(LifeCycle&& value) { SetLifeCycle(std::move(value)); return *this;}


    /**
     * <p>Source server properties.</p>
     */
    inline const SourceProperties& GetSourceProperties() const{ return m_sourceProperties; }

    /**
     * <p>Source server properties.</p>
     */
    inline bool SourcePropertiesHasBeenSet() const { return m_sourcePropertiesHasBeenSet; }

    /**
     * <p>Source server properties.</p>
     */
    inline void SetSourceProperties(const SourceProperties& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = value; }

    /**
     * <p>Source server properties.</p>
     */
    inline void SetSourceProperties(SourceProperties&& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = std::move(value); }

    /**
     * <p>Source server properties.</p>
     */
    inline SourceServer& WithSourceProperties(const SourceProperties& value) { SetSourceProperties(value); return *this;}

    /**
     * <p>Source server properties.</p>
     */
    inline SourceServer& WithSourceProperties(SourceProperties&& value) { SetSourceProperties(std::move(value)); return *this;}


    /**
     * <p>Source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Source server ID.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>Source server ID.</p>
     */
    inline SourceServer& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Source server ID.</p>
     */
    inline SourceServer& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Source server ID.</p>
     */
    inline SourceServer& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


    /**
     * <p>Source server Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Source server Tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Source server Tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Source server Tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline SourceServer& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    DataReplicationInfo m_dataReplicationInfo;
    bool m_dataReplicationInfoHasBeenSet;

    bool m_isArchived;
    bool m_isArchivedHasBeenSet;

    LaunchedInstance m_launchedInstance;
    bool m_launchedInstanceHasBeenSet;

    LifeCycle m_lifeCycle;
    bool m_lifeCycleHasBeenSet;

    SourceProperties m_sourceProperties;
    bool m_sourcePropertiesHasBeenSet;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
