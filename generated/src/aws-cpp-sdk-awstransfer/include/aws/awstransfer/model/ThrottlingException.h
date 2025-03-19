/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>The request was denied due to request throttling.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ThrottlingException">AWS
   * API Reference</a></p>
   */
  class ThrottlingException
  {
  public:
    AWS_TRANSFER_API ThrottlingException() = default;
    AWS_TRANSFER_API ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetRetryAfterSeconds() const { return m_retryAfterSeconds; }
    inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }
    template<typename RetryAfterSecondsT = Aws::String>
    void SetRetryAfterSeconds(RetryAfterSecondsT&& value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds = std::forward<RetryAfterSecondsT>(value); }
    template<typename RetryAfterSecondsT = Aws::String>
    ThrottlingException& WithRetryAfterSeconds(RetryAfterSecondsT&& value) { SetRetryAfterSeconds(std::forward<RetryAfterSecondsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_retryAfterSeconds;
    bool m_retryAfterSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
