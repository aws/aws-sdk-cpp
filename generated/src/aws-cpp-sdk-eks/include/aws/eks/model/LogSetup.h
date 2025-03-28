﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class LogSetup
  {
  public:
    AWS_EKS_API LogSetup() = default;
    AWS_EKS_API LogSetup(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API LogSetup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The available cluster control plane log types.</p>
     */
    inline const Aws::Vector<LogType>& GetTypes() const { return m_types; }
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }
    template<typename TypesT = Aws::Vector<LogType>>
    void SetTypes(TypesT&& value) { m_typesHasBeenSet = true; m_types = std::forward<TypesT>(value); }
    template<typename TypesT = Aws::Vector<LogType>>
    LogSetup& WithTypes(TypesT&& value) { SetTypes(std::forward<TypesT>(value)); return *this;}
    inline LogSetup& AddTypes(LogType value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a log type is enabled, that log type exports its control plane logs to
     * CloudWatch Logs . If a log type isn't enabled, that log type doesn't export its
     * control plane logs. Each individual log type can be enabled or disabled
     * independently.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline LogSetup& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    Aws::Vector<LogType> m_types;
    bool m_typesHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
