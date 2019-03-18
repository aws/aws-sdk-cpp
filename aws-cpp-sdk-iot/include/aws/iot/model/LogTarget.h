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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/LogTargetType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A log target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/LogTarget">AWS API
   * Reference</a></p>
   */
  class AWS_IOT_API LogTarget
  {
  public:
    LogTarget();
    LogTarget(Aws::Utils::Json::JsonView jsonValue);
    LogTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The target type.</p>
     */
    inline const LogTargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The target type.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The target type.</p>
     */
    inline void SetTargetType(const LogTargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The target type.</p>
     */
    inline void SetTargetType(LogTargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The target type.</p>
     */
    inline LogTarget& WithTargetType(const LogTargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The target type.</p>
     */
    inline LogTarget& WithTargetType(LogTargetType&& value) { SetTargetType(std::move(value)); return *this;}


    /**
     * <p>The target name.</p>
     */
    inline const Aws::String& GetTargetName() const{ return m_targetName; }

    /**
     * <p>The target name.</p>
     */
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }

    /**
     * <p>The target name.</p>
     */
    inline void SetTargetName(const Aws::String& value) { m_targetNameHasBeenSet = true; m_targetName = value; }

    /**
     * <p>The target name.</p>
     */
    inline void SetTargetName(Aws::String&& value) { m_targetNameHasBeenSet = true; m_targetName = std::move(value); }

    /**
     * <p>The target name.</p>
     */
    inline void SetTargetName(const char* value) { m_targetNameHasBeenSet = true; m_targetName.assign(value); }

    /**
     * <p>The target name.</p>
     */
    inline LogTarget& WithTargetName(const Aws::String& value) { SetTargetName(value); return *this;}

    /**
     * <p>The target name.</p>
     */
    inline LogTarget& WithTargetName(Aws::String&& value) { SetTargetName(std::move(value)); return *this;}

    /**
     * <p>The target name.</p>
     */
    inline LogTarget& WithTargetName(const char* value) { SetTargetName(value); return *this;}

  private:

    LogTargetType m_targetType;
    bool m_targetTypeHasBeenSet;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
