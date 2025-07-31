/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/FindingDetail.h>
#include <aws/inspector2/model/FindingDetailsError.h>
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
namespace Inspector2
{
namespace Model
{
  class BatchGetFindingDetailsResult
  {
  public:
    AWS_INSPECTOR2_API BatchGetFindingDetailsResult() = default;
    AWS_INSPECTOR2_API BatchGetFindingDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API BatchGetFindingDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A finding's vulnerability details.</p>
     */
    inline const Aws::Vector<FindingDetail>& GetFindingDetails() const { return m_findingDetails; }
    template<typename FindingDetailsT = Aws::Vector<FindingDetail>>
    void SetFindingDetails(FindingDetailsT&& value) { m_findingDetailsHasBeenSet = true; m_findingDetails = std::forward<FindingDetailsT>(value); }
    template<typename FindingDetailsT = Aws::Vector<FindingDetail>>
    BatchGetFindingDetailsResult& WithFindingDetails(FindingDetailsT&& value) { SetFindingDetails(std::forward<FindingDetailsT>(value)); return *this;}
    template<typename FindingDetailsT = FindingDetail>
    BatchGetFindingDetailsResult& AddFindingDetails(FindingDetailsT&& value) { m_findingDetailsHasBeenSet = true; m_findingDetails.emplace_back(std::forward<FindingDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Error information for findings that details could not be returned for.</p>
     */
    inline const Aws::Vector<FindingDetailsError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<FindingDetailsError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<FindingDetailsError>>
    BatchGetFindingDetailsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = FindingDetailsError>
    BatchGetFindingDetailsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetFindingDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FindingDetail> m_findingDetails;
    bool m_findingDetailsHasBeenSet = false;

    Aws::Vector<FindingDetailsError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
