/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>

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
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Contains configuration information for the default behavior of the CRL
   * Distribution Point (CDP) extension in certificates issued by your CA. This
   * extension contains a link to download the CRL, so you can check whether a
   * certificate has been revoked. To choose whether you want this extension omitted
   * or not in certificates issued by your CA, you can set the <b>OmitExtension</b>
   * parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/CrlDistributionPointExtensionConfiguration">AWS
   * API Reference</a></p>
   */
  class CrlDistributionPointExtensionConfiguration
  {
  public:
    AWS_ACMPCA_API CrlDistributionPointExtensionConfiguration();
    AWS_ACMPCA_API CrlDistributionPointExtensionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API CrlDistributionPointExtensionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configures whether the CRL Distribution Point extension should be populated
     * with the default URL to the CRL. If set to <code>true</code>, then the CDP
     * extension will not be present in any certificates issued by that CA unless
     * otherwise specified through CSR or API passthrough.</p>  <p>Only set this
     * if you have another way to distribute the CRL Distribution Points ffor
     * certificates issued by your CA, such as the Matter Distributed Compliance
     * Ledger</p> <p>This configuration cannot be enabled with a custom CNAME set.</p>
     * 
     */
    inline bool GetOmitExtension() const{ return m_omitExtension; }

    /**
     * <p>Configures whether the CRL Distribution Point extension should be populated
     * with the default URL to the CRL. If set to <code>true</code>, then the CDP
     * extension will not be present in any certificates issued by that CA unless
     * otherwise specified through CSR or API passthrough.</p>  <p>Only set this
     * if you have another way to distribute the CRL Distribution Points ffor
     * certificates issued by your CA, such as the Matter Distributed Compliance
     * Ledger</p> <p>This configuration cannot be enabled with a custom CNAME set.</p>
     * 
     */
    inline bool OmitExtensionHasBeenSet() const { return m_omitExtensionHasBeenSet; }

    /**
     * <p>Configures whether the CRL Distribution Point extension should be populated
     * with the default URL to the CRL. If set to <code>true</code>, then the CDP
     * extension will not be present in any certificates issued by that CA unless
     * otherwise specified through CSR or API passthrough.</p>  <p>Only set this
     * if you have another way to distribute the CRL Distribution Points ffor
     * certificates issued by your CA, such as the Matter Distributed Compliance
     * Ledger</p> <p>This configuration cannot be enabled with a custom CNAME set.</p>
     * 
     */
    inline void SetOmitExtension(bool value) { m_omitExtensionHasBeenSet = true; m_omitExtension = value; }

    /**
     * <p>Configures whether the CRL Distribution Point extension should be populated
     * with the default URL to the CRL. If set to <code>true</code>, then the CDP
     * extension will not be present in any certificates issued by that CA unless
     * otherwise specified through CSR or API passthrough.</p>  <p>Only set this
     * if you have another way to distribute the CRL Distribution Points ffor
     * certificates issued by your CA, such as the Matter Distributed Compliance
     * Ledger</p> <p>This configuration cannot be enabled with a custom CNAME set.</p>
     * 
     */
    inline CrlDistributionPointExtensionConfiguration& WithOmitExtension(bool value) { SetOmitExtension(value); return *this;}

  private:

    bool m_omitExtension;
    bool m_omitExtensionHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
