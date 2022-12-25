/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
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
namespace ComprehendMedical
{
namespace Model
{

  /**
   * <p> The SNOMED-CT concepts that the entity could refer to, along with a score
   * indicating the likelihood of the match. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/SNOMEDCTConcept">AWS
   * API Reference</a></p>
   */
  class SNOMEDCTConcept
  {
  public:
    AWS_COMPREHENDMEDICAL_API SNOMEDCTConcept();
    AWS_COMPREHENDMEDICAL_API SNOMEDCTConcept(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API SNOMEDCTConcept& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The description of the SNOMED-CT concept. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the SNOMED-CT concept. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the SNOMED-CT concept. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the SNOMED-CT concept. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the SNOMED-CT concept. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the SNOMED-CT concept. </p>
     */
    inline SNOMEDCTConcept& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the SNOMED-CT concept. </p>
     */
    inline SNOMEDCTConcept& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the SNOMED-CT concept. </p>
     */
    inline SNOMEDCTConcept& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The numeric ID for the SNOMED-CT concept. </p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p> The numeric ID for the SNOMED-CT concept. </p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p> The numeric ID for the SNOMED-CT concept. </p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p> The numeric ID for the SNOMED-CT concept. </p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p> The numeric ID for the SNOMED-CT concept. </p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p> The numeric ID for the SNOMED-CT concept. </p>
     */
    inline SNOMEDCTConcept& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p> The numeric ID for the SNOMED-CT concept. </p>
     */
    inline SNOMEDCTConcept& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p> The numeric ID for the SNOMED-CT concept. </p>
     */
    inline SNOMEDCTConcept& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p> The level of confidence Comprehend Medical has that the entity should be
     * linked to the identified SNOMED-CT concept. </p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p> The level of confidence Comprehend Medical has that the entity should be
     * linked to the identified SNOMED-CT concept. </p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p> The level of confidence Comprehend Medical has that the entity should be
     * linked to the identified SNOMED-CT concept. </p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p> The level of confidence Comprehend Medical has that the entity should be
     * linked to the identified SNOMED-CT concept. </p>
     */
    inline SNOMEDCTConcept& WithScore(double value) { SetScore(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    double m_score;
    bool m_scoreHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
