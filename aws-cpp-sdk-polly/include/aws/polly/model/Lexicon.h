﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Polly
{
namespace Model
{

  /**
   * <p>Provides lexicon name and lexicon content in string format. For more
   * information, see <a
   * href="https://www.w3.org/TR/pronunciation-lexicon/">Pronunciation Lexicon
   * Specification (PLS) Version 1.0</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/Lexicon">AWS API
   * Reference</a></p>
   */
  class AWS_POLLY_API Lexicon
  {
  public:
    Lexicon();
    Lexicon(const Aws::Utils::Json::JsonValue& jsonValue);
    Lexicon& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline Lexicon& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline Lexicon& WithContent(Aws::String&& value) { SetContent(value); return *this;}

    /**
     * <p>Lexicon content in string format. The content of a lexicon must be in PLS
     * format.</p>
     */
    inline Lexicon& WithContent(const char* value) { SetContent(value); return *this;}

    /**
     * <p>Name of the lexicon.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the lexicon.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the lexicon.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the lexicon.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the lexicon.</p>
     */
    inline Lexicon& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the lexicon.</p>
     */
    inline Lexicon& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Name of the lexicon.</p>
     */
    inline Lexicon& WithName(const char* value) { SetName(value); return *this;}

  private:
    Aws::String m_content;
    bool m_contentHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
