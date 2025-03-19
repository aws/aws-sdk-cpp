/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/ServiceLevelObjective.h>
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
namespace ApplicationSignals
{
namespace Model
{
  class CreateServiceLevelObjectiveResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API CreateServiceLevelObjectiveResult() = default;
    AWS_APPLICATIONSIGNALS_API CreateServiceLevelObjectiveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API CreateServiceLevelObjectiveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains information about the SLO that you just
     * created.</p>
     */
    inline const ServiceLevelObjective& GetSlo() const { return m_slo; }
    template<typename SloT = ServiceLevelObjective>
    void SetSlo(SloT&& value) { m_sloHasBeenSet = true; m_slo = std::forward<SloT>(value); }
    template<typename SloT = ServiceLevelObjective>
    CreateServiceLevelObjectiveResult& WithSlo(SloT&& value) { SetSlo(std::forward<SloT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateServiceLevelObjectiveResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceLevelObjective m_slo;
    bool m_sloHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
