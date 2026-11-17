/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/QuestionSetReference.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>The question sets that you ask Elemental Inference about the media in a
 * contextual metadata output. You must specify at least one of shot or scene. They
 * can reference the same version of the same question set. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/CustomQuestionsConfig">AWS
 * API Reference</a></p>
 */
class CustomQuestionsConfig {
 public:
  AWS_ELEMENTALINFERENCE_API CustomQuestionsConfig() = default;
  AWS_ELEMENTALINFERENCE_API CustomQuestionsConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API CustomQuestionsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version of a question set to ask Elemental Inference about each shot.</p>
   */
  inline const QuestionSetReference& GetShot() const { return m_shot; }
  inline bool ShotHasBeenSet() const { return m_shotHasBeenSet; }
  template <typename ShotT = QuestionSetReference>
  void SetShot(ShotT&& value) {
    m_shotHasBeenSet = true;
    m_shot = std::forward<ShotT>(value);
  }
  template <typename ShotT = QuestionSetReference>
  CustomQuestionsConfig& WithShot(ShotT&& value) {
    SetShot(std::forward<ShotT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of a question set to ask Elemental Inference about each
   * scene.</p>
   */
  inline const QuestionSetReference& GetScene() const { return m_scene; }
  inline bool SceneHasBeenSet() const { return m_sceneHasBeenSet; }
  template <typename SceneT = QuestionSetReference>
  void SetScene(SceneT&& value) {
    m_sceneHasBeenSet = true;
    m_scene = std::forward<SceneT>(value);
  }
  template <typename SceneT = QuestionSetReference>
  CustomQuestionsConfig& WithScene(SceneT&& value) {
    SetScene(std::forward<SceneT>(value));
    return *this;
  }
  ///@}
 private:
  QuestionSetReference m_shot;

  QuestionSetReference m_scene;
  bool m_shotHasBeenSet = false;
  bool m_sceneHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
