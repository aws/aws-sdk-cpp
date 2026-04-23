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
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Returns the code for the dominant language in the input text and the level of
   * confidence that Amazon Comprehend has in the accuracy of the
   * detection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DominantLanguage">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API DominantLanguage
  {
  public:
    DominantLanguage();
    DominantLanguage(Aws::Utils::Json::JsonView jsonValue);
    DominantLanguage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The RFC 5646 language code for the dominant language. For more information
     * about RFC 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for
     * Identifying Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline const Aws::String& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The RFC 5646 language code for the dominant language. For more information
     * about RFC 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for
     * Identifying Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The RFC 5646 language code for the dominant language. For more information
     * about RFC 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for
     * Identifying Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline void SetLanguageCode(const Aws::String& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The RFC 5646 language code for the dominant language. For more information
     * about RFC 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for
     * Identifying Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline void SetLanguageCode(Aws::String&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The RFC 5646 language code for the dominant language. For more information
     * about RFC 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for
     * Identifying Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline void SetLanguageCode(const char* value) { m_languageCodeHasBeenSet = true; m_languageCode.assign(value); }

    /**
     * <p>The RFC 5646 language code for the dominant language. For more information
     * about RFC 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for
     * Identifying Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline DominantLanguage& WithLanguageCode(const Aws::String& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The RFC 5646 language code for the dominant language. For more information
     * about RFC 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for
     * Identifying Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline DominantLanguage& WithLanguageCode(Aws::String&& value) { SetLanguageCode(std::move(value)); return *this;}

    /**
     * <p>The RFC 5646 language code for the dominant language. For more information
     * about RFC 5646, see <a href="https://tools.ietf.org/html/rfc5646">Tags for
     * Identifying Languages</a> on the <i>IETF Tools</i> web site.</p>
     */
    inline DominantLanguage& WithLanguageCode(const char* value) { SetLanguageCode(value); return *this;}


    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of the
     * detection.</p>
     */
    inline DominantLanguage& WithScore(double value) { SetScore(value); return *this;}

  private:

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet;

    double m_score;
    bool m_scoreHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
