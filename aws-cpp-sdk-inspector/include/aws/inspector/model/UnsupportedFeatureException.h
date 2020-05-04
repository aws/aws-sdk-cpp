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
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>Used by the <a>GetAssessmentReport</a> API. The request was rejected because
   * you tried to generate a report for an assessment run that existed before
   * reporting was supported in Amazon Inspector. You can only generate reports for
   * assessment runs that took place or will take place after generating reports in
   * Amazon Inspector became available.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/UnsupportedFeatureException">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API UnsupportedFeatureException
  {
  public:
    UnsupportedFeatureException();
    UnsupportedFeatureException(Aws::Utils::Json::JsonView jsonValue);
    UnsupportedFeatureException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline UnsupportedFeatureException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline UnsupportedFeatureException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline UnsupportedFeatureException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline bool GetCanRetry() const{ return m_canRetry; }

    
    inline bool CanRetryHasBeenSet() const { return m_canRetryHasBeenSet; }

    
    inline void SetCanRetry(bool value) { m_canRetryHasBeenSet = true; m_canRetry = value; }

    
    inline UnsupportedFeatureException& WithCanRetry(bool value) { SetCanRetry(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    bool m_canRetry;
    bool m_canRetryHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
