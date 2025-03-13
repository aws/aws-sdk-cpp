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
  class DescribeRulesPackagesRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API DescribeRulesPackagesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRulesPackages"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN that specifies the rules package that you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRulesPackageArns() const { return m_rulesPackageArns; }
    inline bool RulesPackageArnsHasBeenSet() const { return m_rulesPackageArnsHasBeenSet; }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    void SetRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns = std::forward<RulesPackageArnsT>(value); }
    template<typename RulesPackageArnsT = Aws::Vector<Aws::String>>
    DescribeRulesPackagesRequest& WithRulesPackageArns(RulesPackageArnsT&& value) { SetRulesPackageArns(std::forward<RulesPackageArnsT>(value)); return *this;}
    template<typename RulesPackageArnsT = Aws::String>
    DescribeRulesPackagesRequest& AddRulesPackageArns(RulesPackageArnsT&& value) { m_rulesPackageArnsHasBeenSet = true; m_rulesPackageArns.emplace_back(std::forward<RulesPackageArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The locale that you want to translate a rules package description into.</p>
     */
    inline Locale GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(Locale value) { m_localeHasBeenSet = true; m_locale = value; }
    inline DescribeRulesPackagesRequest& WithLocale(Locale value) { SetLocale(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_rulesPackageArns;
    bool m_rulesPackageArnsHasBeenSet = false;

    Locale m_locale{Locale::NOT_SET};
    bool m_localeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
