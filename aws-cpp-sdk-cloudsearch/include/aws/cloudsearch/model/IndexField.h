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
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudsearch/model/IndexFieldType.h>
#include <aws/cloudsearch/model/IntOptions.h>
#include <aws/cloudsearch/model/DoubleOptions.h>
#include <aws/cloudsearch/model/LiteralOptions.h>
#include <aws/cloudsearch/model/TextOptions.h>
#include <aws/cloudsearch/model/DateOptions.h>
#include <aws/cloudsearch/model/LatLonOptions.h>
#include <aws/cloudsearch/model/IntArrayOptions.h>
#include <aws/cloudsearch/model/DoubleArrayOptions.h>
#include <aws/cloudsearch/model/LiteralArrayOptions.h>
#include <aws/cloudsearch/model/TextArrayOptions.h>
#include <aws/cloudsearch/model/DateArrayOptions.h>
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
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Configuration information for a field in the index, including its name, type,
   * and options. The supported options depend on the
   * <code><a>IndexFieldType</a></code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/IndexField">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API IndexField
  {
  public:
    IndexField();
    IndexField(const Aws::Utils::Xml::XmlNode& xmlNode);
    IndexField& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A string that represents the name of an index field. CloudSearch supports
     * regular index fields as well as dynamic fields. A dynamic field's name defines a
     * pattern that begins or ends with a wildcard. Any document fields that don't map
     * to a regular index field but do match a dynamic field's pattern are configured
     * with the dynamic field's indexing options. </p> <p>Regular field names begin
     * with a letter and can contain the following characters: a-z (lowercase), 0-9,
     * and _ (underscore). Dynamic field names must begin or end with a wildcard (*).
     * The wildcard can also be the only character in a dynamic field name. Multiple
     * wildcards, and wildcards embedded within a string are not supported. </p> <p>The
     * name <code>score</code> is reserved and cannot be used as a field name. To
     * reference a document's ID, you can use the name <code>_id</code>. </p>
     */
    inline const Aws::String& GetIndexFieldName() const{ return m_indexFieldName; }

    /**
     * <p>A string that represents the name of an index field. CloudSearch supports
     * regular index fields as well as dynamic fields. A dynamic field's name defines a
     * pattern that begins or ends with a wildcard. Any document fields that don't map
     * to a regular index field but do match a dynamic field's pattern are configured
     * with the dynamic field's indexing options. </p> <p>Regular field names begin
     * with a letter and can contain the following characters: a-z (lowercase), 0-9,
     * and _ (underscore). Dynamic field names must begin or end with a wildcard (*).
     * The wildcard can also be the only character in a dynamic field name. Multiple
     * wildcards, and wildcards embedded within a string are not supported. </p> <p>The
     * name <code>score</code> is reserved and cannot be used as a field name. To
     * reference a document's ID, you can use the name <code>_id</code>. </p>
     */
    inline bool IndexFieldNameHasBeenSet() const { return m_indexFieldNameHasBeenSet; }

    /**
     * <p>A string that represents the name of an index field. CloudSearch supports
     * regular index fields as well as dynamic fields. A dynamic field's name defines a
     * pattern that begins or ends with a wildcard. Any document fields that don't map
     * to a regular index field but do match a dynamic field's pattern are configured
     * with the dynamic field's indexing options. </p> <p>Regular field names begin
     * with a letter and can contain the following characters: a-z (lowercase), 0-9,
     * and _ (underscore). Dynamic field names must begin or end with a wildcard (*).
     * The wildcard can also be the only character in a dynamic field name. Multiple
     * wildcards, and wildcards embedded within a string are not supported. </p> <p>The
     * name <code>score</code> is reserved and cannot be used as a field name. To
     * reference a document's ID, you can use the name <code>_id</code>. </p>
     */
    inline void SetIndexFieldName(const Aws::String& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = value; }

    /**
     * <p>A string that represents the name of an index field. CloudSearch supports
     * regular index fields as well as dynamic fields. A dynamic field's name defines a
     * pattern that begins or ends with a wildcard. Any document fields that don't map
     * to a regular index field but do match a dynamic field's pattern are configured
     * with the dynamic field's indexing options. </p> <p>Regular field names begin
     * with a letter and can contain the following characters: a-z (lowercase), 0-9,
     * and _ (underscore). Dynamic field names must begin or end with a wildcard (*).
     * The wildcard can also be the only character in a dynamic field name. Multiple
     * wildcards, and wildcards embedded within a string are not supported. </p> <p>The
     * name <code>score</code> is reserved and cannot be used as a field name. To
     * reference a document's ID, you can use the name <code>_id</code>. </p>
     */
    inline void SetIndexFieldName(Aws::String&& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = std::move(value); }

    /**
     * <p>A string that represents the name of an index field. CloudSearch supports
     * regular index fields as well as dynamic fields. A dynamic field's name defines a
     * pattern that begins or ends with a wildcard. Any document fields that don't map
     * to a regular index field but do match a dynamic field's pattern are configured
     * with the dynamic field's indexing options. </p> <p>Regular field names begin
     * with a letter and can contain the following characters: a-z (lowercase), 0-9,
     * and _ (underscore). Dynamic field names must begin or end with a wildcard (*).
     * The wildcard can also be the only character in a dynamic field name. Multiple
     * wildcards, and wildcards embedded within a string are not supported. </p> <p>The
     * name <code>score</code> is reserved and cannot be used as a field name. To
     * reference a document's ID, you can use the name <code>_id</code>. </p>
     */
    inline void SetIndexFieldName(const char* value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName.assign(value); }

    /**
     * <p>A string that represents the name of an index field. CloudSearch supports
     * regular index fields as well as dynamic fields. A dynamic field's name defines a
     * pattern that begins or ends with a wildcard. Any document fields that don't map
     * to a regular index field but do match a dynamic field's pattern are configured
     * with the dynamic field's indexing options. </p> <p>Regular field names begin
     * with a letter and can contain the following characters: a-z (lowercase), 0-9,
     * and _ (underscore). Dynamic field names must begin or end with a wildcard (*).
     * The wildcard can also be the only character in a dynamic field name. Multiple
     * wildcards, and wildcards embedded within a string are not supported. </p> <p>The
     * name <code>score</code> is reserved and cannot be used as a field name. To
     * reference a document's ID, you can use the name <code>_id</code>. </p>
     */
    inline IndexField& WithIndexFieldName(const Aws::String& value) { SetIndexFieldName(value); return *this;}

    /**
     * <p>A string that represents the name of an index field. CloudSearch supports
     * regular index fields as well as dynamic fields. A dynamic field's name defines a
     * pattern that begins or ends with a wildcard. Any document fields that don't map
     * to a regular index field but do match a dynamic field's pattern are configured
     * with the dynamic field's indexing options. </p> <p>Regular field names begin
     * with a letter and can contain the following characters: a-z (lowercase), 0-9,
     * and _ (underscore). Dynamic field names must begin or end with a wildcard (*).
     * The wildcard can also be the only character in a dynamic field name. Multiple
     * wildcards, and wildcards embedded within a string are not supported. </p> <p>The
     * name <code>score</code> is reserved and cannot be used as a field name. To
     * reference a document's ID, you can use the name <code>_id</code>. </p>
     */
    inline IndexField& WithIndexFieldName(Aws::String&& value) { SetIndexFieldName(std::move(value)); return *this;}

    /**
     * <p>A string that represents the name of an index field. CloudSearch supports
     * regular index fields as well as dynamic fields. A dynamic field's name defines a
     * pattern that begins or ends with a wildcard. Any document fields that don't map
     * to a regular index field but do match a dynamic field's pattern are configured
     * with the dynamic field's indexing options. </p> <p>Regular field names begin
     * with a letter and can contain the following characters: a-z (lowercase), 0-9,
     * and _ (underscore). Dynamic field names must begin or end with a wildcard (*).
     * The wildcard can also be the only character in a dynamic field name. Multiple
     * wildcards, and wildcards embedded within a string are not supported. </p> <p>The
     * name <code>score</code> is reserved and cannot be used as a field name. To
     * reference a document's ID, you can use the name <code>_id</code>. </p>
     */
    inline IndexField& WithIndexFieldName(const char* value) { SetIndexFieldName(value); return *this;}


    
    inline const IndexFieldType& GetIndexFieldType() const{ return m_indexFieldType; }

    
    inline bool IndexFieldTypeHasBeenSet() const { return m_indexFieldTypeHasBeenSet; }

    
    inline void SetIndexFieldType(const IndexFieldType& value) { m_indexFieldTypeHasBeenSet = true; m_indexFieldType = value; }

    
    inline void SetIndexFieldType(IndexFieldType&& value) { m_indexFieldTypeHasBeenSet = true; m_indexFieldType = std::move(value); }

    
    inline IndexField& WithIndexFieldType(const IndexFieldType& value) { SetIndexFieldType(value); return *this;}

    
    inline IndexField& WithIndexFieldType(IndexFieldType&& value) { SetIndexFieldType(std::move(value)); return *this;}


    
    inline const IntOptions& GetIntOptions() const{ return m_intOptions; }

    
    inline bool IntOptionsHasBeenSet() const { return m_intOptionsHasBeenSet; }

    
    inline void SetIntOptions(const IntOptions& value) { m_intOptionsHasBeenSet = true; m_intOptions = value; }

    
    inline void SetIntOptions(IntOptions&& value) { m_intOptionsHasBeenSet = true; m_intOptions = std::move(value); }

    
    inline IndexField& WithIntOptions(const IntOptions& value) { SetIntOptions(value); return *this;}

    
    inline IndexField& WithIntOptions(IntOptions&& value) { SetIntOptions(std::move(value)); return *this;}


    
    inline const DoubleOptions& GetDoubleOptions() const{ return m_doubleOptions; }

    
    inline bool DoubleOptionsHasBeenSet() const { return m_doubleOptionsHasBeenSet; }

    
    inline void SetDoubleOptions(const DoubleOptions& value) { m_doubleOptionsHasBeenSet = true; m_doubleOptions = value; }

    
    inline void SetDoubleOptions(DoubleOptions&& value) { m_doubleOptionsHasBeenSet = true; m_doubleOptions = std::move(value); }

    
    inline IndexField& WithDoubleOptions(const DoubleOptions& value) { SetDoubleOptions(value); return *this;}

    
    inline IndexField& WithDoubleOptions(DoubleOptions&& value) { SetDoubleOptions(std::move(value)); return *this;}


    
    inline const LiteralOptions& GetLiteralOptions() const{ return m_literalOptions; }

    
    inline bool LiteralOptionsHasBeenSet() const { return m_literalOptionsHasBeenSet; }

    
    inline void SetLiteralOptions(const LiteralOptions& value) { m_literalOptionsHasBeenSet = true; m_literalOptions = value; }

    
    inline void SetLiteralOptions(LiteralOptions&& value) { m_literalOptionsHasBeenSet = true; m_literalOptions = std::move(value); }

    
    inline IndexField& WithLiteralOptions(const LiteralOptions& value) { SetLiteralOptions(value); return *this;}

    
    inline IndexField& WithLiteralOptions(LiteralOptions&& value) { SetLiteralOptions(std::move(value)); return *this;}


    
    inline const TextOptions& GetTextOptions() const{ return m_textOptions; }

    
    inline bool TextOptionsHasBeenSet() const { return m_textOptionsHasBeenSet; }

    
    inline void SetTextOptions(const TextOptions& value) { m_textOptionsHasBeenSet = true; m_textOptions = value; }

    
    inline void SetTextOptions(TextOptions&& value) { m_textOptionsHasBeenSet = true; m_textOptions = std::move(value); }

    
    inline IndexField& WithTextOptions(const TextOptions& value) { SetTextOptions(value); return *this;}

    
    inline IndexField& WithTextOptions(TextOptions&& value) { SetTextOptions(std::move(value)); return *this;}


    
    inline const DateOptions& GetDateOptions() const{ return m_dateOptions; }

    
    inline bool DateOptionsHasBeenSet() const { return m_dateOptionsHasBeenSet; }

    
    inline void SetDateOptions(const DateOptions& value) { m_dateOptionsHasBeenSet = true; m_dateOptions = value; }

    
    inline void SetDateOptions(DateOptions&& value) { m_dateOptionsHasBeenSet = true; m_dateOptions = std::move(value); }

    
    inline IndexField& WithDateOptions(const DateOptions& value) { SetDateOptions(value); return *this;}

    
    inline IndexField& WithDateOptions(DateOptions&& value) { SetDateOptions(std::move(value)); return *this;}


    
    inline const LatLonOptions& GetLatLonOptions() const{ return m_latLonOptions; }

    
    inline bool LatLonOptionsHasBeenSet() const { return m_latLonOptionsHasBeenSet; }

    
    inline void SetLatLonOptions(const LatLonOptions& value) { m_latLonOptionsHasBeenSet = true; m_latLonOptions = value; }

    
    inline void SetLatLonOptions(LatLonOptions&& value) { m_latLonOptionsHasBeenSet = true; m_latLonOptions = std::move(value); }

    
    inline IndexField& WithLatLonOptions(const LatLonOptions& value) { SetLatLonOptions(value); return *this;}

    
    inline IndexField& WithLatLonOptions(LatLonOptions&& value) { SetLatLonOptions(std::move(value)); return *this;}


    
    inline const IntArrayOptions& GetIntArrayOptions() const{ return m_intArrayOptions; }

    
    inline bool IntArrayOptionsHasBeenSet() const { return m_intArrayOptionsHasBeenSet; }

    
    inline void SetIntArrayOptions(const IntArrayOptions& value) { m_intArrayOptionsHasBeenSet = true; m_intArrayOptions = value; }

    
    inline void SetIntArrayOptions(IntArrayOptions&& value) { m_intArrayOptionsHasBeenSet = true; m_intArrayOptions = std::move(value); }

    
    inline IndexField& WithIntArrayOptions(const IntArrayOptions& value) { SetIntArrayOptions(value); return *this;}

    
    inline IndexField& WithIntArrayOptions(IntArrayOptions&& value) { SetIntArrayOptions(std::move(value)); return *this;}


    
    inline const DoubleArrayOptions& GetDoubleArrayOptions() const{ return m_doubleArrayOptions; }

    
    inline bool DoubleArrayOptionsHasBeenSet() const { return m_doubleArrayOptionsHasBeenSet; }

    
    inline void SetDoubleArrayOptions(const DoubleArrayOptions& value) { m_doubleArrayOptionsHasBeenSet = true; m_doubleArrayOptions = value; }

    
    inline void SetDoubleArrayOptions(DoubleArrayOptions&& value) { m_doubleArrayOptionsHasBeenSet = true; m_doubleArrayOptions = std::move(value); }

    
    inline IndexField& WithDoubleArrayOptions(const DoubleArrayOptions& value) { SetDoubleArrayOptions(value); return *this;}

    
    inline IndexField& WithDoubleArrayOptions(DoubleArrayOptions&& value) { SetDoubleArrayOptions(std::move(value)); return *this;}


    
    inline const LiteralArrayOptions& GetLiteralArrayOptions() const{ return m_literalArrayOptions; }

    
    inline bool LiteralArrayOptionsHasBeenSet() const { return m_literalArrayOptionsHasBeenSet; }

    
    inline void SetLiteralArrayOptions(const LiteralArrayOptions& value) { m_literalArrayOptionsHasBeenSet = true; m_literalArrayOptions = value; }

    
    inline void SetLiteralArrayOptions(LiteralArrayOptions&& value) { m_literalArrayOptionsHasBeenSet = true; m_literalArrayOptions = std::move(value); }

    
    inline IndexField& WithLiteralArrayOptions(const LiteralArrayOptions& value) { SetLiteralArrayOptions(value); return *this;}

    
    inline IndexField& WithLiteralArrayOptions(LiteralArrayOptions&& value) { SetLiteralArrayOptions(std::move(value)); return *this;}


    
    inline const TextArrayOptions& GetTextArrayOptions() const{ return m_textArrayOptions; }

    
    inline bool TextArrayOptionsHasBeenSet() const { return m_textArrayOptionsHasBeenSet; }

    
    inline void SetTextArrayOptions(const TextArrayOptions& value) { m_textArrayOptionsHasBeenSet = true; m_textArrayOptions = value; }

    
    inline void SetTextArrayOptions(TextArrayOptions&& value) { m_textArrayOptionsHasBeenSet = true; m_textArrayOptions = std::move(value); }

    
    inline IndexField& WithTextArrayOptions(const TextArrayOptions& value) { SetTextArrayOptions(value); return *this;}

    
    inline IndexField& WithTextArrayOptions(TextArrayOptions&& value) { SetTextArrayOptions(std::move(value)); return *this;}


    
    inline const DateArrayOptions& GetDateArrayOptions() const{ return m_dateArrayOptions; }

    
    inline bool DateArrayOptionsHasBeenSet() const { return m_dateArrayOptionsHasBeenSet; }

    
    inline void SetDateArrayOptions(const DateArrayOptions& value) { m_dateArrayOptionsHasBeenSet = true; m_dateArrayOptions = value; }

    
    inline void SetDateArrayOptions(DateArrayOptions&& value) { m_dateArrayOptionsHasBeenSet = true; m_dateArrayOptions = std::move(value); }

    
    inline IndexField& WithDateArrayOptions(const DateArrayOptions& value) { SetDateArrayOptions(value); return *this;}

    
    inline IndexField& WithDateArrayOptions(DateArrayOptions&& value) { SetDateArrayOptions(std::move(value)); return *this;}

  private:

    Aws::String m_indexFieldName;
    bool m_indexFieldNameHasBeenSet;

    IndexFieldType m_indexFieldType;
    bool m_indexFieldTypeHasBeenSet;

    IntOptions m_intOptions;
    bool m_intOptionsHasBeenSet;

    DoubleOptions m_doubleOptions;
    bool m_doubleOptionsHasBeenSet;

    LiteralOptions m_literalOptions;
    bool m_literalOptionsHasBeenSet;

    TextOptions m_textOptions;
    bool m_textOptionsHasBeenSet;

    DateOptions m_dateOptions;
    bool m_dateOptionsHasBeenSet;

    LatLonOptions m_latLonOptions;
    bool m_latLonOptionsHasBeenSet;

    IntArrayOptions m_intArrayOptions;
    bool m_intArrayOptionsHasBeenSet;

    DoubleArrayOptions m_doubleArrayOptions;
    bool m_doubleArrayOptionsHasBeenSet;

    LiteralArrayOptions m_literalArrayOptions;
    bool m_literalArrayOptionsHasBeenSet;

    TextArrayOptions m_textArrayOptions;
    bool m_textArrayOptionsHasBeenSet;

    DateArrayOptions m_dateArrayOptions;
    bool m_dateArrayOptionsHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
