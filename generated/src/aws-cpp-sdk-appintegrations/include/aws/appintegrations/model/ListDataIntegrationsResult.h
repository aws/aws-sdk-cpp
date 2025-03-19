/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/DataIntegrationSummary.h>
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
  class ListDataIntegrationsResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationsResult() = default;
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The DataIntegrations associated with this account.</p>
     */
    inline const Aws::Vector<DataIntegrationSummary>& GetDataIntegrations() const { return m_dataIntegrations; }
    template<typename DataIntegrationsT = Aws::Vector<DataIntegrationSummary>>
    void SetDataIntegrations(DataIntegrationsT&& value) { m_dataIntegrationsHasBeenSet = true; m_dataIntegrations = std::forward<DataIntegrationsT>(value); }
    template<typename DataIntegrationsT = Aws::Vector<DataIntegrationSummary>>
    ListDataIntegrationsResult& WithDataIntegrations(DataIntegrationsT&& value) { SetDataIntegrations(std::forward<DataIntegrationsT>(value)); return *this;}
    template<typename DataIntegrationsT = DataIntegrationSummary>
    ListDataIntegrationsResult& AddDataIntegrations(DataIntegrationsT&& value) { m_dataIntegrationsHasBeenSet = true; m_dataIntegrations.emplace_back(std::forward<DataIntegrationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataIntegrationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataIntegrationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataIntegrationSummary> m_dataIntegrations;
    bool m_dataIntegrationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
