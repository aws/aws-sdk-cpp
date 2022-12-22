/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides the status code and message that result from processing data for an
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointItemResponse">AWS
   * API Reference</a></p>
   */
  class EndpointItemResponse
  {
  public:
    AWS_PINPOINT_API EndpointItemResponse();
    AWS_PINPOINT_API EndpointItemResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EndpointItemResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The custom message that's returned in the response as a result of processing
     * the endpoint data.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The custom message that's returned in the response as a result of processing
     * the endpoint data.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The custom message that's returned in the response as a result of processing
     * the endpoint data.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The custom message that's returned in the response as a result of processing
     * the endpoint data.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The custom message that's returned in the response as a result of processing
     * the endpoint data.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The custom message that's returned in the response as a result of processing
     * the endpoint data.</p>
     */
    inline EndpointItemResponse& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The custom message that's returned in the response as a result of processing
     * the endpoint data.</p>
     */
    inline EndpointItemResponse& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The custom message that's returned in the response as a result of processing
     * the endpoint data.</p>
     */
    inline EndpointItemResponse& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The status code that's returned in the response as a result of processing the
     * endpoint data.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code that's returned in the response as a result of processing the
     * endpoint data.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The status code that's returned in the response as a result of processing the
     * endpoint data.</p>
     */
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status code that's returned in the response as a result of processing the
     * endpoint data.</p>
     */
    inline EndpointItemResponse& WithStatusCode(int value) { SetStatusCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_statusCode;
    bool m_statusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
