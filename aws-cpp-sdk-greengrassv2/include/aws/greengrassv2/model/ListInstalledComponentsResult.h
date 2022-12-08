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
    AWS_GREENGRASSV2_API ListInstalledComponentsResult();
    AWS_GREENGRASSV2_API ListInstalledComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ListInstalledComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline const Aws::Vector<InstalledComponent>& GetInstalledComponents() const{ return m_installedComponents; }

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
    inline void SetInstalledComponents(const Aws::Vector<InstalledComponent>& value) { m_installedComponents = value; }

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
    inline void SetInstalledComponents(Aws::Vector<InstalledComponent>&& value) { m_installedComponents = std::move(value); }

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
    inline ListInstalledComponentsResult& WithInstalledComponents(const Aws::Vector<InstalledComponent>& value) { SetInstalledComponents(value); return *this;}

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
    inline ListInstalledComponentsResult& WithInstalledComponents(Aws::Vector<InstalledComponent>&& value) { SetInstalledComponents(std::move(value)); return *this;}

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
    inline ListInstalledComponentsResult& AddInstalledComponents(const InstalledComponent& value) { m_installedComponents.push_back(value); return *this; }

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
    inline ListInstalledComponentsResult& AddInstalledComponents(InstalledComponent&& value) { m_installedComponents.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListInstalledComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListInstalledComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListInstalledComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InstalledComponent> m_installedComponents;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
