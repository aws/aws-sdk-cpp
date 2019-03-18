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
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Details about the error.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ErrorDetail">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API ErrorDetail
  {
  public:
    ErrorDetail();
    ErrorDetail(Aws::Utils::Json::JsonView jsonValue);
    ErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A detailed error code.
     */
    inline const Aws::String& GetDetailedErrorCode() const{ return m_detailedErrorCode; }

    /**
     * A detailed error code.
     */
    inline bool DetailedErrorCodeHasBeenSet() const { return m_detailedErrorCodeHasBeenSet; }

    /**
     * A detailed error code.
     */
    inline void SetDetailedErrorCode(const Aws::String& value) { m_detailedErrorCodeHasBeenSet = true; m_detailedErrorCode = value; }

    /**
     * A detailed error code.
     */
    inline void SetDetailedErrorCode(Aws::String&& value) { m_detailedErrorCodeHasBeenSet = true; m_detailedErrorCode = std::move(value); }

    /**
     * A detailed error code.
     */
    inline void SetDetailedErrorCode(const char* value) { m_detailedErrorCodeHasBeenSet = true; m_detailedErrorCode.assign(value); }

    /**
     * A detailed error code.
     */
    inline ErrorDetail& WithDetailedErrorCode(const Aws::String& value) { SetDetailedErrorCode(value); return *this;}

    /**
     * A detailed error code.
     */
    inline ErrorDetail& WithDetailedErrorCode(Aws::String&& value) { SetDetailedErrorCode(std::move(value)); return *this;}

    /**
     * A detailed error code.
     */
    inline ErrorDetail& WithDetailedErrorCode(const char* value) { SetDetailedErrorCode(value); return *this;}


    /**
     * A detailed error message.
     */
    inline const Aws::String& GetDetailedErrorMessage() const{ return m_detailedErrorMessage; }

    /**
     * A detailed error message.
     */
    inline bool DetailedErrorMessageHasBeenSet() const { return m_detailedErrorMessageHasBeenSet; }

    /**
     * A detailed error message.
     */
    inline void SetDetailedErrorMessage(const Aws::String& value) { m_detailedErrorMessageHasBeenSet = true; m_detailedErrorMessage = value; }

    /**
     * A detailed error message.
     */
    inline void SetDetailedErrorMessage(Aws::String&& value) { m_detailedErrorMessageHasBeenSet = true; m_detailedErrorMessage = std::move(value); }

    /**
     * A detailed error message.
     */
    inline void SetDetailedErrorMessage(const char* value) { m_detailedErrorMessageHasBeenSet = true; m_detailedErrorMessage.assign(value); }

    /**
     * A detailed error message.
     */
    inline ErrorDetail& WithDetailedErrorMessage(const Aws::String& value) { SetDetailedErrorMessage(value); return *this;}

    /**
     * A detailed error message.
     */
    inline ErrorDetail& WithDetailedErrorMessage(Aws::String&& value) { SetDetailedErrorMessage(std::move(value)); return *this;}

    /**
     * A detailed error message.
     */
    inline ErrorDetail& WithDetailedErrorMessage(const char* value) { SetDetailedErrorMessage(value); return *this;}

  private:

    Aws::String m_detailedErrorCode;
    bool m_detailedErrorCodeHasBeenSet;

    Aws::String m_detailedErrorMessage;
    bool m_detailedErrorMessageHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
