/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace codedeploy
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CODEDEPLOY_API ListApplicationsResult
  {
  public:
    ListApplicationsResult();
    ListApplicationsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListApplicationsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<Aws::String>& GetApplications() const{ return m_applications; }
    
    inline void SetApplications(const Aws::Vector<Aws::String>& value) { m_applications = value; }

    
    inline ListApplicationsResult&  WithApplications(const Aws::Vector<Aws::String>& value) { SetApplications(value); return *this;}

    
    inline ListApplicationsResult& AddApplications(const Aws::String& value) { m_applications.push_back(value); return *this; }

    
    inline ListApplicationsResult& AddApplications(const char* value) { m_applications.push_back(value); return *this; }

    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListApplicationsResult&  WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_applications;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
