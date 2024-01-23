/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/StatusCounts.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    AWS_INSPECTOR2_API CisTargetResourceAggregation();
    AWS_INSPECTOR2_API CisTargetResourceAggregation(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisTargetResourceAggregation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account ID for the CIS target resource.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID for the CIS target resource.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID for the CIS target resource.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID for the CIS target resource.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID for the CIS target resource.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID for the CIS target resource.</p>
     */
    inline CisTargetResourceAggregation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID for the CIS target resource.</p>
     */
    inline CisTargetResourceAggregation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID for the CIS target resource.</p>
     */
    inline CisTargetResourceAggregation& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The platform for the CIS target resource.</p>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p>The platform for the CIS target resource.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The platform for the CIS target resource.</p>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The platform for the CIS target resource.</p>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The platform for the CIS target resource.</p>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p>The platform for the CIS target resource.</p>
     */
    inline CisTargetResourceAggregation& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p>The platform for the CIS target resource.</p>
     */
    inline CisTargetResourceAggregation& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p>The platform for the CIS target resource.</p>
     */
    inline CisTargetResourceAggregation& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p>The scan ARN for the CIS target resource.</p>
     */
    inline const Aws::String& GetScanArn() const{ return m_scanArn; }

    /**
     * <p>The scan ARN for the CIS target resource.</p>
     */
    inline bool ScanArnHasBeenSet() const { return m_scanArnHasBeenSet; }

    /**
     * <p>The scan ARN for the CIS target resource.</p>
     */
    inline void SetScanArn(const Aws::String& value) { m_scanArnHasBeenSet = true; m_scanArn = value; }

    /**
     * <p>The scan ARN for the CIS target resource.</p>
     */
    inline void SetScanArn(Aws::String&& value) { m_scanArnHasBeenSet = true; m_scanArn = std::move(value); }

    /**
     * <p>The scan ARN for the CIS target resource.</p>
     */
    inline void SetScanArn(const char* value) { m_scanArnHasBeenSet = true; m_scanArn.assign(value); }

    /**
     * <p>The scan ARN for the CIS target resource.</p>
     */
    inline CisTargetResourceAggregation& WithScanArn(const Aws::String& value) { SetScanArn(value); return *this;}

    /**
     * <p>The scan ARN for the CIS target resource.</p>
     */
    inline CisTargetResourceAggregation& WithScanArn(Aws::String&& value) { SetScanArn(std::move(value)); return *this;}

    /**
     * <p>The scan ARN for the CIS target resource.</p>
     */
    inline CisTargetResourceAggregation& WithScanArn(const char* value) { SetScanArn(value); return *this;}


    /**
     * <p>The target resource status counts.</p>
     */
    inline const StatusCounts& GetStatusCounts() const{ return m_statusCounts; }

    /**
     * <p>The target resource status counts.</p>
     */
    inline bool StatusCountsHasBeenSet() const { return m_statusCountsHasBeenSet; }

    /**
     * <p>The target resource status counts.</p>
     */
    inline void SetStatusCounts(const StatusCounts& value) { m_statusCountsHasBeenSet = true; m_statusCounts = value; }

    /**
     * <p>The target resource status counts.</p>
     */
    inline void SetStatusCounts(StatusCounts&& value) { m_statusCountsHasBeenSet = true; m_statusCounts = std::move(value); }

    /**
     * <p>The target resource status counts.</p>
     */
    inline CisTargetResourceAggregation& WithStatusCounts(const StatusCounts& value) { SetStatusCounts(value); return *this;}

    /**
     * <p>The target resource status counts.</p>
     */
    inline CisTargetResourceAggregation& WithStatusCounts(StatusCounts&& value) { SetStatusCounts(std::move(value)); return *this;}


    /**
     * <p>The ID of the target resource.</p>
     */
    inline const Aws::String& GetTargetResourceId() const{ return m_targetResourceId; }

    /**
     * <p>The ID of the target resource.</p>
     */
    inline bool TargetResourceIdHasBeenSet() const { return m_targetResourceIdHasBeenSet; }

    /**
     * <p>The ID of the target resource.</p>
     */
    inline void SetTargetResourceId(const Aws::String& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = value; }

    /**
     * <p>The ID of the target resource.</p>
     */
    inline void SetTargetResourceId(Aws::String&& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = std::move(value); }

    /**
     * <p>The ID of the target resource.</p>
     */
    inline void SetTargetResourceId(const char* value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId.assign(value); }

    /**
     * <p>The ID of the target resource.</p>
     */
    inline CisTargetResourceAggregation& WithTargetResourceId(const Aws::String& value) { SetTargetResourceId(value); return *this;}

    /**
     * <p>The ID of the target resource.</p>
     */
    inline CisTargetResourceAggregation& WithTargetResourceId(Aws::String&& value) { SetTargetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target resource.</p>
     */
    inline CisTargetResourceAggregation& WithTargetResourceId(const char* value) { SetTargetResourceId(value); return *this;}


    /**
     * <p>The tag for the target resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetTargetResourceTags() const{ return m_targetResourceTags; }

    /**
     * <p>The tag for the target resource.</p>
     */
    inline bool TargetResourceTagsHasBeenSet() const { return m_targetResourceTagsHasBeenSet; }

    /**
     * <p>The tag for the target resource.</p>
     */
    inline void SetTargetResourceTags(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags = value; }

    /**
     * <p>The tag for the target resource.</p>
     */
    inline void SetTargetResourceTags(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags = std::move(value); }

    /**
     * <p>The tag for the target resource.</p>
     */
    inline CisTargetResourceAggregation& WithTargetResourceTags(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetTargetResourceTags(value); return *this;}

    /**
     * <p>The tag for the target resource.</p>
     */
    inline CisTargetResourceAggregation& WithTargetResourceTags(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetTargetResourceTags(std::move(value)); return *this;}

    /**
     * <p>The tag for the target resource.</p>
     */
    inline CisTargetResourceAggregation& AddTargetResourceTags(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(key, value); return *this; }

    /**
     * <p>The tag for the target resource.</p>
     */
    inline CisTargetResourceAggregation& AddTargetResourceTags(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tag for the target resource.</p>
     */
    inline CisTargetResourceAggregation& AddTargetResourceTags(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tag for the target resource.</p>
     */
    inline CisTargetResourceAggregation& AddTargetResourceTags(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tag for the target resource.</p>
     */
    inline CisTargetResourceAggregation& AddTargetResourceTags(const char* key, Aws::Vector<Aws::String>&& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tag for the target resource.</p>
     */
    inline CisTargetResourceAggregation& AddTargetResourceTags(const char* key, const Aws::Vector<Aws::String>& value) { m_targetResourceTagsHasBeenSet = true; m_targetResourceTags.emplace(key, value); return *this; }


    /**
     * <p>The status of the target resource.</p>
     */
    inline const CisTargetStatus& GetTargetStatus() const{ return m_targetStatus; }

    /**
     * <p>The status of the target resource.</p>
     */
    inline bool TargetStatusHasBeenSet() const { return m_targetStatusHasBeenSet; }

    /**
     * <p>The status of the target resource.</p>
     */
    inline void SetTargetStatus(const CisTargetStatus& value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }

    /**
     * <p>The status of the target resource.</p>
     */
    inline void SetTargetStatus(CisTargetStatus&& value) { m_targetStatusHasBeenSet = true; m_targetStatus = std::move(value); }

    /**
     * <p>The status of the target resource.</p>
     */
    inline CisTargetResourceAggregation& WithTargetStatus(const CisTargetStatus& value) { SetTargetStatus(value); return *this;}

    /**
     * <p>The status of the target resource.</p>
     */
    inline CisTargetResourceAggregation& WithTargetStatus(CisTargetStatus&& value) { SetTargetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the target resource.</p>
     */
    inline const CisTargetStatusReason& GetTargetStatusReason() const{ return m_targetStatusReason; }

    /**
     * <p>The reason for the target resource.</p>
     */
    inline bool TargetStatusReasonHasBeenSet() const { return m_targetStatusReasonHasBeenSet; }

    /**
     * <p>The reason for the target resource.</p>
     */
    inline void SetTargetStatusReason(const CisTargetStatusReason& value) { m_targetStatusReasonHasBeenSet = true; m_targetStatusReason = value; }

    /**
     * <p>The reason for the target resource.</p>
     */
    inline void SetTargetStatusReason(CisTargetStatusReason&& value) { m_targetStatusReasonHasBeenSet = true; m_targetStatusReason = std::move(value); }

    /**
     * <p>The reason for the target resource.</p>
     */
    inline CisTargetResourceAggregation& WithTargetStatusReason(const CisTargetStatusReason& value) { SetTargetStatusReason(value); return *this;}

    /**
     * <p>The reason for the target resource.</p>
     */
    inline CisTargetResourceAggregation& WithTargetStatusReason(CisTargetStatusReason&& value) { SetTargetStatusReason(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_scanArn;
    bool m_scanArnHasBeenSet = false;

    StatusCounts m_statusCounts;
    bool m_statusCountsHasBeenSet = false;

    Aws::String m_targetResourceId;
    bool m_targetResourceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_targetResourceTags;
    bool m_targetResourceTagsHasBeenSet = false;

    CisTargetStatus m_targetStatus;
    bool m_targetStatusHasBeenSet = false;

    CisTargetStatusReason m_targetStatusReason;
    bool m_targetStatusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
