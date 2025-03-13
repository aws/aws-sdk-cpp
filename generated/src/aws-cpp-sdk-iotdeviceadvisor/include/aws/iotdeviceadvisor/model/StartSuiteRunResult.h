/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTDeviceAdvisor
{
namespace Model
{
  class StartSuiteRunResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API StartSuiteRunResult() = default;
    AWS_IOTDEVICEADVISOR_API StartSuiteRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API StartSuiteRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Suite Run ID of the started suite run.</p>
     */
    inline const Aws::String& GetSuiteRunId() const { return m_suiteRunId; }
    template<typename SuiteRunIdT = Aws::String>
    void SetSuiteRunId(SuiteRunIdT&& value) { m_suiteRunIdHasBeenSet = true; m_suiteRunId = std::forward<SuiteRunIdT>(value); }
    template<typename SuiteRunIdT = Aws::String>
    StartSuiteRunResult& WithSuiteRunId(SuiteRunIdT&& value) { SetSuiteRunId(std::forward<SuiteRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the started suite run.</p>
     */
    inline const Aws::String& GetSuiteRunArn() const { return m_suiteRunArn; }
    template<typename SuiteRunArnT = Aws::String>
    void SetSuiteRunArn(SuiteRunArnT&& value) { m_suiteRunArnHasBeenSet = true; m_suiteRunArn = std::forward<SuiteRunArnT>(value); }
    template<typename SuiteRunArnT = Aws::String>
    StartSuiteRunResult& WithSuiteRunArn(SuiteRunArnT&& value) { SetSuiteRunArn(std::forward<SuiteRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Starts a Device Advisor test suite run based on suite create time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    StartSuiteRunResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response of an Device Advisor test endpoint.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    StartSuiteRunResult& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartSuiteRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_suiteRunId;
    bool m_suiteRunIdHasBeenSet = false;

    Aws::String m_suiteRunArn;
    bool m_suiteRunArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
