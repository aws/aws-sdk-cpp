/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CsvHeaderOption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/CsvSerdeOption.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a custom CSV classifier to be updated.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateCsvClassifierRequest">AWS
   * API Reference</a></p>
   */
  class UpdateCsvClassifierRequest
  {
  public:
    AWS_GLUE_API UpdateCsvClassifierRequest() = default;
    AWS_GLUE_API UpdateCsvClassifierRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API UpdateCsvClassifierRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the classifier.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateCsvClassifierRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    UpdateCsvClassifierRequest& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * It must be different from the column delimiter.</p>
     */
    inline const Aws::String& GetQuoteSymbol() const { return m_quoteSymbol; }
    inline bool QuoteSymbolHasBeenSet() const { return m_quoteSymbolHasBeenSet; }
    template<typename QuoteSymbolT = Aws::String>
    void SetQuoteSymbol(QuoteSymbolT&& value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol = std::forward<QuoteSymbolT>(value); }
    template<typename QuoteSymbolT = Aws::String>
    UpdateCsvClassifierRequest& WithQuoteSymbol(QuoteSymbolT&& value) { SetQuoteSymbol(std::forward<QuoteSymbolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline CsvHeaderOption GetContainsHeader() const { return m_containsHeader; }
    inline bool ContainsHeaderHasBeenSet() const { return m_containsHeaderHasBeenSet; }
    inline void SetContainsHeader(CsvHeaderOption value) { m_containsHeaderHasBeenSet = true; m_containsHeader = value; }
    inline UpdateCsvClassifierRequest& WithContainsHeader(CsvHeaderOption value) { SetContainsHeader(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of strings representing column names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHeader() const { return m_header; }
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
    template<typename HeaderT = Aws::Vector<Aws::String>>
    void SetHeader(HeaderT&& value) { m_headerHasBeenSet = true; m_header = std::forward<HeaderT>(value); }
    template<typename HeaderT = Aws::Vector<Aws::String>>
    UpdateCsvClassifierRequest& WithHeader(HeaderT&& value) { SetHeader(std::forward<HeaderT>(value)); return *this;}
    template<typename HeaderT = Aws::String>
    UpdateCsvClassifierRequest& AddHeader(HeaderT&& value) { m_headerHasBeenSet = true; m_header.emplace_back(std::forward<HeaderT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies not to trim values before identifying the type of column values.
     * The default value is true.</p>
     */
    inline bool GetDisableValueTrimming() const { return m_disableValueTrimming; }
    inline bool DisableValueTrimmingHasBeenSet() const { return m_disableValueTrimmingHasBeenSet; }
    inline void SetDisableValueTrimming(bool value) { m_disableValueTrimmingHasBeenSet = true; m_disableValueTrimming = value; }
    inline UpdateCsvClassifierRequest& WithDisableValueTrimming(bool value) { SetDisableValueTrimming(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables the processing of files that contain only one column.</p>
     */
    inline bool GetAllowSingleColumn() const { return m_allowSingleColumn; }
    inline bool AllowSingleColumnHasBeenSet() const { return m_allowSingleColumnHasBeenSet; }
    inline void SetAllowSingleColumn(bool value) { m_allowSingleColumnHasBeenSet = true; m_allowSingleColumn = value; }
    inline UpdateCsvClassifierRequest& WithAllowSingleColumn(bool value) { SetAllowSingleColumn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the configuration of custom datatypes.</p>
     */
    inline bool GetCustomDatatypeConfigured() const { return m_customDatatypeConfigured; }
    inline bool CustomDatatypeConfiguredHasBeenSet() const { return m_customDatatypeConfiguredHasBeenSet; }
    inline void SetCustomDatatypeConfigured(bool value) { m_customDatatypeConfiguredHasBeenSet = true; m_customDatatypeConfigured = value; }
    inline UpdateCsvClassifierRequest& WithCustomDatatypeConfigured(bool value) { SetCustomDatatypeConfigured(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a list of supported custom datatypes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDatatypes() const { return m_customDatatypes; }
    inline bool CustomDatatypesHasBeenSet() const { return m_customDatatypesHasBeenSet; }
    template<typename CustomDatatypesT = Aws::Vector<Aws::String>>
    void SetCustomDatatypes(CustomDatatypesT&& value) { m_customDatatypesHasBeenSet = true; m_customDatatypes = std::forward<CustomDatatypesT>(value); }
    template<typename CustomDatatypesT = Aws::Vector<Aws::String>>
    UpdateCsvClassifierRequest& WithCustomDatatypes(CustomDatatypesT&& value) { SetCustomDatatypes(std::forward<CustomDatatypesT>(value)); return *this;}
    template<typename CustomDatatypesT = Aws::String>
    UpdateCsvClassifierRequest& AddCustomDatatypes(CustomDatatypesT&& value) { m_customDatatypesHasBeenSet = true; m_customDatatypes.emplace_back(std::forward<CustomDatatypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Sets the SerDe for processing CSV in the classifier, which will be applied in
     * the Data Catalog. Valid values are <code>OpenCSVSerDe</code>,
     * <code>LazySimpleSerDe</code>, and <code>None</code>. You can specify the
     * <code>None</code> value when you want the crawler to do the detection.</p>
     */
    inline CsvSerdeOption GetSerde() const { return m_serde; }
    inline bool SerdeHasBeenSet() const { return m_serdeHasBeenSet; }
    inline void SetSerde(CsvSerdeOption value) { m_serdeHasBeenSet = true; m_serde = value; }
    inline UpdateCsvClassifierRequest& WithSerde(CsvSerdeOption value) { SetSerde(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    Aws::String m_quoteSymbol;
    bool m_quoteSymbolHasBeenSet = false;

    CsvHeaderOption m_containsHeader{CsvHeaderOption::NOT_SET};
    bool m_containsHeaderHasBeenSet = false;

    Aws::Vector<Aws::String> m_header;
    bool m_headerHasBeenSet = false;

    bool m_disableValueTrimming{false};
    bool m_disableValueTrimmingHasBeenSet = false;

    bool m_allowSingleColumn{false};
    bool m_allowSingleColumnHasBeenSet = false;

    bool m_customDatatypeConfigured{false};
    bool m_customDatatypeConfiguredHasBeenSet = false;

    Aws::Vector<Aws::String> m_customDatatypes;
    bool m_customDatatypesHasBeenSet = false;

    CsvSerdeOption m_serde{CsvSerdeOption::NOT_SET};
    bool m_serdeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
