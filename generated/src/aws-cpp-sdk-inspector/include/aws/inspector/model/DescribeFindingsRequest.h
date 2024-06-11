/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeFindingsRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API DescribeFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFindings"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN that specifies the finding that you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFindingArns() const{ return m_findingArns; }
    inline bool FindingArnsHasBeenSet() const { return m_findingArnsHasBeenSet; }
    inline void SetFindingArns(const Aws::Vector<Aws::String>& value) { m_findingArnsHasBeenSet = true; m_findingArns = value; }
    inline void SetFindingArns(Aws::Vector<Aws::String>&& value) { m_findingArnsHasBeenSet = true; m_findingArns = std::move(value); }
    inline DescribeFindingsRequest& WithFindingArns(const Aws::Vector<Aws::String>& value) { SetFindingArns(value); return *this;}
    inline DescribeFindingsRequest& WithFindingArns(Aws::Vector<Aws::String>&& value) { SetFindingArns(std::move(value)); return *this;}
    inline DescribeFindingsRequest& AddFindingArns(const Aws::String& value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(value); return *this; }
    inline DescribeFindingsRequest& AddFindingArns(Aws::String&& value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(std::move(value)); return *this; }
    inline DescribeFindingsRequest& AddFindingArns(const char* value) { m_findingArnsHasBeenSet = true; m_findingArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The locale into which you want to translate a finding description,
     * recommendation, and the short description that identifies the finding.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }
    inline DescribeFindingsRequest& WithLocale(const Locale& value) { SetLocale(value); return *this;}
    inline DescribeFindingsRequest& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_findingArns;
    bool m_findingArnsHasBeenSet = false;

    Locale m_locale;
    bool m_localeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
