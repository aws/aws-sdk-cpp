/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/Evaluation.h>
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
namespace ConfigService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutEvaluationsResponse">AWS
   * API Reference</a></p>
   */
  class PutEvaluationsResult
  {
  public:
    AWS_CONFIGSERVICE_API PutEvaluationsResult() = default;
    AWS_CONFIGSERVICE_API PutEvaluationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutEvaluationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Requests that failed because of a client or server error.</p>
     */
    inline const Aws::Vector<Evaluation>& GetFailedEvaluations() const { return m_failedEvaluations; }
    template<typename FailedEvaluationsT = Aws::Vector<Evaluation>>
    void SetFailedEvaluations(FailedEvaluationsT&& value) { m_failedEvaluationsHasBeenSet = true; m_failedEvaluations = std::forward<FailedEvaluationsT>(value); }
    template<typename FailedEvaluationsT = Aws::Vector<Evaluation>>
    PutEvaluationsResult& WithFailedEvaluations(FailedEvaluationsT&& value) { SetFailedEvaluations(std::forward<FailedEvaluationsT>(value)); return *this;}
    template<typename FailedEvaluationsT = Evaluation>
    PutEvaluationsResult& AddFailedEvaluations(FailedEvaluationsT&& value) { m_failedEvaluationsHasBeenSet = true; m_failedEvaluations.emplace_back(std::forward<FailedEvaluationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutEvaluationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Evaluation> m_failedEvaluations;
    bool m_failedEvaluationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
