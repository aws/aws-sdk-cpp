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
#include <aws/codedeploy/model/ApplicationInfo.h>

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
  class AWS_CODEDEPLOY_API BatchGetApplicationsResult
  {
  public:
    BatchGetApplicationsResult();
    BatchGetApplicationsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetApplicationsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<ApplicationInfo>& GetApplicationsInfo() const{ return m_applicationsInfo; }
    
    inline void SetApplicationsInfo(const Aws::Vector<ApplicationInfo>& value) { m_applicationsInfo = value; }

    
    inline BatchGetApplicationsResult&  WithApplicationsInfo(const Aws::Vector<ApplicationInfo>& value) { SetApplicationsInfo(value); return *this;}

    
    inline BatchGetApplicationsResult& AddApplicationsInfo(const ApplicationInfo& value) { m_applicationsInfo.push_back(value); return *this; }

  private:
    Aws::Vector<ApplicationInfo> m_applicationsInfo;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
