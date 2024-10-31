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
    AWS_GLUE_API GetColumnStatisticsTaskSettingsResult();
    AWS_GLUE_API GetColumnStatisticsTaskSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetColumnStatisticsTaskSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <code>ColumnStatisticsTaskSettings</code> object representing the settings
     * for the column statistics task.</p>
     */
    inline const ColumnStatisticsTaskSettings& GetColumnStatisticsTaskSettings() const{ return m_columnStatisticsTaskSettings; }
    inline void SetColumnStatisticsTaskSettings(const ColumnStatisticsTaskSettings& value) { m_columnStatisticsTaskSettings = value; }
    inline void SetColumnStatisticsTaskSettings(ColumnStatisticsTaskSettings&& value) { m_columnStatisticsTaskSettings = std::move(value); }
    inline GetColumnStatisticsTaskSettingsResult& WithColumnStatisticsTaskSettings(const ColumnStatisticsTaskSettings& value) { SetColumnStatisticsTaskSettings(value); return *this;}
    inline GetColumnStatisticsTaskSettingsResult& WithColumnStatisticsTaskSettings(ColumnStatisticsTaskSettings&& value) { SetColumnStatisticsTaskSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetColumnStatisticsTaskSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetColumnStatisticsTaskSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetColumnStatisticsTaskSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ColumnStatisticsTaskSettings m_columnStatisticsTaskSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
