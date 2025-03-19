/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/model/RxNormTraitName.h>
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
   * <p>The contextual information for the entity. InferRxNorm recognizes the trait
   * <code>NEGATION</code>, which is any indication that the patient is not taking a
   * medication. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/RxNormTrait">AWS
   * API Reference</a></p>
   */
  class RxNormTrait
  {
  public:
    AWS_COMPREHENDMEDICAL_API RxNormTrait() = default;
    AWS_COMPREHENDMEDICAL_API RxNormTrait(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API RxNormTrait& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides a name or contextual description about the trait.</p>
     */
    inline RxNormTraitName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(RxNormTraitName value) { m_nameHasBeenSet = true; m_name = value; }
    inline RxNormTrait& WithName(RxNormTraitName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detected trait.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline RxNormTrait& WithScore(double value) { SetScore(value); return *this;}
    ///@}
  private:

    RxNormTraitName m_name{RxNormTraitName::NOT_SET};
    bool m_nameHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
