/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/LifeCycleLastLaunchInitiated.h>
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


    /**
     * <p>An object containing information regarding the initiation of the last launch
     * of a Source Server.</p>
     */
    inline const LifeCycleLastLaunchInitiated& GetInitiated() const{ return m_initiated; }

    /**
     * <p>An object containing information regarding the initiation of the last launch
     * of a Source Server.</p>
     */
    inline bool InitiatedHasBeenSet() const { return m_initiatedHasBeenSet; }

    /**
     * <p>An object containing information regarding the initiation of the last launch
     * of a Source Server.</p>
     */
    inline void SetInitiated(const LifeCycleLastLaunchInitiated& value) { m_initiatedHasBeenSet = true; m_initiated = value; }

    /**
     * <p>An object containing information regarding the initiation of the last launch
     * of a Source Server.</p>
     */
    inline void SetInitiated(LifeCycleLastLaunchInitiated&& value) { m_initiatedHasBeenSet = true; m_initiated = std::move(value); }

    /**
     * <p>An object containing information regarding the initiation of the last launch
     * of a Source Server.</p>
     */
    inline LifeCycleLastLaunch& WithInitiated(const LifeCycleLastLaunchInitiated& value) { SetInitiated(value); return *this;}

    /**
     * <p>An object containing information regarding the initiation of the last launch
     * of a Source Server.</p>
     */
    inline LifeCycleLastLaunch& WithInitiated(LifeCycleLastLaunchInitiated&& value) { SetInitiated(std::move(value)); return *this;}

  private:

    LifeCycleLastLaunchInitiated m_initiated;
    bool m_initiatedHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
