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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/UlimitName.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>The <code>ulimit</code> settings to pass to the container.</p>
   */
  class AWS_ECS_API Ulimit
  {
  public:
    Ulimit();
    Ulimit(const Aws::Utils::Json::JsonValue& jsonValue);
    Ulimit& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The <code>type</code> of the <code>ulimit</code>.</p>
     */
    inline const UlimitName& GetName() const{ return m_name; }

    /**
     * <p>The <code>type</code> of the <code>ulimit</code>.</p>
     */
    inline void SetName(const UlimitName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The <code>type</code> of the <code>ulimit</code>.</p>
     */
    inline void SetName(UlimitName&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The <code>type</code> of the <code>ulimit</code>.</p>
     */
    inline Ulimit& WithName(const UlimitName& value) { SetName(value); return *this;}

    /**
     * <p>The <code>type</code> of the <code>ulimit</code>.</p>
     */
    inline Ulimit& WithName(UlimitName&& value) { SetName(value); return *this;}

    /**
     * <p>The soft limit for the ulimit type.</p>
     */
    inline int GetSoftLimit() const{ return m_softLimit; }

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
