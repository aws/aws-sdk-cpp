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
  class DescribeExclusionsRequest : public InspectorRequest
  {
  public:
    AWS_INSPECTOR_API DescribeExclusionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExclusions"; }

    AWS_INSPECTOR_API Aws::String SerializePayload() const override;

    AWS_INSPECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The list of ARNs that specify the exclusions that you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusionArns() const { return m_exclusionArns; }
    inline bool ExclusionArnsHasBeenSet() const { return m_exclusionArnsHasBeenSet; }
    template<typename ExclusionArnsT = Aws::Vector<Aws::String>>
    void SetExclusionArns(ExclusionArnsT&& value) { m_exclusionArnsHasBeenSet = true; m_exclusionArns = std::forward<ExclusionArnsT>(value); }
    template<typename ExclusionArnsT = Aws::Vector<Aws::String>>
    DescribeExclusionsRequest& WithExclusionArns(ExclusionArnsT&& value) { SetExclusionArns(std::forward<ExclusionArnsT>(value)); return *this;}
    template<typename ExclusionArnsT = Aws::String>
    DescribeExclusionsRequest& AddExclusionArns(ExclusionArnsT&& value) { m_exclusionArnsHasBeenSet = true; m_exclusionArns.emplace_back(std::forward<ExclusionArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The locale into which you want to translate the exclusion's title,
     * description, and recommendation.</p>
     */
    inline Locale GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    inline void SetLocale(Locale value) { m_localeHasBeenSet = true; m_locale = value; }
    inline DescribeExclusionsRequest& WithLocale(Locale value) { SetLocale(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_exclusionArns;
    bool m_exclusionArnsHasBeenSet = false;

    Locale m_locale{Locale::NOT_SET};
    bool m_localeHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
