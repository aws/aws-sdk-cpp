/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/UnprocessedDataSourcesResult.h>
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
namespace GuardDuty
{
namespace Model
{
  class CreateDetectorResult
  {
  public:
    AWS_GUARDDUTY_API CreateDetectorResult();
    AWS_GUARDDUTY_API CreateDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API CreateDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the created detector.</p>
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }
    inline void SetDetectorId(const Aws::String& value) { m_detectorId = value; }
    inline void SetDetectorId(Aws::String&& value) { m_detectorId = std::move(value); }
    inline void SetDetectorId(const char* value) { m_detectorId.assign(value); }
    inline CreateDetectorResult& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}
    inline CreateDetectorResult& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}
    inline CreateDetectorResult& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data sources that couldn't be enabled when GuardDuty was
     * enabled for the first time.</p>
     */
    inline const UnprocessedDataSourcesResult& GetUnprocessedDataSources() const{ return m_unprocessedDataSources; }
    inline void SetUnprocessedDataSources(const UnprocessedDataSourcesResult& value) { m_unprocessedDataSources = value; }
    inline void SetUnprocessedDataSources(UnprocessedDataSourcesResult&& value) { m_unprocessedDataSources = std::move(value); }
    inline CreateDetectorResult& WithUnprocessedDataSources(const UnprocessedDataSourcesResult& value) { SetUnprocessedDataSources(value); return *this;}
    inline CreateDetectorResult& WithUnprocessedDataSources(UnprocessedDataSourcesResult&& value) { SetUnprocessedDataSources(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDetectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDetectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDetectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;

    UnprocessedDataSourcesResult m_unprocessedDataSources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
