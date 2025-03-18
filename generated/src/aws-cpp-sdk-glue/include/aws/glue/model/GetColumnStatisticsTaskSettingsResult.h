/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ColumnStatisticsTaskSettings.h>
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
namespace Glue
{
namespace Model
{
  class GetColumnStatisticsTaskSettingsResult
  {
  public:
    AWS_GLUE_API GetColumnStatisticsTaskSettingsResult() = default;
    AWS_GLUE_API GetColumnStatisticsTaskSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetColumnStatisticsTaskSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>ColumnStatisticsTaskSettings</code> object representing the settings
     * for the column statistics task.</p>
     */
    inline const ColumnStatisticsTaskSettings& GetColumnStatisticsTaskSettings() const { return m_columnStatisticsTaskSettings; }
    template<typename ColumnStatisticsTaskSettingsT = ColumnStatisticsTaskSettings>
    void SetColumnStatisticsTaskSettings(ColumnStatisticsTaskSettingsT&& value) { m_columnStatisticsTaskSettingsHasBeenSet = true; m_columnStatisticsTaskSettings = std::forward<ColumnStatisticsTaskSettingsT>(value); }
    template<typename ColumnStatisticsTaskSettingsT = ColumnStatisticsTaskSettings>
    GetColumnStatisticsTaskSettingsResult& WithColumnStatisticsTaskSettings(ColumnStatisticsTaskSettingsT&& value) { SetColumnStatisticsTaskSettings(std::forward<ColumnStatisticsTaskSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetColumnStatisticsTaskSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ColumnStatisticsTaskSettings m_columnStatisticsTaskSettings;
    bool m_columnStatisticsTaskSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
