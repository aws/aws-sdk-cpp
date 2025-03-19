/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/AssetScope.h>
#include <aws/datazone/model/FailureCause.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/SubscriptionGrantStatus.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the asset for which the subscription grant is
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscribedAsset">AWS
   * API Reference</a></p>
   */
  class SubscribedAsset
  {
  public:
    AWS_DATAZONE_API SubscribedAsset() = default;
    AWS_DATAZONE_API SubscribedAsset(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the asset for which the subscription grant is created.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    SubscribedAsset& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the asset for which the subscription grant is created.</p>
     */
    inline const Aws::String& GetAssetRevision() const { return m_assetRevision; }
    inline bool AssetRevisionHasBeenSet() const { return m_assetRevisionHasBeenSet; }
    template<typename AssetRevisionT = Aws::String>
    void SetAssetRevision(AssetRevisionT&& value) { m_assetRevisionHasBeenSet = true; m_assetRevision = std::forward<AssetRevisionT>(value); }
    template<typename AssetRevisionT = Aws::String>
    SubscribedAsset& WithAssetRevision(AssetRevisionT&& value) { SetAssetRevision(std::forward<AssetRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The asset scope of the subscribed asset.</p>
     */
    inline const AssetScope& GetAssetScope() const { return m_assetScope; }
    inline bool AssetScopeHasBeenSet() const { return m_assetScopeHasBeenSet; }
    template<typename AssetScopeT = AssetScope>
    void SetAssetScope(AssetScopeT&& value) { m_assetScopeHasBeenSet = true; m_assetScope = std::forward<AssetScopeT>(value); }
    template<typename AssetScopeT = AssetScope>
    SubscribedAsset& WithAssetScope(AssetScopeT&& value) { SetAssetScope(std::forward<AssetScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure cause included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline const FailureCause& GetFailureCause() const { return m_failureCause; }
    inline bool FailureCauseHasBeenSet() const { return m_failureCauseHasBeenSet; }
    template<typename FailureCauseT = FailureCause>
    void SetFailureCause(FailureCauseT&& value) { m_failureCauseHasBeenSet = true; m_failureCause = std::forward<FailureCauseT>(value); }
    template<typename FailureCauseT = FailureCause>
    SubscribedAsset& WithFailureCause(FailureCauseT&& value) { SetFailureCause(std::forward<FailureCauseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure timestamp included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline const Aws::Utils::DateTime& GetFailureTimestamp() const { return m_failureTimestamp; }
    inline bool FailureTimestampHasBeenSet() const { return m_failureTimestampHasBeenSet; }
    template<typename FailureTimestampT = Aws::Utils::DateTime>
    void SetFailureTimestamp(FailureTimestampT&& value) { m_failureTimestampHasBeenSet = true; m_failureTimestamp = std::forward<FailureTimestampT>(value); }
    template<typename FailureTimestampT = Aws::Utils::DateTime>
    SubscribedAsset& WithFailureTimestamp(FailureTimestampT&& value) { SetFailureTimestamp(std::forward<FailureTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the subscription grant to the asset is created.</p>
     */
    inline const Aws::Utils::DateTime& GetGrantedTimestamp() const { return m_grantedTimestamp; }
    inline bool GrantedTimestampHasBeenSet() const { return m_grantedTimestampHasBeenSet; }
    template<typename GrantedTimestampT = Aws::Utils::DateTime>
    void SetGrantedTimestamp(GrantedTimestampT&& value) { m_grantedTimestampHasBeenSet = true; m_grantedTimestamp = std::forward<GrantedTimestampT>(value); }
    template<typename GrantedTimestampT = Aws::Utils::DateTime>
    SubscribedAsset& WithGrantedTimestamp(GrantedTimestampT&& value) { SetGrantedTimestamp(std::forward<GrantedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asset for which the subscription grant is created.</p>
     */
    inline SubscriptionGrantStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SubscriptionGrantStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SubscribedAsset& WithStatus(SubscriptionGrantStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target name of the asset for which the subscription grant is created.</p>
     */
    inline const Aws::String& GetTargetName() const { return m_targetName; }
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
    template<typename TargetNameT = Aws::String>
    void SetTargetName(TargetNameT&& value) { m_targetNameHasBeenSet = true; m_targetName = std::forward<TargetNameT>(value); }
    template<typename TargetNameT = Aws::String>
    SubscribedAsset& WithTargetName(TargetNameT&& value) { SetTargetName(std::forward<TargetNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetRevision;
    bool m_assetRevisionHasBeenSet = false;

    AssetScope m_assetScope;
    bool m_assetScopeHasBeenSet = false;

    FailureCause m_failureCause;
    bool m_failureCauseHasBeenSet = false;

    Aws::Utils::DateTime m_failureTimestamp{};
    bool m_failureTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_grantedTimestamp{};
    bool m_grantedTimestampHasBeenSet = false;

    SubscriptionGrantStatus m_status{SubscriptionGrantStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
