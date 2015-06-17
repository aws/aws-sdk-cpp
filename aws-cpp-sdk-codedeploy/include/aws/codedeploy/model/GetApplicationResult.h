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
  class AWS_CODEDEPLOY_API GetApplicationResult
  {
  public:
    GetApplicationResult();
    GetApplicationResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetApplicationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const ApplicationInfo& GetApplication() const{ return m_application; }
    
    inline void SetApplication(const ApplicationInfo& value) { m_application = value; }

    
    inline GetApplicationResult&  WithApplication(const ApplicationInfo& value) { SetApplication(value); return *this;}

  private:
    ApplicationInfo m_application;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
