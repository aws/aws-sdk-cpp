/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/model/ICD10CMTraitName.h>
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
namespace ComprehendMedical
{
namespace Model
{

  /**
   * <p>Contextual information for the entity. The traits recognized by InferICD10CM
   * are <code>DIAGNOSIS</code>, <code>SIGN</code>, <code>SYMPTOM</code>, and
   * <code>NEGATION</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ICD10CMTrait">AWS
   * API Reference</a></p>
   */
  class ICD10CMTrait
  {
  public:
    AWS_COMPREHENDMEDICAL_API ICD10CMTrait() = default;
    AWS_COMPREHENDMEDICAL_API ICD10CMTrait(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API ICD10CMTrait& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides a name or contextual description about the trait.</p>
     */
    inline ICD10CMTraitName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ICD10CMTraitName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ICD10CMTrait& WithName(ICD10CMTraitName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the segment
     * of text is correctly recognized as a trait.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline ICD10CMTrait& WithScore(double value) { SetScore(value); return *this;}
    ///@}
  private:

    ICD10CMTraitName m_name{ICD10CMTraitName::NOT_SET};
    bool m_nameHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
