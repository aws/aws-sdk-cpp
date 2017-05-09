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

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/polly/PollyErrors.h>

using namespace Aws::Client;
using namespace Aws::Polly;
using namespace Aws::Utils;

namespace Aws
{
namespace Polly
{
namespace PollyErrorMapper
{

static const int MAX_LEXEME_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("MaxLexemeLengthExceededException");
static const int SERVICE_FAILURE_HASH = HashingUtils::HashString("ServiceFailureException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int LEXICON_SIZE_EXCEEDED_HASH = HashingUtils::HashString("LexiconSizeExceededException");
static const int INVALID_LEXICON_HASH = HashingUtils::HashString("InvalidLexiconException");
static const int UNSUPPORTED_PLS_ALPHABET_HASH = HashingUtils::HashString("UnsupportedPlsAlphabetException");
static const int TEXT_LENGTH_EXCEEDED_HASH = HashingUtils::HashString("TextLengthExceededException");
static const int LEXICON_NOT_FOUND_HASH = HashingUtils::HashString("LexiconNotFoundException");
static const int UNSUPPORTED_PLS_LANGUAGE_HASH = HashingUtils::HashString("UnsupportedPlsLanguageException");
static const int INVALID_SAMPLE_RATE_HASH = HashingUtils::HashString("InvalidSampleRateException");
static const int MAX_LEXICONS_NUMBER_EXCEEDED_HASH = HashingUtils::HashString("MaxLexiconsNumberExceededException");
static const int SSML_MARKS_NOT_SUPPORTED_FOR_TEXT_TYPE_HASH = HashingUtils::HashString("SsmlMarksNotSupportedForTextTypeException");
static const int INVALID_SSML_HASH = HashingUtils::HashString("InvalidSsmlException");
static const int MARKS_NOT_SUPPORTED_FOR_FORMAT_HASH = HashingUtils::HashString("MarksNotSupportedForFormatException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MAX_LEXEME_LENGTH_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::MAX_LEXEME_LENGTH_EXCEEDED), false);
  }
  else if (hashCode == SERVICE_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::SERVICE_FAILURE), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == LEXICON_SIZE_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::LEXICON_SIZE_EXCEEDED), false);
  }
  else if (hashCode == INVALID_LEXICON_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_LEXICON), false);
  }
  else if (hashCode == UNSUPPORTED_PLS_ALPHABET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::UNSUPPORTED_PLS_ALPHABET), false);
  }
  else if (hashCode == TEXT_LENGTH_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::TEXT_LENGTH_EXCEEDED), false);
  }
  else if (hashCode == LEXICON_NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::LEXICON_NOT_FOUND), false);
  }
  else if (hashCode == UNSUPPORTED_PLS_LANGUAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::UNSUPPORTED_PLS_LANGUAGE), false);
  }
  else if (hashCode == INVALID_SAMPLE_RATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_SAMPLE_RATE), false);
  }
  else if (hashCode == MAX_LEXICONS_NUMBER_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::MAX_LEXICONS_NUMBER_EXCEEDED), false);
  }
  else if (hashCode == SSML_MARKS_NOT_SUPPORTED_FOR_TEXT_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::SSML_MARKS_NOT_SUPPORTED_FOR_TEXT_TYPE), false);
  }
  else if (hashCode == INVALID_SSML_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::INVALID_SSML), false);
  }
  else if (hashCode == MARKS_NOT_SUPPORTED_FOR_FORMAT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(PollyErrors::MARKS_NOT_SUPPORTED_FOR_FORMAT), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace PollyErrorMapper
} // namespace Polly
} // namespace Aws
