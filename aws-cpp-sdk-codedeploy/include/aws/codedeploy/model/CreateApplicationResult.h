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
  class AWS_CODEDEPLOY_API CreateApplicationResult
  {
  public:
    CreateApplicationResult();
    CreateApplicationResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateApplicationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    
    inline CreateApplicationResult&  WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    
    inline CreateApplicationResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}

  private:
    Aws::String m_applicationId;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
