﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_SUPPORT_API DescribeTrustedAdvisorCheckResultRequest : public SupportRequest
  {
  public:
    DescribeTrustedAdvisorCheckResultRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetCheckId() const{ return m_checkId; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetCheckId(const Aws::String& value) { m_checkIdHasBeenSet = true; m_checkId = value; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetCheckId(Aws::String&& value) { m_checkIdHasBeenSet = true; m_checkId = value; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetCheckId(const char* value) { m_checkIdHasBeenSet = true; m_checkId.assign(value); }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline DescribeTrustedAdvisorCheckResultRequest& WithCheckId(const Aws::String& value) { SetCheckId(value); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline DescribeTrustedAdvisorCheckResultRequest& WithCheckId(Aws::String&& value) { SetCheckId(value); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline DescribeTrustedAdvisorCheckResultRequest& WithCheckId(const char* value) { SetCheckId(value); return *this;}

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline DescribeTrustedAdvisorCheckResultRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline DescribeTrustedAdvisorCheckResultRequest& WithLanguage(Aws::String&& value) { SetLanguage(value); return *this;}

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline DescribeTrustedAdvisorCheckResultRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}

  private:
    Aws::String m_checkId;
    bool m_checkIdHasBeenSet;
    Aws::String m_language;
    bool m_languageHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
