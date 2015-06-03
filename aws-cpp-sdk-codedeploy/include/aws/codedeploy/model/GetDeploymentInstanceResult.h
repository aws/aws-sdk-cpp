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
#include <aws/codedeploy/model/InstanceSummary.h>

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
    <p>Represents the output of a get deployment instance operation.</p>
  */
  class AWS_CODEDEPLOY_API GetDeploymentInstanceResult
  {
  public:
    GetDeploymentInstanceResult();
    GetDeploymentInstanceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeploymentInstanceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /*
     <p>Information about the instance.</p>
    */
    inline const InstanceSummary& GetInstanceSummary() const{ return m_instanceSummary; }
    /*
     <p>Information about the instance.</p>
    */
    inline void SetInstanceSummary(const InstanceSummary& value) { m_instanceSummary = value; }

    /*
     <p>Information about the instance.</p>
    */
    inline GetDeploymentInstanceResult&  WithInstanceSummary(const InstanceSummary& value) { SetInstanceSummary(value); return *this;}

  private:
    InstanceSummary m_instanceSummary;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
