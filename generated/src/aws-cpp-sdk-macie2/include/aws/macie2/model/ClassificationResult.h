/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/CustomDataIdentifiers.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/ClassificationResultStatus.h>
#include <aws/macie2/model/SensitiveDataItem.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides the details of a sensitive data finding, including the types, number
   * of occurrences, and locations of the sensitive data that was
   * detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ClassificationResult">AWS
   * API Reference</a></p>
   */
  class ClassificationResult
  {
  public:
    AWS_MACIE2_API ClassificationResult() = default;
    AWS_MACIE2_API ClassificationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ClassificationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether Amazon Macie detected additional occurrences of sensitive
     * data in the S3 object. A finding includes location data for a maximum of 15
     * occurrences of sensitive data.</p> <p>This value can help you determine whether
     * to investigate additional occurrences of sensitive data in an object. You can do
     * this by referring to the corresponding sensitive data discovery result for the
     * finding (classificationDetails.detailedResultsLocation).</p>
     */
    inline bool GetAdditionalOccurrences() const { return m_additionalOccurrences; }
    inline bool AdditionalOccurrencesHasBeenSet() const { return m_additionalOccurrencesHasBeenSet; }
    inline void SetAdditionalOccurrences(bool value) { m_additionalOccurrencesHasBeenSet = true; m_additionalOccurrences = value; }
    inline ClassificationResult& WithAdditionalOccurrences(bool value) { SetAdditionalOccurrences(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom data identifiers that detected the sensitive data and the number
     * of occurrences of the data that they detected.</p>
     */
    inline const CustomDataIdentifiers& GetCustomDataIdentifiers() const { return m_customDataIdentifiers; }
    inline bool CustomDataIdentifiersHasBeenSet() const { return m_customDataIdentifiersHasBeenSet; }
    template<typename CustomDataIdentifiersT = CustomDataIdentifiers>
    void SetCustomDataIdentifiers(CustomDataIdentifiersT&& value) { m_customDataIdentifiersHasBeenSet = true; m_customDataIdentifiers = std::forward<CustomDataIdentifiersT>(value); }
    template<typename CustomDataIdentifiersT = CustomDataIdentifiers>
    ClassificationResult& WithCustomDataIdentifiers(CustomDataIdentifiersT&& value) { SetCustomDataIdentifiers(std::forward<CustomDataIdentifiersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of content, as a MIME type, that the finding applies to. For
     * example, application/gzip, for a GNU Gzip compressed archive file, or
     * application/pdf, for an Adobe Portable Document Format file.</p>
     */
    inline const Aws::String& GetMimeType() const { return m_mimeType; }
    inline bool MimeTypeHasBeenSet() const { return m_mimeTypeHasBeenSet; }
    template<typename MimeTypeT = Aws::String>
    void SetMimeType(MimeTypeT&& value) { m_mimeTypeHasBeenSet = true; m_mimeType = std::forward<MimeTypeT>(value); }
    template<typename MimeTypeT = Aws::String>
    ClassificationResult& WithMimeType(MimeTypeT&& value) { SetMimeType(std::forward<MimeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category, types, and number of occurrences of the sensitive data that
     * produced the finding.</p>
     */
    inline const Aws::Vector<SensitiveDataItem>& GetSensitiveData() const { return m_sensitiveData; }
    inline bool SensitiveDataHasBeenSet() const { return m_sensitiveDataHasBeenSet; }
    template<typename SensitiveDataT = Aws::Vector<SensitiveDataItem>>
    void SetSensitiveData(SensitiveDataT&& value) { m_sensitiveDataHasBeenSet = true; m_sensitiveData = std::forward<SensitiveDataT>(value); }
    template<typename SensitiveDataT = Aws::Vector<SensitiveDataItem>>
    ClassificationResult& WithSensitiveData(SensitiveDataT&& value) { SetSensitiveData(std::forward<SensitiveDataT>(value)); return *this;}
    template<typename SensitiveDataT = SensitiveDataItem>
    ClassificationResult& AddSensitiveData(SensitiveDataT&& value) { m_sensitiveDataHasBeenSet = true; m_sensitiveData.emplace_back(std::forward<SensitiveDataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total size, in bytes, of the data that the finding applies to.</p>
     */
    inline long long GetSizeClassified() const { return m_sizeClassified; }
    inline bool SizeClassifiedHasBeenSet() const { return m_sizeClassifiedHasBeenSet; }
    inline void SetSizeClassified(long long value) { m_sizeClassifiedHasBeenSet = true; m_sizeClassified = value; }
    inline ClassificationResult& WithSizeClassified(long long value) { SetSizeClassified(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the finding.</p>
     */
    inline const ClassificationResultStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = ClassificationResultStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ClassificationResultStatus>
    ClassificationResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    bool m_additionalOccurrences{false};
    bool m_additionalOccurrencesHasBeenSet = false;

    CustomDataIdentifiers m_customDataIdentifiers;
    bool m_customDataIdentifiersHasBeenSet = false;

    Aws::String m_mimeType;
    bool m_mimeTypeHasBeenSet = false;

    Aws::Vector<SensitiveDataItem> m_sensitiveData;
    bool m_sensitiveDataHasBeenSet = false;

    long long m_sizeClassified{0};
    bool m_sizeClassifiedHasBeenSet = false;

    ClassificationResultStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
