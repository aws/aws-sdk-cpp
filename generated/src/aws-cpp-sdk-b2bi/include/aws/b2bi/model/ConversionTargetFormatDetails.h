/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/X12Details.h>
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
   * <p>Contains a structure describing the X12 details for the conversion
   * target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/ConversionTargetFormatDetails">AWS
   * API Reference</a></p>
   */
  class ConversionTargetFormatDetails
  {
  public:
    AWS_B2BI_API ConversionTargetFormatDetails() = default;
    AWS_B2BI_API ConversionTargetFormatDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API ConversionTargetFormatDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const X12Details& GetX12() const { return m_x12; }
    inline bool X12HasBeenSet() const { return m_x12HasBeenSet; }
    template<typename X12T = X12Details>
    void SetX12(X12T&& value) { m_x12HasBeenSet = true; m_x12 = std::forward<X12T>(value); }
    template<typename X12T = X12Details>
    ConversionTargetFormatDetails& WithX12(X12T&& value) { SetX12(std::forward<X12T>(value)); return *this;}
    ///@}
  private:

    X12Details m_x12;
    bool m_x12HasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
