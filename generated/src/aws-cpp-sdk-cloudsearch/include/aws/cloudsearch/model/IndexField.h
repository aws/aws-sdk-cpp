/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class IndexField
  {
  public:
    AWS_CLOUDSEARCH_API IndexField() = default;
    AWS_CLOUDSEARCH_API IndexField(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API IndexField& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
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
    inline const Aws::String& GetIndexFieldName() const { return m_indexFieldName; }
    inline bool IndexFieldNameHasBeenSet() const { return m_indexFieldNameHasBeenSet; }
    template<typename IndexFieldNameT = Aws::String>
    void SetIndexFieldName(IndexFieldNameT&& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = std::forward<IndexFieldNameT>(value); }
    template<typename IndexFieldNameT = Aws::String>
    IndexField& WithIndexFieldName(IndexFieldNameT&& value) { SetIndexFieldName(std::forward<IndexFieldNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline IndexFieldType GetIndexFieldType() const { return m_indexFieldType; }
    inline bool IndexFieldTypeHasBeenSet() const { return m_indexFieldTypeHasBeenSet; }
    inline void SetIndexFieldType(IndexFieldType value) { m_indexFieldTypeHasBeenSet = true; m_indexFieldType = value; }
    inline IndexField& WithIndexFieldType(IndexFieldType value) { SetIndexFieldType(value); return *this;}
    ///@}

    ///@{
    
    inline const IntOptions& GetIntOptions() const { return m_intOptions; }
    inline bool IntOptionsHasBeenSet() const { return m_intOptionsHasBeenSet; }
    template<typename IntOptionsT = IntOptions>
    void SetIntOptions(IntOptionsT&& value) { m_intOptionsHasBeenSet = true; m_intOptions = std::forward<IntOptionsT>(value); }
    template<typename IntOptionsT = IntOptions>
    IndexField& WithIntOptions(IntOptionsT&& value) { SetIntOptions(std::forward<IntOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DoubleOptions& GetDoubleOptions() const { return m_doubleOptions; }
    inline bool DoubleOptionsHasBeenSet() const { return m_doubleOptionsHasBeenSet; }
    template<typename DoubleOptionsT = DoubleOptions>
    void SetDoubleOptions(DoubleOptionsT&& value) { m_doubleOptionsHasBeenSet = true; m_doubleOptions = std::forward<DoubleOptionsT>(value); }
    template<typename DoubleOptionsT = DoubleOptions>
    IndexField& WithDoubleOptions(DoubleOptionsT&& value) { SetDoubleOptions(std::forward<DoubleOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LiteralOptions& GetLiteralOptions() const { return m_literalOptions; }
    inline bool LiteralOptionsHasBeenSet() const { return m_literalOptionsHasBeenSet; }
    template<typename LiteralOptionsT = LiteralOptions>
    void SetLiteralOptions(LiteralOptionsT&& value) { m_literalOptionsHasBeenSet = true; m_literalOptions = std::forward<LiteralOptionsT>(value); }
    template<typename LiteralOptionsT = LiteralOptions>
    IndexField& WithLiteralOptions(LiteralOptionsT&& value) { SetLiteralOptions(std::forward<LiteralOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TextOptions& GetTextOptions() const { return m_textOptions; }
    inline bool TextOptionsHasBeenSet() const { return m_textOptionsHasBeenSet; }
    template<typename TextOptionsT = TextOptions>
    void SetTextOptions(TextOptionsT&& value) { m_textOptionsHasBeenSet = true; m_textOptions = std::forward<TextOptionsT>(value); }
    template<typename TextOptionsT = TextOptions>
    IndexField& WithTextOptions(TextOptionsT&& value) { SetTextOptions(std::forward<TextOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DateOptions& GetDateOptions() const { return m_dateOptions; }
    inline bool DateOptionsHasBeenSet() const { return m_dateOptionsHasBeenSet; }
    template<typename DateOptionsT = DateOptions>
    void SetDateOptions(DateOptionsT&& value) { m_dateOptionsHasBeenSet = true; m_dateOptions = std::forward<DateOptionsT>(value); }
    template<typename DateOptionsT = DateOptions>
    IndexField& WithDateOptions(DateOptionsT&& value) { SetDateOptions(std::forward<DateOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LatLonOptions& GetLatLonOptions() const { return m_latLonOptions; }
    inline bool LatLonOptionsHasBeenSet() const { return m_latLonOptionsHasBeenSet; }
    template<typename LatLonOptionsT = LatLonOptions>
    void SetLatLonOptions(LatLonOptionsT&& value) { m_latLonOptionsHasBeenSet = true; m_latLonOptions = std::forward<LatLonOptionsT>(value); }
    template<typename LatLonOptionsT = LatLonOptions>
    IndexField& WithLatLonOptions(LatLonOptionsT&& value) { SetLatLonOptions(std::forward<LatLonOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IntArrayOptions& GetIntArrayOptions() const { return m_intArrayOptions; }
    inline bool IntArrayOptionsHasBeenSet() const { return m_intArrayOptionsHasBeenSet; }
    template<typename IntArrayOptionsT = IntArrayOptions>
    void SetIntArrayOptions(IntArrayOptionsT&& value) { m_intArrayOptionsHasBeenSet = true; m_intArrayOptions = std::forward<IntArrayOptionsT>(value); }
    template<typename IntArrayOptionsT = IntArrayOptions>
    IndexField& WithIntArrayOptions(IntArrayOptionsT&& value) { SetIntArrayOptions(std::forward<IntArrayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DoubleArrayOptions& GetDoubleArrayOptions() const { return m_doubleArrayOptions; }
    inline bool DoubleArrayOptionsHasBeenSet() const { return m_doubleArrayOptionsHasBeenSet; }
    template<typename DoubleArrayOptionsT = DoubleArrayOptions>
    void SetDoubleArrayOptions(DoubleArrayOptionsT&& value) { m_doubleArrayOptionsHasBeenSet = true; m_doubleArrayOptions = std::forward<DoubleArrayOptionsT>(value); }
    template<typename DoubleArrayOptionsT = DoubleArrayOptions>
    IndexField& WithDoubleArrayOptions(DoubleArrayOptionsT&& value) { SetDoubleArrayOptions(std::forward<DoubleArrayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LiteralArrayOptions& GetLiteralArrayOptions() const { return m_literalArrayOptions; }
    inline bool LiteralArrayOptionsHasBeenSet() const { return m_literalArrayOptionsHasBeenSet; }
    template<typename LiteralArrayOptionsT = LiteralArrayOptions>
    void SetLiteralArrayOptions(LiteralArrayOptionsT&& value) { m_literalArrayOptionsHasBeenSet = true; m_literalArrayOptions = std::forward<LiteralArrayOptionsT>(value); }
    template<typename LiteralArrayOptionsT = LiteralArrayOptions>
    IndexField& WithLiteralArrayOptions(LiteralArrayOptionsT&& value) { SetLiteralArrayOptions(std::forward<LiteralArrayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TextArrayOptions& GetTextArrayOptions() const { return m_textArrayOptions; }
    inline bool TextArrayOptionsHasBeenSet() const { return m_textArrayOptionsHasBeenSet; }
    template<typename TextArrayOptionsT = TextArrayOptions>
    void SetTextArrayOptions(TextArrayOptionsT&& value) { m_textArrayOptionsHasBeenSet = true; m_textArrayOptions = std::forward<TextArrayOptionsT>(value); }
    template<typename TextArrayOptionsT = TextArrayOptions>
    IndexField& WithTextArrayOptions(TextArrayOptionsT&& value) { SetTextArrayOptions(std::forward<TextArrayOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DateArrayOptions& GetDateArrayOptions() const { return m_dateArrayOptions; }
    inline bool DateArrayOptionsHasBeenSet() const { return m_dateArrayOptionsHasBeenSet; }
    template<typename DateArrayOptionsT = DateArrayOptions>
    void SetDateArrayOptions(DateArrayOptionsT&& value) { m_dateArrayOptionsHasBeenSet = true; m_dateArrayOptions = std::forward<DateArrayOptionsT>(value); }
    template<typename DateArrayOptionsT = DateArrayOptions>
    IndexField& WithDateArrayOptions(DateArrayOptionsT&& value) { SetDateArrayOptions(std::forward<DateArrayOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_indexFieldName;
    bool m_indexFieldNameHasBeenSet = false;

    IndexFieldType m_indexFieldType{IndexFieldType::NOT_SET};
    bool m_indexFieldTypeHasBeenSet = false;

    IntOptions m_intOptions;
    bool m_intOptionsHasBeenSet = false;

    DoubleOptions m_doubleOptions;
    bool m_doubleOptionsHasBeenSet = false;

    LiteralOptions m_literalOptions;
    bool m_literalOptionsHasBeenSet = false;

    TextOptions m_textOptions;
    bool m_textOptionsHasBeenSet = false;

    DateOptions m_dateOptions;
    bool m_dateOptionsHasBeenSet = false;

    LatLonOptions m_latLonOptions;
    bool m_latLonOptionsHasBeenSet = false;

    IntArrayOptions m_intArrayOptions;
    bool m_intArrayOptionsHasBeenSet = false;

    DoubleArrayOptions m_doubleArrayOptions;
    bool m_doubleArrayOptionsHasBeenSet = false;

    LiteralArrayOptions m_literalArrayOptions;
    bool m_literalArrayOptionsHasBeenSet = false;

    TextArrayOptions m_textArrayOptions;
    bool m_textArrayOptionsHasBeenSet = false;

    DateArrayOptions m_dateArrayOptions;
    bool m_dateArrayOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
