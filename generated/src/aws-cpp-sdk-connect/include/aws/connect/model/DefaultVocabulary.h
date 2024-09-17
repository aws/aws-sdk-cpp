/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/VocabularyLanguageCode.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about a default vocabulary.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DefaultVocabulary">AWS
   * API Reference</a></p>
   */
  class DefaultVocabulary
  {
  public:
    AWS_CONNECT_API DefaultVocabulary();
    AWS_CONNECT_API DefaultVocabulary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API DefaultVocabulary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DefaultVocabulary& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DefaultVocabulary& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DefaultVocabulary& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code of the vocabulary entries. For a list of languages and
     * their corresponding language codes, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/transcribe-whatis.html">What
     * is Amazon Transcribe?</a> </p>
     */
    inline const VocabularyLanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const VocabularyLanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(VocabularyLanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline DefaultVocabulary& WithLanguageCode(const VocabularyLanguageCode& value) { SetLanguageCode(value); return *this;}
    inline DefaultVocabulary& WithLanguageCode(VocabularyLanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the custom vocabulary.</p>
     */
    inline const Aws::String& GetVocabularyId() const{ return m_vocabularyId; }
    inline bool VocabularyIdHasBeenSet() const { return m_vocabularyIdHasBeenSet; }
    inline void SetVocabularyId(const Aws::String& value) { m_vocabularyIdHasBeenSet = true; m_vocabularyId = value; }
    inline void SetVocabularyId(Aws::String&& value) { m_vocabularyIdHasBeenSet = true; m_vocabularyId = std::move(value); }
    inline void SetVocabularyId(const char* value) { m_vocabularyIdHasBeenSet = true; m_vocabularyId.assign(value); }
    inline DefaultVocabulary& WithVocabularyId(const Aws::String& value) { SetVocabularyId(value); return *this;}
    inline DefaultVocabulary& WithVocabularyId(Aws::String&& value) { SetVocabularyId(std::move(value)); return *this;}
    inline DefaultVocabulary& WithVocabularyId(const char* value) { SetVocabularyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name of the custom vocabulary.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }
    inline DefaultVocabulary& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}
    inline DefaultVocabulary& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}
    inline DefaultVocabulary& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    VocabularyLanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_vocabularyId;
    bool m_vocabularyIdHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
