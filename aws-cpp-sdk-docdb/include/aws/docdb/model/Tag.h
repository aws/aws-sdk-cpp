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
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace DocDB
{
namespace Model
{

  /**
   * <p>Metadata assigned to an Amazon DocumentDB resource consisting of a key-value
   * pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/Tag">AWS API
   * Reference</a></p>
   */
  class AWS_DOCDB_API Tag
  {
  public:
    Tag();
    Tag(const Aws::Utils::Xml::XmlNode& xmlNode);
    Tag& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The required name of the tag. The string value can be from 1 to 128 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The required name of the tag. The string value can be from 1 to 128 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The required name of the tag. The string value can be from 1 to 128 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The required name of the tag. The string value can be from 1 to 128 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The required name of the tag. The string value can be from 1 to 128 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The required name of the tag. The string value can be from 1 to 128 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The required name of the tag. The string value can be from 1 to 128 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The required name of the tag. The string value can be from 1 to 128 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The optional value of the tag. The string value can be from 1 to 256 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The optional value of the tag. The string value can be from 1 to 256 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The optional value of the tag. The string value can be from 1 to 256 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The optional value of the tag. The string value can be from 1 to 256 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The optional value of the tag. The string value can be from 1 to 256 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The optional value of the tag. The string value can be from 1 to 256 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The optional value of the tag. The string value can be from 1 to 256 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The optional value of the tag. The string value can be from 1 to 256 Unicode
     * characters in length and can't be prefixed with "aws:" or "rds:". The string can
     * contain only the set of Unicode letters, digits, white space, '_', '.', '/',
     * '=', '+', '-' (Java regex: "^([\\p{L}\\p{Z}\\p{N}_.:/=+\\-]*)$").</p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
