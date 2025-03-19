/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/BatchUpdateExclusionWindowsError.h>
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
namespace ApplicationSignals
{
namespace Model
{
  class BatchUpdateExclusionWindowsResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsResult() = default;
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API BatchUpdateExclusionWindowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of SLO IDs that were successfully processed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSloIds() const { return m_sloIds; }
    template<typename SloIdsT = Aws::Vector<Aws::String>>
    void SetSloIds(SloIdsT&& value) { m_sloIdsHasBeenSet = true; m_sloIds = std::forward<SloIdsT>(value); }
    template<typename SloIdsT = Aws::Vector<Aws::String>>
    BatchUpdateExclusionWindowsResult& WithSloIds(SloIdsT&& value) { SetSloIds(std::forward<SloIdsT>(value)); return *this;}
    template<typename SloIdsT = Aws::String>
    BatchUpdateExclusionWindowsResult& AddSloIds(SloIdsT&& value) { m_sloIdsHasBeenSet = true; m_sloIds.emplace_back(std::forward<SloIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of errors that occurred while processing the request.</p>
     */
    inline const Aws::Vector<BatchUpdateExclusionWindowsError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchUpdateExclusionWindowsError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchUpdateExclusionWindowsError>>
    BatchUpdateExclusionWindowsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchUpdateExclusionWindowsError>
    BatchUpdateExclusionWindowsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUpdateExclusionWindowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_sloIds;
    bool m_sloIdsHasBeenSet = false;

    Aws::Vector<BatchUpdateExclusionWindowsError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
