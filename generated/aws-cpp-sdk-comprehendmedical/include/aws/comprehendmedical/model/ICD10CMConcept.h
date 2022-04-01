﻿/**
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
   * <p> The ICD-10-CM concepts that the entity could refer to, along with a score
   * indicating the likelihood of the match.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ICD10CMConcept">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHENDMEDICAL_API ICD10CMConcept
  {
  public:
    ICD10CMConcept();
    ICD10CMConcept(Aws::Utils::Json::JsonView jsonValue);
    ICD10CMConcept& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The long description of the ICD-10-CM code in the ontology.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The long description of the ICD-10-CM code in the ontology.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The long description of the ICD-10-CM code in the ontology.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The long description of the ICD-10-CM code in the ontology.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The long description of the ICD-10-CM code in the ontology.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The long description of the ICD-10-CM code in the ontology.</p>
     */
    inline ICD10CMConcept& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The long description of the ICD-10-CM code in the ontology.</p>
     */
    inline ICD10CMConcept& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The long description of the ICD-10-CM code in the ontology.</p>
     */
    inline ICD10CMConcept& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ICD-10-CM code that identifies the concept found in the knowledge base
     * from the Centers for Disease Control.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The ICD-10-CM code that identifies the concept found in the knowledge base
     * from the Centers for Disease Control.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The ICD-10-CM code that identifies the concept found in the knowledge base
     * from the Centers for Disease Control.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The ICD-10-CM code that identifies the concept found in the knowledge base
     * from the Centers for Disease Control.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The ICD-10-CM code that identifies the concept found in the knowledge base
     * from the Centers for Disease Control.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The ICD-10-CM code that identifies the concept found in the knowledge base
     * from the Centers for Disease Control.</p>
     */
    inline ICD10CMConcept& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The ICD-10-CM code that identifies the concept found in the knowledge base
     * from the Centers for Disease Control.</p>
     */
    inline ICD10CMConcept& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The ICD-10-CM code that identifies the concept found in the knowledge base
     * from the Centers for Disease Control.</p>
     */
    inline ICD10CMConcept& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the entity is
     * accurately linked to an ICD-10-CM concept.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the entity is
     * accurately linked to an ICD-10-CM concept.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the entity is
     * accurately linked to an ICD-10-CM concept.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the entity is
     * accurately linked to an ICD-10-CM concept.</p>
     */
    inline ICD10CMConcept& WithScore(double value) { SetScore(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_code;
    bool m_codeHasBeenSet;

    double m_score;
    bool m_scoreHasBeenSet;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
