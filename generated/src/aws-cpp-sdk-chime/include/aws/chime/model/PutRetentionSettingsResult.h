/**
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
  class PutRetentionSettingsResult
  {
  public:
    AWS_CHIME_API PutRetentionSettingsResult() = default;
    AWS_CHIME_API PutRetentionSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API PutRetentionSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The retention settings.</p>
     */
    inline const RetentionSettings& GetRetentionSettings() const { return m_retentionSettings; }
    template<typename RetentionSettingsT = RetentionSettings>
    void SetRetentionSettings(RetentionSettingsT&& value) { m_retentionSettingsHasBeenSet = true; m_retentionSettings = std::forward<RetentionSettingsT>(value); }
    template<typename RetentionSettingsT = RetentionSettings>
    PutRetentionSettingsResult& WithRetentionSettings(RetentionSettingsT&& value) { SetRetentionSettings(std::forward<RetentionSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp representing the time at which the specified items are
     * permanently deleted, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiateDeletionTimestamp() const { return m_initiateDeletionTimestamp; }
    template<typename InitiateDeletionTimestampT = Aws::Utils::DateTime>
    void SetInitiateDeletionTimestamp(InitiateDeletionTimestampT&& value) { m_initiateDeletionTimestampHasBeenSet = true; m_initiateDeletionTimestamp = std::forward<InitiateDeletionTimestampT>(value); }
    template<typename InitiateDeletionTimestampT = Aws::Utils::DateTime>
    PutRetentionSettingsResult& WithInitiateDeletionTimestamp(InitiateDeletionTimestampT&& value) { SetInitiateDeletionTimestamp(std::forward<InitiateDeletionTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutRetentionSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RetentionSettings m_retentionSettings;
    bool m_retentionSettingsHasBeenSet = false;

    Aws::Utils::DateTime m_initiateDeletionTimestamp{};
    bool m_initiateDeletionTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
