/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisScanConfiguration.h>
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
  class ListCisScanConfigurationsResult
  {
  public:
    AWS_INSPECTOR2_API ListCisScanConfigurationsResult() = default;
    AWS_INSPECTOR2_API ListCisScanConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListCisScanConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The CIS scan configuration scan configurations.</p>
     */
    inline const Aws::Vector<CisScanConfiguration>& GetScanConfigurations() const { return m_scanConfigurations; }
    template<typename ScanConfigurationsT = Aws::Vector<CisScanConfiguration>>
    void SetScanConfigurations(ScanConfigurationsT&& value) { m_scanConfigurationsHasBeenSet = true; m_scanConfigurations = std::forward<ScanConfigurationsT>(value); }
    template<typename ScanConfigurationsT = Aws::Vector<CisScanConfiguration>>
    ListCisScanConfigurationsResult& WithScanConfigurations(ScanConfigurationsT&& value) { SetScanConfigurations(std::forward<ScanConfigurationsT>(value)); return *this;}
    template<typename ScanConfigurationsT = CisScanConfiguration>
    ListCisScanConfigurationsResult& AddScanConfigurations(ScanConfigurationsT&& value) { m_scanConfigurationsHasBeenSet = true; m_scanConfigurations.emplace_back(std::forward<ScanConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCisScanConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCisScanConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CisScanConfiguration> m_scanConfigurations;
    bool m_scanConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
