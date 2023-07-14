﻿/**
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
   * <code>nofile</code> soft limit is <code>1024</code> and hard limit is
   * <code>4096</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/Ulimit">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API Ulimit
  {
  public:
    Ulimit();
    Ulimit(Aws::Utils::Json::JsonView jsonValue);
    Ulimit& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>type</code> of the <code>ulimit</code>.</p>
     */
    inline const UlimitName& GetName() const{ return m_name; }

    /**
     * <p>The <code>type</code> of the <code>ulimit</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The <code>type</code> of the <code>ulimit</code>.</p>
     */
    inline void SetName(const UlimitName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The <code>type</code> of the <code>ulimit</code>.</p>
     */
    inline void SetName(UlimitName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The <code>type</code> of the <code>ulimit</code>.</p>
     */
    inline Ulimit& WithName(const UlimitName& value) { SetName(value); return *this;}

    /**
     * <p>The <code>type</code> of the <code>ulimit</code>.</p>
     */
    inline Ulimit& WithName(UlimitName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The soft limit for the ulimit type.</p>
     */
    inline int GetSoftLimit() const{ return m_softLimit; }

    /**
     * <p>The soft limit for the ulimit type.</p>
     */
    inline bool SoftLimitHasBeenSet() const { return m_softLimitHasBeenSet; }

    /**
     * <p>The soft limit for the ulimit type.</p>
     */
    inline void SetSoftLimit(int value) { m_softLimitHasBeenSet = true; m_softLimit = value; }

    /**
     * <p>The soft limit for the ulimit type.</p>
     */
    inline Ulimit& WithSoftLimit(int value) { SetSoftLimit(value); return *this;}


    /**
     * <p>The hard limit for the ulimit type.</p>
     */
    inline int GetHardLimit() const{ return m_hardLimit; }

    /**
     * <p>The hard limit for the ulimit type.</p>
     */
    inline bool HardLimitHasBeenSet() const { return m_hardLimitHasBeenSet; }

    /**
     * <p>The hard limit for the ulimit type.</p>
     */
    inline void SetHardLimit(int value) { m_hardLimitHasBeenSet = true; m_hardLimit = value; }

    /**
     * <p>The hard limit for the ulimit type.</p>
     */
    inline Ulimit& WithHardLimit(int value) { SetHardLimit(value); return *this;}

  private:

    UlimitName m_name;
    bool m_nameHasBeenSet;

    int m_softLimit;
    bool m_softLimitHasBeenSet;

    int m_hardLimit;
    bool m_hardLimitHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
