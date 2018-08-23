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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Section.h>
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
namespace Rekognition
{
namespace Model
{

  class AWS_REKOGNITION_API Warning
  {
  public:
    Warning();
    Warning(Aws::Utils::Json::JsonView jsonValue);
    Warning& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    
    inline Warning& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    
    inline Warning& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    
    inline Warning& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline Warning& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline Warning& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline Warning& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::Vector<Section>& GetSections() const{ return m_sections; }

    
    inline void SetSections(const Aws::Vector<Section>& value) { m_sectionsHasBeenSet = true; m_sections = value; }

    
    inline void SetSections(Aws::Vector<Section>&& value) { m_sectionsHasBeenSet = true; m_sections = std::move(value); }

    
    inline Warning& WithSections(const Aws::Vector<Section>& value) { SetSections(value); return *this;}

    
    inline Warning& WithSections(Aws::Vector<Section>&& value) { SetSections(std::move(value)); return *this;}

    
    inline Warning& AddSections(const Section& value) { m_sectionsHasBeenSet = true; m_sections.push_back(value); return *this; }

    
    inline Warning& AddSections(Section&& value) { m_sectionsHasBeenSet = true; m_sections.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::Vector<Section> m_sections;
    bool m_sectionsHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
