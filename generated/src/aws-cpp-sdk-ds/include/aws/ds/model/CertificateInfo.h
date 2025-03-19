/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/CertificateState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ds/model/CertificateType.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains general information about a certificate.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CertificateInfo">AWS
   * API Reference</a></p>
   */
  class CertificateInfo
  {
  public:
    AWS_DIRECTORYSERVICE_API CertificateInfo() = default;
    AWS_DIRECTORYSERVICE_API CertificateInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API CertificateInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the certificate.</p>
     */
    inline const Aws::String& GetCertificateId() const { return m_certificateId; }
    inline bool CertificateIdHasBeenSet() const { return m_certificateIdHasBeenSet; }
    template<typename CertificateIdT = Aws::String>
    void SetCertificateId(CertificateIdT&& value) { m_certificateIdHasBeenSet = true; m_certificateId = std::forward<CertificateIdT>(value); }
    template<typename CertificateIdT = Aws::String>
    CertificateInfo& WithCertificateId(CertificateIdT&& value) { SetCertificateId(std::forward<CertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The common name for the certificate.</p>
     */
    inline const Aws::String& GetCommonName() const { return m_commonName; }
    inline bool CommonNameHasBeenSet() const { return m_commonNameHasBeenSet; }
    template<typename CommonNameT = Aws::String>
    void SetCommonName(CommonNameT&& value) { m_commonNameHasBeenSet = true; m_commonName = std::forward<CommonNameT>(value); }
    template<typename CommonNameT = Aws::String>
    CertificateInfo& WithCommonName(CommonNameT&& value) { SetCommonName(std::forward<CommonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the certificate.</p>
     */
    inline CertificateState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CertificateState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CertificateInfo& WithState(CertificateState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the certificate will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiryDateTime() const { return m_expiryDateTime; }
    inline bool ExpiryDateTimeHasBeenSet() const { return m_expiryDateTimeHasBeenSet; }
    template<typename ExpiryDateTimeT = Aws::Utils::DateTime>
    void SetExpiryDateTime(ExpiryDateTimeT&& value) { m_expiryDateTimeHasBeenSet = true; m_expiryDateTime = std::forward<ExpiryDateTimeT>(value); }
    template<typename ExpiryDateTimeT = Aws::Utils::DateTime>
    CertificateInfo& WithExpiryDateTime(ExpiryDateTimeT&& value) { SetExpiryDateTime(std::forward<ExpiryDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function that the registered certificate performs. Valid values include
     * <code>ClientLDAPS</code> or <code>ClientCertAuth</code>. The default value is
     * <code>ClientLDAPS</code>.</p>
     */
    inline CertificateType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CertificateType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CertificateInfo& WithType(CertificateType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_certificateId;
    bool m_certificateIdHasBeenSet = false;

    Aws::String m_commonName;
    bool m_commonNameHasBeenSet = false;

    CertificateState m_state{CertificateState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_expiryDateTime{};
    bool m_expiryDateTimeHasBeenSet = false;

    CertificateType m_type{CertificateType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
