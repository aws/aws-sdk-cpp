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
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for MultiplexValidationError<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexValidationError">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API MultiplexValidationError
  {
  public:
    MultiplexValidationError();
    MultiplexValidationError(Aws::Utils::Json::JsonView jsonValue);
    MultiplexValidationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Path to the source of the error.
     */
    inline const Aws::String& GetElementPath() const{ return m_elementPath; }

    /**
     * Path to the source of the error.
     */
    inline bool ElementPathHasBeenSet() const { return m_elementPathHasBeenSet; }

    /**
     * Path to the source of the error.
     */
    inline void SetElementPath(const Aws::String& value) { m_elementPathHasBeenSet = true; m_elementPath = value; }

    /**
     * Path to the source of the error.
     */
    inline void SetElementPath(Aws::String&& value) { m_elementPathHasBeenSet = true; m_elementPath = std::move(value); }

    /**
     * Path to the source of the error.
     */
    inline void SetElementPath(const char* value) { m_elementPathHasBeenSet = true; m_elementPath.assign(value); }

    /**
     * Path to the source of the error.
     */
    inline MultiplexValidationError& WithElementPath(const Aws::String& value) { SetElementPath(value); return *this;}

    /**
     * Path to the source of the error.
     */
    inline MultiplexValidationError& WithElementPath(Aws::String&& value) { SetElementPath(std::move(value)); return *this;}

    /**
     * Path to the source of the error.
     */
    inline MultiplexValidationError& WithElementPath(const char* value) { SetElementPath(value); return *this;}


    /**
     * The error message.
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * The error message.
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * The error message.
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * The error message.
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * The error message.
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * The error message.
     */
    inline MultiplexValidationError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * The error message.
     */
    inline MultiplexValidationError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * The error message.
     */
    inline MultiplexValidationError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_elementPath;
    bool m_elementPathHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
