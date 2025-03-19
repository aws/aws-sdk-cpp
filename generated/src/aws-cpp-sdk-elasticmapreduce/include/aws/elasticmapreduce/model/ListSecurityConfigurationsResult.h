/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/SecurityConfigurationSummary.h>
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
namespace EMR
{
namespace Model
{
  class ListSecurityConfigurationsResult
  {
  public:
    AWS_EMR_API ListSecurityConfigurationsResult() = default;
    AWS_EMR_API ListSecurityConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API ListSecurityConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The creation date and time, and name, of each security configuration.</p>
     */
    inline const Aws::Vector<SecurityConfigurationSummary>& GetSecurityConfigurations() const { return m_securityConfigurations; }
    template<typename SecurityConfigurationsT = Aws::Vector<SecurityConfigurationSummary>>
    void SetSecurityConfigurations(SecurityConfigurationsT&& value) { m_securityConfigurationsHasBeenSet = true; m_securityConfigurations = std::forward<SecurityConfigurationsT>(value); }
    template<typename SecurityConfigurationsT = Aws::Vector<SecurityConfigurationSummary>>
    ListSecurityConfigurationsResult& WithSecurityConfigurations(SecurityConfigurationsT&& value) { SetSecurityConfigurations(std::forward<SecurityConfigurationsT>(value)); return *this;}
    template<typename SecurityConfigurationsT = SecurityConfigurationSummary>
    ListSecurityConfigurationsResult& AddSecurityConfigurations(SecurityConfigurationsT&& value) { m_securityConfigurationsHasBeenSet = true; m_securityConfigurations.emplace_back(std::forward<SecurityConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that indicates the next set of results to retrieve.
     * Include the marker in the next ListSecurityConfiguration call to retrieve the
     * next page of results, if required.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListSecurityConfigurationsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSecurityConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityConfigurationSummary> m_securityConfigurations;
    bool m_securityConfigurationsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
