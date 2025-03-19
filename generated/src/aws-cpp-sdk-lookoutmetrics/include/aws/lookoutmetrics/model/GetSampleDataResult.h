/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LookoutMetrics
{
namespace Model
{
  class GetSampleDataResult
  {
  public:
    AWS_LOOKOUTMETRICS_API GetSampleDataResult() = default;
    AWS_LOOKOUTMETRICS_API GetSampleDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTMETRICS_API GetSampleDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of header labels for the records.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHeaderValues() const { return m_headerValues; }
    template<typename HeaderValuesT = Aws::Vector<Aws::String>>
    void SetHeaderValues(HeaderValuesT&& value) { m_headerValuesHasBeenSet = true; m_headerValues = std::forward<HeaderValuesT>(value); }
    template<typename HeaderValuesT = Aws::Vector<Aws::String>>
    GetSampleDataResult& WithHeaderValues(HeaderValuesT&& value) { SetHeaderValues(std::forward<HeaderValuesT>(value)); return *this;}
    template<typename HeaderValuesT = Aws::String>
    GetSampleDataResult& AddHeaderValues(HeaderValuesT&& value) { m_headerValuesHasBeenSet = true; m_headerValues.emplace_back(std::forward<HeaderValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of records.</p>
     */
    inline const Aws::Vector<Aws::Vector<Aws::String>>& GetSampleRows() const { return m_sampleRows; }
    template<typename SampleRowsT = Aws::Vector<Aws::Vector<Aws::String>>>
    void SetSampleRows(SampleRowsT&& value) { m_sampleRowsHasBeenSet = true; m_sampleRows = std::forward<SampleRowsT>(value); }
    template<typename SampleRowsT = Aws::Vector<Aws::Vector<Aws::String>>>
    GetSampleDataResult& WithSampleRows(SampleRowsT&& value) { SetSampleRows(std::forward<SampleRowsT>(value)); return *this;}
    template<typename SampleRowsT = Aws::Vector<Aws::String>>
    GetSampleDataResult& AddSampleRows(SampleRowsT&& value) { m_sampleRowsHasBeenSet = true; m_sampleRows.emplace_back(std::forward<SampleRowsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSampleDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_headerValues;
    bool m_headerValuesHasBeenSet = false;

    Aws::Vector<Aws::Vector<Aws::String>> m_sampleRows;
    bool m_sampleRowsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
