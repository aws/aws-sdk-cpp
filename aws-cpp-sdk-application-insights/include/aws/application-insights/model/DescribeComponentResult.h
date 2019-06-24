/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPLICATIONINSIGHTS_API DescribeComponentResult
  {
  public:
    DescribeComponentResult();
    DescribeComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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
