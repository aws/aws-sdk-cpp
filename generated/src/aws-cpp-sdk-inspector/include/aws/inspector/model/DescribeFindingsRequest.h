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
    AWS_INSPECTOR_API DescribeFindingsRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetFindingArns() const { return m_findingArns; }
    inline bool FindingArnsHasBeenSet() const { return m_findingArnsHasBeenSet; }
    template<typename FindingArnsT = Aws::Vector<Aws::String>>
    void SetFindingArns(FindingArnsT&& value) { m_findingArnsHasBeenSet = true; m_findingArns = std::forward<FindingArnsT>(value); }
    template<typename FindingArnsT = Aws::Vector<Aws::String>>
    DescribeFindingsRequest& WithFindingArns(FindingArnsT&& value) { SetFindingArns(std::forward<FindingArnsT>(value)); return *this;}
    template<typename FindingArnsT = Aws::String>
    DescribeFindingsRequest& AddFindingArns(FindingArnsT&& value) { m_findingArnsHasBeenSet = true; m_findingArns.emplace_back(std::forward<FindingArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The locale into which you want to translate a finding description,
     * recommendation, and the short description that identifies the finding.</p>
     */
    inline Locale GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(Locale value) { m_localeHasBeenSet = true; m_locale = value; }
    inline DescribeFindingsRequest& WithLocale(Locale value) { SetLocale(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_findingArns;
    bool m_findingArnsHasBeenSet = false;

    Locale m_locale{Locale::NOT_SET};
    bool m_localeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
