/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/b2bi/model/X12SplitBy.h>
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
   * <p>Contains options for splitting X12 EDI files into smaller units. This is
   * useful for processing large EDI files more efficiently.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12SplitOptions">AWS
   * API Reference</a></p>
   */
  class X12SplitOptions
  {
  public:
    AWS_B2BI_API X12SplitOptions() = default;
    AWS_B2BI_API X12SplitOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12SplitOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the method used to split X12 EDI files. Valid values include
     * <code>TRANSACTION</code> (split by individual transaction sets), or
     * <code>NONE</code> (no splitting).</p>
     */
    inline X12SplitBy GetSplitBy() const { return m_splitBy; }
    inline bool SplitByHasBeenSet() const { return m_splitByHasBeenSet; }
    inline void SetSplitBy(X12SplitBy value) { m_splitByHasBeenSet = true; m_splitBy = value; }
    inline X12SplitOptions& WithSplitBy(X12SplitBy value) { SetSplitBy(value); return *this;}
    ///@}
  private:

    X12SplitBy m_splitBy{X12SplitBy::NOT_SET};
    bool m_splitByHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
