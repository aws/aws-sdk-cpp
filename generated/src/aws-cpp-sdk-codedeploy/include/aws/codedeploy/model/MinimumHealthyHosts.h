﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Information about the minimum number of healthy instances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/MinimumHealthyHosts">AWS
   * API Reference</a></p>
   */
  class MinimumHealthyHosts
  {
  public:
    AWS_CODEDEPLOY_API MinimumHealthyHosts() = default;
    AWS_CODEDEPLOY_API MinimumHealthyHosts(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API MinimumHealthyHosts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum healthy instance type:</p> <ul> <li> <p> <code>HOST_COUNT</code>:
     * The minimum number of healthy instances as an absolute value.</p> </li> <li> <p>
     * <code>FLEET_PERCENT</code>: The minimum number of healthy instances as a
     * percentage of the total number of instances in the deployment.</p> </li> </ul>
     * <p>In an example of nine instances, if a HOST_COUNT of six is specified, deploy
     * to up to three instances at a time. The deployment is successful if six or more
     * instances are deployed to successfully. Otherwise, the deployment fails. If a
     * FLEET_PERCENT of 40 is specified, deploy to up to five instances at a time. The
     * deployment is successful if four or more instances are deployed to successfully.
     * Otherwise, the deployment fails.</p>  <p>In a call to the
     * <code>GetDeploymentConfig</code>, CodeDeployDefault.OneAtATime returns a minimum
     * healthy instance type of MOST_CONCURRENCY and a value of 1. This means a
     * deployment to only one instance at a time. (You cannot set the type to
     * MOST_CONCURRENCY, only to HOST_COUNT or FLEET_PERCENT.) In addition, with
     * CodeDeployDefault.OneAtATime, CodeDeploy attempts to ensure that all instances
     * but one are kept in a healthy state during the deployment. Although this allows
     * one instance at a time to be taken offline for a new deployment, it also means
     * that if the deployment to the last instance fails, the overall deployment is
     * still successful.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codedeploy/latest/userguide/instances-health.html">CodeDeploy
     * Instance Health</a> in the <i>CodeDeploy User Guide</i>.</p>
     */
    inline MinimumHealthyHostsType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MinimumHealthyHostsType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MinimumHealthyHosts& WithType(MinimumHealthyHostsType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum healthy instance value.</p>
     */
    inline int GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(int value) { m_valueHasBeenSet = true; m_value = value; }
    inline MinimumHealthyHosts& WithValue(int value) { SetValue(value); return *this;}
    ///@}
  private:

    MinimumHealthyHostsType m_type{MinimumHealthyHostsType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
