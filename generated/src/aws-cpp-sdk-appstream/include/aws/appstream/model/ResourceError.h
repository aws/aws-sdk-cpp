/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/FleetErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes a resource error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ResourceError">AWS
   * API Reference</a></p>
   */
  class ResourceError
  {
  public:
    AWS_APPSTREAM_API ResourceError();
    AWS_APPSTREAM_API ResourceError(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ResourceError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error code.</p>
     */
    inline const FleetErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(const FleetErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code.</p>
     */
    inline void SetErrorCode(FleetErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code.</p>
     */
    inline ResourceError& WithErrorCode(const FleetErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code.</p>
     */
    inline ResourceError& WithErrorCode(FleetErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message.</p>
     */
    inline ResourceError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline ResourceError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message.</p>
     */
    inline ResourceError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The time the error occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetErrorTimestamp() const{ return m_errorTimestamp; }

    /**
     * <p>The time the error occurred.</p>
     */
    inline bool ErrorTimestampHasBeenSet() const { return m_errorTimestampHasBeenSet; }

    /**
     * <p>The time the error occurred.</p>
     */
    inline void SetErrorTimestamp(const Aws::Utils::DateTime& value) { m_errorTimestampHasBeenSet = true; m_errorTimestamp = value; }

    /**
     * <p>The time the error occurred.</p>
     */
    inline void SetErrorTimestamp(Aws::Utils::DateTime&& value) { m_errorTimestampHasBeenSet = true; m_errorTimestamp = std::move(value); }

    /**
     * <p>The time the error occurred.</p>
     */
    inline ResourceError& WithErrorTimestamp(const Aws::Utils::DateTime& value) { SetErrorTimestamp(value); return *this;}

    /**
     * <p>The time the error occurred.</p>
     */
    inline ResourceError& WithErrorTimestamp(Aws::Utils::DateTime&& value) { SetErrorTimestamp(std::move(value)); return *this;}

  private:

    FleetErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_errorTimestamp;
    bool m_errorTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
