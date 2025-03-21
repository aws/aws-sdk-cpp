/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>A <code>CustomModelUnit</code> (CMU) is an abstract view of the hardware
   * utilization that Amazon Bedrock needs to host a single copy of your custom
   * model. A model copy represents a single instance of your imported model that is
   * ready to serve inference requests. Amazon Bedrock determines the number of
   * custom model units that a model copy needs when you import the custom model.
   * </p> <p>You can use <code>CustomModelUnits</code> to estimate the cost of
   * running your custom model. For more information, see Calculate the cost of
   * running a custom model in the Amazon Bedrock user guide. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CustomModelUnits">AWS
   * API Reference</a></p>
   */
  class CustomModelUnits
  {
  public:
    AWS_BEDROCK_API CustomModelUnits() = default;
    AWS_BEDROCK_API CustomModelUnits(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API CustomModelUnits& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of custom model units used to host a model copy. </p>
     */
    inline int GetCustomModelUnitsPerModelCopy() const { return m_customModelUnitsPerModelCopy; }
    inline bool CustomModelUnitsPerModelCopyHasBeenSet() const { return m_customModelUnitsPerModelCopyHasBeenSet; }
    inline void SetCustomModelUnitsPerModelCopy(int value) { m_customModelUnitsPerModelCopyHasBeenSet = true; m_customModelUnitsPerModelCopy = value; }
    inline CustomModelUnits& WithCustomModelUnitsPerModelCopy(int value) { SetCustomModelUnitsPerModelCopy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the custom model unit. Use to determine the billing rate for
     * the custom model unit.</p>
     */
    inline const Aws::String& GetCustomModelUnitsVersion() const { return m_customModelUnitsVersion; }
    inline bool CustomModelUnitsVersionHasBeenSet() const { return m_customModelUnitsVersionHasBeenSet; }
    template<typename CustomModelUnitsVersionT = Aws::String>
    void SetCustomModelUnitsVersion(CustomModelUnitsVersionT&& value) { m_customModelUnitsVersionHasBeenSet = true; m_customModelUnitsVersion = std::forward<CustomModelUnitsVersionT>(value); }
    template<typename CustomModelUnitsVersionT = Aws::String>
    CustomModelUnits& WithCustomModelUnitsVersion(CustomModelUnitsVersionT&& value) { SetCustomModelUnitsVersion(std::forward<CustomModelUnitsVersionT>(value)); return *this;}
    ///@}
  private:

    int m_customModelUnitsPerModelCopy{0};
    bool m_customModelUnitsPerModelCopyHasBeenSet = false;

    Aws::String m_customModelUnitsVersion;
    bool m_customModelUnitsVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
