/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/LifeCycleLastLaunchInitiated.h>
#include <aws/drs/model/LaunchStatus.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>An object containing information regarding the last launch of a Source
   * Server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/LifeCycleLastLaunch">AWS
   * API Reference</a></p>
   */
  class LifeCycleLastLaunch
  {
  public:
    AWS_DRS_API LifeCycleLastLaunch() = default;
    AWS_DRS_API LifeCycleLastLaunch(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LifeCycleLastLaunch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object containing information regarding the initiation of the last launch
     * of a Source Server.</p>
     */
    inline const LifeCycleLastLaunchInitiated& GetInitiated() const { return m_initiated; }
    inline bool InitiatedHasBeenSet() const { return m_initiatedHasBeenSet; }
    template<typename InitiatedT = LifeCycleLastLaunchInitiated>
    void SetInitiated(InitiatedT&& value) { m_initiatedHasBeenSet = true; m_initiated = std::forward<InitiatedT>(value); }
    template<typename InitiatedT = LifeCycleLastLaunchInitiated>
    LifeCycleLastLaunch& WithInitiated(InitiatedT&& value) { SetInitiated(std::forward<InitiatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of Source Server's last launch.</p>
     */
    inline LaunchStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LaunchStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LifeCycleLastLaunch& WithStatus(LaunchStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    LifeCycleLastLaunchInitiated m_initiated;
    bool m_initiatedHasBeenSet = false;

    LaunchStatus m_status{LaunchStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
