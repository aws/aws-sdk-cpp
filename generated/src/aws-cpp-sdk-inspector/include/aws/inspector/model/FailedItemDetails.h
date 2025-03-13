/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/model/FailedItemErrorCode.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>Includes details about the failed items.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/FailedItemDetails">AWS
   * API Reference</a></p>
   */
  class FailedItemDetails
  {
  public:
    AWS_INSPECTOR_API FailedItemDetails() = default;
    AWS_INSPECTOR_API FailedItemDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API FailedItemDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status code of a failed item.</p>
     */
    inline FailedItemErrorCode GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(FailedItemErrorCode value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline FailedItemDetails& WithFailureCode(FailedItemErrorCode value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you can immediately retry a request for this item for a
     * specified resource.</p>
     */
    inline bool GetRetryable() const { return m_retryable; }
    inline bool RetryableHasBeenSet() const { return m_retryableHasBeenSet; }
    inline void SetRetryable(bool value) { m_retryableHasBeenSet = true; m_retryable = value; }
    inline FailedItemDetails& WithRetryable(bool value) { SetRetryable(value); return *this;}
    ///@}
  private:

    FailedItemErrorCode m_failureCode{FailedItemErrorCode::NOT_SET};
    bool m_failureCodeHasBeenSet = false;

    bool m_retryable{false};
    bool m_retryableHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
