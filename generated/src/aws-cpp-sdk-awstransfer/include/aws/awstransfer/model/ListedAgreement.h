/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/AgreementStatusType.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Describes the properties of an agreement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListedAgreement">AWS
   * API Reference</a></p>
   */
  class ListedAgreement
  {
  public:
    AWS_TRANSFER_API ListedAgreement() = default;
    AWS_TRANSFER_API ListedAgreement(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedAgreement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the specified agreement.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListedAgreement& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const { return m_agreementId; }
    inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
    template<typename AgreementIdT = Aws::String>
    void SetAgreementId(AgreementIdT&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::forward<AgreementIdT>(value); }
    template<typename AgreementIdT = Aws::String>
    ListedAgreement& WithAgreementId(AgreementIdT&& value) { SetAgreementId(std::forward<AgreementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current description for the agreement. You can change it by calling the
     * <code>UpdateAgreement</code> operation and providing a new description. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ListedAgreement& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The agreement can be either <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline AgreementStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AgreementStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListedAgreement& WithStatus(AgreementStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the agreement.</p>
     */
    inline const Aws::String& GetServerId() const { return m_serverId; }
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
    template<typename ServerIdT = Aws::String>
    void SetServerId(ServerIdT&& value) { m_serverIdHasBeenSet = true; m_serverId = std::forward<ServerIdT>(value); }
    template<typename ServerIdT = Aws::String>
    ListedAgreement& WithServerId(ServerIdT&& value) { SetServerId(std::forward<ServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline const Aws::String& GetLocalProfileId() const { return m_localProfileId; }
    inline bool LocalProfileIdHasBeenSet() const { return m_localProfileIdHasBeenSet; }
    template<typename LocalProfileIdT = Aws::String>
    void SetLocalProfileId(LocalProfileIdT&& value) { m_localProfileIdHasBeenSet = true; m_localProfileId = std::forward<LocalProfileIdT>(value); }
    template<typename LocalProfileIdT = Aws::String>
    ListedAgreement& WithLocalProfileId(LocalProfileIdT&& value) { SetLocalProfileId(std::forward<LocalProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the partner profile.</p>
     */
    inline const Aws::String& GetPartnerProfileId() const { return m_partnerProfileId; }
    inline bool PartnerProfileIdHasBeenSet() const { return m_partnerProfileIdHasBeenSet; }
    template<typename PartnerProfileIdT = Aws::String>
    void SetPartnerProfileId(PartnerProfileIdT&& value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId = std::forward<PartnerProfileIdT>(value); }
    template<typename PartnerProfileIdT = Aws::String>
    ListedAgreement& WithPartnerProfileId(PartnerProfileIdT&& value) { SetPartnerProfileId(std::forward<PartnerProfileIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_agreementId;
    bool m_agreementIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AgreementStatusType m_status{AgreementStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_localProfileId;
    bool m_localProfileIdHasBeenSet = false;

    Aws::String m_partnerProfileId;
    bool m_partnerProfileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
