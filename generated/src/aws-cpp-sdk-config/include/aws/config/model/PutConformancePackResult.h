/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{
  class PutConformancePackResult
  {
  public:
    AWS_CONFIGSERVICE_API PutConformancePackResult() = default;
    AWS_CONFIGSERVICE_API PutConformancePackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API PutConformancePackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the conformance pack.</p>
     */
    inline const Aws::String& GetConformancePackArn() const { return m_conformancePackArn; }
    template<typename ConformancePackArnT = Aws::String>
    void SetConformancePackArn(ConformancePackArnT&& value) { m_conformancePackArnHasBeenSet = true; m_conformancePackArn = std::forward<ConformancePackArnT>(value); }
    template<typename ConformancePackArnT = Aws::String>
    PutConformancePackResult& WithConformancePackArn(ConformancePackArnT&& value) { SetConformancePackArn(std::forward<ConformancePackArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutConformancePackResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_conformancePackArn;
    bool m_conformancePackArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
