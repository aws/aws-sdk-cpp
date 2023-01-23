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
   * <p>The RxNorm concept that the entity could refer to, along with a score
   * indicating the likelihood of the match.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/RxNormConcept">AWS
   * API Reference</a></p>
   */
  class RxNormConcept
  {
  public:
    AWS_COMPREHENDMEDICAL_API RxNormConcept();
    AWS_COMPREHENDMEDICAL_API RxNormConcept(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API RxNormConcept& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the RxNorm concept.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the RxNorm concept.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the RxNorm concept.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the RxNorm concept.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the RxNorm concept.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the RxNorm concept.</p>
     */
    inline RxNormConcept& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the RxNorm concept.</p>
     */
    inline RxNormConcept& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the RxNorm concept.</p>
     */
    inline RxNormConcept& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>RxNorm concept ID, also known as the RxCUI.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>RxNorm concept ID, also known as the RxCUI.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>RxNorm concept ID, also known as the RxCUI.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>RxNorm concept ID, also known as the RxCUI.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>RxNorm concept ID, also known as the RxCUI.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>RxNorm concept ID, also known as the RxCUI.</p>
     */
    inline RxNormConcept& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>RxNorm concept ID, also known as the RxCUI.</p>
     */
    inline RxNormConcept& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>RxNorm concept ID, also known as the RxCUI.</p>
     */
    inline RxNormConcept& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the entity is
     * accurately linked to the reported RxNorm concept.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the entity is
     * accurately linked to the reported RxNorm concept.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the entity is
     * accurately linked to the reported RxNorm concept.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend Medical has that the entity is
     * accurately linked to the reported RxNorm concept.</p>
     */
    inline RxNormConcept& WithScore(double value) { SetScore(value); return *this;}

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
