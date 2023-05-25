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
   * <p> The information about the revision of the SNOMED-CT ontology in the
   * response. Specifically, the details include the SNOMED-CT edition, language, and
   * version date. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/SNOMEDCTDetails">AWS
   * API Reference</a></p>
   */
  class SNOMEDCTDetails
  {
  public:
    AWS_COMPREHENDMEDICAL_API SNOMEDCTDetails();
    AWS_COMPREHENDMEDICAL_API SNOMEDCTDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API SNOMEDCTDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The edition of SNOMED-CT used. The edition used for the InferSNOMEDCT
     * editions is the US edition. </p>
     */
    inline const Aws::String& GetEdition() const{ return m_edition; }

    /**
     * <p> The edition of SNOMED-CT used. The edition used for the InferSNOMEDCT
     * editions is the US edition. </p>
     */
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }

    /**
     * <p> The edition of SNOMED-CT used. The edition used for the InferSNOMEDCT
     * editions is the US edition. </p>
     */
    inline void SetEdition(const Aws::String& value) { m_editionHasBeenSet = true; m_edition = value; }

    /**
     * <p> The edition of SNOMED-CT used. The edition used for the InferSNOMEDCT
     * editions is the US edition. </p>
     */
    inline void SetEdition(Aws::String&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }

    /**
     * <p> The edition of SNOMED-CT used. The edition used for the InferSNOMEDCT
     * editions is the US edition. </p>
     */
    inline void SetEdition(const char* value) { m_editionHasBeenSet = true; m_edition.assign(value); }

    /**
     * <p> The edition of SNOMED-CT used. The edition used for the InferSNOMEDCT
     * editions is the US edition. </p>
     */
    inline SNOMEDCTDetails& WithEdition(const Aws::String& value) { SetEdition(value); return *this;}

    /**
     * <p> The edition of SNOMED-CT used. The edition used for the InferSNOMEDCT
     * editions is the US edition. </p>
     */
    inline SNOMEDCTDetails& WithEdition(Aws::String&& value) { SetEdition(std::move(value)); return *this;}

    /**
     * <p> The edition of SNOMED-CT used. The edition used for the InferSNOMEDCT
     * editions is the US edition. </p>
     */
    inline SNOMEDCTDetails& WithEdition(const char* value) { SetEdition(value); return *this;}


    /**
     * <p> The language used in the SNOMED-CT ontology. All Amazon Comprehend Medical
     * operations are US English (en). </p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p> The language used in the SNOMED-CT ontology. All Amazon Comprehend Medical
     * operations are US English (en). </p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p> The language used in the SNOMED-CT ontology. All Amazon Comprehend Medical
     * operations are US English (en). </p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p> The language used in the SNOMED-CT ontology. All Amazon Comprehend Medical
     * operations are US English (en). </p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p> The language used in the SNOMED-CT ontology. All Amazon Comprehend Medical
     * operations are US English (en). </p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p> The language used in the SNOMED-CT ontology. All Amazon Comprehend Medical
     * operations are US English (en). </p>
     */
    inline SNOMEDCTDetails& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p> The language used in the SNOMED-CT ontology. All Amazon Comprehend Medical
     * operations are US English (en). </p>
     */
    inline SNOMEDCTDetails& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p> The language used in the SNOMED-CT ontology. All Amazon Comprehend Medical
     * operations are US English (en). </p>
     */
    inline SNOMEDCTDetails& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p> The version date of the SNOMED-CT ontology used. </p>
     */
    inline const Aws::String& GetVersionDate() const{ return m_versionDate; }

    /**
     * <p> The version date of the SNOMED-CT ontology used. </p>
     */
    inline bool VersionDateHasBeenSet() const { return m_versionDateHasBeenSet; }

    /**
     * <p> The version date of the SNOMED-CT ontology used. </p>
     */
    inline void SetVersionDate(const Aws::String& value) { m_versionDateHasBeenSet = true; m_versionDate = value; }

    /**
     * <p> The version date of the SNOMED-CT ontology used. </p>
     */
    inline void SetVersionDate(Aws::String&& value) { m_versionDateHasBeenSet = true; m_versionDate = std::move(value); }

    /**
     * <p> The version date of the SNOMED-CT ontology used. </p>
     */
    inline void SetVersionDate(const char* value) { m_versionDateHasBeenSet = true; m_versionDate.assign(value); }

    /**
     * <p> The version date of the SNOMED-CT ontology used. </p>
     */
    inline SNOMEDCTDetails& WithVersionDate(const Aws::String& value) { SetVersionDate(value); return *this;}

    /**
     * <p> The version date of the SNOMED-CT ontology used. </p>
     */
    inline SNOMEDCTDetails& WithVersionDate(Aws::String&& value) { SetVersionDate(std::move(value)); return *this;}

    /**
     * <p> The version date of the SNOMED-CT ontology used. </p>
     */
    inline SNOMEDCTDetails& WithVersionDate(const char* value) { SetVersionDate(value); return *this;}

  private:

    Aws::String m_edition;
    bool m_editionHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_versionDate;
    bool m_versionDateHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
