/**
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
    AWS_DATAZONE_API UpdateSubscriptionGrantStatusRequest() = default;

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
    inline const Aws::String& GetAssetIdentifier() const { return m_assetIdentifier; }
    inline bool AssetIdentifierHasBeenSet() const { return m_assetIdentifierHasBeenSet; }
    template<typename AssetIdentifierT = Aws::String>
    void SetAssetIdentifier(AssetIdentifierT&& value) { m_assetIdentifierHasBeenSet = true; m_assetIdentifier = std::forward<AssetIdentifierT>(value); }
    template<typename AssetIdentifierT = Aws::String>
    UpdateSubscriptionGrantStatusRequest& WithAssetIdentifier(AssetIdentifierT&& value) { SetAssetIdentifier(std::forward<AssetIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which a subscription grant
     * status is to be updated.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    UpdateSubscriptionGrantStatusRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const FailureCause& GetFailureCause() const { return m_failureCause; }
    inline bool FailureCauseHasBeenSet() const { return m_failureCauseHasBeenSet; }
    template<typename FailureCauseT = FailureCause>
    void SetFailureCause(FailureCauseT&& value) { m_failureCauseHasBeenSet = true; m_failureCause = std::forward<FailureCauseT>(value); }
    template<typename FailureCauseT = FailureCause>
    UpdateSubscriptionGrantStatusRequest& WithFailureCause(FailureCauseT&& value) { SetFailureCause(std::forward<FailureCauseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the subscription grant the status of which is to be
     * updated.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    UpdateSubscriptionGrantStatusRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status to be updated as part of the
     * <code>UpdateSubscriptionGrantStatus</code> action.</p>
     */
    inline SubscriptionGrantStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SubscriptionGrantStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateSubscriptionGrantStatusRequest& WithStatus(SubscriptionGrantStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target name to be updated as part of the
     * <code>UpdateSubscriptionGrantStatus</code> action.</p>
     */
    inline const Aws::String& GetTargetName() const { return m_targetName; }
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
    template<typename TargetNameT = Aws::String>
    void SetTargetName(TargetNameT&& value) { m_targetNameHasBeenSet = true; m_targetName = std::forward<TargetNameT>(value); }
    template<typename TargetNameT = Aws::String>
    UpdateSubscriptionGrantStatusRequest& WithTargetName(TargetNameT&& value) { SetTargetName(std::forward<TargetNameT>(value)); return *this;}
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

    SubscriptionGrantStatus m_status{SubscriptionGrantStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
