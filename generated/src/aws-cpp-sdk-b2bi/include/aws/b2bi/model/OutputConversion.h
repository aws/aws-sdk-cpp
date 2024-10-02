/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/ToFormat.h>
#include <aws/b2bi/model/FormatOptions.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Contains the formatting options for an outbound transformer (takes JSON or
   * XML as input and converts it to an EDI document (currently only X12 format is
   * supported).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/OutputConversion">AWS
   * API Reference</a></p>
   */
  class OutputConversion
  {
  public:
    AWS_B2BI_API OutputConversion();
    AWS_B2BI_API OutputConversion(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API OutputConversion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format for the output from an outbound transformer: only X12 is currently
     * supported.</p>
     */
    inline const ToFormat& GetToFormat() const{ return m_toFormat; }
    inline bool ToFormatHasBeenSet() const { return m_toFormatHasBeenSet; }
    inline void SetToFormat(const ToFormat& value) { m_toFormatHasBeenSet = true; m_toFormat = value; }
    inline void SetToFormat(ToFormat&& value) { m_toFormatHasBeenSet = true; m_toFormat = std::move(value); }
    inline OutputConversion& WithToFormat(const ToFormat& value) { SetToFormat(value); return *this;}
    inline OutputConversion& WithToFormat(ToFormat&& value) { SetToFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the X12 transaction set and version for the
     * transformer output.</p>
     */
    inline const FormatOptions& GetFormatOptions() const{ return m_formatOptions; }
    inline bool FormatOptionsHasBeenSet() const { return m_formatOptionsHasBeenSet; }
    inline void SetFormatOptions(const FormatOptions& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = value; }
    inline void SetFormatOptions(FormatOptions&& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = std::move(value); }
    inline OutputConversion& WithFormatOptions(const FormatOptions& value) { SetFormatOptions(value); return *this;}
    inline OutputConversion& WithFormatOptions(FormatOptions&& value) { SetFormatOptions(std::move(value)); return *this;}
    ///@}
  private:

    ToFormat m_toFormat;
    bool m_toFormatHasBeenSet = false;

    FormatOptions m_formatOptions;
    bool m_formatOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
