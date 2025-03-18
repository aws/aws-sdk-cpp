/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/DomainConfigurationSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListDomainConfigurationsResult
  {
  public:
    AWS_IOT_API ListDomainConfigurationsResult() = default;
    AWS_IOT_API ListDomainConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListDomainConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of objects that contain summary information about the user's domain
     * configurations.</p>
     */
    inline const Aws::Vector<DomainConfigurationSummary>& GetDomainConfigurations() const { return m_domainConfigurations; }
    template<typename DomainConfigurationsT = Aws::Vector<DomainConfigurationSummary>>
    void SetDomainConfigurations(DomainConfigurationsT&& value) { m_domainConfigurationsHasBeenSet = true; m_domainConfigurations = std::forward<DomainConfigurationsT>(value); }
    template<typename DomainConfigurationsT = Aws::Vector<DomainConfigurationSummary>>
    ListDomainConfigurationsResult& WithDomainConfigurations(DomainConfigurationsT&& value) { SetDomainConfigurations(std::forward<DomainConfigurationsT>(value)); return *this;}
    template<typename DomainConfigurationsT = DomainConfigurationSummary>
    ListDomainConfigurationsResult& AddDomainConfigurations(DomainConfigurationsT&& value) { m_domainConfigurationsHasBeenSet = true; m_domainConfigurations.emplace_back(std::forward<DomainConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListDomainConfigurationsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDomainConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainConfigurationSummary> m_domainConfigurations;
    bool m_domainConfigurationsHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
