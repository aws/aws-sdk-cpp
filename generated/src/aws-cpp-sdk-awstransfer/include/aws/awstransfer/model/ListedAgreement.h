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
    AWS_TRANSFER_API ListedAgreement();
    AWS_TRANSFER_API ListedAgreement(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedAgreement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the specified agreement.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified agreement.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified agreement.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified agreement.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified agreement.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the specified agreement.</p>
     */
    inline ListedAgreement& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified agreement.</p>
     */
    inline ListedAgreement& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the specified agreement.</p>
     */
    inline ListedAgreement& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const{ return m_agreementId; }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline void SetAgreementId(const Aws::String& value) { m_agreementIdHasBeenSet = true; m_agreementId = value; }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline void SetAgreementId(Aws::String&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::move(value); }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline void SetAgreementId(const char* value) { m_agreementIdHasBeenSet = true; m_agreementId.assign(value); }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline ListedAgreement& WithAgreementId(const Aws::String& value) { SetAgreementId(value); return *this;}

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline ListedAgreement& WithAgreementId(Aws::String&& value) { SetAgreementId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline ListedAgreement& WithAgreementId(const char* value) { SetAgreementId(value); return *this;}


    /**
     * <p>The current description for the agreement. You can change it by calling the
     * <code>UpdateAgreement</code> operation and providing a new description. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The current description for the agreement. You can change it by calling the
     * <code>UpdateAgreement</code> operation and providing a new description. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The current description for the agreement. You can change it by calling the
     * <code>UpdateAgreement</code> operation and providing a new description. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The current description for the agreement. You can change it by calling the
     * <code>UpdateAgreement</code> operation and providing a new description. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The current description for the agreement. You can change it by calling the
     * <code>UpdateAgreement</code> operation and providing a new description. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The current description for the agreement. You can change it by calling the
     * <code>UpdateAgreement</code> operation and providing a new description. </p>
     */
    inline ListedAgreement& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The current description for the agreement. You can change it by calling the
     * <code>UpdateAgreement</code> operation and providing a new description. </p>
     */
    inline ListedAgreement& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The current description for the agreement. You can change it by calling the
     * <code>UpdateAgreement</code> operation and providing a new description. </p>
     */
    inline ListedAgreement& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The agreement can be either <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline const AgreementStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The agreement can be either <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The agreement can be either <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(const AgreementStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The agreement can be either <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(AgreementStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The agreement can be either <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline ListedAgreement& WithStatus(const AgreementStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The agreement can be either <code>ACTIVE</code> or <code>INACTIVE</code>.</p>
     */
    inline ListedAgreement& WithStatus(AgreementStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the agreement.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The unique identifier for the agreement.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>The unique identifier for the agreement.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>The unique identifier for the agreement.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>The unique identifier for the agreement.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>The unique identifier for the agreement.</p>
     */
    inline ListedAgreement& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The unique identifier for the agreement.</p>
     */
    inline ListedAgreement& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the agreement.</p>
     */
    inline ListedAgreement& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline const Aws::String& GetLocalProfileId() const{ return m_localProfileId; }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline bool LocalProfileIdHasBeenSet() const { return m_localProfileIdHasBeenSet; }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline void SetLocalProfileId(const Aws::String& value) { m_localProfileIdHasBeenSet = true; m_localProfileId = value; }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline void SetLocalProfileId(Aws::String&& value) { m_localProfileIdHasBeenSet = true; m_localProfileId = std::move(value); }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline void SetLocalProfileId(const char* value) { m_localProfileIdHasBeenSet = true; m_localProfileId.assign(value); }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline ListedAgreement& WithLocalProfileId(const Aws::String& value) { SetLocalProfileId(value); return *this;}

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline ListedAgreement& WithLocalProfileId(Aws::String&& value) { SetLocalProfileId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline ListedAgreement& WithLocalProfileId(const char* value) { SetLocalProfileId(value); return *this;}


    /**
     * <p>A unique identifier for the partner profile.</p>
     */
    inline const Aws::String& GetPartnerProfileId() const{ return m_partnerProfileId; }

    /**
     * <p>A unique identifier for the partner profile.</p>
     */
    inline bool PartnerProfileIdHasBeenSet() const { return m_partnerProfileIdHasBeenSet; }

    /**
     * <p>A unique identifier for the partner profile.</p>
     */
    inline void SetPartnerProfileId(const Aws::String& value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId = value; }

    /**
     * <p>A unique identifier for the partner profile.</p>
     */
    inline void SetPartnerProfileId(Aws::String&& value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId = std::move(value); }

    /**
     * <p>A unique identifier for the partner profile.</p>
     */
    inline void SetPartnerProfileId(const char* value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId.assign(value); }

    /**
     * <p>A unique identifier for the partner profile.</p>
     */
    inline ListedAgreement& WithPartnerProfileId(const Aws::String& value) { SetPartnerProfileId(value); return *this;}

    /**
     * <p>A unique identifier for the partner profile.</p>
     */
    inline ListedAgreement& WithPartnerProfileId(Aws::String&& value) { SetPartnerProfileId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the partner profile.</p>
     */
    inline ListedAgreement& WithPartnerProfileId(const char* value) { SetPartnerProfileId(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_agreementId;
    bool m_agreementIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AgreementStatusType m_status;
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
