/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/UlimitName.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The <code>ulimit</code> settings to pass to the container.</p> <p>Amazon ECS
   * tasks hosted on Fargate use the default resource limit values set by the
   * operating system with the exception of the <code>nofile</code> resource limit
   * parameter which Fargate overrides. The <code>nofile</code> resource limit sets a
   * restriction on the number of open files that a container can use. The default
   * <code>nofile</code> soft limit is <code> 65535</code> and the default hard limit
   * is <code>65535</code>.</p> <p>You can specify the <code>ulimit</code> settings
   * for a container in a task definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Ulimit">AWS API
   * Reference</a></p>
   */
  class Ulimit
  {
  public:
    AWS_ECS_API Ulimit() = default;
    AWS_ECS_API Ulimit(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Ulimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>type</code> of the <code>ulimit</code>.</p>
     */
    inline UlimitName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(UlimitName value) { m_nameHasBeenSet = true; m_name = value; }
    inline Ulimit& WithName(UlimitName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The soft limit for the <code>ulimit</code> type. The value can be specified
     * in bytes, seconds, or as a count, depending on the <code>type</code> of the
     * <code>ulimit</code>.</p>
     */
    inline int GetSoftLimit() const { return m_softLimit; }
    inline bool SoftLimitHasBeenSet() const { return m_softLimitHasBeenSet; }
    inline void SetSoftLimit(int value) { m_softLimitHasBeenSet = true; m_softLimit = value; }
    inline Ulimit& WithSoftLimit(int value) { SetSoftLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hard limit for the <code>ulimit</code> type. The value can be specified
     * in bytes, seconds, or as a count, depending on the <code>type</code> of the
     * <code>ulimit</code>.</p>
     */
    inline int GetHardLimit() const { return m_hardLimit; }
    inline bool HardLimitHasBeenSet() const { return m_hardLimitHasBeenSet; }
    inline void SetHardLimit(int value) { m_hardLimitHasBeenSet = true; m_hardLimit = value; }
    inline Ulimit& WithHardLimit(int value) { SetHardLimit(value); return *this;}
    ///@}
  private:

    UlimitName m_name{UlimitName::NOT_SET};
    bool m_nameHasBeenSet = false;

    int m_softLimit{0};
    bool m_softLimitHasBeenSet = false;

    int m_hardLimit{0};
    bool m_hardLimitHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
