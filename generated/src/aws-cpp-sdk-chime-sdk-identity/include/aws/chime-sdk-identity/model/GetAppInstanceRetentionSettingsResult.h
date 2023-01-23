/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/AppInstanceRetentionSettings.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class GetAppInstanceRetentionSettingsResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API GetAppInstanceRetentionSettingsResult();
    AWS_CHIMESDKIDENTITY_API GetAppInstanceRetentionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API GetAppInstanceRetentionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The retention settings for the <code>AppInstance</code>.</p>
     */
    inline const AppInstanceRetentionSettings& GetAppInstanceRetentionSettings() const{ return m_appInstanceRetentionSettings; }

    /**
     * <p>The retention settings for the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceRetentionSettings(const AppInstanceRetentionSettings& value) { m_appInstanceRetentionSettings = value; }

    /**
     * <p>The retention settings for the <code>AppInstance</code>.</p>
     */
    inline void SetAppInstanceRetentionSettings(AppInstanceRetentionSettings&& value) { m_appInstanceRetentionSettings = std::move(value); }

    /**
     * <p>The retention settings for the <code>AppInstance</code>.</p>
     */
    inline GetAppInstanceRetentionSettingsResult& WithAppInstanceRetentionSettings(const AppInstanceRetentionSettings& value) { SetAppInstanceRetentionSettings(value); return *this;}

    /**
     * <p>The retention settings for the <code>AppInstance</code>.</p>
     */
    inline GetAppInstanceRetentionSettingsResult& WithAppInstanceRetentionSettings(AppInstanceRetentionSettings&& value) { SetAppInstanceRetentionSettings(std::move(value)); return *this;}


    /**
     * <p>The timestamp representing the time at which the specified items are
     * retained, in Epoch Seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiateDeletionTimestamp() const{ return m_initiateDeletionTimestamp; }

    /**
     * <p>The timestamp representing the time at which the specified items are
     * retained, in Epoch Seconds.</p>
     */
    inline void SetInitiateDeletionTimestamp(const Aws::Utils::DateTime& value) { m_initiateDeletionTimestamp = value; }

    /**
     * <p>The timestamp representing the time at which the specified items are
     * retained, in Epoch Seconds.</p>
     */
    inline void SetInitiateDeletionTimestamp(Aws::Utils::DateTime&& value) { m_initiateDeletionTimestamp = std::move(value); }

    /**
     * <p>The timestamp representing the time at which the specified items are
     * retained, in Epoch Seconds.</p>
     */
    inline GetAppInstanceRetentionSettingsResult& WithInitiateDeletionTimestamp(const Aws::Utils::DateTime& value) { SetInitiateDeletionTimestamp(value); return *this;}

    /**
     * <p>The timestamp representing the time at which the specified items are
     * retained, in Epoch Seconds.</p>
     */
    inline GetAppInstanceRetentionSettingsResult& WithInitiateDeletionTimestamp(Aws::Utils::DateTime&& value) { SetInitiateDeletionTimestamp(std::move(value)); return *this;}

  private:

    AppInstanceRetentionSettings m_appInstanceRetentionSettings;

    Aws::Utils::DateTime m_initiateDeletionTimestamp;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
