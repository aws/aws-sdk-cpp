/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_INSPECTOR_API FailedItemDetails
  {
  public:
    FailedItemDetails();
    FailedItemDetails(Aws::Utils::Json::JsonView jsonValue);
    FailedItemDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status code of a failed item.</p>
     */
    inline const FailedItemErrorCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The status code of a failed item.</p>
     */
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    /**
     * <p>The status code of a failed item.</p>
     */
    inline void SetFailureCode(const FailedItemErrorCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>The status code of a failed item.</p>
     */
    inline void SetFailureCode(FailedItemErrorCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    /**
     * <p>The status code of a failed item.</p>
     */
    inline FailedItemDetails& WithFailureCode(const FailedItemErrorCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The status code of a failed item.</p>
     */
    inline FailedItemDetails& WithFailureCode(FailedItemErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>Indicates whether you can immediately retry a request for this item for a
     * specified resource.</p>
     */
    inline bool GetRetryable() const{ return m_retryable; }

    /**
     * <p>Indicates whether you can immediately retry a request for this item for a
     * specified resource.</p>
     */
    inline bool RetryableHasBeenSet() const { return m_retryableHasBeenSet; }

    /**
     * <p>Indicates whether you can immediately retry a request for this item for a
     * specified resource.</p>
     */
    inline void SetRetryable(bool value) { m_retryableHasBeenSet = true; m_retryable = value; }

    /**
     * <p>Indicates whether you can immediately retry a request for this item for a
     * specified resource.</p>
     */
    inline FailedItemDetails& WithRetryable(bool value) { SetRetryable(value); return *this;}

  private:

    FailedItemErrorCode m_failureCode;
    bool m_failureCodeHasBeenSet;

    bool m_retryable;
    bool m_retryableHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
