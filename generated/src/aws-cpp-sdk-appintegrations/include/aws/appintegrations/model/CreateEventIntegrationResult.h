/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
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
namespace AppIntegrationsService
{
namespace Model
{
  class CreateEventIntegrationResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API CreateEventIntegrationResult() = default;
    AWS_APPINTEGRATIONSSERVICE_API CreateEventIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API CreateEventIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the event integration. </p>
     */
    inline const Aws::String& GetEventIntegrationArn() const { return m_eventIntegrationArn; }
    template<typename EventIntegrationArnT = Aws::String>
    void SetEventIntegrationArn(EventIntegrationArnT&& value) { m_eventIntegrationArnHasBeenSet = true; m_eventIntegrationArn = std::forward<EventIntegrationArnT>(value); }
    template<typename EventIntegrationArnT = Aws::String>
    CreateEventIntegrationResult& WithEventIntegrationArn(EventIntegrationArnT&& value) { SetEventIntegrationArn(std::forward<EventIntegrationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEventIntegrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventIntegrationArn;
    bool m_eventIntegrationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
