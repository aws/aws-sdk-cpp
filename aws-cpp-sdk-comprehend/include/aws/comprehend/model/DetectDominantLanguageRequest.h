﻿/*
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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class AWS_COMPREHEND_API DetectDominantLanguageRequest : public ComprehendRequest
  {
  public:
    DetectDominantLanguageRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectDominantLanguage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A UTF-8 text string. Each string should contain at least 20 characters and
     * must contain fewer that 5,000 bytes of UTF-8 encoded characters.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>A UTF-8 text string. Each string should contain at least 20 characters and
     * must contain fewer that 5,000 bytes of UTF-8 encoded characters.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>A UTF-8 text string. Each string should contain at least 20 characters and
     * must contain fewer that 5,000 bytes of UTF-8 encoded characters.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>A UTF-8 text string. Each string should contain at least 20 characters and
     * must contain fewer that 5,000 bytes of UTF-8 encoded characters.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>A UTF-8 text string. Each string should contain at least 20 characters and
     * must contain fewer that 5,000 bytes of UTF-8 encoded characters.</p>
     */
    inline DetectDominantLanguageRequest& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>A UTF-8 text string. Each string should contain at least 20 characters and
     * must contain fewer that 5,000 bytes of UTF-8 encoded characters.</p>
     */
    inline DetectDominantLanguageRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>A UTF-8 text string. Each string should contain at least 20 characters and
     * must contain fewer that 5,000 bytes of UTF-8 encoded characters.</p>
     */
    inline DetectDominantLanguageRequest& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
