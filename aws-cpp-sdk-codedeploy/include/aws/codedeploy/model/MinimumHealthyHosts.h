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
#include <aws/codedeploy/model/MinimumHealthyHostsType.h>

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
   * <p>Information about minimum healthy instances.</p>
   */
  class AWS_CODEDEPLOY_API MinimumHealthyHosts
  {
  public:
    MinimumHealthyHosts();
    MinimumHealthyHosts(const Aws::Utils::Json::JsonValue& jsonValue);
    MinimumHealthyHosts& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The minimum healthy instances value.</p>
     */
    inline long GetValue() const{ return m_value; }

    /**
     * <p>The minimum healthy instances value.</p>
     */
    inline void SetValue(long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The minimum healthy instances value.</p>
     */
    inline MinimumHealthyHosts& WithValue(long value) { SetValue(value); return *this;}

    /**
     * <p>The minimum healthy instances type:</p> <ul> <li>HOST_COUNT: The minimum
     * number of healthy instances, as an absolute value.</li> <li>FLEET_PERCENT: The
     * minimum number of healthy instances, as a percentage of the total number of
     * instances in the deployment.</li> </ul> <p>For example, for 9 instances, if a
     * HOST_COUNT of 6 is specified, deploy to up to 3 instances at a time. The
     * deployment succeeds if 6 or more instances are successfully deployed to;
     * otherwise, the deployment fails. If a FLEET_PERCENT of 40 is specified, deploy
     * to up to 5 instances at a time. The deployment succeeds if 4 or more instances
     * are successfully deployed to; otherwise, the deployment fails.</p> <note>In a
     * call to the get deployment configuration operation, CodeDeployDefault.OneAtATime
     * will return a minimum healthy instances type of MOST_CONCURRENCY and a value of
     * 1. This means a deployment to only one instances at a time. (You cannot set the
     * type to MOST_CONCURRENCY, only to HOST_COUNT or FLEET_PERCENT.)</note>
     */
    inline const MinimumHealthyHostsType& GetType() const{ return m_type; }

    /**
     * <p>The minimum healthy instances type:</p> <ul> <li>HOST_COUNT: The minimum
     * number of healthy instances, as an absolute value.</li> <li>FLEET_PERCENT: The
     * minimum number of healthy instances, as a percentage of the total number of
     * instances in the deployment.</li> </ul> <p>For example, for 9 instances, if a
     * HOST_COUNT of 6 is specified, deploy to up to 3 instances at a time. The
     * deployment succeeds if 6 or more instances are successfully deployed to;
     * otherwise, the deployment fails. If a FLEET_PERCENT of 40 is specified, deploy
     * to up to 5 instances at a time. The deployment succeeds if 4 or more instances
     * are successfully deployed to; otherwise, the deployment fails.</p> <note>In a
     * call to the get deployment configuration operation, CodeDeployDefault.OneAtATime
     * will return a minimum healthy instances type of MOST_CONCURRENCY and a value of
     * 1. This means a deployment to only one instances at a time. (You cannot set the
     * type to MOST_CONCURRENCY, only to HOST_COUNT or FLEET_PERCENT.)</note>
     */
    inline void SetType(const MinimumHealthyHostsType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The minimum healthy instances type:</p> <ul> <li>HOST_COUNT: The minimum
     * number of healthy instances, as an absolute value.</li> <li>FLEET_PERCENT: The
     * minimum number of healthy instances, as a percentage of the total number of
     * instances in the deployment.</li> </ul> <p>For example, for 9 instances, if a
     * HOST_COUNT of 6 is specified, deploy to up to 3 instances at a time. The
     * deployment succeeds if 6 or more instances are successfully deployed to;
     * otherwise, the deployment fails. If a FLEET_PERCENT of 40 is specified, deploy
     * to up to 5 instances at a time. The deployment succeeds if 4 or more instances
     * are successfully deployed to; otherwise, the deployment fails.</p> <note>In a
     * call to the get deployment configuration operation, CodeDeployDefault.OneAtATime
     * will return a minimum healthy instances type of MOST_CONCURRENCY and a value of
     * 1. This means a deployment to only one instances at a time. (You cannot set the
     * type to MOST_CONCURRENCY, only to HOST_COUNT or FLEET_PERCENT.)</note>
     */
    inline void SetType(MinimumHealthyHostsType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The minimum healthy instances type:</p> <ul> <li>HOST_COUNT: The minimum
     * number of healthy instances, as an absolute value.</li> <li>FLEET_PERCENT: The
     * minimum number of healthy instances, as a percentage of the total number of
     * instances in the deployment.</li> </ul> <p>For example, for 9 instances, if a
     * HOST_COUNT of 6 is specified, deploy to up to 3 instances at a time. The
     * deployment succeeds if 6 or more instances are successfully deployed to;
     * otherwise, the deployment fails. If a FLEET_PERCENT of 40 is specified, deploy
     * to up to 5 instances at a time. The deployment succeeds if 4 or more instances
     * are successfully deployed to; otherwise, the deployment fails.</p> <note>In a
     * call to the get deployment configuration operation, CodeDeployDefault.OneAtATime
     * will return a minimum healthy instances type of MOST_CONCURRENCY and a value of
     * 1. This means a deployment to only one instances at a time. (You cannot set the
     * type to MOST_CONCURRENCY, only to HOST_COUNT or FLEET_PERCENT.)</note>
     */
    inline MinimumHealthyHosts& WithType(const MinimumHealthyHostsType& value) { SetType(value); return *this;}

    /**
     * <p>The minimum healthy instances type:</p> <ul> <li>HOST_COUNT: The minimum
     * number of healthy instances, as an absolute value.</li> <li>FLEET_PERCENT: The
     * minimum number of healthy instances, as a percentage of the total number of
     * instances in the deployment.</li> </ul> <p>For example, for 9 instances, if a
     * HOST_COUNT of 6 is specified, deploy to up to 3 instances at a time. The
     * deployment succeeds if 6 or more instances are successfully deployed to;
     * otherwise, the deployment fails. If a FLEET_PERCENT of 40 is specified, deploy
     * to up to 5 instances at a time. The deployment succeeds if 4 or more instances
     * are successfully deployed to; otherwise, the deployment fails.</p> <note>In a
     * call to the get deployment configuration operation, CodeDeployDefault.OneAtATime
     * will return a minimum healthy instances type of MOST_CONCURRENCY and a value of
     * 1. This means a deployment to only one instances at a time. (You cannot set the
     * type to MOST_CONCURRENCY, only to HOST_COUNT or FLEET_PERCENT.)</note>
     */
    inline MinimumHealthyHosts& WithType(MinimumHealthyHostsType&& value) { SetType(value); return *this;}

  private:
    long m_value;
    bool m_valueHasBeenSet;
    MinimumHealthyHostsType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
