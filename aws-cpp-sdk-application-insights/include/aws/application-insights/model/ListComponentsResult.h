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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/ApplicationComponent.h>
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
  class AWS_APPLICATIONINSIGHTS_API ListComponentsResult
  {
  public:
    ListComponentsResult();
    ListComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of application components.</p>
     */
    inline const Aws::Vector<ApplicationComponent>& GetApplicationComponentList() const{ return m_applicationComponentList; }

    /**
     * <p>The list of application components.</p>
     */
    inline void SetApplicationComponentList(const Aws::Vector<ApplicationComponent>& value) { m_applicationComponentList = value; }

    /**
     * <p>The list of application components.</p>
     */
    inline void SetApplicationComponentList(Aws::Vector<ApplicationComponent>&& value) { m_applicationComponentList = std::move(value); }

    /**
     * <p>The list of application components.</p>
     */
    inline ListComponentsResult& WithApplicationComponentList(const Aws::Vector<ApplicationComponent>& value) { SetApplicationComponentList(value); return *this;}

    /**
     * <p>The list of application components.</p>
     */
    inline ListComponentsResult& WithApplicationComponentList(Aws::Vector<ApplicationComponent>&& value) { SetApplicationComponentList(std::move(value)); return *this;}

    /**
     * <p>The list of application components.</p>
     */
    inline ListComponentsResult& AddApplicationComponentList(const ApplicationComponent& value) { m_applicationComponentList.push_back(value); return *this; }

    /**
     * <p>The list of application components.</p>
     */
    inline ListComponentsResult& AddApplicationComponentList(ApplicationComponent&& value) { m_applicationComponentList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ApplicationComponent> m_applicationComponentList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
