/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>The violation details for a web ACL whose configuration is incompatible with
   * the Firewall Manager policy. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/WebACLHasIncompatibleConfigurationViolation">AWS
   * API Reference</a></p>
   */
  class WebACLHasIncompatibleConfigurationViolation
  {
  public:
    AWS_FMS_API WebACLHasIncompatibleConfigurationViolation() = default;
    AWS_FMS_API WebACLHasIncompatibleConfigurationViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API WebACLHasIncompatibleConfigurationViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL. </p>
     */
    inline const Aws::String& GetWebACLArn() const { return m_webACLArn; }
    inline bool WebACLArnHasBeenSet() const { return m_webACLArnHasBeenSet; }
    template<typename WebACLArnT = Aws::String>
    void SetWebACLArn(WebACLArnT&& value) { m_webACLArnHasBeenSet = true; m_webACLArn = std::forward<WebACLArnT>(value); }
    template<typename WebACLArnT = Aws::String>
    WebACLHasIncompatibleConfigurationViolation& WithWebACLArn(WebACLArnT&& value) { SetWebACLArn(std::forward<WebACLArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the problems that Firewall Manager encountered with the web
     * ACL configuration. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WebACLHasIncompatibleConfigurationViolation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_webACLArn;
    bool m_webACLArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
