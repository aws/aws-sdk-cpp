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
  class CreateSuiteDefinitionResult
  {
  public:
    AWS_IOTDEVICEADVISOR_API CreateSuiteDefinitionResult() = default;
    AWS_IOTDEVICEADVISOR_API CreateSuiteDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTDEVICEADVISOR_API CreateSuiteDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The UUID of the test suite created.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const { return m_suiteDefinitionId; }
    template<typename SuiteDefinitionIdT = Aws::String>
    void SetSuiteDefinitionId(SuiteDefinitionIdT&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::forward<SuiteDefinitionIdT>(value); }
    template<typename SuiteDefinitionIdT = Aws::String>
    CreateSuiteDefinitionResult& WithSuiteDefinitionId(SuiteDefinitionIdT&& value) { SetSuiteDefinitionId(std::forward<SuiteDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the test suite.</p>
     */
    inline const Aws::String& GetSuiteDefinitionArn() const { return m_suiteDefinitionArn; }
    template<typename SuiteDefinitionArnT = Aws::String>
    void SetSuiteDefinitionArn(SuiteDefinitionArnT&& value) { m_suiteDefinitionArnHasBeenSet = true; m_suiteDefinitionArn = std::forward<SuiteDefinitionArnT>(value); }
    template<typename SuiteDefinitionArnT = Aws::String>
    CreateSuiteDefinitionResult& WithSuiteDefinitionArn(SuiteDefinitionArnT&& value) { SetSuiteDefinitionArn(std::forward<SuiteDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The suite definition name of the test suite. This is a required
     * parameter.</p>
     */
    inline const Aws::String& GetSuiteDefinitionName() const { return m_suiteDefinitionName; }
    template<typename SuiteDefinitionNameT = Aws::String>
    void SetSuiteDefinitionName(SuiteDefinitionNameT&& value) { m_suiteDefinitionNameHasBeenSet = true; m_suiteDefinitionName = std::forward<SuiteDefinitionNameT>(value); }
    template<typename SuiteDefinitionNameT = Aws::String>
    CreateSuiteDefinitionResult& WithSuiteDefinitionName(SuiteDefinitionNameT&& value) { SetSuiteDefinitionName(std::forward<SuiteDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the test suite was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateSuiteDefinitionResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSuiteDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet = false;

    Aws::String m_suiteDefinitionArn;
    bool m_suiteDefinitionArnHasBeenSet = false;

    Aws::String m_suiteDefinitionName;
    bool m_suiteDefinitionNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
