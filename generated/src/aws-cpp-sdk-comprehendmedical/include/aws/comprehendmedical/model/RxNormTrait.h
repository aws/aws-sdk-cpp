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
    AWS_COMPREHENDMEDICAL_API RxNormTrait();
    AWS_COMPREHENDMEDICAL_API RxNormTrait(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API RxNormTrait& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides a name or contextual description about the trait.</p>
     */
    inline const RxNormTraitName& GetName() const{ return m_name; }

    /**
     * <p>Provides a name or contextual description about the trait.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Provides a name or contextual description about the trait.</p>
     */
    inline void SetName(const RxNormTraitName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Provides a name or contextual description about the trait.</p>
     */
    inline void SetName(RxNormTraitName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Provides a name or contextual description about the trait.</p>
     */
    inline RxNormTrait& WithName(const RxNormTraitName& value) { SetName(value); return *this;}

    /**
     * <p>Provides a name or contextual description about the trait.</p>
     */
    inline RxNormTrait& WithName(RxNormTraitName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detected trait.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detected trait.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detected trait.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has in the accuracy of
     * the detected trait.</p>
     */
    inline RxNormTrait& WithScore(double value) { SetScore(value); return *this;}

  private:

    RxNormTraitName m_name;
    bool m_nameHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
