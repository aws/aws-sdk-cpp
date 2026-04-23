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
#include <aws/codedeploy/model/InstanceInfo.h>
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
   * <p> Represents the output of a GetOnPremisesInstance operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetOnPremisesInstanceOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API GetOnPremisesInstanceResult
  {
  public:
    GetOnPremisesInstanceResult();
    GetOnPremisesInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetOnPremisesInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Information about the on-premises instance. </p>
     */
    inline const InstanceInfo& GetInstanceInfo() const{ return m_instanceInfo; }

    /**
     * <p> Information about the on-premises instance. </p>
     */
    inline void SetInstanceInfo(const InstanceInfo& value) { m_instanceInfo = value; }

    /**
     * <p> Information about the on-premises instance. </p>
     */
    inline void SetInstanceInfo(InstanceInfo&& value) { m_instanceInfo = std::move(value); }

    /**
     * <p> Information about the on-premises instance. </p>
     */
    inline GetOnPremisesInstanceResult& WithInstanceInfo(const InstanceInfo& value) { SetInstanceInfo(value); return *this;}

    /**
     * <p> Information about the on-premises instance. </p>
     */
    inline GetOnPremisesInstanceResult& WithInstanceInfo(InstanceInfo&& value) { SetInstanceInfo(std::move(value)); return *this;}

  private:

    InstanceInfo m_instanceInfo;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
