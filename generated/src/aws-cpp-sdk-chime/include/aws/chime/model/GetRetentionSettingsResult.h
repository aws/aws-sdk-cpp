﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/RetentionSettings.h>
#include <aws/core/utils/DateTime.h>
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
namespace Chime
{
namespace Model
{
  class GetRetentionSettingsResult
  {
  public:
    AWS_CHIME_API GetRetentionSettingsResult();
    AWS_CHIME_API GetRetentionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetRetentionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The retention settings.</p>
     */
    inline const RetentionSettings& GetRetentionSettings() const{ return m_retentionSettings; }
    inline void SetRetentionSettings(const RetentionSettings& value) { m_retentionSettings = value; }
    inline void SetRetentionSettings(RetentionSettings&& value) { m_retentionSettings = std::move(value); }
    inline GetRetentionSettingsResult& WithRetentionSettings(const RetentionSettings& value) { SetRetentionSettings(value); return *this;}
    inline GetRetentionSettingsResult& WithRetentionSettings(RetentionSettings&& value) { SetRetentionSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp representing the time at which the specified items are
     * permanently deleted, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiateDeletionTimestamp() const{ return m_initiateDeletionTimestamp; }
    inline void SetInitiateDeletionTimestamp(const Aws::Utils::DateTime& value) { m_initiateDeletionTimestamp = value; }
    inline void SetInitiateDeletionTimestamp(Aws::Utils::DateTime&& value) { m_initiateDeletionTimestamp = std::move(value); }
    inline GetRetentionSettingsResult& WithInitiateDeletionTimestamp(const Aws::Utils::DateTime& value) { SetInitiateDeletionTimestamp(value); return *this;}
    inline GetRetentionSettingsResult& WithInitiateDeletionTimestamp(Aws::Utils::DateTime&& value) { SetInitiateDeletionTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRetentionSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRetentionSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRetentionSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RetentionSettings m_retentionSettings;

    Aws::Utils::DateTime m_initiateDeletionTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
