/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/InstalledComponent.h>
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
namespace GreengrassV2
{
namespace Model
{
  class ListInstalledComponentsResult
  {
  public:
    AWS_GREENGRASSV2_API ListInstalledComponentsResult() = default;
    AWS_GREENGRASSV2_API ListInstalledComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ListInstalledComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each component on the core device.</p> 
     * <p>Greengrass nucleus v2.7.0 or later is required to get an accurate
     * <code>lastStatusChangeTimestamp</code> response. This response can be inaccurate
     * in earlier Greengrass nucleus versions.</p>   <p>Greengrass nucleus
     * v2.8.0 or later is required to get an accurate
     * <code>lastInstallationSource</code> and <code>lastReportedTimestamp</code>
     * response. This response can be inaccurate or null in earlier Greengrass nucleus
     * versions.</p> 
     */
    inline const Aws::Vector<InstalledComponent>& GetInstalledComponents() const { return m_installedComponents; }
    template<typename InstalledComponentsT = Aws::Vector<InstalledComponent>>
    void SetInstalledComponents(InstalledComponentsT&& value) { m_installedComponentsHasBeenSet = true; m_installedComponents = std::forward<InstalledComponentsT>(value); }
    template<typename InstalledComponentsT = Aws::Vector<InstalledComponent>>
    ListInstalledComponentsResult& WithInstalledComponents(InstalledComponentsT&& value) { SetInstalledComponents(std::forward<InstalledComponentsT>(value)); return *this;}
    template<typename InstalledComponentsT = InstalledComponent>
    ListInstalledComponentsResult& AddInstalledComponents(InstalledComponentsT&& value) { m_installedComponentsHasBeenSet = true; m_installedComponents.emplace_back(std::forward<InstalledComponentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInstalledComponentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInstalledComponentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstalledComponent> m_installedComponents;
    bool m_installedComponentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
