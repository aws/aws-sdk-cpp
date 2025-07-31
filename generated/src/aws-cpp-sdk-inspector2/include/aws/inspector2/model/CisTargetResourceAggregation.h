/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/inspector2/model/StatusCounts.h>
#include <aws/inspector2/model/CisTargetStatus.h>
#include <aws/inspector2/model/CisTargetStatusReason.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The CIS target resource aggregation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisTargetResourceAggregation">AWS
   * API Reference</a></p>
   */
  class CisTargetResourceAggregation
  {
  public:
    AWS_INSPECTOR2_API CisTargetResourceAggregation() = default;
    AWS_INSPECTOR2_API CisTargetResourceAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisTargetResourceAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scan ARN for the CIS target resource.</p>
     */
    inline const Aws::String& GetScanArn() const { return m_scanArn; }
    inline bool ScanArnHasBeenSet() const { return m_scanArnHasBeenSet; }
    template<typename ScanArnT = Aws::String>
    void SetScanArn(ScanArnT&& value) { m_scanArnHasBeenSet = true; m_scanArn = std::forward<ScanArnT>(value); }
    template<typename ScanArnT = Aws::String>
    CisTargetResourceAggregation& WithScanArn(ScanArnT&& value) { SetScanArn(std::forward<ScanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the target resource.</p>
     */
    inline const Aws::String& GetTargetResourceId() const { return m_targetResourceId; }
    inline bool TargetResourceIdHasBeenSet() const { return m_targetResourceIdHasBeenSet; }
    template<typename TargetResourceIdT = Aws::String>
    void SetTargetResourceId(TargetResourceIdT&& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = std::forward<TargetResourceIdT>(value); }
    template<typename TargetResourceIdT = Aws::String>
    CisTargetResourceAggregation& WithTargetResourceId(TargetResourceIdT&& value) { SetTargetResourceId(std::forward<TargetResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID for the CIS target resource.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CisTargetResourceAggregation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag for the target resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetTargetResourceTags() const { return m_targetResourceTags; }
    inline bool TargetResourceTagsHasBeenSet() const { return m_targetResourceTagsHasBeenSet; }
    template<typename TargetResourceTagsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetTargetResourceTags(TargetResourceTagsT&& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags = std::forward<TargetResourceTagsT>(value); }
    template<typename TargetResourceTagsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    CisTargetResourceAggregation& WithTargetResourceTags(TargetResourceTagsT&& value) { SetTargetResourceTags(std::forward<TargetResourceTagsT>(value)); return *this;}
    template<typename TargetResourceTagsKeyT = Aws::String, typename TargetResourceTagsValueT = Aws::Vector<Aws::String>>
    CisTargetResourceAggregation& AddTargetResourceTags(TargetResourceTagsKeyT&& key, TargetResourceTagsValueT&& value) {
      m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(std::forward<TargetResourceTagsKeyT>(key), std::forward<TargetResourceTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The target resource status counts.</p>
     */
    inline const StatusCounts& GetStatusCounts() const { return m_statusCounts; }
    inline bool StatusCountsHasBeenSet() const { return m_statusCountsHasBeenSet; }
    template<typename StatusCountsT = StatusCounts>
    void SetStatusCounts(StatusCountsT&& value) { m_statusCountsHasBeenSet = true; m_statusCounts = std::forward<StatusCountsT>(value); }
    template<typename StatusCountsT = StatusCounts>
    CisTargetResourceAggregation& WithStatusCounts(StatusCountsT&& value) { SetStatusCounts(std::forward<StatusCountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform for the CIS target resource.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    CisTargetResourceAggregation& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the target resource.</p>
     */
    inline CisTargetStatus GetTargetStatus() const { return m_targetStatus; }
    inline bool TargetStatusHasBeenSet() const { return m_targetStatusHasBeenSet; }
    inline void SetTargetStatus(CisTargetStatus value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }
    inline CisTargetResourceAggregation& WithTargetStatus(CisTargetStatus value) { SetTargetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the target resource.</p>
     */
    inline CisTargetStatusReason GetTargetStatusReason() const { return m_targetStatusReason; }
    inline bool TargetStatusReasonHasBeenSet() const { return m_targetStatusReasonHasBeenSet; }
    inline void SetTargetStatusReason(CisTargetStatusReason value) { m_targetStatusReasonHasBeenSet = true; m_targetStatusReason = value; }
    inline CisTargetResourceAggregation& WithTargetStatusReason(CisTargetStatusReason value) { SetTargetStatusReason(value); return *this;}
    ///@}
  private:

    Aws::String m_scanArn;
    bool m_scanArnHasBeenSet = false;

    Aws::String m_targetResourceId;
    bool m_targetResourceIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_targetResourceTags;
    bool m_targetResourceTagsHasBeenSet = false;

    StatusCounts m_statusCounts;
    bool m_statusCountsHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    CisTargetStatus m_targetStatus{CisTargetStatus::NOT_SET};
    bool m_targetStatusHasBeenSet = false;

    CisTargetStatusReason m_targetStatusReason{CisTargetStatusReason::NOT_SET};
    bool m_targetStatusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
