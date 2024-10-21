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
    AWS_FMS_API WebACLHasIncompatibleConfigurationViolation();
    AWS_FMS_API WebACLHasIncompatibleConfigurationViolation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API WebACLHasIncompatibleConfigurationViolation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL. </p>
     */
    inline const Aws::String& GetWebACLArn() const{ return m_webACLArn; }
    inline bool WebACLArnHasBeenSet() const { return m_webACLArnHasBeenSet; }
    inline void SetWebACLArn(const Aws::String& value) { m_webACLArnHasBeenSet = true; m_webACLArn = value; }
    inline void SetWebACLArn(Aws::String&& value) { m_webACLArnHasBeenSet = true; m_webACLArn = std::move(value); }
    inline void SetWebACLArn(const char* value) { m_webACLArnHasBeenSet = true; m_webACLArn.assign(value); }
    inline WebACLHasIncompatibleConfigurationViolation& WithWebACLArn(const Aws::String& value) { SetWebACLArn(value); return *this;}
    inline WebACLHasIncompatibleConfigurationViolation& WithWebACLArn(Aws::String&& value) { SetWebACLArn(std::move(value)); return *this;}
    inline WebACLHasIncompatibleConfigurationViolation& WithWebACLArn(const char* value) { SetWebACLArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the problems that Firewall Manager encountered with the web
     * ACL configuration. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline WebACLHasIncompatibleConfigurationViolation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline WebACLHasIncompatibleConfigurationViolation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline WebACLHasIncompatibleConfigurationViolation& WithDescription(const char* value) { SetDescription(value); return *this;}
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
