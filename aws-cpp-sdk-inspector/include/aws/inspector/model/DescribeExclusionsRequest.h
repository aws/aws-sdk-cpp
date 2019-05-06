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
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/Locale.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API DescribeExclusionsRequest : public InspectorRequest
  {
  public:
    DescribeExclusionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExclusions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of ARNs that specify the exclusions that you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionArns() const{ return m_exclusionArns; }

    /**
     * <p>The list of ARNs that specify the exclusions that you want to describe.</p>
     */
    inline bool ExclusionArnsHasBeenSet() const { return m_exclusionArnsHasBeenSet; }

    /**
     * <p>The list of ARNs that specify the exclusions that you want to describe.</p>
     */
    inline void SetExclusionArns(const Aws::Vector<Aws::String>& value) { m_exclusionArnsHasBeenSet = true; m_exclusionArns = value; }

    /**
     * <p>The list of ARNs that specify the exclusions that you want to describe.</p>
     */
    inline void SetExclusionArns(Aws::Vector<Aws::String>&& value) { m_exclusionArnsHasBeenSet = true; m_exclusionArns = std::move(value); }

    /**
     * <p>The list of ARNs that specify the exclusions that you want to describe.</p>
     */
    inline DescribeExclusionsRequest& WithExclusionArns(const Aws::Vector<Aws::String>& value) { SetExclusionArns(value); return *this;}

    /**
     * <p>The list of ARNs that specify the exclusions that you want to describe.</p>
     */
    inline DescribeExclusionsRequest& WithExclusionArns(Aws::Vector<Aws::String>&& value) { SetExclusionArns(std::move(value)); return *this;}

    /**
     * <p>The list of ARNs that specify the exclusions that you want to describe.</p>
     */
    inline DescribeExclusionsRequest& AddExclusionArns(const Aws::String& value) { m_exclusionArnsHasBeenSet = true; m_exclusionArns.push_back(value); return *this; }

    /**
     * <p>The list of ARNs that specify the exclusions that you want to describe.</p>
     */
    inline DescribeExclusionsRequest& AddExclusionArns(Aws::String&& value) { m_exclusionArnsHasBeenSet = true; m_exclusionArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of ARNs that specify the exclusions that you want to describe.</p>
     */
    inline DescribeExclusionsRequest& AddExclusionArns(const char* value) { m_exclusionArnsHasBeenSet = true; m_exclusionArns.push_back(value); return *this; }


    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline DescribeExclusionsRequest& WithLocale(const Locale& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline DescribeExclusionsRequest& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_exclusionArns;
    bool m_exclusionArnsHasBeenSet;

    Locale m_locale;
    bool m_localeHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
