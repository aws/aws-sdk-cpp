/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains information about a key usage X.509 v3 extension
   * object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCertificateManagerCertificateKeyUsage">AWS
   * API Reference</a></p>
   */
  class AwsCertificateManagerCertificateKeyUsage
  {
  public:
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateKeyUsage();
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateKeyUsage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCertificateManagerCertificateKeyUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key usage extension name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The key usage extension name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The key usage extension name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The key usage extension name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The key usage extension name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The key usage extension name.</p>
     */
    inline AwsCertificateManagerCertificateKeyUsage& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The key usage extension name.</p>
     */
    inline AwsCertificateManagerCertificateKeyUsage& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The key usage extension name.</p>
     */
    inline AwsCertificateManagerCertificateKeyUsage& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
