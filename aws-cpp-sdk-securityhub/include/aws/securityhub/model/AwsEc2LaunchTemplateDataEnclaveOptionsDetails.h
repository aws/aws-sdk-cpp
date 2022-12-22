/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Indicates whether the instance is enabled for Amazon Web Services Nitro
   * Enclaves. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataEnclaveOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataEnclaveOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataEnclaveOptionsDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataEnclaveOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataEnclaveOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> If this parameter is set to <code>true</code>, the instance is enabled for
     * Amazon Web Services Nitro Enclaves. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p> If this parameter is set to <code>true</code>, the instance is enabled for
     * Amazon Web Services Nitro Enclaves. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p> If this parameter is set to <code>true</code>, the instance is enabled for
     * Amazon Web Services Nitro Enclaves. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p> If this parameter is set to <code>true</code>, the instance is enabled for
     * Amazon Web Services Nitro Enclaves. </p>
     */
    inline AwsEc2LaunchTemplateDataEnclaveOptionsDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
