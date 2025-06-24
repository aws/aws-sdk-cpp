/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CodeSecurityIntegrationSummary.h>
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
  class ListCodeSecurityIntegrationsResult
  {
  public:
    AWS_INSPECTOR2_API ListCodeSecurityIntegrationsResult() = default;
    AWS_INSPECTOR2_API ListCodeSecurityIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListCodeSecurityIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of code security integration summaries.</p>
     */
    inline const Aws::Vector<CodeSecurityIntegrationSummary>& GetIntegrations() const { return m_integrations; }
    template<typename IntegrationsT = Aws::Vector<CodeSecurityIntegrationSummary>>
    void SetIntegrations(IntegrationsT&& value) { m_integrationsHasBeenSet = true; m_integrations = std::forward<IntegrationsT>(value); }
    template<typename IntegrationsT = Aws::Vector<CodeSecurityIntegrationSummary>>
    ListCodeSecurityIntegrationsResult& WithIntegrations(IntegrationsT&& value) { SetIntegrations(std::forward<IntegrationsT>(value)); return *this;}
    template<typename IntegrationsT = CodeSecurityIntegrationSummary>
    ListCodeSecurityIntegrationsResult& AddIntegrations(IntegrationsT&& value) { m_integrationsHasBeenSet = true; m_integrations.emplace_back(std::forward<IntegrationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the NextToken value returned from the previous request to continue listing
     * results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCodeSecurityIntegrationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCodeSecurityIntegrationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CodeSecurityIntegrationSummary> m_integrations;
    bool m_integrationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
