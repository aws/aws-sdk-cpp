/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/model/SNOMEDCTTraitName.h>
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
   * <p> Contextual information for an entity. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/SNOMEDCTTrait">AWS
   * API Reference</a></p>
   */
  class SNOMEDCTTrait
  {
  public:
    AWS_COMPREHENDMEDICAL_API SNOMEDCTTrait() = default;
    AWS_COMPREHENDMEDICAL_API SNOMEDCTTrait(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API SNOMEDCTTrait& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name or contextual description of a detected trait. </p>
     */
    inline SNOMEDCTTraitName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(SNOMEDCTTraitName value) { m_nameHasBeenSet = true; m_name = value; }
    inline SNOMEDCTTrait& WithName(SNOMEDCTTraitName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The level of confidence that Amazon Comprehend Medical has in the accuracy
     * of a detected trait. </p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline SNOMEDCTTrait& WithScore(double value) { SetScore(value); return *this;}
    ///@}
  private:

    SNOMEDCTTraitName m_name{SNOMEDCTTraitName::NOT_SET};
    bool m_nameHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
