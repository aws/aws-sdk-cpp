/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/model/DestinationOptions.h>
#include <aws/honeycode/model/DelimitedTextImportOptions.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p>An object that contains the options specified by the sumitter of the import
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ImportOptions">AWS
   * API Reference</a></p>
   */
  class ImportOptions
  {
  public:
    AWS_HONEYCODE_API ImportOptions();
    AWS_HONEYCODE_API ImportOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API ImportOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Options relating to the destination of the import request.</p>
     */
    inline const DestinationOptions& GetDestinationOptions() const{ return m_destinationOptions; }

    /**
     * <p>Options relating to the destination of the import request.</p>
     */
    inline bool DestinationOptionsHasBeenSet() const { return m_destinationOptionsHasBeenSet; }

    /**
     * <p>Options relating to the destination of the import request.</p>
     */
    inline void SetDestinationOptions(const DestinationOptions& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = value; }

    /**
     * <p>Options relating to the destination of the import request.</p>
     */
    inline void SetDestinationOptions(DestinationOptions&& value) { m_destinationOptionsHasBeenSet = true; m_destinationOptions = std::move(value); }

    /**
     * <p>Options relating to the destination of the import request.</p>
     */
    inline ImportOptions& WithDestinationOptions(const DestinationOptions& value) { SetDestinationOptions(value); return *this;}

    /**
     * <p>Options relating to the destination of the import request.</p>
     */
    inline ImportOptions& WithDestinationOptions(DestinationOptions&& value) { SetDestinationOptions(std::move(value)); return *this;}


    /**
     * <p>Options relating to parsing delimited text. Required if dataFormat is
     * DELIMITED_TEXT.</p>
     */
    inline const DelimitedTextImportOptions& GetDelimitedTextOptions() const{ return m_delimitedTextOptions; }

    /**
     * <p>Options relating to parsing delimited text. Required if dataFormat is
     * DELIMITED_TEXT.</p>
     */
    inline bool DelimitedTextOptionsHasBeenSet() const { return m_delimitedTextOptionsHasBeenSet; }

    /**
     * <p>Options relating to parsing delimited text. Required if dataFormat is
     * DELIMITED_TEXT.</p>
     */
    inline void SetDelimitedTextOptions(const DelimitedTextImportOptions& value) { m_delimitedTextOptionsHasBeenSet = true; m_delimitedTextOptions = value; }

    /**
     * <p>Options relating to parsing delimited text. Required if dataFormat is
     * DELIMITED_TEXT.</p>
     */
    inline void SetDelimitedTextOptions(DelimitedTextImportOptions&& value) { m_delimitedTextOptionsHasBeenSet = true; m_delimitedTextOptions = std::move(value); }

    /**
     * <p>Options relating to parsing delimited text. Required if dataFormat is
     * DELIMITED_TEXT.</p>
     */
    inline ImportOptions& WithDelimitedTextOptions(const DelimitedTextImportOptions& value) { SetDelimitedTextOptions(value); return *this;}

    /**
     * <p>Options relating to parsing delimited text. Required if dataFormat is
     * DELIMITED_TEXT.</p>
     */
    inline ImportOptions& WithDelimitedTextOptions(DelimitedTextImportOptions&& value) { SetDelimitedTextOptions(std::move(value)); return *this;}

  private:

    DestinationOptions m_destinationOptions;
    bool m_destinationOptionsHasBeenSet = false;

    DelimitedTextImportOptions m_delimitedTextOptions;
    bool m_delimitedTextOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
