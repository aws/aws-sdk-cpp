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
#include <aws/codedeploy/model/InstanceInfo.h>

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
  class AWS_CODEDEPLOY_API GetOnPremisesInstanceResult
  {
  public:
    GetOnPremisesInstanceResult();
    GetOnPremisesInstanceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetOnPremisesInstanceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const InstanceInfo& GetInstanceInfo() const{ return m_instanceInfo; }
    
    inline void SetInstanceInfo(const InstanceInfo& value) { m_instanceInfo = value; }

    
    inline GetOnPremisesInstanceResult&  WithInstanceInfo(const InstanceInfo& value) { SetInstanceInfo(value); return *this;}

  private:
    InstanceInfo m_instanceInfo;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
