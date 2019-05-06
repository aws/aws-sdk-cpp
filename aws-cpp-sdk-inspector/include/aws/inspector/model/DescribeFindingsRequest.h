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
  class AWS_INSPECTOR_API DescribeFindingsRequest : public InspectorRequest
  {
  public:
    DescribeFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFindings"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN that specifies the finding that you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingArns() const{ return m_findingArns; }

    /**
     * <p>The ARN that specifies the finding that you want to describe.</p>
     */
    inline bool FindingArnsHasBeenSet() const { return m_findingArnsHasBeenSet; }

    /**
     * <p>The ARN that specifies the finding that you want to describe.</p>
     */
    inline void SetFindingArns(const Aws::Vector<Aws::String>& value) { m_findingArnsHasBeenSet = true; m_findingArns = value; }

    /**
     * <p>The ARN that specifies the finding that you want to describe.</p>
     */
    inline void SetFindingArns(Aws::Vector<Aws::String>&& value) { m_findingArnsHasBeenSet = true; m_findingArns = std::move(value); }

    /**
     * <p>The ARN that specifies the finding that you want to describe.</p>
     */
    inline DescribeFindingsRequest& WithFindingArns(const Aws::Vector<Aws::String>& value) { SetFindingArns(value); return *this;}

    /**
     * <p>The ARN that specifies the finding that you want to describe.</p>
     */
    inline DescribeFindingsRequest& WithFindingArns(Aws::Vector<Aws::String>&& value) { SetFindingArns(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the finding that you want to describe.</p>
     */
    inline DescribeFindingsRequest& AddFindingArns(const Aws::String& value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(value); return *this; }

    /**
     * <p>The ARN that specifies the finding that you want to describe.</p>
     */
    inline DescribeFindingsRequest& AddFindingArns(Aws::String&& value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARN that specifies the finding that you want to describe.</p>
     */
    inline DescribeFindingsRequest& AddFindingArns(const char* value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(value); return *this; }


    /**
     * <p>The locale into which you want to translate a finding description,
     * recommendation, and the short description that identifies the finding.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }

    /**
     * <p>The locale into which you want to translate a finding description,
     * recommendation, and the short description that identifies the finding.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>The locale into which you want to translate a finding description,
     * recommendation, and the short description that identifies the finding.</p>
     */
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The locale into which you want to translate a finding description,
     * recommendation, and the short description that identifies the finding.</p>
     */
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>The locale into which you want to translate a finding description,
     * recommendation, and the short description that identifies the finding.</p>
     */
    inline DescribeFindingsRequest& WithLocale(const Locale& value) { SetLocale(value); return *this;}

    /**
     * <p>The locale into which you want to translate a finding description,
     * recommendation, and the short description that identifies the finding.</p>
     */
    inline DescribeFindingsRequest& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_findingArns;
    bool m_findingArnsHasBeenSet;

    Locale m_locale;
    bool m_localeHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
