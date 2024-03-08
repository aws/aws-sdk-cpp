/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>Details about the status of a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/StatusDetails">AWS
   * API Reference</a></p>
   */
  class StatusDetails
  {
  public:
    AWS_CLEANROOMSML_API StatusDetails();
    AWS_CLEANROOMSML_API StatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API StatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error message that was returned. The message is intended for human
     * consumption and can change at any time. Use the <code>statusCode</code> for
     * programmatic error handling.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message that was returned. The message is intended for human
     * consumption and can change at any time. Use the <code>statusCode</code> for
     * programmatic error handling.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message that was returned. The message is intended for human
     * consumption and can change at any time. Use the <code>statusCode</code> for
     * programmatic error handling.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message that was returned. The message is intended for human
     * consumption and can change at any time. Use the <code>statusCode</code> for
     * programmatic error handling.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message that was returned. The message is intended for human
     * consumption and can change at any time. Use the <code>statusCode</code> for
     * programmatic error handling.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message that was returned. The message is intended for human
     * consumption and can change at any time. Use the <code>statusCode</code> for
     * programmatic error handling.</p>
     */
    inline StatusDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message that was returned. The message is intended for human
     * consumption and can change at any time. Use the <code>statusCode</code> for
     * programmatic error handling.</p>
     */
    inline StatusDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message that was returned. The message is intended for human
     * consumption and can change at any time. Use the <code>statusCode</code> for
     * programmatic error handling.</p>
     */
    inline StatusDetails& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The status code that was returned. The status code is intended for
     * programmatic error handling. Clean Rooms ML will not change the status code for
     * existing error conditions.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The status code that was returned. The status code is intended for
     * programmatic error handling. Clean Rooms ML will not change the status code for
     * existing error conditions.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>The status code that was returned. The status code is intended for
     * programmatic error handling. Clean Rooms ML will not change the status code for
     * existing error conditions.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The status code that was returned. The status code is intended for
     * programmatic error handling. Clean Rooms ML will not change the status code for
     * existing error conditions.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>The status code that was returned. The status code is intended for
     * programmatic error handling. Clean Rooms ML will not change the status code for
     * existing error conditions.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>The status code that was returned. The status code is intended for
     * programmatic error handling. Clean Rooms ML will not change the status code for
     * existing error conditions.</p>
     */
    inline StatusDetails& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The status code that was returned. The status code is intended for
     * programmatic error handling. Clean Rooms ML will not change the status code for
     * existing error conditions.</p>
     */
    inline StatusDetails& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>The status code that was returned. The status code is intended for
     * programmatic error handling. Clean Rooms ML will not change the status code for
     * existing error conditions.</p>
     */
    inline StatusDetails& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
