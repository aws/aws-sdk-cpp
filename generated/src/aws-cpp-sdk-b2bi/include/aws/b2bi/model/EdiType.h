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
   * <p>Specifies the details for the EDI standard that is being used for the
   * transformer. Currently, only X12 is supported. X12 is a set of standards and
   * corresponding messages that define specific business documents.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/EdiType">AWS API
   * Reference</a></p>
   */
  class EdiType
  {
  public:
    AWS_B2BI_API EdiType() = default;
    AWS_B2BI_API EdiType(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API EdiType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline const X12Details& GetX12Details() const { return m_x12Details; }
    inline bool X12DetailsHasBeenSet() const { return m_x12DetailsHasBeenSet; }
    template<typename X12DetailsT = X12Details>
    void SetX12Details(X12DetailsT&& value) { m_x12DetailsHasBeenSet = true; m_x12Details = std::forward<X12DetailsT>(value); }
    template<typename X12DetailsT = X12Details>
    EdiType& WithX12Details(X12DetailsT&& value) { SetX12Details(std::forward<X12DetailsT>(value)); return *this;}
    ///@}
  private:

    X12Details m_x12Details;
    bool m_x12DetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
