/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class LogTarget
  {
  public:
    AWS_IOT_API LogTarget() = default;
    AWS_IOT_API LogTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API LogTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target type.</p>
     */
    inline LogTargetType GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(LogTargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline LogTarget& WithTargetType(LogTargetType value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target name.</p>
     */
    inline const Aws::String& GetTargetName() const { return m_targetName; }
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
    template<typename TargetNameT = Aws::String>
    void SetTargetName(TargetNameT&& value) { m_targetNameHasBeenSet = true; m_targetName = std::forward<TargetNameT>(value); }
    template<typename TargetNameT = Aws::String>
    LogTarget& WithTargetName(TargetNameT&& value) { SetTargetName(std::forward<TargetNameT>(value)); return *this;}
    ///@}
  private:

    LogTargetType m_targetType{LogTargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
