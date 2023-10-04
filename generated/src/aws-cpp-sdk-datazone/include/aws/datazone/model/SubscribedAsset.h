/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_DATAZONE_API SubscribedAsset();
    AWS_DATAZONE_API SubscribedAsset(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedAsset& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the asset for which the subscription grant is created.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The identifier of the asset for which the subscription grant is created.</p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p>The identifier of the asset for which the subscription grant is created.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p>The identifier of the asset for which the subscription grant is created.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p>The identifier of the asset for which the subscription grant is created.</p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p>The identifier of the asset for which the subscription grant is created.</p>
     */
    inline SubscribedAsset& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The identifier of the asset for which the subscription grant is created.</p>
     */
    inline SubscribedAsset& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the asset for which the subscription grant is created.</p>
     */
    inline SubscribedAsset& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The revision of the asset for which the subscription grant is created.</p>
     */
    inline const Aws::String& GetAssetRevision() const{ return m_assetRevision; }

    /**
     * <p>The revision of the asset for which the subscription grant is created.</p>
     */
    inline bool AssetRevisionHasBeenSet() const { return m_assetRevisionHasBeenSet; }

    /**
     * <p>The revision of the asset for which the subscription grant is created.</p>
     */
    inline void SetAssetRevision(const Aws::String& value) { m_assetRevisionHasBeenSet = true; m_assetRevision = value; }

    /**
     * <p>The revision of the asset for which the subscription grant is created.</p>
     */
    inline void SetAssetRevision(Aws::String&& value) { m_assetRevisionHasBeenSet = true; m_assetRevision = std::move(value); }

    /**
     * <p>The revision of the asset for which the subscription grant is created.</p>
     */
    inline void SetAssetRevision(const char* value) { m_assetRevisionHasBeenSet = true; m_assetRevision.assign(value); }

    /**
     * <p>The revision of the asset for which the subscription grant is created.</p>
     */
    inline SubscribedAsset& WithAssetRevision(const Aws::String& value) { SetAssetRevision(value); return *this;}

    /**
     * <p>The revision of the asset for which the subscription grant is created.</p>
     */
    inline SubscribedAsset& WithAssetRevision(Aws::String&& value) { SetAssetRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of the asset for which the subscription grant is created.</p>
     */
    inline SubscribedAsset& WithAssetRevision(const char* value) { SetAssetRevision(value); return *this;}


    /**
     * <p>The failure cause included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline const FailureCause& GetFailureCause() const{ return m_failureCause; }

    /**
     * <p>The failure cause included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline bool FailureCauseHasBeenSet() const { return m_failureCauseHasBeenSet; }

    /**
     * <p>The failure cause included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline void SetFailureCause(const FailureCause& value) { m_failureCauseHasBeenSet = true; m_failureCause = value; }

    /**
     * <p>The failure cause included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline void SetFailureCause(FailureCause&& value) { m_failureCauseHasBeenSet = true; m_failureCause = std::move(value); }

    /**
     * <p>The failure cause included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline SubscribedAsset& WithFailureCause(const FailureCause& value) { SetFailureCause(value); return *this;}

    /**
     * <p>The failure cause included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline SubscribedAsset& WithFailureCause(FailureCause&& value) { SetFailureCause(std::move(value)); return *this;}


    /**
     * <p>The failure timestamp included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline const Aws::Utils::DateTime& GetFailureTimestamp() const{ return m_failureTimestamp; }

    /**
     * <p>The failure timestamp included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline bool FailureTimestampHasBeenSet() const { return m_failureTimestampHasBeenSet; }

    /**
     * <p>The failure timestamp included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline void SetFailureTimestamp(const Aws::Utils::DateTime& value) { m_failureTimestampHasBeenSet = true; m_failureTimestamp = value; }

    /**
     * <p>The failure timestamp included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline void SetFailureTimestamp(Aws::Utils::DateTime&& value) { m_failureTimestampHasBeenSet = true; m_failureTimestamp = std::move(value); }

    /**
     * <p>The failure timestamp included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline SubscribedAsset& WithFailureTimestamp(const Aws::Utils::DateTime& value) { SetFailureTimestamp(value); return *this;}

    /**
     * <p>The failure timestamp included in the details of the asset for which the
     * subscription grant is created.</p>
     */
    inline SubscribedAsset& WithFailureTimestamp(Aws::Utils::DateTime&& value) { SetFailureTimestamp(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the subscription grant to the asset is created.</p>
     */
    inline const Aws::Utils::DateTime& GetGrantedTimestamp() const{ return m_grantedTimestamp; }

    /**
     * <p>The timestamp of when the subscription grant to the asset is created.</p>
     */
    inline bool GrantedTimestampHasBeenSet() const { return m_grantedTimestampHasBeenSet; }

    /**
     * <p>The timestamp of when the subscription grant to the asset is created.</p>
     */
    inline void SetGrantedTimestamp(const Aws::Utils::DateTime& value) { m_grantedTimestampHasBeenSet = true; m_grantedTimestamp = value; }

    /**
     * <p>The timestamp of when the subscription grant to the asset is created.</p>
     */
    inline void SetGrantedTimestamp(Aws::Utils::DateTime&& value) { m_grantedTimestampHasBeenSet = true; m_grantedTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the subscription grant to the asset is created.</p>
     */
    inline SubscribedAsset& WithGrantedTimestamp(const Aws::Utils::DateTime& value) { SetGrantedTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the subscription grant to the asset is created.</p>
     */
    inline SubscribedAsset& WithGrantedTimestamp(Aws::Utils::DateTime&& value) { SetGrantedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The status of the asset for which the subscription grant is created.</p>
     */
    inline const SubscriptionGrantStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the asset for which the subscription grant is created.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the asset for which the subscription grant is created.</p>
     */
    inline void SetStatus(const SubscriptionGrantStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the asset for which the subscription grant is created.</p>
     */
    inline void SetStatus(SubscriptionGrantStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the asset for which the subscription grant is created.</p>
     */
    inline SubscribedAsset& WithStatus(const SubscriptionGrantStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the asset for which the subscription grant is created.</p>
     */
    inline SubscribedAsset& WithStatus(SubscriptionGrantStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The target name of the asset for which the subscription grant is created.</p>
     */
    inline const Aws::String& GetTargetName() const{ return m_targetName; }

    /**
     * <p>The target name of the asset for which the subscription grant is created.</p>
     */
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }

    /**
     * <p>The target name of the asset for which the subscription grant is created.</p>
     */
    inline void SetTargetName(const Aws::String& value) { m_targetNameHasBeenSet = true; m_targetName = value; }

    /**
     * <p>The target name of the asset for which the subscription grant is created.</p>
     */
    inline void SetTargetName(Aws::String&& value) { m_targetNameHasBeenSet = true; m_targetName = std::move(value); }

    /**
     * <p>The target name of the asset for which the subscription grant is created.</p>
     */
    inline void SetTargetName(const char* value) { m_targetNameHasBeenSet = true; m_targetName.assign(value); }

    /**
     * <p>The target name of the asset for which the subscription grant is created.</p>
     */
    inline SubscribedAsset& WithTargetName(const Aws::String& value) { SetTargetName(value); return *this;}

    /**
     * <p>The target name of the asset for which the subscription grant is created.</p>
     */
    inline SubscribedAsset& WithTargetName(Aws::String&& value) { SetTargetName(std::move(value)); return *this;}

    /**
     * <p>The target name of the asset for which the subscription grant is created.</p>
     */
    inline SubscribedAsset& WithTargetName(const char* value) { SetTargetName(value); return *this;}

  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetRevision;
    bool m_assetRevisionHasBeenSet = false;

    FailureCause m_failureCause;
    bool m_failureCauseHasBeenSet = false;

    Aws::Utils::DateTime m_failureTimestamp;
    bool m_failureTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_grantedTimestamp;
    bool m_grantedTimestampHasBeenSet = false;

    SubscriptionGrantStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
