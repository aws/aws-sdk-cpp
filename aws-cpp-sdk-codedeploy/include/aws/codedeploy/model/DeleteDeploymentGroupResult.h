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
#include <aws/codedeploy/model/AutoScalingGroup.h>

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
  class AWS_CODEDEPLOY_API DeleteDeploymentGroupResult
  {
  public:
    DeleteDeploymentGroupResult();
    DeleteDeploymentGroupResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteDeploymentGroupResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::Vector<AutoScalingGroup>& GetHooksNotCleanedUp() const{ return m_hooksNotCleanedUp; }
    
    inline void SetHooksNotCleanedUp(const Aws::Vector<AutoScalingGroup>& value) { m_hooksNotCleanedUp = value; }

    
    inline DeleteDeploymentGroupResult&  WithHooksNotCleanedUp(const Aws::Vector<AutoScalingGroup>& value) { SetHooksNotCleanedUp(value); return *this;}

    
    inline DeleteDeploymentGroupResult& AddHooksNotCleanedUp(const AutoScalingGroup& value) { m_hooksNotCleanedUp.push_back(value); return *this; }

  private:
    Aws::Vector<AutoScalingGroup> m_hooksNotCleanedUp;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
