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
   * Placeholder documentation for ValidationError<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ValidationError">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API ValidationError
  {
  public:
    ValidationError();
    ValidationError(Aws::Utils::Json::JsonView jsonValue);
    ValidationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetElementPath() const{ return m_elementPath; }

    
    inline bool ElementPathHasBeenSet() const { return m_elementPathHasBeenSet; }

    
    inline void SetElementPath(const Aws::String& value) { m_elementPathHasBeenSet = true; m_elementPath = value; }

    
    inline void SetElementPath(Aws::String&& value) { m_elementPathHasBeenSet = true; m_elementPath = std::move(value); }

    
    inline void SetElementPath(const char* value) { m_elementPathHasBeenSet = true; m_elementPath.assign(value); }

    
    inline ValidationError& WithElementPath(const Aws::String& value) { SetElementPath(value); return *this;}

    
    inline ValidationError& WithElementPath(Aws::String&& value) { SetElementPath(std::move(value)); return *this;}

    
    inline ValidationError& WithElementPath(const char* value) { SetElementPath(value); return *this;}


    
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    
    inline ValidationError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    
    inline ValidationError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    
    inline ValidationError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::String m_elementPath;
    bool m_elementPathHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
