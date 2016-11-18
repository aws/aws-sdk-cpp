/*
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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_SUPPORT_API DescribeServicesRequest : public SupportRequest
  {
  public:
    DescribeServicesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A JSON-formatted list of service codes available for AWS services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceCodeList() const{ return m_serviceCodeList; }

    /**
     * <p>A JSON-formatted list of service codes available for AWS services.</p>
     */
    inline void SetServiceCodeList(const Aws::Vector<Aws::String>& value) { m_serviceCodeListHasBeenSet = true; m_serviceCodeList = value; }

    /**
     * <p>A JSON-formatted list of service codes available for AWS services.</p>
     */
    inline void SetServiceCodeList(Aws::Vector<Aws::String>&& value) { m_serviceCodeListHasBeenSet = true; m_serviceCodeList = value; }

    /**
     * <p>A JSON-formatted list of service codes available for AWS services.</p>
     */
    inline DescribeServicesRequest& WithServiceCodeList(const Aws::Vector<Aws::String>& value) { SetServiceCodeList(value); return *this;}

    /**
     * <p>A JSON-formatted list of service codes available for AWS services.</p>
     */
    inline DescribeServicesRequest& WithServiceCodeList(Aws::Vector<Aws::String>&& value) { SetServiceCodeList(value); return *this;}

    /**
     * <p>A JSON-formatted list of service codes available for AWS services.</p>
     */
    inline DescribeServicesRequest& AddServiceCodeList(const Aws::String& value) { m_serviceCodeListHasBeenSet = true; m_serviceCodeList.push_back(value); return *this; }

    /**
     * <p>A JSON-formatted list of service codes available for AWS services.</p>
     */
    inline DescribeServicesRequest& AddServiceCodeList(Aws::String&& value) { m_serviceCodeListHasBeenSet = true; m_serviceCodeList.push_back(value); return *this; }

    /**
     * <p>A JSON-formatted list of service codes available for AWS services.</p>
     */
    inline DescribeServicesRequest& AddServiceCodeList(const char* value) { m_serviceCodeListHasBeenSet = true; m_serviceCodeList.push_back(value); return *this; }

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
    inline DescribeServicesRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline DescribeServicesRequest& WithLanguage(Aws::String&& value) { SetLanguage(value); return *this;}

    /**
     * <p>The ISO 639-1 code for the language in which AWS provides support. AWS
     * Support currently supports English ("en") and Japanese ("ja"). Language
     * parameters must be passed explicitly for operations that take them.</p>
     */
    inline DescribeServicesRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_serviceCodeList;
    bool m_serviceCodeListHasBeenSet;
    Aws::String m_language;
    bool m_languageHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
