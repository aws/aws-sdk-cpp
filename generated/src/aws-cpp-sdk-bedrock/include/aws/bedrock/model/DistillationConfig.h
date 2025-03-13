/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/TeacherModelConfig.h>
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
   * <p>Settings for distilling a foundation model into a smaller and more efficient
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/DistillationConfig">AWS
   * API Reference</a></p>
   */
  class DistillationConfig
  {
  public:
    AWS_BEDROCK_API DistillationConfig() = default;
    AWS_BEDROCK_API DistillationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API DistillationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The teacher model configuration.</p>
     */
    inline const TeacherModelConfig& GetTeacherModelConfig() const { return m_teacherModelConfig; }
    inline bool TeacherModelConfigHasBeenSet() const { return m_teacherModelConfigHasBeenSet; }
    template<typename TeacherModelConfigT = TeacherModelConfig>
    void SetTeacherModelConfig(TeacherModelConfigT&& value) { m_teacherModelConfigHasBeenSet = true; m_teacherModelConfig = std::forward<TeacherModelConfigT>(value); }
    template<typename TeacherModelConfigT = TeacherModelConfig>
    DistillationConfig& WithTeacherModelConfig(TeacherModelConfigT&& value) { SetTeacherModelConfig(std::forward<TeacherModelConfigT>(value)); return *this;}
    ///@}
  private:

    TeacherModelConfig m_teacherModelConfig;
    bool m_teacherModelConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
