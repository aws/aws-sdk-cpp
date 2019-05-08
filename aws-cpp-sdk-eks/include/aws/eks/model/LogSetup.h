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
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/LogType.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing the enabled or disabled Kubernetes control plane logs
   * for your cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/LogSetup">AWS API
   * Reference</a></p>
   */
  class AWS_EKS_API LogSetup
  {
  public:
    LogSetup();
    LogSetup(Aws::Utils::Json::JsonView jsonValue);
    LogSetup& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The available cluster control plane log types.</p>
     */
    inline const Aws::Vector<LogType>& GetTypes() const{ return m_types; }

    /**
     * <p>The available cluster control plane log types.</p>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p>The available cluster control plane log types.</p>
     */
    inline void SetTypes(const Aws::Vector<LogType>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p>The available cluster control plane log types.</p>
     */
    inline void SetTypes(Aws::Vector<LogType>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p>The available cluster control plane log types.</p>
     */
    inline LogSetup& WithTypes(const Aws::Vector<LogType>& value) { SetTypes(value); return *this;}

    /**
     * <p>The available cluster control plane log types.</p>
     */
    inline LogSetup& WithTypes(Aws::Vector<LogType>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>The available cluster control plane log types.</p>
     */
    inline LogSetup& AddTypes(const LogType& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p>The available cluster control plane log types.</p>
     */
    inline LogSetup& AddTypes(LogType&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }


    /**
     * <p>If a log type is enabled, that log type exports its control plane logs to
     * CloudWatch Logs. If a log type isn't enabled, that log type doesn't export its
     * control plane logs. Each individual log type can be enabled or disabled
     * independently.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>If a log type is enabled, that log type exports its control plane logs to
     * CloudWatch Logs. If a log type isn't enabled, that log type doesn't export its
     * control plane logs. Each individual log type can be enabled or disabled
     * independently.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>If a log type is enabled, that log type exports its control plane logs to
     * CloudWatch Logs. If a log type isn't enabled, that log type doesn't export its
     * control plane logs. Each individual log type can be enabled or disabled
     * independently.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>If a log type is enabled, that log type exports its control plane logs to
     * CloudWatch Logs. If a log type isn't enabled, that log type doesn't export its
     * control plane logs. Each individual log type can be enabled or disabled
     * independently.</p>
     */
    inline LogSetup& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    Aws::Vector<LogType> m_types;
    bool m_typesHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
