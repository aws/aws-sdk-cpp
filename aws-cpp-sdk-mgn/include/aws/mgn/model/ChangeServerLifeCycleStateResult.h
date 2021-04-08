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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace mgn
{
namespace Model
{
  class AWS_MGN_API ChangeServerLifeCycleStateResult
  {
  public:
    ChangeServerLifeCycleStateResult();
    ChangeServerLifeCycleStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ChangeServerLifeCycleStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Source server ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Source server ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Source server ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Source server ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Source server ARN.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Source server ARN.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Source server ARN.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Source server data replication info.</p>
     */
    inline const DataReplicationInfo& GetDataReplicationInfo() const{ return m_dataReplicationInfo; }

    /**
     * <p>Source server data replication info.</p>
     */
    inline void SetDataReplicationInfo(const DataReplicationInfo& value) { m_dataReplicationInfo = value; }

    /**
     * <p>Source server data replication info.</p>
     */
    inline void SetDataReplicationInfo(DataReplicationInfo&& value) { m_dataReplicationInfo = std::move(value); }

    /**
     * <p>Source server data replication info.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithDataReplicationInfo(const DataReplicationInfo& value) { SetDataReplicationInfo(value); return *this;}

    /**
     * <p>Source server data replication info.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithDataReplicationInfo(DataReplicationInfo&& value) { SetDataReplicationInfo(std::move(value)); return *this;}


    /**
     * <p>Source server archived status.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }

    /**
     * <p>Source server archived status.</p>
     */
    inline void SetIsArchived(bool value) { m_isArchived = value; }

    /**
     * <p>Source server archived status.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithIsArchived(bool value) { SetIsArchived(value); return *this;}


    /**
     * <p>Source server launched instance.</p>
     */
    inline const LaunchedInstance& GetLaunchedInstance() const{ return m_launchedInstance; }

    /**
     * <p>Source server launched instance.</p>
     */
    inline void SetLaunchedInstance(const LaunchedInstance& value) { m_launchedInstance = value; }

    /**
     * <p>Source server launched instance.</p>
     */
    inline void SetLaunchedInstance(LaunchedInstance&& value) { m_launchedInstance = std::move(value); }

    /**
     * <p>Source server launched instance.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithLaunchedInstance(const LaunchedInstance& value) { SetLaunchedInstance(value); return *this;}

    /**
     * <p>Source server launched instance.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithLaunchedInstance(LaunchedInstance&& value) { SetLaunchedInstance(std::move(value)); return *this;}


    /**
     * <p>Source server lifecycle state.</p>
     */
    inline const LifeCycle& GetLifeCycle() const{ return m_lifeCycle; }

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline void SetLifeCycle(const LifeCycle& value) { m_lifeCycle = value; }

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline void SetLifeCycle(LifeCycle&& value) { m_lifeCycle = std::move(value); }

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithLifeCycle(const LifeCycle& value) { SetLifeCycle(value); return *this;}

    /**
     * <p>Source server lifecycle state.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithLifeCycle(LifeCycle&& value) { SetLifeCycle(std::move(value)); return *this;}


    /**
     * <p>Source server properties.</p>
     */
    inline const SourceProperties& GetSourceProperties() const{ return m_sourceProperties; }

    /**
     * <p>Source server properties.</p>
     */
    inline void SetSourceProperties(const SourceProperties& value) { m_sourceProperties = value; }

    /**
     * <p>Source server properties.</p>
     */
    inline void SetSourceProperties(SourceProperties&& value) { m_sourceProperties = std::move(value); }

    /**
     * <p>Source server properties.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithSourceProperties(const SourceProperties& value) { SetSourceProperties(value); return *this;}

    /**
     * <p>Source server properties.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithSourceProperties(SourceProperties&& value) { SetSourceProperties(std::move(value)); return *this;}


    /**
     * <p>Source server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerID = value; }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerID = std::move(value); }

    /**
     * <p>Source server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerID.assign(value); }

    /**
     * <p>Source server ID.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Source server ID.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Source server ID.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


    /**
     * <p>Source server Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Source server Tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Source server Tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Source server Tags.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Source server Tags.</p>
     */
    inline ChangeServerLifeCycleStateResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Source server Tags.</p>
     */
    inline ChangeServerLifeCycleStateResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline ChangeServerLifeCycleStateResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline ChangeServerLifeCycleStateResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline ChangeServerLifeCycleStateResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline ChangeServerLifeCycleStateResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline ChangeServerLifeCycleStateResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Source server Tags.</p>
     */
    inline ChangeServerLifeCycleStateResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    DataReplicationInfo m_dataReplicationInfo;

    bool m_isArchived;

    LaunchedInstance m_launchedInstance;

    LifeCycle m_lifeCycle;

    SourceProperties m_sourceProperties;

    Aws::String m_sourceServerID;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
