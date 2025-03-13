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
    AWS_GUARDDUTY_API CreateDetectorResult() = default;
    AWS_GUARDDUTY_API CreateDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GUARDDUTY_API CreateDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the created detector.</p>
     */
    inline const Aws::String& GetDetectorId() const { return m_detectorId; }
    template<typename DetectorIdT = Aws::String>
    void SetDetectorId(DetectorIdT&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::forward<DetectorIdT>(value); }
    template<typename DetectorIdT = Aws::String>
    CreateDetectorResult& WithDetectorId(DetectorIdT&& value) { SetDetectorId(std::forward<DetectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the data sources that couldn't be enabled when GuardDuty was
     * enabled for the first time.</p>
     */
    inline const UnprocessedDataSourcesResult& GetUnprocessedDataSources() const { return m_unprocessedDataSources; }
    template<typename UnprocessedDataSourcesT = UnprocessedDataSourcesResult>
    void SetUnprocessedDataSources(UnprocessedDataSourcesT&& value) { m_unprocessedDataSourcesHasBeenSet = true; m_unprocessedDataSources = std::forward<UnprocessedDataSourcesT>(value); }
    template<typename UnprocessedDataSourcesT = UnprocessedDataSourcesResult>
    CreateDetectorResult& WithUnprocessedDataSources(UnprocessedDataSourcesT&& value) { SetUnprocessedDataSources(std::forward<UnprocessedDataSourcesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDetectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet = false;

    UnprocessedDataSourcesResult m_unprocessedDataSources;
    bool m_unprocessedDataSourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
