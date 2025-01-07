/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/DistillationConfig.h>
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
   * <p>A model customization configuration</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CustomizationConfig">AWS
   * API Reference</a></p>
   */
  class CustomizationConfig
  {
  public:
    AWS_BEDROCK_API CustomizationConfig();
    AWS_BEDROCK_API CustomizationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API CustomizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The distillation configuration for the custom model.</p>
     */
    inline const DistillationConfig& GetDistillationConfig() const{ return m_distillationConfig; }
    inline bool DistillationConfigHasBeenSet() const { return m_distillationConfigHasBeenSet; }
    inline void SetDistillationConfig(const DistillationConfig& value) { m_distillationConfigHasBeenSet = true; m_distillationConfig = value; }
    inline void SetDistillationConfig(DistillationConfig&& value) { m_distillationConfigHasBeenSet = true; m_distillationConfig = std::move(value); }
    inline CustomizationConfig& WithDistillationConfig(const DistillationConfig& value) { SetDistillationConfig(value); return *this;}
    inline CustomizationConfig& WithDistillationConfig(DistillationConfig&& value) { SetDistillationConfig(std::move(value)); return *this;}
    ///@}
  private:

    DistillationConfig m_distillationConfig;
    bool m_distillationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
