/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/model/ELBInfo.h>

namespace Aws
{
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
   * <p>Information about the load balancer used in a blue/green
   * deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/LoadBalancerInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API LoadBalancerInfo
  {
  public:
    LoadBalancerInfo();
    LoadBalancerInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    LoadBalancerInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>An array containing information about the load balancer in Elastic Load
     * Balancing to use in a blue/green deployment.</p>
     */
    inline const Aws::Vector<ELBInfo>& GetElbInfoList() const{ return m_elbInfoList; }

    /**
     * <p>An array containing information about the load balancer in Elastic Load
     * Balancing to use in a blue/green deployment.</p>
     */
    inline void SetElbInfoList(const Aws::Vector<ELBInfo>& value) { m_elbInfoListHasBeenSet = true; m_elbInfoList = value; }

    /**
     * <p>An array containing information about the load balancer in Elastic Load
     * Balancing to use in a blue/green deployment.</p>
     */
    inline void SetElbInfoList(Aws::Vector<ELBInfo>&& value) { m_elbInfoListHasBeenSet = true; m_elbInfoList = value; }

    /**
     * <p>An array containing information about the load balancer in Elastic Load
     * Balancing to use in a blue/green deployment.</p>
     */
    inline LoadBalancerInfo& WithElbInfoList(const Aws::Vector<ELBInfo>& value) { SetElbInfoList(value); return *this;}

    /**
     * <p>An array containing information about the load balancer in Elastic Load
     * Balancing to use in a blue/green deployment.</p>
     */
    inline LoadBalancerInfo& WithElbInfoList(Aws::Vector<ELBInfo>&& value) { SetElbInfoList(value); return *this;}

    /**
     * <p>An array containing information about the load balancer in Elastic Load
     * Balancing to use in a blue/green deployment.</p>
     */
    inline LoadBalancerInfo& AddElbInfoList(const ELBInfo& value) { m_elbInfoListHasBeenSet = true; m_elbInfoList.push_back(value); return *this; }

    /**
     * <p>An array containing information about the load balancer in Elastic Load
     * Balancing to use in a blue/green deployment.</p>
     */
    inline LoadBalancerInfo& AddElbInfoList(ELBInfo&& value) { m_elbInfoListHasBeenSet = true; m_elbInfoList.push_back(value); return *this; }

  private:
    Aws::Vector<ELBInfo> m_elbInfoList;
    bool m_elbInfoListHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
