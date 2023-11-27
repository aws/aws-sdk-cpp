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
    AWS_B2BI_API EdiType();
    AWS_B2BI_API EdiType(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API EdiType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline const X12Details& GetX12Details() const{ return m_x12Details; }

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline bool X12DetailsHasBeenSet() const { return m_x12DetailsHasBeenSet; }

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline void SetX12Details(const X12Details& value) { m_x12DetailsHasBeenSet = true; m_x12Details = value; }

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline void SetX12Details(X12Details&& value) { m_x12DetailsHasBeenSet = true; m_x12Details = std::move(value); }

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline EdiType& WithX12Details(const X12Details& value) { SetX12Details(value); return *this;}

    /**
     * <p>Returns the details for the EDI standard that is being used for the
     * transformer. Currently, only X12 is supported. X12 is a set of standards and
     * corresponding messages that define specific business documents.</p>
     */
    inline EdiType& WithX12Details(X12Details&& value) { SetX12Details(std::move(value)); return *this;}

  private:

    X12Details m_x12Details;
    bool m_x12DetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
