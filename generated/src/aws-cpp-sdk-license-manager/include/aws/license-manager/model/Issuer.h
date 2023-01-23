/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Details about the issuer of a license.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/Issuer">AWS
   * API Reference</a></p>
   */
  class Issuer
  {
  public:
    AWS_LICENSEMANAGER_API Issuer();
    AWS_LICENSEMANAGER_API Issuer(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Issuer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Issuer name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Issuer name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Issuer name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Issuer name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Issuer name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Issuer name.</p>
     */
    inline Issuer& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Issuer name.</p>
     */
    inline Issuer& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Issuer name.</p>
     */
    inline Issuer& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Asymmetric KMS key from Key Management Service. The KMS key must have a key
     * usage of sign and verify, and support the RSASSA-PSS SHA-256 signing
     * algorithm.</p>
     */
    inline const Aws::String& GetSignKey() const{ return m_signKey; }

    /**
     * <p>Asymmetric KMS key from Key Management Service. The KMS key must have a key
     * usage of sign and verify, and support the RSASSA-PSS SHA-256 signing
     * algorithm.</p>
     */
    inline bool SignKeyHasBeenSet() const { return m_signKeyHasBeenSet; }

    /**
     * <p>Asymmetric KMS key from Key Management Service. The KMS key must have a key
     * usage of sign and verify, and support the RSASSA-PSS SHA-256 signing
     * algorithm.</p>
     */
    inline void SetSignKey(const Aws::String& value) { m_signKeyHasBeenSet = true; m_signKey = value; }

    /**
     * <p>Asymmetric KMS key from Key Management Service. The KMS key must have a key
     * usage of sign and verify, and support the RSASSA-PSS SHA-256 signing
     * algorithm.</p>
     */
    inline void SetSignKey(Aws::String&& value) { m_signKeyHasBeenSet = true; m_signKey = std::move(value); }

    /**
     * <p>Asymmetric KMS key from Key Management Service. The KMS key must have a key
     * usage of sign and verify, and support the RSASSA-PSS SHA-256 signing
     * algorithm.</p>
     */
    inline void SetSignKey(const char* value) { m_signKeyHasBeenSet = true; m_signKey.assign(value); }

    /**
     * <p>Asymmetric KMS key from Key Management Service. The KMS key must have a key
     * usage of sign and verify, and support the RSASSA-PSS SHA-256 signing
     * algorithm.</p>
     */
    inline Issuer& WithSignKey(const Aws::String& value) { SetSignKey(value); return *this;}

    /**
     * <p>Asymmetric KMS key from Key Management Service. The KMS key must have a key
     * usage of sign and verify, and support the RSASSA-PSS SHA-256 signing
     * algorithm.</p>
     */
    inline Issuer& WithSignKey(Aws::String&& value) { SetSignKey(std::move(value)); return *this;}

    /**
     * <p>Asymmetric KMS key from Key Management Service. The KMS key must have a key
     * usage of sign and verify, and support the RSASSA-PSS SHA-256 signing
     * algorithm.</p>
     */
    inline Issuer& WithSignKey(const char* value) { SetSignKey(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_signKey;
    bool m_signKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
