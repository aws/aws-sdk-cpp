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
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p> A complex type that contains <code>Tag</code> key and <code>Tag</code>
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/Tag">AWS API
   * Reference</a></p>
   */
  class AWS_CLOUDFRONT_API Tag
  {
  public:
    Tag();
    Tag(const Aws::Utils::Xml::XmlNode& xmlNode);
    Tag& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p> A string that contains <code>Tag</code> key.</p> <p>The string length should
     * be between 1 and 128 characters. Valid characters include <code>a-z</code>,
     * <code>A-Z</code>, <code>0-9</code>, space, and the special characters <code>_ -
     * . : / = + @</code>.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p> A string that contains <code>Tag</code> key.</p> <p>The string length should
     * be between 1 and 128 characters. Valid characters include <code>a-z</code>,
     * <code>A-Z</code>, <code>0-9</code>, space, and the special characters <code>_ -
     * . : / = + @</code>.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p> A string that contains <code>Tag</code> key.</p> <p>The string length should
     * be between 1 and 128 characters. Valid characters include <code>a-z</code>,
     * <code>A-Z</code>, <code>0-9</code>, space, and the special characters <code>_ -
     * . : / = + @</code>.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p> A string that contains <code>Tag</code> key.</p> <p>The string length should
     * be between 1 and 128 characters. Valid characters include <code>a-z</code>,
     * <code>A-Z</code>, <code>0-9</code>, space, and the special characters <code>_ -
     * . : / = + @</code>.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p> A string that contains <code>Tag</code> key.</p> <p>The string length should
     * be between 1 and 128 characters. Valid characters include <code>a-z</code>,
     * <code>A-Z</code>, <code>0-9</code>, space, and the special characters <code>_ -
     * . : / = + @</code>.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p> A string that contains <code>Tag</code> key.</p> <p>The string length should
     * be between 1 and 128 characters. Valid characters include <code>a-z</code>,
     * <code>A-Z</code>, <code>0-9</code>, space, and the special characters <code>_ -
     * . : / = + @</code>.</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p> A string that contains <code>Tag</code> key.</p> <p>The string length should
     * be between 1 and 128 characters. Valid characters include <code>a-z</code>,
     * <code>A-Z</code>, <code>0-9</code>, space, and the special characters <code>_ -
     * . : / = + @</code>.</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p> A string that contains <code>Tag</code> key.</p> <p>The string length should
     * be between 1 and 128 characters. Valid characters include <code>a-z</code>,
     * <code>A-Z</code>, <code>0-9</code>, space, and the special characters <code>_ -
     * . : / = + @</code>.</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p> A string that contains an optional <code>Tag</code> value.</p> <p>The string
     * length should be between 0 and 256 characters. Valid characters include
     * <code>a-z</code>, <code>A-Z</code>, <code>0-9</code>, space, and the special
     * characters <code>_ - . : / = + @</code>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> A string that contains an optional <code>Tag</code> value.</p> <p>The string
     * length should be between 0 and 256 characters. Valid characters include
     * <code>a-z</code>, <code>A-Z</code>, <code>0-9</code>, space, and the special
     * characters <code>_ - . : / = + @</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> A string that contains an optional <code>Tag</code> value.</p> <p>The string
     * length should be between 0 and 256 characters. Valid characters include
     * <code>a-z</code>, <code>A-Z</code>, <code>0-9</code>, space, and the special
     * characters <code>_ - . : / = + @</code>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> A string that contains an optional <code>Tag</code> value.</p> <p>The string
     * length should be between 0 and 256 characters. Valid characters include
     * <code>a-z</code>, <code>A-Z</code>, <code>0-9</code>, space, and the special
     * characters <code>_ - . : / = + @</code>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> A string that contains an optional <code>Tag</code> value.</p> <p>The string
     * length should be between 0 and 256 characters. Valid characters include
     * <code>a-z</code>, <code>A-Z</code>, <code>0-9</code>, space, and the special
     * characters <code>_ - . : / = + @</code>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> A string that contains an optional <code>Tag</code> value.</p> <p>The string
     * length should be between 0 and 256 characters. Valid characters include
     * <code>a-z</code>, <code>A-Z</code>, <code>0-9</code>, space, and the special
     * characters <code>_ - . : / = + @</code>.</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> A string that contains an optional <code>Tag</code> value.</p> <p>The string
     * length should be between 0 and 256 characters. Valid characters include
     * <code>a-z</code>, <code>A-Z</code>, <code>0-9</code>, space, and the special
     * characters <code>_ - . : / = + @</code>.</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> A string that contains an optional <code>Tag</code> value.</p> <p>The string
     * length should be between 0 and 256 characters. Valid characters include
     * <code>a-z</code>, <code>A-Z</code>, <code>0-9</code>, space, and the special
     * characters <code>_ - . : / = + @</code>.</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
