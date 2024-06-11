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
    AWS_DRS_API LifeCycleLastLaunch();
    AWS_DRS_API LifeCycleLastLaunch(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LifeCycleLastLaunch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object containing information regarding the initiation of the last launch
     * of a Source Server.</p>
     */
    inline const LifeCycleLastLaunchInitiated& GetInitiated() const{ return m_initiated; }
    inline bool InitiatedHasBeenSet() const { return m_initiatedHasBeenSet; }
    inline void SetInitiated(const LifeCycleLastLaunchInitiated& value) { m_initiatedHasBeenSet = true; m_initiated = value; }
    inline void SetInitiated(LifeCycleLastLaunchInitiated&& value) { m_initiatedHasBeenSet = true; m_initiated = std::move(value); }
    inline LifeCycleLastLaunch& WithInitiated(const LifeCycleLastLaunchInitiated& value) { SetInitiated(value); return *this;}
    inline LifeCycleLastLaunch& WithInitiated(LifeCycleLastLaunchInitiated&& value) { SetInitiated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of Source Server's last launch.</p>
     */
    inline const LaunchStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LaunchStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LaunchStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline LifeCycleLastLaunch& WithStatus(const LaunchStatus& value) { SetStatus(value); return *this;}
    inline LifeCycleLastLaunch& WithStatus(LaunchStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    LifeCycleLastLaunchInitiated m_initiated;
    bool m_initiatedHasBeenSet = false;

    LaunchStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
