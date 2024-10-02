/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/FromFormat.h>
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
   * <p>Contains the input formatting options for an inbound transformer (takes an
   * X12-formatted EDI document as input and converts it to JSON or
   * XML.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/InputConversion">AWS
   * API Reference</a></p>
   */
  class InputConversion
  {
  public:
    AWS_B2BI_API InputConversion();
    AWS_B2BI_API InputConversion(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API InputConversion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format for the transformer input: currently on <code>X12</code> is
     * supported.</p>
     */
    inline const FromFormat& GetFromFormat() const{ return m_fromFormat; }
    inline bool FromFormatHasBeenSet() const { return m_fromFormatHasBeenSet; }
    inline void SetFromFormat(const FromFormat& value) { m_fromFormatHasBeenSet = true; m_fromFormat = value; }
    inline void SetFromFormat(FromFormat&& value) { m_fromFormatHasBeenSet = true; m_fromFormat = std::move(value); }
    inline InputConversion& WithFromFormat(const FromFormat& value) { SetFromFormat(value); return *this;}
    inline InputConversion& WithFromFormat(FromFormat&& value) { SetFromFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the formatting options for an inbound
     * transformer.</p>
     */
    inline const FormatOptions& GetFormatOptions() const{ return m_formatOptions; }
    inline bool FormatOptionsHasBeenSet() const { return m_formatOptionsHasBeenSet; }
    inline void SetFormatOptions(const FormatOptions& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = value; }
    inline void SetFormatOptions(FormatOptions&& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = std::move(value); }
    inline InputConversion& WithFormatOptions(const FormatOptions& value) { SetFormatOptions(value); return *this;}
    inline InputConversion& WithFormatOptions(FormatOptions&& value) { SetFormatOptions(std::move(value)); return *this;}
    ///@}
  private:

    FromFormat m_fromFormat;
    bool m_fromFormatHasBeenSet = false;

    FormatOptions m_formatOptions;
    bool m_formatOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
