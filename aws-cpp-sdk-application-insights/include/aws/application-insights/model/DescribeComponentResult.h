/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/application-insights/model/ApplicationComponent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class DescribeComponentResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API DescribeComponentResult();
    AWS_APPLICATIONINSIGHTS_API DescribeComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API DescribeComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ApplicationComponent& GetApplicationComponent() const{ return m_applicationComponent; }

    
    inline void SetApplicationComponent(const ApplicationComponent& value) { m_applicationComponent = value; }

    
    inline void SetApplicationComponent(ApplicationComponent&& value) { m_applicationComponent = std::move(value); }

    
    inline DescribeComponentResult& WithApplicationComponent(const ApplicationComponent& value) { SetApplicationComponent(value); return *this;}

    
    inline DescribeComponentResult& WithApplicationComponent(ApplicationComponent&& value) { SetApplicationComponent(std::move(value)); return *this;}


    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceList() const{ return m_resourceList; }

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline void SetResourceList(const Aws::Vector<Aws::String>& value) { m_resourceList = value; }

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline void SetResourceList(Aws::Vector<Aws::String>&& value) { m_resourceList = std::move(value); }

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline DescribeComponentResult& WithResourceList(const Aws::Vector<Aws::String>& value) { SetResourceList(value); return *this;}

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline DescribeComponentResult& WithResourceList(Aws::Vector<Aws::String>&& value) { SetResourceList(std::move(value)); return *this;}

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline DescribeComponentResult& AddResourceList(const Aws::String& value) { m_resourceList.push_back(value); return *this; }

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline DescribeComponentResult& AddResourceList(Aws::String&& value) { m_resourceList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of resource ARNs that belong to the component.</p>
     */
    inline DescribeComponentResult& AddResourceList(const char* value) { m_resourceList.push_back(value); return *this; }

  private:

    ApplicationComponent m_applicationComponent;

    Aws::Vector<Aws::String> m_resourceList;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
