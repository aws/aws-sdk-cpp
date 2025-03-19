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
    AWS_APPSTREAM_API ResourceError() = default;
    AWS_APPSTREAM_API ResourceError(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ResourceError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code.</p>
     */
    inline FleetErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(FleetErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline ResourceError& WithErrorCode(FleetErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ResourceError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the error occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetErrorTimestamp() const { return m_errorTimestamp; }
    inline bool ErrorTimestampHasBeenSet() const { return m_errorTimestampHasBeenSet; }
    template<typename ErrorTimestampT = Aws::Utils::DateTime>
    void SetErrorTimestamp(ErrorTimestampT&& value) { m_errorTimestampHasBeenSet = true; m_errorTimestamp = std::forward<ErrorTimestampT>(value); }
    template<typename ErrorTimestampT = Aws::Utils::DateTime>
    ResourceError& WithErrorTimestamp(ErrorTimestampT&& value) { SetErrorTimestamp(std::forward<ErrorTimestampT>(value)); return *this;}
    ///@}
  private:

    FleetErrorCode m_errorCode{FleetErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_errorTimestamp{};
    bool m_errorTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
