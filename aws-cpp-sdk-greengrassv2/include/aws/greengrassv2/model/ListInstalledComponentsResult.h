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
  class AWS_GREENGRASSV2_API ListInstalledComponentsResult
  {
  public:
    ListInstalledComponentsResult();
    ListInstalledComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListInstalledComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each component on the core device.</p>
     */
    inline const Aws::Vector<InstalledComponent>& GetInstalledComponents() const{ return m_installedComponents; }

    /**
     * <p>A list that summarizes each component on the core device.</p>
     */
    inline void SetInstalledComponents(const Aws::Vector<InstalledComponent>& value) { m_installedComponents = value; }

    /**
     * <p>A list that summarizes each component on the core device.</p>
     */
    inline void SetInstalledComponents(Aws::Vector<InstalledComponent>&& value) { m_installedComponents = std::move(value); }

    /**
     * <p>A list that summarizes each component on the core device.</p>
     */
    inline ListInstalledComponentsResult& WithInstalledComponents(const Aws::Vector<InstalledComponent>& value) { SetInstalledComponents(value); return *this;}

    /**
     * <p>A list that summarizes each component on the core device.</p>
     */
    inline ListInstalledComponentsResult& WithInstalledComponents(Aws::Vector<InstalledComponent>&& value) { SetInstalledComponents(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each component on the core device.</p>
     */
    inline ListInstalledComponentsResult& AddInstalledComponents(const InstalledComponent& value) { m_installedComponents.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each component on the core device.</p>
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
