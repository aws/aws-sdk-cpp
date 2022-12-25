/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/model/EncryptionKey.h>
#include <aws/core/utils/DateTime.h>
#include <aws/translate/model/Directionality.h>
#include <aws/translate/model/TerminologyDataFormat.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>The properties of the custom terminology.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TerminologyProperties">AWS
   * API Reference</a></p>
   */
  class TerminologyProperties
  {
  public:
    AWS_TRANSLATE_API TerminologyProperties();
    AWS_TRANSLATE_API TerminologyProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API TerminologyProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the custom terminology.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom terminology.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the custom terminology.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the custom terminology.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the custom terminology.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the custom terminology.</p>
     */
    inline TerminologyProperties& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom terminology.</p>
     */
    inline TerminologyProperties& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom terminology.</p>
     */
    inline TerminologyProperties& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the custom terminology properties.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the custom terminology properties.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the custom terminology properties.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the custom terminology properties.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the custom terminology properties.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the custom terminology properties.</p>
     */
    inline TerminologyProperties& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the custom terminology properties.</p>
     */
    inline TerminologyProperties& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the custom terminology properties.</p>
     */
    inline TerminologyProperties& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the custom terminology. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the custom terminology. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the custom terminology. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the custom terminology. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the custom terminology. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the custom terminology. </p>
     */
    inline TerminologyProperties& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the custom terminology. </p>
     */
    inline TerminologyProperties& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the custom terminology. </p>
     */
    inline TerminologyProperties& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The language code for the source text of the translation request for which
     * the custom terminology is being used.</p>
     */
    inline const Aws::String& GetSourceLanguageCode() const{ return m_sourceLanguageCode; }

    /**
     * <p>The language code for the source text of the translation request for which
     * the custom terminology is being used.</p>
     */
    inline bool SourceLanguageCodeHasBeenSet() const { return m_sourceLanguageCodeHasBeenSet; }

    /**
     * <p>The language code for the source text of the translation request for which
     * the custom terminology is being used.</p>
     */
    inline void SetSourceLanguageCode(const Aws::String& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = value; }

    /**
     * <p>The language code for the source text of the translation request for which
     * the custom terminology is being used.</p>
     */
    inline void SetSourceLanguageCode(Aws::String&& value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode = std::move(value); }

    /**
     * <p>The language code for the source text of the translation request for which
     * the custom terminology is being used.</p>
     */
    inline void SetSourceLanguageCode(const char* value) { m_sourceLanguageCodeHasBeenSet = true; m_sourceLanguageCode.assign(value); }

    /**
     * <p>The language code for the source text of the translation request for which
     * the custom terminology is being used.</p>
     */
    inline TerminologyProperties& WithSourceLanguageCode(const Aws::String& value) { SetSourceLanguageCode(value); return *this;}

    /**
     * <p>The language code for the source text of the translation request for which
     * the custom terminology is being used.</p>
     */
    inline TerminologyProperties& WithSourceLanguageCode(Aws::String&& value) { SetSourceLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The language code for the source text of the translation request for which
     * the custom terminology is being used.</p>
     */
    inline TerminologyProperties& WithSourceLanguageCode(const char* value) { SetSourceLanguageCode(value); return *this;}


    /**
     * <p>The language codes for the target languages available with the custom
     * terminology resource. All possible target languages are returned in array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetLanguageCodes() const{ return m_targetLanguageCodes; }

    /**
     * <p>The language codes for the target languages available with the custom
     * terminology resource. All possible target languages are returned in array.</p>
     */
    inline bool TargetLanguageCodesHasBeenSet() const { return m_targetLanguageCodesHasBeenSet; }

    /**
     * <p>The language codes for the target languages available with the custom
     * terminology resource. All possible target languages are returned in array.</p>
     */
    inline void SetTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = value; }

    /**
     * <p>The language codes for the target languages available with the custom
     * terminology resource. All possible target languages are returned in array.</p>
     */
    inline void SetTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes = std::move(value); }

    /**
     * <p>The language codes for the target languages available with the custom
     * terminology resource. All possible target languages are returned in array.</p>
     */
    inline TerminologyProperties& WithTargetLanguageCodes(const Aws::Vector<Aws::String>& value) { SetTargetLanguageCodes(value); return *this;}

    /**
     * <p>The language codes for the target languages available with the custom
     * terminology resource. All possible target languages are returned in array.</p>
     */
    inline TerminologyProperties& WithTargetLanguageCodes(Aws::Vector<Aws::String>&& value) { SetTargetLanguageCodes(std::move(value)); return *this;}

    /**
     * <p>The language codes for the target languages available with the custom
     * terminology resource. All possible target languages are returned in array.</p>
     */
    inline TerminologyProperties& AddTargetLanguageCodes(const Aws::String& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }

    /**
     * <p>The language codes for the target languages available with the custom
     * terminology resource. All possible target languages are returned in array.</p>
     */
    inline TerminologyProperties& AddTargetLanguageCodes(Aws::String&& value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(std::move(value)); return *this; }

    /**
     * <p>The language codes for the target languages available with the custom
     * terminology resource. All possible target languages are returned in array.</p>
     */
    inline TerminologyProperties& AddTargetLanguageCodes(const char* value) { m_targetLanguageCodesHasBeenSet = true; m_targetLanguageCodes.push_back(value); return *this; }


    /**
     * <p>The encryption key for the custom terminology.</p>
     */
    inline const EncryptionKey& GetEncryptionKey() const{ return m_encryptionKey; }

    /**
     * <p>The encryption key for the custom terminology.</p>
     */
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }

    /**
     * <p>The encryption key for the custom terminology.</p>
     */
    inline void SetEncryptionKey(const EncryptionKey& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }

    /**
     * <p>The encryption key for the custom terminology.</p>
     */
    inline void SetEncryptionKey(EncryptionKey&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }

    /**
     * <p>The encryption key for the custom terminology.</p>
     */
    inline TerminologyProperties& WithEncryptionKey(const EncryptionKey& value) { SetEncryptionKey(value); return *this;}

    /**
     * <p>The encryption key for the custom terminology.</p>
     */
    inline TerminologyProperties& WithEncryptionKey(EncryptionKey&& value) { SetEncryptionKey(std::move(value)); return *this;}


    /**
     * <p>The size of the file used when importing a custom terminology.</p>
     */
    inline int GetSizeBytes() const{ return m_sizeBytes; }

    /**
     * <p>The size of the file used when importing a custom terminology.</p>
     */
    inline bool SizeBytesHasBeenSet() const { return m_sizeBytesHasBeenSet; }

    /**
     * <p>The size of the file used when importing a custom terminology.</p>
     */
    inline void SetSizeBytes(int value) { m_sizeBytesHasBeenSet = true; m_sizeBytes = value; }

    /**
     * <p>The size of the file used when importing a custom terminology.</p>
     */
    inline TerminologyProperties& WithSizeBytes(int value) { SetSizeBytes(value); return *this;}


    /**
     * <p>The number of terms included in the custom terminology.</p>
     */
    inline int GetTermCount() const{ return m_termCount; }

    /**
     * <p>The number of terms included in the custom terminology.</p>
     */
    inline bool TermCountHasBeenSet() const { return m_termCountHasBeenSet; }

    /**
     * <p>The number of terms included in the custom terminology.</p>
     */
    inline void SetTermCount(int value) { m_termCountHasBeenSet = true; m_termCount = value; }

    /**
     * <p>The number of terms included in the custom terminology.</p>
     */
    inline TerminologyProperties& WithTermCount(int value) { SetTermCount(value); return *this;}


    /**
     * <p>The time at which the custom terminology was created, based on the
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the custom terminology was created, based on the
     * timestamp.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the custom terminology was created, based on the
     * timestamp.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the custom terminology was created, based on the
     * timestamp.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the custom terminology was created, based on the
     * timestamp.</p>
     */
    inline TerminologyProperties& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the custom terminology was created, based on the
     * timestamp.</p>
     */
    inline TerminologyProperties& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time at which the custom terminology was last update, based on the
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time at which the custom terminology was last update, based on the
     * timestamp.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The time at which the custom terminology was last update, based on the
     * timestamp.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time at which the custom terminology was last update, based on the
     * timestamp.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time at which the custom terminology was last update, based on the
     * timestamp.</p>
     */
    inline TerminologyProperties& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the custom terminology was last update, based on the
     * timestamp.</p>
     */
    inline TerminologyProperties& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The directionality of your terminology resource indicates whether it has one
     * source language (uni-directional) or multiple (multi-directional). </p> <dl>
     * <dt>UNI</dt> <dd> <p>The terminology resource has one source language (the first
     * column in a CSV file), and all of its other languages are target languages.</p>
     * </dd> <dt>MULTI</dt> <dd> <p>Any language in the terminology resource can be the
     * source language.</p> </dd> </dl>
     */
    inline const Directionality& GetDirectionality() const{ return m_directionality; }

    /**
     * <p>The directionality of your terminology resource indicates whether it has one
     * source language (uni-directional) or multiple (multi-directional). </p> <dl>
     * <dt>UNI</dt> <dd> <p>The terminology resource has one source language (the first
     * column in a CSV file), and all of its other languages are target languages.</p>
     * </dd> <dt>MULTI</dt> <dd> <p>Any language in the terminology resource can be the
     * source language.</p> </dd> </dl>
     */
    inline bool DirectionalityHasBeenSet() const { return m_directionalityHasBeenSet; }

    /**
     * <p>The directionality of your terminology resource indicates whether it has one
     * source language (uni-directional) or multiple (multi-directional). </p> <dl>
     * <dt>UNI</dt> <dd> <p>The terminology resource has one source language (the first
     * column in a CSV file), and all of its other languages are target languages.</p>
     * </dd> <dt>MULTI</dt> <dd> <p>Any language in the terminology resource can be the
     * source language.</p> </dd> </dl>
     */
    inline void SetDirectionality(const Directionality& value) { m_directionalityHasBeenSet = true; m_directionality = value; }

    /**
     * <p>The directionality of your terminology resource indicates whether it has one
     * source language (uni-directional) or multiple (multi-directional). </p> <dl>
     * <dt>UNI</dt> <dd> <p>The terminology resource has one source language (the first
     * column in a CSV file), and all of its other languages are target languages.</p>
     * </dd> <dt>MULTI</dt> <dd> <p>Any language in the terminology resource can be the
     * source language.</p> </dd> </dl>
     */
    inline void SetDirectionality(Directionality&& value) { m_directionalityHasBeenSet = true; m_directionality = std::move(value); }

    /**
     * <p>The directionality of your terminology resource indicates whether it has one
     * source language (uni-directional) or multiple (multi-directional). </p> <dl>
     * <dt>UNI</dt> <dd> <p>The terminology resource has one source language (the first
     * column in a CSV file), and all of its other languages are target languages.</p>
     * </dd> <dt>MULTI</dt> <dd> <p>Any language in the terminology resource can be the
     * source language.</p> </dd> </dl>
     */
    inline TerminologyProperties& WithDirectionality(const Directionality& value) { SetDirectionality(value); return *this;}

    /**
     * <p>The directionality of your terminology resource indicates whether it has one
     * source language (uni-directional) or multiple (multi-directional). </p> <dl>
     * <dt>UNI</dt> <dd> <p>The terminology resource has one source language (the first
     * column in a CSV file), and all of its other languages are target languages.</p>
     * </dd> <dt>MULTI</dt> <dd> <p>Any language in the terminology resource can be the
     * source language.</p> </dd> </dl>
     */
    inline TerminologyProperties& WithDirectionality(Directionality&& value) { SetDirectionality(std::move(value)); return *this;}


    /**
     * <p>Additional information from Amazon Translate about the terminology
     * resource.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Additional information from Amazon Translate about the terminology
     * resource.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Additional information from Amazon Translate about the terminology
     * resource.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Additional information from Amazon Translate about the terminology
     * resource.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Additional information from Amazon Translate about the terminology
     * resource.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Additional information from Amazon Translate about the terminology
     * resource.</p>
     */
    inline TerminologyProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Additional information from Amazon Translate about the terminology
     * resource.</p>
     */
    inline TerminologyProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Additional information from Amazon Translate about the terminology
     * resource.</p>
     */
    inline TerminologyProperties& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The number of terms in the input file that Amazon Translate skipped when you
     * created or updated the terminology resource.</p>
     */
    inline int GetSkippedTermCount() const{ return m_skippedTermCount; }

    /**
     * <p>The number of terms in the input file that Amazon Translate skipped when you
     * created or updated the terminology resource.</p>
     */
    inline bool SkippedTermCountHasBeenSet() const { return m_skippedTermCountHasBeenSet; }

    /**
     * <p>The number of terms in the input file that Amazon Translate skipped when you
     * created or updated the terminology resource.</p>
     */
    inline void SetSkippedTermCount(int value) { m_skippedTermCountHasBeenSet = true; m_skippedTermCount = value; }

    /**
     * <p>The number of terms in the input file that Amazon Translate skipped when you
     * created or updated the terminology resource.</p>
     */
    inline TerminologyProperties& WithSkippedTermCount(int value) { SetSkippedTermCount(value); return *this;}


    /**
     * <p>The format of the custom terminology input file.</p>
     */
    inline const TerminologyDataFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the custom terminology input file.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the custom terminology input file.</p>
     */
    inline void SetFormat(const TerminologyDataFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the custom terminology input file.</p>
     */
    inline void SetFormat(TerminologyDataFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the custom terminology input file.</p>
     */
    inline TerminologyProperties& WithFormat(const TerminologyDataFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the custom terminology input file.</p>
     */
    inline TerminologyProperties& WithFormat(TerminologyDataFormat&& value) { SetFormat(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_sourceLanguageCode;
    bool m_sourceLanguageCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetLanguageCodes;
    bool m_targetLanguageCodesHasBeenSet = false;

    EncryptionKey m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    int m_sizeBytes;
    bool m_sizeBytesHasBeenSet = false;

    int m_termCount;
    bool m_termCountHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Directionality m_directionality;
    bool m_directionalityHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_skippedTermCount;
    bool m_skippedTermCountHasBeenSet = false;

    TerminologyDataFormat m_format;
    bool m_formatHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
