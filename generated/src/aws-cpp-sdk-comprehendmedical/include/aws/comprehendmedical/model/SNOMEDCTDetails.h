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
    AWS_COMPREHENDMEDICAL_API SNOMEDCTDetails() = default;
    AWS_COMPREHENDMEDICAL_API SNOMEDCTDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API SNOMEDCTDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The edition of SNOMED-CT used. The edition used for the InferSNOMEDCT
     * editions is the US edition. </p>
     */
    inline const Aws::String& GetEdition() const { return m_edition; }
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }
    template<typename EditionT = Aws::String>
    void SetEdition(EditionT&& value) { m_editionHasBeenSet = true; m_edition = std::forward<EditionT>(value); }
    template<typename EditionT = Aws::String>
    SNOMEDCTDetails& WithEdition(EditionT&& value) { SetEdition(std::forward<EditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The language used in the SNOMED-CT ontology. All Amazon Comprehend Medical
     * operations are US English (en). </p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    SNOMEDCTDetails& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version date of the SNOMED-CT ontology used. </p>
     */
    inline const Aws::String& GetVersionDate() const { return m_versionDate; }
    inline bool VersionDateHasBeenSet() const { return m_versionDateHasBeenSet; }
    template<typename VersionDateT = Aws::String>
    void SetVersionDate(VersionDateT&& value) { m_versionDateHasBeenSet = true; m_versionDate = std::forward<VersionDateT>(value); }
    template<typename VersionDateT = Aws::String>
    SNOMEDCTDetails& WithVersionDate(VersionDateT&& value) { SetVersionDate(std::forward<VersionDateT>(value)); return *this;}
    ///@}
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
