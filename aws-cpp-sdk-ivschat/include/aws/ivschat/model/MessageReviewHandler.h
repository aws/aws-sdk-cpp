/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/model/FallbackResult.h>
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
    AWS_IVSCHAT_API MessageReviewHandler();
    AWS_IVSCHAT_API MessageReviewHandler(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API MessageReviewHandler& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSCHAT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the fallback behavior (whether the message is allowed or denied) if
     * the handler does not return a valid response, encounters an error, or times out.
     * (For the timeout period, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/service-quotas.html">
     * Service Quotas</a>.) If allowed, the message is delivered with returned content
     * to all users connected to the room. If denied, the message is not delivered to
     * any user. Default: <code>ALLOW</code>.</p>
     */
    inline const FallbackResult& GetFallbackResult() const{ return m_fallbackResult; }

    /**
     * <p>Specifies the fallback behavior (whether the message is allowed or denied) if
     * the handler does not return a valid response, encounters an error, or times out.
     * (For the timeout period, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/service-quotas.html">
     * Service Quotas</a>.) If allowed, the message is delivered with returned content
     * to all users connected to the room. If denied, the message is not delivered to
     * any user. Default: <code>ALLOW</code>.</p>
     */
    inline bool FallbackResultHasBeenSet() const { return m_fallbackResultHasBeenSet; }

    /**
     * <p>Specifies the fallback behavior (whether the message is allowed or denied) if
     * the handler does not return a valid response, encounters an error, or times out.
     * (For the timeout period, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/service-quotas.html">
     * Service Quotas</a>.) If allowed, the message is delivered with returned content
     * to all users connected to the room. If denied, the message is not delivered to
     * any user. Default: <code>ALLOW</code>.</p>
     */
    inline void SetFallbackResult(const FallbackResult& value) { m_fallbackResultHasBeenSet = true; m_fallbackResult = value; }

    /**
     * <p>Specifies the fallback behavior (whether the message is allowed or denied) if
     * the handler does not return a valid response, encounters an error, or times out.
     * (For the timeout period, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/service-quotas.html">
     * Service Quotas</a>.) If allowed, the message is delivered with returned content
     * to all users connected to the room. If denied, the message is not delivered to
     * any user. Default: <code>ALLOW</code>.</p>
     */
    inline void SetFallbackResult(FallbackResult&& value) { m_fallbackResultHasBeenSet = true; m_fallbackResult = std::move(value); }

    /**
     * <p>Specifies the fallback behavior (whether the message is allowed or denied) if
     * the handler does not return a valid response, encounters an error, or times out.
     * (For the timeout period, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/service-quotas.html">
     * Service Quotas</a>.) If allowed, the message is delivered with returned content
     * to all users connected to the room. If denied, the message is not delivered to
     * any user. Default: <code>ALLOW</code>.</p>
     */
    inline MessageReviewHandler& WithFallbackResult(const FallbackResult& value) { SetFallbackResult(value); return *this;}

    /**
     * <p>Specifies the fallback behavior (whether the message is allowed or denied) if
     * the handler does not return a valid response, encounters an error, or times out.
     * (For the timeout period, see <a
     * href="https://docs.aws.amazon.com/ivs/latest/userguide/service-quotas.html">
     * Service Quotas</a>.) If allowed, the message is delivered with returned content
     * to all users connected to the room. If denied, the message is not delivered to
     * any user. Default: <code>ALLOW</code>.</p>
     */
    inline MessageReviewHandler& WithFallbackResult(FallbackResult&& value) { SetFallbackResult(std::move(value)); return *this;}


    /**
     * <p>Identifier of the message review handler. Currently this must be an ARN of a
     * lambda function.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>Identifier of the message review handler. Currently this must be an ARN of a
     * lambda function.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>Identifier of the message review handler. Currently this must be an ARN of a
     * lambda function.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>Identifier of the message review handler. Currently this must be an ARN of a
     * lambda function.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>Identifier of the message review handler. Currently this must be an ARN of a
     * lambda function.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>Identifier of the message review handler. Currently this must be an ARN of a
     * lambda function.</p>
     */
    inline MessageReviewHandler& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>Identifier of the message review handler. Currently this must be an ARN of a
     * lambda function.</p>
     */
    inline MessageReviewHandler& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>Identifier of the message review handler. Currently this must be an ARN of a
     * lambda function.</p>
     */
    inline MessageReviewHandler& WithUri(const char* value) { SetUri(value); return *this;}

  private:

    FallbackResult m_fallbackResult;
    bool m_fallbackResultHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
