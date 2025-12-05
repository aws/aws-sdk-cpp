/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAMRequest.h>
#include <aws/iam/IAM_EXPORTS.h>

#include <utility>

namespace Aws {
namespace IAM {
namespace Model {

/**
 */
class GetHumanReadableSummaryRequest : public IAMRequest {
 public:
  AWS_IAM_API GetHumanReadableSummaryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetHumanReadableSummary"; }

  AWS_IAM_API Aws::String SerializePayload() const override;

 protected:
  AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>Arn of the entity to be summarized. At this time, the only supported entity
   * type is <code>delegation-request</code> </p>
   */
  inline const Aws::String& GetEntityArn() const { return m_entityArn; }
  inline bool EntityArnHasBeenSet() const { return m_entityArnHasBeenSet; }
  template <typename EntityArnT = Aws::String>
  void SetEntityArn(EntityArnT&& value) {
    m_entityArnHasBeenSet = true;
    m_entityArn = std::forward<EntityArnT>(value);
  }
  template <typename EntityArnT = Aws::String>
  GetHumanReadableSummaryRequest& WithEntityArn(EntityArnT&& value) {
    SetEntityArn(std::forward<EntityArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string representing the locale to use for the summary generation. The
   * supported locale strings are based on the <a
   * href="/awsconsolehelpdocs/latest/gsg/change-language.html#supported-languages">
   * Supported languages of the Amazon Web Services Management Console </a>.</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  GetHumanReadableSummaryRequest& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_entityArn;

  Aws::String m_locale;
  bool m_entityArnHasBeenSet = false;
  bool m_localeHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
