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
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Textual email data, plus an optional character set specification.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SimpleEmailPart">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API SimpleEmailPart
  {
  public:
    SimpleEmailPart();
    SimpleEmailPart(Aws::Utils::Json::JsonView jsonValue);
    SimpleEmailPart& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The character set of the content.
     */
    inline const Aws::String& GetCharset() const{ return m_charset; }

    /**
     * The character set of the content.
     */
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }

    /**
     * The character set of the content.
     */
    inline void SetCharset(const Aws::String& value) { m_charsetHasBeenSet = true; m_charset = value; }

    /**
     * The character set of the content.
     */
    inline void SetCharset(Aws::String&& value) { m_charsetHasBeenSet = true; m_charset = std::move(value); }

    /**
     * The character set of the content.
     */
    inline void SetCharset(const char* value) { m_charsetHasBeenSet = true; m_charset.assign(value); }

    /**
     * The character set of the content.
     */
    inline SimpleEmailPart& WithCharset(const Aws::String& value) { SetCharset(value); return *this;}

    /**
     * The character set of the content.
     */
    inline SimpleEmailPart& WithCharset(Aws::String&& value) { SetCharset(std::move(value)); return *this;}

    /**
     * The character set of the content.
     */
    inline SimpleEmailPart& WithCharset(const char* value) { SetCharset(value); return *this;}


    /**
     * The textual data of the content.
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * The textual data of the content.
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * The textual data of the content.
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * The textual data of the content.
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * The textual data of the content.
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * The textual data of the content.
     */
    inline SimpleEmailPart& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * The textual data of the content.
     */
    inline SimpleEmailPart& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * The textual data of the content.
     */
    inline SimpleEmailPart& WithData(const char* value) { SetData(value); return *this;}

  private:

    Aws::String m_charset;
    bool m_charsetHasBeenSet;

    Aws::String m_data;
    bool m_dataHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
