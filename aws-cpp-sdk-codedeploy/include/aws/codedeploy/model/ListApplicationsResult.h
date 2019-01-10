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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of a ListApplications operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListApplicationsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API ListApplicationsResult
  {
  public:
    ListApplicationsResult();
    ListApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of application names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplications() const{ return m_applications; }

    /**
     * <p>A list of application names.</p>
     */
    inline void SetApplications(const Aws::Vector<Aws::String>& value) { m_applications = value; }

    /**
     * <p>A list of application names.</p>
     */
    inline void SetApplications(Aws::Vector<Aws::String>&& value) { m_applications = std::move(value); }

    /**
     * <p>A list of application names.</p>
     */
    inline ListApplicationsResult& WithApplications(const Aws::Vector<Aws::String>& value) { SetApplications(value); return *this;}

    /**
     * <p>A list of application names.</p>
     */
    inline ListApplicationsResult& WithApplications(Aws::Vector<Aws::String>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>A list of application names.</p>
     */
    inline ListApplicationsResult& AddApplications(const Aws::String& value) { m_applications.push_back(value); return *this; }

    /**
     * <p>A list of application names.</p>
     */
    inline ListApplicationsResult& AddApplications(Aws::String&& value) { m_applications.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of application names.</p>
     */
    inline ListApplicationsResult& AddApplications(const char* value) { m_applications.push_back(value); return *this; }


    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list applications call to return the next set of
     * applications in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list applications call to return the next set of
     * applications in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list applications call to return the next set of
     * applications in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list applications call to return the next set of
     * applications in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list applications call to return the next set of
     * applications in the list.</p>
     */
    inline ListApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list applications call to return the next set of
     * applications in the list.</p>
     */
    inline ListApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list applications call to return the next set of
     * applications in the list.</p>
     */
    inline ListApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_applications;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
