/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mgn/model/WaveAggregatedStatus.h>
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
  class CreateWaveResult
  {
  public:
    AWS_MGN_API CreateWaveResult();
    AWS_MGN_API CreateWaveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API CreateWaveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Wave ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Wave ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Wave ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Wave ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Wave ARN.</p>
     */
    inline CreateWaveResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Wave ARN.</p>
     */
    inline CreateWaveResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Wave ARN.</p>
     */
    inline CreateWaveResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Wave creation dateTime.</p>
     */
    inline const Aws::String& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>Wave creation dateTime.</p>
     */
    inline void SetCreationDateTime(const Aws::String& value) { m_creationDateTime = value; }

    /**
     * <p>Wave creation dateTime.</p>
     */
    inline void SetCreationDateTime(Aws::String&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>Wave creation dateTime.</p>
     */
    inline void SetCreationDateTime(const char* value) { m_creationDateTime.assign(value); }

    /**
     * <p>Wave creation dateTime.</p>
     */
    inline CreateWaveResult& WithCreationDateTime(const Aws::String& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>Wave creation dateTime.</p>
     */
    inline CreateWaveResult& WithCreationDateTime(Aws::String&& value) { SetCreationDateTime(std::move(value)); return *this;}

    /**
     * <p>Wave creation dateTime.</p>
     */
    inline CreateWaveResult& WithCreationDateTime(const char* value) { SetCreationDateTime(value); return *this;}


    /**
     * <p>Wave description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Wave description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Wave description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>Wave description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Wave description.</p>
     */
    inline CreateWaveResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Wave description.</p>
     */
    inline CreateWaveResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Wave description.</p>
     */
    inline CreateWaveResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Wave archival status.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }

    /**
     * <p>Wave archival status.</p>
     */
    inline void SetIsArchived(bool value) { m_isArchived = value; }

    /**
     * <p>Wave archival status.</p>
     */
    inline CreateWaveResult& WithIsArchived(bool value) { SetIsArchived(value); return *this;}


    /**
     * <p>Wave last modified dateTime.</p>
     */
    inline const Aws::String& GetLastModifiedDateTime() const{ return m_lastModifiedDateTime; }

    /**
     * <p>Wave last modified dateTime.</p>
     */
    inline void SetLastModifiedDateTime(const Aws::String& value) { m_lastModifiedDateTime = value; }

    /**
     * <p>Wave last modified dateTime.</p>
     */
    inline void SetLastModifiedDateTime(Aws::String&& value) { m_lastModifiedDateTime = std::move(value); }

    /**
     * <p>Wave last modified dateTime.</p>
     */
    inline void SetLastModifiedDateTime(const char* value) { m_lastModifiedDateTime.assign(value); }

    /**
     * <p>Wave last modified dateTime.</p>
     */
    inline CreateWaveResult& WithLastModifiedDateTime(const Aws::String& value) { SetLastModifiedDateTime(value); return *this;}

    /**
     * <p>Wave last modified dateTime.</p>
     */
    inline CreateWaveResult& WithLastModifiedDateTime(Aws::String&& value) { SetLastModifiedDateTime(std::move(value)); return *this;}

    /**
     * <p>Wave last modified dateTime.</p>
     */
    inline CreateWaveResult& WithLastModifiedDateTime(const char* value) { SetLastModifiedDateTime(value); return *this;}


    /**
     * <p>Wave name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Wave name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Wave name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Wave name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Wave name.</p>
     */
    inline CreateWaveResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Wave name.</p>
     */
    inline CreateWaveResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Wave name.</p>
     */
    inline CreateWaveResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Wave tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Wave tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Wave tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Wave tags.</p>
     */
    inline CreateWaveResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>Wave aggregated status.</p>
     */
    inline const WaveAggregatedStatus& GetWaveAggregatedStatus() const{ return m_waveAggregatedStatus; }

    /**
     * <p>Wave aggregated status.</p>
     */
    inline void SetWaveAggregatedStatus(const WaveAggregatedStatus& value) { m_waveAggregatedStatus = value; }

    /**
     * <p>Wave aggregated status.</p>
     */
    inline void SetWaveAggregatedStatus(WaveAggregatedStatus&& value) { m_waveAggregatedStatus = std::move(value); }

    /**
     * <p>Wave aggregated status.</p>
     */
    inline CreateWaveResult& WithWaveAggregatedStatus(const WaveAggregatedStatus& value) { SetWaveAggregatedStatus(value); return *this;}

    /**
     * <p>Wave aggregated status.</p>
     */
    inline CreateWaveResult& WithWaveAggregatedStatus(WaveAggregatedStatus&& value) { SetWaveAggregatedStatus(std::move(value)); return *this;}


    /**
     * <p>Wave ID.</p>
     */
    inline const Aws::String& GetWaveID() const{ return m_waveID; }

    /**
     * <p>Wave ID.</p>
     */
    inline void SetWaveID(const Aws::String& value) { m_waveID = value; }

    /**
     * <p>Wave ID.</p>
     */
    inline void SetWaveID(Aws::String&& value) { m_waveID = std::move(value); }

    /**
     * <p>Wave ID.</p>
     */
    inline void SetWaveID(const char* value) { m_waveID.assign(value); }

    /**
     * <p>Wave ID.</p>
     */
    inline CreateWaveResult& WithWaveID(const Aws::String& value) { SetWaveID(value); return *this;}

    /**
     * <p>Wave ID.</p>
     */
    inline CreateWaveResult& WithWaveID(Aws::String&& value) { SetWaveID(std::move(value)); return *this;}

    /**
     * <p>Wave ID.</p>
     */
    inline CreateWaveResult& WithWaveID(const char* value) { SetWaveID(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_creationDateTime;

    Aws::String m_description;

    bool m_isArchived;

    Aws::String m_lastModifiedDateTime;

    Aws::String m_name;

    Aws::Map<Aws::String, Aws::String> m_tags;

    WaveAggregatedStatus m_waveAggregatedStatus;

    Aws::String m_waveID;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
