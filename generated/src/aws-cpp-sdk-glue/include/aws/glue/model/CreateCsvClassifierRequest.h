/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CsvHeaderOption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies a custom CSV classifier for <code>CreateClassifier</code> to
   * create.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateCsvClassifierRequest">AWS
   * API Reference</a></p>
   */
  class CreateCsvClassifierRequest
  {
  public:
    AWS_GLUE_API CreateCsvClassifierRequest();
    AWS_GLUE_API CreateCsvClassifierRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CreateCsvClassifierRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the classifier.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the classifier.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the classifier.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the classifier.</p>
     */
    inline CreateCsvClassifierRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline CreateCsvClassifierRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the classifier.</p>
     */
    inline CreateCsvClassifierRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline const Aws::String& GetDelimiter() const{ return m_delimiter; }

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline void SetDelimiter(const Aws::String& value) { m_delimiterHasBeenSet = true; m_delimiter = value; }

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline void SetDelimiter(Aws::String&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::move(value); }

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline void SetDelimiter(const char* value) { m_delimiterHasBeenSet = true; m_delimiter.assign(value); }

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline CreateCsvClassifierRequest& WithDelimiter(const Aws::String& value) { SetDelimiter(value); return *this;}

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline CreateCsvClassifierRequest& WithDelimiter(Aws::String&& value) { SetDelimiter(std::move(value)); return *this;}

    /**
     * <p>A custom symbol to denote what separates each column entry in the row.</p>
     */
    inline CreateCsvClassifierRequest& WithDelimiter(const char* value) { SetDelimiter(value); return *this;}


    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * Must be different from the column delimiter.</p>
     */
    inline const Aws::String& GetQuoteSymbol() const{ return m_quoteSymbol; }

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * Must be different from the column delimiter.</p>
     */
    inline bool QuoteSymbolHasBeenSet() const { return m_quoteSymbolHasBeenSet; }

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * Must be different from the column delimiter.</p>
     */
    inline void SetQuoteSymbol(const Aws::String& value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol = value; }

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * Must be different from the column delimiter.</p>
     */
    inline void SetQuoteSymbol(Aws::String&& value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol = std::move(value); }

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * Must be different from the column delimiter.</p>
     */
    inline void SetQuoteSymbol(const char* value) { m_quoteSymbolHasBeenSet = true; m_quoteSymbol.assign(value); }

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * Must be different from the column delimiter.</p>
     */
    inline CreateCsvClassifierRequest& WithQuoteSymbol(const Aws::String& value) { SetQuoteSymbol(value); return *this;}

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * Must be different from the column delimiter.</p>
     */
    inline CreateCsvClassifierRequest& WithQuoteSymbol(Aws::String&& value) { SetQuoteSymbol(std::move(value)); return *this;}

    /**
     * <p>A custom symbol to denote what combines content into a single column value.
     * Must be different from the column delimiter.</p>
     */
    inline CreateCsvClassifierRequest& WithQuoteSymbol(const char* value) { SetQuoteSymbol(value); return *this;}


    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline const CsvHeaderOption& GetContainsHeader() const{ return m_containsHeader; }

    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline bool ContainsHeaderHasBeenSet() const { return m_containsHeaderHasBeenSet; }

    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline void SetContainsHeader(const CsvHeaderOption& value) { m_containsHeaderHasBeenSet = true; m_containsHeader = value; }

    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline void SetContainsHeader(CsvHeaderOption&& value) { m_containsHeaderHasBeenSet = true; m_containsHeader = std::move(value); }

    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline CreateCsvClassifierRequest& WithContainsHeader(const CsvHeaderOption& value) { SetContainsHeader(value); return *this;}

    /**
     * <p>Indicates whether the CSV file contains a header.</p>
     */
    inline CreateCsvClassifierRequest& WithContainsHeader(CsvHeaderOption&& value) { SetContainsHeader(std::move(value)); return *this;}


    /**
     * <p>A list of strings representing column names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHeader() const{ return m_header; }

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline void SetHeader(const Aws::Vector<Aws::String>& value) { m_headerHasBeenSet = true; m_header = value; }

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline void SetHeader(Aws::Vector<Aws::String>&& value) { m_headerHasBeenSet = true; m_header = std::move(value); }

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline CreateCsvClassifierRequest& WithHeader(const Aws::Vector<Aws::String>& value) { SetHeader(value); return *this;}

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline CreateCsvClassifierRequest& WithHeader(Aws::Vector<Aws::String>&& value) { SetHeader(std::move(value)); return *this;}

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline CreateCsvClassifierRequest& AddHeader(const Aws::String& value) { m_headerHasBeenSet = true; m_header.push_back(value); return *this; }

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline CreateCsvClassifierRequest& AddHeader(Aws::String&& value) { m_headerHasBeenSet = true; m_header.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of strings representing column names.</p>
     */
    inline CreateCsvClassifierRequest& AddHeader(const char* value) { m_headerHasBeenSet = true; m_header.push_back(value); return *this; }


    /**
     * <p>Specifies not to trim values before identifying the type of column values.
     * The default value is true.</p>
     */
    inline bool GetDisableValueTrimming() const{ return m_disableValueTrimming; }

    /**
     * <p>Specifies not to trim values before identifying the type of column values.
     * The default value is true.</p>
     */
    inline bool DisableValueTrimmingHasBeenSet() const { return m_disableValueTrimmingHasBeenSet; }

    /**
     * <p>Specifies not to trim values before identifying the type of column values.
     * The default value is true.</p>
     */
    inline void SetDisableValueTrimming(bool value) { m_disableValueTrimmingHasBeenSet = true; m_disableValueTrimming = value; }

    /**
     * <p>Specifies not to trim values before identifying the type of column values.
     * The default value is true.</p>
     */
    inline CreateCsvClassifierRequest& WithDisableValueTrimming(bool value) { SetDisableValueTrimming(value); return *this;}


    /**
     * <p>Enables the processing of files that contain only one column.</p>
     */
    inline bool GetAllowSingleColumn() const{ return m_allowSingleColumn; }

    /**
     * <p>Enables the processing of files that contain only one column.</p>
     */
    inline bool AllowSingleColumnHasBeenSet() const { return m_allowSingleColumnHasBeenSet; }

    /**
     * <p>Enables the processing of files that contain only one column.</p>
     */
    inline void SetAllowSingleColumn(bool value) { m_allowSingleColumnHasBeenSet = true; m_allowSingleColumn = value; }

    /**
     * <p>Enables the processing of files that contain only one column.</p>
     */
    inline CreateCsvClassifierRequest& WithAllowSingleColumn(bool value) { SetAllowSingleColumn(value); return *this;}


    /**
     * <p>Enables the configuration of custom datatypes.</p>
     */
    inline bool GetCustomDatatypeConfigured() const{ return m_customDatatypeConfigured; }

    /**
     * <p>Enables the configuration of custom datatypes.</p>
     */
    inline bool CustomDatatypeConfiguredHasBeenSet() const { return m_customDatatypeConfiguredHasBeenSet; }

    /**
     * <p>Enables the configuration of custom datatypes.</p>
     */
    inline void SetCustomDatatypeConfigured(bool value) { m_customDatatypeConfiguredHasBeenSet = true; m_customDatatypeConfigured = value; }

    /**
     * <p>Enables the configuration of custom datatypes.</p>
     */
    inline CreateCsvClassifierRequest& WithCustomDatatypeConfigured(bool value) { SetCustomDatatypeConfigured(value); return *this;}


    /**
     * <p>Creates a list of supported custom datatypes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDatatypes() const{ return m_customDatatypes; }

    /**
     * <p>Creates a list of supported custom datatypes.</p>
     */
    inline bool CustomDatatypesHasBeenSet() const { return m_customDatatypesHasBeenSet; }

    /**
     * <p>Creates a list of supported custom datatypes.</p>
     */
    inline void SetCustomDatatypes(const Aws::Vector<Aws::String>& value) { m_customDatatypesHasBeenSet = true; m_customDatatypes = value; }

    /**
     * <p>Creates a list of supported custom datatypes.</p>
     */
    inline void SetCustomDatatypes(Aws::Vector<Aws::String>&& value) { m_customDatatypesHasBeenSet = true; m_customDatatypes = std::move(value); }

    /**
     * <p>Creates a list of supported custom datatypes.</p>
     */
    inline CreateCsvClassifierRequest& WithCustomDatatypes(const Aws::Vector<Aws::String>& value) { SetCustomDatatypes(value); return *this;}

    /**
     * <p>Creates a list of supported custom datatypes.</p>
     */
    inline CreateCsvClassifierRequest& WithCustomDatatypes(Aws::Vector<Aws::String>&& value) { SetCustomDatatypes(std::move(value)); return *this;}

    /**
     * <p>Creates a list of supported custom datatypes.</p>
     */
    inline CreateCsvClassifierRequest& AddCustomDatatypes(const Aws::String& value) { m_customDatatypesHasBeenSet = true; m_customDatatypes.push_back(value); return *this; }

    /**
     * <p>Creates a list of supported custom datatypes.</p>
     */
    inline CreateCsvClassifierRequest& AddCustomDatatypes(Aws::String&& value) { m_customDatatypesHasBeenSet = true; m_customDatatypes.push_back(std::move(value)); return *this; }

    /**
     * <p>Creates a list of supported custom datatypes.</p>
     */
    inline CreateCsvClassifierRequest& AddCustomDatatypes(const char* value) { m_customDatatypesHasBeenSet = true; m_customDatatypes.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    Aws::String m_quoteSymbol;
    bool m_quoteSymbolHasBeenSet = false;

    CsvHeaderOption m_containsHeader;
    bool m_containsHeaderHasBeenSet = false;

    Aws::Vector<Aws::String> m_header;
    bool m_headerHasBeenSet = false;

    bool m_disableValueTrimming;
    bool m_disableValueTrimmingHasBeenSet = false;

    bool m_allowSingleColumn;
    bool m_allowSingleColumnHasBeenSet = false;

    bool m_customDatatypeConfigured;
    bool m_customDatatypeConfiguredHasBeenSet = false;

    Aws::Vector<Aws::String> m_customDatatypes;
    bool m_customDatatypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
