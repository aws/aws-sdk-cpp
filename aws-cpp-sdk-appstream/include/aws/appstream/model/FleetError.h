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
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/FleetErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>The details of the fleet error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/FleetError">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API FleetError
  {
  public:
    FleetError();
    FleetError(const Aws::Utils::Json::JsonValue& jsonValue);
    FleetError& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The error code for the fleet error.</p>
     */
    inline const FleetErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code for the fleet error.</p>
     */
    inline void SetErrorCode(const FleetErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code for the fleet error.</p>
     */
    inline void SetErrorCode(FleetErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code for the fleet error.</p>
     */
    inline FleetError& WithErrorCode(const FleetErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code for the fleet error.</p>
     */
    inline FleetError& WithErrorCode(FleetErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error message generated when the fleet has errors.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message generated when the fleet has errors.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message generated when the fleet has errors.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message generated when the fleet has errors.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message generated when the fleet has errors.</p>
     */
    inline FleetError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message generated when the fleet has errors.</p>
     */
    inline FleetError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message generated when the fleet has errors.</p>
     */
    inline FleetError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:
    FleetErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet;
    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
