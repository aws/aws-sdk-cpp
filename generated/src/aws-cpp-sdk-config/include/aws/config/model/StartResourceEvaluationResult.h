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
  class StartResourceEvaluationResult
  {
  public:
    AWS_CONFIGSERVICE_API StartResourceEvaluationResult() = default;
    AWS_CONFIGSERVICE_API StartResourceEvaluationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API StartResourceEvaluationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique ResourceEvaluationId that is associated with a single execution.</p>
     */
    inline const Aws::String& GetResourceEvaluationId() const { return m_resourceEvaluationId; }
    template<typename ResourceEvaluationIdT = Aws::String>
    void SetResourceEvaluationId(ResourceEvaluationIdT&& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = std::forward<ResourceEvaluationIdT>(value); }
    template<typename ResourceEvaluationIdT = Aws::String>
    StartResourceEvaluationResult& WithResourceEvaluationId(ResourceEvaluationIdT&& value) { SetResourceEvaluationId(std::forward<ResourceEvaluationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartResourceEvaluationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceEvaluationId;
    bool m_resourceEvaluationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
