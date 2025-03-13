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
   * <p>Details about a teacher model used for model customization.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/TeacherModelConfig">AWS
   * API Reference</a></p>
   */
  class TeacherModelConfig
  {
  public:
    AWS_BEDROCK_API TeacherModelConfig() = default;
    AWS_BEDROCK_API TeacherModelConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API TeacherModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the teacher model.</p>
     */
    inline const Aws::String& GetTeacherModelIdentifier() const { return m_teacherModelIdentifier; }
    inline bool TeacherModelIdentifierHasBeenSet() const { return m_teacherModelIdentifierHasBeenSet; }
    template<typename TeacherModelIdentifierT = Aws::String>
    void SetTeacherModelIdentifier(TeacherModelIdentifierT&& value) { m_teacherModelIdentifierHasBeenSet = true; m_teacherModelIdentifier = std::forward<TeacherModelIdentifierT>(value); }
    template<typename TeacherModelIdentifierT = Aws::String>
    TeacherModelConfig& WithTeacherModelIdentifier(TeacherModelIdentifierT&& value) { SetTeacherModelIdentifier(std::forward<TeacherModelIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of tokens requested when the customization job invokes the
     * teacher model.</p>
     */
    inline int GetMaxResponseLengthForInference() const { return m_maxResponseLengthForInference; }
    inline bool MaxResponseLengthForInferenceHasBeenSet() const { return m_maxResponseLengthForInferenceHasBeenSet; }
    inline void SetMaxResponseLengthForInference(int value) { m_maxResponseLengthForInferenceHasBeenSet = true; m_maxResponseLengthForInference = value; }
    inline TeacherModelConfig& WithMaxResponseLengthForInference(int value) { SetMaxResponseLengthForInference(value); return *this;}
    ///@}
  private:

    Aws::String m_teacherModelIdentifier;
    bool m_teacherModelIdentifierHasBeenSet = false;

    int m_maxResponseLengthForInference{0};
    bool m_maxResponseLengthForInferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
