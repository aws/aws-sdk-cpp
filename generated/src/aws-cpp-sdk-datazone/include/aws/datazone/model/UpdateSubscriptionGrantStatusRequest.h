﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/FailureCause.h>
#include <aws/datazone/model/SubscriptionGrantStatus.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class UpdateSubscriptionGrantStatusRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API UpdateSubscriptionGrantStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscriptionGrantStatus"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the asset the subscription grant status of which is to be
     * updated.</p>
     */
    inline const Aws::String& GetAssetIdentifier() const{ return m_assetIdentifier; }
    inline bool AssetIdentifierHasBeenSet() const { return m_assetIdentifierHasBeenSet; }
    inline void SetAssetIdentifier(const Aws::String& value) { m_assetIdentifierHasBeenSet = true; m_assetIdentifier = value; }
    inline void SetAssetIdentifier(Aws::String&& value) { m_assetIdentifierHasBeenSet = true; m_assetIdentifier = std::move(value); }
    inline void SetAssetIdentifier(const char* value) { m_assetIdentifierHasBeenSet = true; m_assetIdentifier.assign(value); }
    inline UpdateSubscriptionGrantStatusRequest& WithAssetIdentifier(const Aws::String& value) { SetAssetIdentifier(value); return *this;}
    inline UpdateSubscriptionGrantStatusRequest& WithAssetIdentifier(Aws::String&& value) { SetAssetIdentifier(std::move(value)); return *this;}
    inline UpdateSubscriptionGrantStatusRequest& WithAssetIdentifier(const char* value) { SetAssetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription grant
     * status is to be updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline UpdateSubscriptionGrantStatusRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline UpdateSubscriptionGrantStatusRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline UpdateSubscriptionGrantStatusRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const FailureCause& GetFailureCause() const{ return m_failureCause; }
    inline bool FailureCauseHasBeenSet() const { return m_failureCauseHasBeenSet; }
    inline void SetFailureCause(const FailureCause& value) { m_failureCauseHasBeenSet = true; m_failureCause = value; }
    inline void SetFailureCause(FailureCause&& value) { m_failureCauseHasBeenSet = true; m_failureCause = std::move(value); }
    inline UpdateSubscriptionGrantStatusRequest& WithFailureCause(const FailureCause& value) { SetFailureCause(value); return *this;}
    inline UpdateSubscriptionGrantStatusRequest& WithFailureCause(FailureCause&& value) { SetFailureCause(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription grant the status of which is to be
     * updated.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline UpdateSubscriptionGrantStatusRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline UpdateSubscriptionGrantStatusRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline UpdateSubscriptionGrantStatusRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status to be updated as part of the
     * <code>UpdateSubscriptionGrantStatus</code> action.</p>
     */
    inline const SubscriptionGrantStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SubscriptionGrantStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SubscriptionGrantStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateSubscriptionGrantStatusRequest& WithStatus(const SubscriptionGrantStatus& value) { SetStatus(value); return *this;}
    inline UpdateSubscriptionGrantStatusRequest& WithStatus(SubscriptionGrantStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target name to be updated as part of the
     * <code>UpdateSubscriptionGrantStatus</code> action.</p>
     */
    inline const Aws::String& GetTargetName() const{ return m_targetName; }
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
    inline void SetTargetName(const Aws::String& value) { m_targetNameHasBeenSet = true; m_targetName = value; }
    inline void SetTargetName(Aws::String&& value) { m_targetNameHasBeenSet = true; m_targetName = std::move(value); }
    inline void SetTargetName(const char* value) { m_targetNameHasBeenSet = true; m_targetName.assign(value); }
    inline UpdateSubscriptionGrantStatusRequest& WithTargetName(const Aws::String& value) { SetTargetName(value); return *this;}
    inline UpdateSubscriptionGrantStatusRequest& WithTargetName(Aws::String&& value) { SetTargetName(std::move(value)); return *this;}
    inline UpdateSubscriptionGrantStatusRequest& WithTargetName(const char* value) { SetTargetName(value); return *this;}
    ///@}
  private:

    Aws::String m_assetIdentifier;
    bool m_assetIdentifierHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    FailureCause m_failureCause;
    bool m_failureCauseHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    SubscriptionGrantStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
