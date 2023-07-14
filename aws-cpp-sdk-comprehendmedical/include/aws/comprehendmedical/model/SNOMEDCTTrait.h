﻿/**
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
  class AWS_COMPREHENDMEDICAL_API SNOMEDCTTrait
  {
  public:
    SNOMEDCTTrait();
    SNOMEDCTTrait(Aws::Utils::Json::JsonView jsonValue);
    SNOMEDCTTrait& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name or contextual description of a detected trait. </p>
     */
    inline const SNOMEDCTTraitName& GetName() const{ return m_name; }

    /**
     * <p> The name or contextual description of a detected trait. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name or contextual description of a detected trait. </p>
     */
    inline void SetName(const SNOMEDCTTraitName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name or contextual description of a detected trait. </p>
     */
    inline void SetName(SNOMEDCTTraitName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name or contextual description of a detected trait. </p>
     */
    inline SNOMEDCTTrait& WithName(const SNOMEDCTTraitName& value) { SetName(value); return *this;}

    /**
     * <p> The name or contextual description of a detected trait. </p>
     */
    inline SNOMEDCTTrait& WithName(SNOMEDCTTraitName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p> The level of confidence that Comprehend Medical has in the accuracy of a
     * detected trait. </p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p> The level of confidence that Comprehend Medical has in the accuracy of a
     * detected trait. </p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p> The level of confidence that Comprehend Medical has in the accuracy of a
     * detected trait. </p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p> The level of confidence that Comprehend Medical has in the accuracy of a
     * detected trait. </p>
     */
    inline SNOMEDCTTrait& WithScore(double value) { SetScore(value); return *this;}

  private:

    SNOMEDCTTraitName m_name;
    bool m_nameHasBeenSet;

    double m_score;
    bool m_scoreHasBeenSet;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
