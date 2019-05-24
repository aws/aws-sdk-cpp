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
#include <aws/codedeploy/model/MinimumHealthyHostsType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about minimum healthy instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/MinimumHealthyHosts">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API MinimumHealthyHosts
  {
  public:
    MinimumHealthyHosts();
    MinimumHealthyHosts(Aws::Utils::Json::JsonView jsonValue);
    MinimumHealthyHosts& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum healthy instance value.</p>
     */
    inline int GetValue() const{ return m_value; }

    /**
     * <p>The minimum healthy instance value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The minimum healthy instance value.</p>
     */
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The minimum healthy instance value.</p>
     */
    inline MinimumHealthyHosts& WithValue(int value) { SetValue(value); return *this;}


    /**
     * <p>The minimum healthy instance type:</p> <ul> <li> <p>HOST_COUNT: The minimum
     * number of healthy instance as an absolute value.</p> </li> <li>
     * <p>FLEET_PERCENT: The minimum number of healthy instance as a percentage of the
     * total number of instance in the deployment.</p> </li> </ul> <p>In an example of
     * nine instance, if a HOST_COUNT of six is specified, deploy to up to three
     * instances at a time. The deployment is successful if six or more instances are
     * deployed to successfully. Otherwise, the deployment fails. If a FLEET_PERCENT of
     * 40 is specified, deploy to up to five instance at a time. The deployment is
     * successful if four or more instance are deployed to successfully. Otherwise, the
     * deployment fails.</p> <note> <p>In a call to the
     * <code>GetDeploymentConfig</code>, CodeDeployDefault.OneAtATime returns a minimum
     * healthy instance type of MOST_CONCURRENCY and a value of 1. This means a
     * deployment to only one instance at a time. (You cannot set the type to
     * MOST_CONCURRENCY, only to HOST_COUNT or FLEET_PERCENT.) In addition, with
     * CodeDeployDefault.OneAtATime, AWS CodeDeploy attempts to ensure that all
     * instances but one are kept in a healthy state during the deployment. Although
     * this allows one instance at a time to be taken offline for a new deployment, it
     * also means that if the deployment to the last instance fails, the overall
     * deployment is still successful.</p> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/instances-health.html">AWS
     * CodeDeploy Instance Health</a> in the <i>AWS CodeDeploy User Guide</i>.</p>
     */
    inline const MinimumHealthyHostsType& GetType() const{ return m_type; }

    /**
     * <p>The minimum healthy instance type:</p> <ul> <li> <p>HOST_COUNT: The minimum
     * number of healthy instance as an absolute value.</p> </li> <li>
     * <p>FLEET_PERCENT: The minimum number of healthy instance as a percentage of the
     * total number of instance in the deployment.</p> </li> </ul> <p>In an example of
     * nine instance, if a HOST_COUNT of six is specified, deploy to up to three
     * instances at a time. The deployment is successful if six or more instances are
     * deployed to successfully. Otherwise, the deployment fails. If a FLEET_PERCENT of
     * 40 is specified, deploy to up to five instance at a time. The deployment is
     * successful if four or more instance are deployed to successfully. Otherwise, the
     * deployment fails.</p> <note> <p>In a call to the
     * <code>GetDeploymentConfig</code>, CodeDeployDefault.OneAtATime returns a minimum
     * healthy instance type of MOST_CONCURRENCY and a value of 1. This means a
     * deployment to only one instance at a time. (You cannot set the type to
     * MOST_CONCURRENCY, only to HOST_COUNT or FLEET_PERCENT.) In addition, with
     * CodeDeployDefault.OneAtATime, AWS CodeDeploy attempts to ensure that all
     * instances but one are kept in a healthy state during the deployment. Although
     * this allows one instance at a time to be taken offline for a new deployment, it
     * also means that if the deployment to the last instance fails, the overall
     * deployment is still successful.</p> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/instances-health.html">AWS
     * CodeDeploy Instance Health</a> in the <i>AWS CodeDeploy User Guide</i>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The minimum healthy instance type:</p> <ul> <li> <p>HOST_COUNT: The minimum
     * number of healthy instance as an absolute value.</p> </li> <li>
     * <p>FLEET_PERCENT: The minimum number of healthy instance as a percentage of the
     * total number of instance in the deployment.</p> </li> </ul> <p>In an example of
     * nine instance, if a HOST_COUNT of six is specified, deploy to up to three
     * instances at a time. The deployment is successful if six or more instances are
     * deployed to successfully. Otherwise, the deployment fails. If a FLEET_PERCENT of
     * 40 is specified, deploy to up to five instance at a time. The deployment is
     * successful if four or more instance are deployed to successfully. Otherwise, the
     * deployment fails.</p> <note> <p>In a call to the
     * <code>GetDeploymentConfig</code>, CodeDeployDefault.OneAtATime returns a minimum
     * healthy instance type of MOST_CONCURRENCY and a value of 1. This means a
     * deployment to only one instance at a time. (You cannot set the type to
     * MOST_CONCURRENCY, only to HOST_COUNT or FLEET_PERCENT.) In addition, with
     * CodeDeployDefault.OneAtATime, AWS CodeDeploy attempts to ensure that all
     * instances but one are kept in a healthy state during the deployment. Although
     * this allows one instance at a time to be taken offline for a new deployment, it
     * also means that if the deployment to the last instance fails, the overall
     * deployment is still successful.</p> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/instances-health.html">AWS
     * CodeDeploy Instance Health</a> in the <i>AWS CodeDeploy User Guide</i>.</p>
     */
    inline void SetType(const MinimumHealthyHostsType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The minimum healthy instance type:</p> <ul> <li> <p>HOST_COUNT: The minimum
     * number of healthy instance as an absolute value.</p> </li> <li>
     * <p>FLEET_PERCENT: The minimum number of healthy instance as a percentage of the
     * total number of instance in the deployment.</p> </li> </ul> <p>In an example of
     * nine instance, if a HOST_COUNT of six is specified, deploy to up to three
     * instances at a time. The deployment is successful if six or more instances are
     * deployed to successfully. Otherwise, the deployment fails. If a FLEET_PERCENT of
     * 40 is specified, deploy to up to five instance at a time. The deployment is
     * successful if four or more instance are deployed to successfully. Otherwise, the
     * deployment fails.</p> <note> <p>In a call to the
     * <code>GetDeploymentConfig</code>, CodeDeployDefault.OneAtATime returns a minimum
     * healthy instance type of MOST_CONCURRENCY and a value of 1. This means a
     * deployment to only one instance at a time. (You cannot set the type to
     * MOST_CONCURRENCY, only to HOST_COUNT or FLEET_PERCENT.) In addition, with
     * CodeDeployDefault.OneAtATime, AWS CodeDeploy attempts to ensure that all
     * instances but one are kept in a healthy state during the deployment. Although
     * this allows one instance at a time to be taken offline for a new deployment, it
     * also means that if the deployment to the last instance fails, the overall
     * deployment is still successful.</p> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/instances-health.html">AWS
     * CodeDeploy Instance Health</a> in the <i>AWS CodeDeploy User Guide</i>.</p>
     */
    inline void SetType(MinimumHealthyHostsType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The minimum healthy instance type:</p> <ul> <li> <p>HOST_COUNT: The minimum
     * number of healthy instance as an absolute value.</p> </li> <li>
     * <p>FLEET_PERCENT: The minimum number of healthy instance as a percentage of the
     * total number of instance in the deployment.</p> </li> </ul> <p>In an example of
     * nine instance, if a HOST_COUNT of six is specified, deploy to up to three
     * instances at a time. The deployment is successful if six or more instances are
     * deployed to successfully. Otherwise, the deployment fails. If a FLEET_PERCENT of
     * 40 is specified, deploy to up to five instance at a time. The deployment is
     * successful if four or more instance are deployed to successfully. Otherwise, the
     * deployment fails.</p> <note> <p>In a call to the
     * <code>GetDeploymentConfig</code>, CodeDeployDefault.OneAtATime returns a minimum
     * healthy instance type of MOST_CONCURRENCY and a value of 1. This means a
     * deployment to only one instance at a time. (You cannot set the type to
     * MOST_CONCURRENCY, only to HOST_COUNT or FLEET_PERCENT.) In addition, with
     * CodeDeployDefault.OneAtATime, AWS CodeDeploy attempts to ensure that all
     * instances but one are kept in a healthy state during the deployment. Although
     * this allows one instance at a time to be taken offline for a new deployment, it
     * also means that if the deployment to the last instance fails, the overall
     * deployment is still successful.</p> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/instances-health.html">AWS
     * CodeDeploy Instance Health</a> in the <i>AWS CodeDeploy User Guide</i>.</p>
     */
    inline MinimumHealthyHosts& WithType(const MinimumHealthyHostsType& value) { SetType(value); return *this;}

    /**
     * <p>The minimum healthy instance type:</p> <ul> <li> <p>HOST_COUNT: The minimum
     * number of healthy instance as an absolute value.</p> </li> <li>
     * <p>FLEET_PERCENT: The minimum number of healthy instance as a percentage of the
     * total number of instance in the deployment.</p> </li> </ul> <p>In an example of
     * nine instance, if a HOST_COUNT of six is specified, deploy to up to three
     * instances at a time. The deployment is successful if six or more instances are
     * deployed to successfully. Otherwise, the deployment fails. If a FLEET_PERCENT of
     * 40 is specified, deploy to up to five instance at a time. The deployment is
     * successful if four or more instance are deployed to successfully. Otherwise, the
     * deployment fails.</p> <note> <p>In a call to the
     * <code>GetDeploymentConfig</code>, CodeDeployDefault.OneAtATime returns a minimum
     * healthy instance type of MOST_CONCURRENCY and a value of 1. This means a
     * deployment to only one instance at a time. (You cannot set the type to
     * MOST_CONCURRENCY, only to HOST_COUNT or FLEET_PERCENT.) In addition, with
     * CodeDeployDefault.OneAtATime, AWS CodeDeploy attempts to ensure that all
     * instances but one are kept in a healthy state during the deployment. Although
     * this allows one instance at a time to be taken offline for a new deployment, it
     * also means that if the deployment to the last instance fails, the overall
     * deployment is still successful.</p> </note> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/instances-health.html">AWS
     * CodeDeploy Instance Health</a> in the <i>AWS CodeDeploy User Guide</i>.</p>
     */
    inline MinimumHealthyHosts& WithType(MinimumHealthyHostsType&& value) { SetType(std::move(value)); return *this;}

  private:

    int m_value;
    bool m_valueHasBeenSet;

    MinimumHealthyHostsType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
