/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivschat/model/FallbackResult.h>
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
namespace ivschat
{
namespace Model
{

  /**
   * <p>Configuration information for optional message review.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivschat-2020-07-14/MessageReviewHandler">AWS
   * API Reference</a></p>
   */
  class MessageReviewHandler
  {
  public:
    AWS_IVSCHAT_API MessageReviewHandler() = default;
    AWS_IVSCHAT_API MessageReviewHandler(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API MessageReviewHandler& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of the message review handler. Currently this must be an ARN of a
     * lambda function.</p>
     */
    inline const Aws::String& GetUri() const { return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    template<typename UriT = Aws::String>
    void SetUri(UriT&& value) { m_uriHasBeenSet = true; m_uri = std::forward<UriT>(value); }
    template<typename UriT = Aws::String>
    MessageReviewHandler& WithUri(UriT&& value) { SetUri(std::forward<UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the fallback behavior (whether the message is allowed or denied) if
     * the handler does not return a valid response, encounters an error, or times out.
     * (For the timeout period, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/service-quotas.html">
     * Service Quotas</a>.) If allowed, the message is delivered with returned content
     * to all users connected to the room. If denied, the message is not delivered to
     * any user. Default: <code>ALLOW</code>.</p>
     */
    inline FallbackResult GetFallbackResult() const { return m_fallbackResult; }
    inline bool FallbackResultHasBeenSet() const { return m_fallbackResultHasBeenSet; }
    inline void SetFallbackResult(FallbackResult value) { m_fallbackResultHasBeenSet = true; m_fallbackResult = value; }
    inline MessageReviewHandler& WithFallbackResult(FallbackResult value) { SetFallbackResult(value); return *this;}
    ///@}
  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    FallbackResult m_fallbackResult{FallbackResult::NOT_SET};
    bool m_fallbackResultHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
