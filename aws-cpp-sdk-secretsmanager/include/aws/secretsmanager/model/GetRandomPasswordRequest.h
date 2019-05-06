/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class AWS_SECRETSMANAGER_API GetRandomPasswordRequest : public SecretsManagerRequest
  {
  public:
    GetRandomPasswordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRandomPassword"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The desired length of the generated password. The default value if you do not
     * include this parameter is 32 characters.</p>
     */
    inline long long GetPasswordLength() const{ return m_passwordLength; }

    /**
     * <p>The desired length of the generated password. The default value if you do not
     * include this parameter is 32 characters.</p>
     */
    inline bool PasswordLengthHasBeenSet() const { return m_passwordLengthHasBeenSet; }

    /**
     * <p>The desired length of the generated password. The default value if you do not
     * include this parameter is 32 characters.</p>
     */
    inline void SetPasswordLength(long long value) { m_passwordLengthHasBeenSet = true; m_passwordLength = value; }

    /**
     * <p>The desired length of the generated password. The default value if you do not
     * include this parameter is 32 characters.</p>
     */
    inline GetRandomPasswordRequest& WithPasswordLength(long long value) { SetPasswordLength(value); return *this;}


    /**
     * <p>A string that includes characters that should not be included in the
     * generated password. The default is that all characters from the included sets
     * can be used.</p>
     */
    inline const Aws::String& GetExcludeCharacters() const{ return m_excludeCharacters; }

    /**
     * <p>A string that includes characters that should not be included in the
     * generated password. The default is that all characters from the included sets
     * can be used.</p>
     */
    inline bool ExcludeCharactersHasBeenSet() const { return m_excludeCharactersHasBeenSet; }

    /**
     * <p>A string that includes characters that should not be included in the
     * generated password. The default is that all characters from the included sets
     * can be used.</p>
     */
    inline void SetExcludeCharacters(const Aws::String& value) { m_excludeCharactersHasBeenSet = true; m_excludeCharacters = value; }

    /**
     * <p>A string that includes characters that should not be included in the
     * generated password. The default is that all characters from the included sets
     * can be used.</p>
     */
    inline void SetExcludeCharacters(Aws::String&& value) { m_excludeCharactersHasBeenSet = true; m_excludeCharacters = std::move(value); }

    /**
     * <p>A string that includes characters that should not be included in the
     * generated password. The default is that all characters from the included sets
     * can be used.</p>
     */
    inline void SetExcludeCharacters(const char* value) { m_excludeCharactersHasBeenSet = true; m_excludeCharacters.assign(value); }

    /**
     * <p>A string that includes characters that should not be included in the
     * generated password. The default is that all characters from the included sets
     * can be used.</p>
     */
    inline GetRandomPasswordRequest& WithExcludeCharacters(const Aws::String& value) { SetExcludeCharacters(value); return *this;}

    /**
     * <p>A string that includes characters that should not be included in the
     * generated password. The default is that all characters from the included sets
     * can be used.</p>
     */
    inline GetRandomPasswordRequest& WithExcludeCharacters(Aws::String&& value) { SetExcludeCharacters(std::move(value)); return *this;}

    /**
     * <p>A string that includes characters that should not be included in the
     * generated password. The default is that all characters from the included sets
     * can be used.</p>
     */
    inline GetRandomPasswordRequest& WithExcludeCharacters(const char* value) { SetExcludeCharacters(value); return *this;}


    /**
     * <p>Specifies that the generated password should not include digits. The default
     * if you do not include this switch parameter is that digits can be included.</p>
     */
    inline bool GetExcludeNumbers() const{ return m_excludeNumbers; }

    /**
     * <p>Specifies that the generated password should not include digits. The default
     * if you do not include this switch parameter is that digits can be included.</p>
     */
    inline bool ExcludeNumbersHasBeenSet() const { return m_excludeNumbersHasBeenSet; }

    /**
     * <p>Specifies that the generated password should not include digits. The default
     * if you do not include this switch parameter is that digits can be included.</p>
     */
    inline void SetExcludeNumbers(bool value) { m_excludeNumbersHasBeenSet = true; m_excludeNumbers = value; }

    /**
     * <p>Specifies that the generated password should not include digits. The default
     * if you do not include this switch parameter is that digits can be included.</p>
     */
    inline GetRandomPasswordRequest& WithExcludeNumbers(bool value) { SetExcludeNumbers(value); return *this;}


    /**
     * <p>Specifies that the generated password should not include punctuation
     * characters. The default if you do not include this switch parameter is that
     * punctuation characters can be included.</p> <p>The following are the punctuation
     * characters that <i>can</i> be included in the generated password if you don't
     * explicitly exclude them with <code>ExcludeCharacters</code> or
     * <code>ExcludePunctuation</code>:</p> <p> <code>! " # $ % &amp; ' ( ) * + , - . /
     * : ; &lt; = &gt; ? @ [ \ ] ^ _ ` { | } ~</code> </p>
     */
    inline bool GetExcludePunctuation() const{ return m_excludePunctuation; }

    /**
     * <p>Specifies that the generated password should not include punctuation
     * characters. The default if you do not include this switch parameter is that
     * punctuation characters can be included.</p> <p>The following are the punctuation
     * characters that <i>can</i> be included in the generated password if you don't
     * explicitly exclude them with <code>ExcludeCharacters</code> or
     * <code>ExcludePunctuation</code>:</p> <p> <code>! " # $ % &amp; ' ( ) * + , - . /
     * : ; &lt; = &gt; ? @ [ \ ] ^ _ ` { | } ~</code> </p>
     */
    inline bool ExcludePunctuationHasBeenSet() const { return m_excludePunctuationHasBeenSet; }

    /**
     * <p>Specifies that the generated password should not include punctuation
     * characters. The default if you do not include this switch parameter is that
     * punctuation characters can be included.</p> <p>The following are the punctuation
     * characters that <i>can</i> be included in the generated password if you don't
     * explicitly exclude them with <code>ExcludeCharacters</code> or
     * <code>ExcludePunctuation</code>:</p> <p> <code>! " # $ % &amp; ' ( ) * + , - . /
     * : ; &lt; = &gt; ? @ [ \ ] ^ _ ` { | } ~</code> </p>
     */
    inline void SetExcludePunctuation(bool value) { m_excludePunctuationHasBeenSet = true; m_excludePunctuation = value; }

    /**
     * <p>Specifies that the generated password should not include punctuation
     * characters. The default if you do not include this switch parameter is that
     * punctuation characters can be included.</p> <p>The following are the punctuation
     * characters that <i>can</i> be included in the generated password if you don't
     * explicitly exclude them with <code>ExcludeCharacters</code> or
     * <code>ExcludePunctuation</code>:</p> <p> <code>! " # $ % &amp; ' ( ) * + , - . /
     * : ; &lt; = &gt; ? @ [ \ ] ^ _ ` { | } ~</code> </p>
     */
    inline GetRandomPasswordRequest& WithExcludePunctuation(bool value) { SetExcludePunctuation(value); return *this;}


    /**
     * <p>Specifies that the generated password should not include uppercase letters.
     * The default if you do not include this switch parameter is that uppercase
     * letters can be included.</p>
     */
    inline bool GetExcludeUppercase() const{ return m_excludeUppercase; }

    /**
     * <p>Specifies that the generated password should not include uppercase letters.
     * The default if you do not include this switch parameter is that uppercase
     * letters can be included.</p>
     */
    inline bool ExcludeUppercaseHasBeenSet() const { return m_excludeUppercaseHasBeenSet; }

    /**
     * <p>Specifies that the generated password should not include uppercase letters.
     * The default if you do not include this switch parameter is that uppercase
     * letters can be included.</p>
     */
    inline void SetExcludeUppercase(bool value) { m_excludeUppercaseHasBeenSet = true; m_excludeUppercase = value; }

    /**
     * <p>Specifies that the generated password should not include uppercase letters.
     * The default if you do not include this switch parameter is that uppercase
     * letters can be included.</p>
     */
    inline GetRandomPasswordRequest& WithExcludeUppercase(bool value) { SetExcludeUppercase(value); return *this;}


    /**
     * <p>Specifies that the generated password should not include lowercase letters.
     * The default if you do not include this switch parameter is that lowercase
     * letters can be included.</p>
     */
    inline bool GetExcludeLowercase() const{ return m_excludeLowercase; }

    /**
     * <p>Specifies that the generated password should not include lowercase letters.
     * The default if you do not include this switch parameter is that lowercase
     * letters can be included.</p>
     */
    inline bool ExcludeLowercaseHasBeenSet() const { return m_excludeLowercaseHasBeenSet; }

    /**
     * <p>Specifies that the generated password should not include lowercase letters.
     * The default if you do not include this switch parameter is that lowercase
     * letters can be included.</p>
     */
    inline void SetExcludeLowercase(bool value) { m_excludeLowercaseHasBeenSet = true; m_excludeLowercase = value; }

    /**
     * <p>Specifies that the generated password should not include lowercase letters.
     * The default if you do not include this switch parameter is that lowercase
     * letters can be included.</p>
     */
    inline GetRandomPasswordRequest& WithExcludeLowercase(bool value) { SetExcludeLowercase(value); return *this;}


    /**
     * <p>Specifies that the generated password can include the space character. The
     * default if you do not include this switch parameter is that the space character
     * is not included.</p>
     */
    inline bool GetIncludeSpace() const{ return m_includeSpace; }

    /**
     * <p>Specifies that the generated password can include the space character. The
     * default if you do not include this switch parameter is that the space character
     * is not included.</p>
     */
    inline bool IncludeSpaceHasBeenSet() const { return m_includeSpaceHasBeenSet; }

    /**
     * <p>Specifies that the generated password can include the space character. The
     * default if you do not include this switch parameter is that the space character
     * is not included.</p>
     */
    inline void SetIncludeSpace(bool value) { m_includeSpaceHasBeenSet = true; m_includeSpace = value; }

    /**
     * <p>Specifies that the generated password can include the space character. The
     * default if you do not include this switch parameter is that the space character
     * is not included.</p>
     */
    inline GetRandomPasswordRequest& WithIncludeSpace(bool value) { SetIncludeSpace(value); return *this;}


    /**
     * <p>A boolean value that specifies whether the generated password must include at
     * least one of every allowed character type. The default value is
     * <code>True</code> and the operation requires at least one of every character
     * type.</p>
     */
    inline bool GetRequireEachIncludedType() const{ return m_requireEachIncludedType; }

    /**
     * <p>A boolean value that specifies whether the generated password must include at
     * least one of every allowed character type. The default value is
     * <code>True</code> and the operation requires at least one of every character
     * type.</p>
     */
    inline bool RequireEachIncludedTypeHasBeenSet() const { return m_requireEachIncludedTypeHasBeenSet; }

    /**
     * <p>A boolean value that specifies whether the generated password must include at
     * least one of every allowed character type. The default value is
     * <code>True</code> and the operation requires at least one of every character
     * type.</p>
     */
    inline void SetRequireEachIncludedType(bool value) { m_requireEachIncludedTypeHasBeenSet = true; m_requireEachIncludedType = value; }

    /**
     * <p>A boolean value that specifies whether the generated password must include at
     * least one of every allowed character type. The default value is
     * <code>True</code> and the operation requires at least one of every character
     * type.</p>
     */
    inline GetRandomPasswordRequest& WithRequireEachIncludedType(bool value) { SetRequireEachIncludedType(value); return *this;}

  private:

    long long m_passwordLength;
    bool m_passwordLengthHasBeenSet;

    Aws::String m_excludeCharacters;
    bool m_excludeCharactersHasBeenSet;

    bool m_excludeNumbers;
    bool m_excludeNumbersHasBeenSet;

    bool m_excludePunctuation;
    bool m_excludePunctuationHasBeenSet;

    bool m_excludeUppercase;
    bool m_excludeUppercaseHasBeenSet;

    bool m_excludeLowercase;
    bool m_excludeLowercaseHasBeenSet;

    bool m_includeSpace;
    bool m_includeSpaceHasBeenSet;

    bool m_requireEachIncludedType;
    bool m_requireEachIncludedTypeHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
