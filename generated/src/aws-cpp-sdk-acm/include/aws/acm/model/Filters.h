/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/CertificateExport.h>
#include <aws/acm/model/CertificateManagedBy.h>
#include <aws/acm/model/ExtendedKeyUsageName.h>
#include <aws/acm/model/KeyUsageName.h>
#include <aws/acm/model/KeyAlgorithm.h>
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
namespace ACM
{
namespace Model
{

  /**
   * <p>This structure can be used in the <a>ListCertificates</a> action to filter
   * the output of the certificate list. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/Filters">AWS API
   * Reference</a></p>
   */
  class Filters
  {
  public:
    AWS_ACM_API Filters() = default;
    AWS_ACM_API Filters(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Filters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify one or more <a>ExtendedKeyUsage</a> extension values.</p>
     */
    inline const Aws::Vector<ExtendedKeyUsageName>& GetExtendedKeyUsage() const { return m_extendedKeyUsage; }
    inline bool ExtendedKeyUsageHasBeenSet() const { return m_extendedKeyUsageHasBeenSet; }
    template<typename ExtendedKeyUsageT = Aws::Vector<ExtendedKeyUsageName>>
    void SetExtendedKeyUsage(ExtendedKeyUsageT&& value) { m_extendedKeyUsageHasBeenSet = true; m_extendedKeyUsage = std::forward<ExtendedKeyUsageT>(value); }
    template<typename ExtendedKeyUsageT = Aws::Vector<ExtendedKeyUsageName>>
    Filters& WithExtendedKeyUsage(ExtendedKeyUsageT&& value) { SetExtendedKeyUsage(std::forward<ExtendedKeyUsageT>(value)); return *this;}
    inline Filters& AddExtendedKeyUsage(ExtendedKeyUsageName value) { m_extendedKeyUsageHasBeenSet = true; m_extendedKeyUsage.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify one or more <a>KeyUsage</a> extension values.</p>
     */
    inline const Aws::Vector<KeyUsageName>& GetKeyUsage() const { return m_keyUsage; }
    inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }
    template<typename KeyUsageT = Aws::Vector<KeyUsageName>>
    void SetKeyUsage(KeyUsageT&& value) { m_keyUsageHasBeenSet = true; m_keyUsage = std::forward<KeyUsageT>(value); }
    template<typename KeyUsageT = Aws::Vector<KeyUsageName>>
    Filters& WithKeyUsage(KeyUsageT&& value) { SetKeyUsage(std::forward<KeyUsageT>(value)); return *this;}
    inline Filters& AddKeyUsage(KeyUsageName value) { m_keyUsageHasBeenSet = true; m_keyUsage.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify one or more algorithms that can be used to generate key pairs.</p>
     * <p>Default filtering returns only <code>RSA_1024</code> and
     * <code>RSA_2048</code> certificates that have at least one domain. To return
     * other certificate types, provide the desired type signatures in a
     * comma-separated list. For example, <code>"keyTypes":
     * ["RSA_2048","RSA_4096"]</code> returns both <code>RSA_2048</code> and
     * <code>RSA_4096</code> certificates.</p>
     */
    inline const Aws::Vector<KeyAlgorithm>& GetKeyTypes() const { return m_keyTypes; }
    inline bool KeyTypesHasBeenSet() const { return m_keyTypesHasBeenSet; }
    template<typename KeyTypesT = Aws::Vector<KeyAlgorithm>>
    void SetKeyTypes(KeyTypesT&& value) { m_keyTypesHasBeenSet = true; m_keyTypes = std::forward<KeyTypesT>(value); }
    template<typename KeyTypesT = Aws::Vector<KeyAlgorithm>>
    Filters& WithKeyTypes(KeyTypesT&& value) { SetKeyTypes(std::forward<KeyTypesT>(value)); return *this;}
    inline Filters& AddKeyTypes(KeyAlgorithm value) { m_keyTypesHasBeenSet = true; m_keyTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify <code>ENABLED</code> or <code>DISABLED</code> to identify
     * certificates that can be exported.</p>
     */
    inline CertificateExport GetExportOption() const { return m_exportOption; }
    inline bool ExportOptionHasBeenSet() const { return m_exportOptionHasBeenSet; }
    inline void SetExportOption(CertificateExport value) { m_exportOptionHasBeenSet = true; m_exportOption = value; }
    inline Filters& WithExportOption(CertificateExport value) { SetExportOption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the Amazon Web Services service that manages the certificate
     * issued by ACM.</p>
     */
    inline CertificateManagedBy GetManagedBy() const { return m_managedBy; }
    inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
    inline void SetManagedBy(CertificateManagedBy value) { m_managedByHasBeenSet = true; m_managedBy = value; }
    inline Filters& WithManagedBy(CertificateManagedBy value) { SetManagedBy(value); return *this;}
    ///@}
  private:

    Aws::Vector<ExtendedKeyUsageName> m_extendedKeyUsage;
    bool m_extendedKeyUsageHasBeenSet = false;

    Aws::Vector<KeyUsageName> m_keyUsage;
    bool m_keyUsageHasBeenSet = false;

    Aws::Vector<KeyAlgorithm> m_keyTypes;
    bool m_keyTypesHasBeenSet = false;

    CertificateExport m_exportOption{CertificateExport::NOT_SET};
    bool m_exportOptionHasBeenSet = false;

    CertificateManagedBy m_managedBy{CertificateManagedBy::NOT_SET};
    bool m_managedByHasBeenSet = false;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
