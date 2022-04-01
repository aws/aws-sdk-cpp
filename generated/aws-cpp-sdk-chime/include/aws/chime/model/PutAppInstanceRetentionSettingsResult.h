﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/AppInstanceRetentionSettings.h>
#include <aws/core/utils/DateTime.h>
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
  class AWS_CHIME_API PutAppInstanceRetentionSettingsResult
  {
  public:
    PutAppInstanceRetentionSettingsResult();
    PutAppInstanceRetentionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutAppInstanceRetentionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time in days to retain data. Data type: number.</p>
     */
    inline const AppInstanceRetentionSettings& GetAppInstanceRetentionSettings() const{ return m_appInstanceRetentionSettings; }

    /**
     * <p>The time in days to retain data. Data type: number.</p>
     */
    inline void SetAppInstanceRetentionSettings(const AppInstanceRetentionSettings& value) { m_appInstanceRetentionSettings = value; }

    /**
     * <p>The time in days to retain data. Data type: number.</p>
     */
    inline void SetAppInstanceRetentionSettings(AppInstanceRetentionSettings&& value) { m_appInstanceRetentionSettings = std::move(value); }

    /**
     * <p>The time in days to retain data. Data type: number.</p>
     */
    inline PutAppInstanceRetentionSettingsResult& WithAppInstanceRetentionSettings(const AppInstanceRetentionSettings& value) { SetAppInstanceRetentionSettings(value); return *this;}

    /**
     * <p>The time in days to retain data. Data type: number.</p>
     */
    inline PutAppInstanceRetentionSettingsResult& WithAppInstanceRetentionSettings(AppInstanceRetentionSettings&& value) { SetAppInstanceRetentionSettings(std::move(value)); return *this;}


    /**
     * <p>The time at which the API deletes data.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiateDeletionTimestamp() const{ return m_initiateDeletionTimestamp; }

    /**
     * <p>The time at which the API deletes data.</p>
     */
    inline void SetInitiateDeletionTimestamp(const Aws::Utils::DateTime& value) { m_initiateDeletionTimestamp = value; }

    /**
     * <p>The time at which the API deletes data.</p>
     */
    inline void SetInitiateDeletionTimestamp(Aws::Utils::DateTime&& value) { m_initiateDeletionTimestamp = std::move(value); }

    /**
     * <p>The time at which the API deletes data.</p>
     */
    inline PutAppInstanceRetentionSettingsResult& WithInitiateDeletionTimestamp(const Aws::Utils::DateTime& value) { SetInitiateDeletionTimestamp(value); return *this;}

    /**
     * <p>The time at which the API deletes data.</p>
     */
    inline PutAppInstanceRetentionSettingsResult& WithInitiateDeletionTimestamp(Aws::Utils::DateTime&& value) { SetInitiateDeletionTimestamp(std::move(value)); return *this;}

  private:

    AppInstanceRetentionSettings m_appInstanceRetentionSettings;

    Aws::Utils::DateTime m_initiateDeletionTimestamp;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
