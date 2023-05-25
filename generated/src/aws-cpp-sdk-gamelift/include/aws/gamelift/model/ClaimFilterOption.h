/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/FilterInstanceStatus.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p> <b>This data type is used with the Amazon GameLift FleetIQ and game server
   * groups.</b> </p> <p> Filters which game servers may be claimed when calling
   * <code>ClaimGameServer</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ClaimFilterOption">AWS
   * API Reference</a></p>
   */
  class ClaimFilterOption
  {
  public:
    AWS_GAMELIFT_API ClaimFilterOption();
    AWS_GAMELIFT_API ClaimFilterOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ClaimFilterOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of instance statuses that game servers may be claimed on. If provided,
     * the list must contain the <code>ACTIVE</code> status.</p>
     */
    inline const Aws::Vector<FilterInstanceStatus>& GetInstanceStatuses() const{ return m_instanceStatuses; }

    /**
     * <p>List of instance statuses that game servers may be claimed on. If provided,
     * the list must contain the <code>ACTIVE</code> status.</p>
     */
    inline bool InstanceStatusesHasBeenSet() const { return m_instanceStatusesHasBeenSet; }

    /**
     * <p>List of instance statuses that game servers may be claimed on. If provided,
     * the list must contain the <code>ACTIVE</code> status.</p>
     */
    inline void SetInstanceStatuses(const Aws::Vector<FilterInstanceStatus>& value) { m_instanceStatusesHasBeenSet = true; m_instanceStatuses = value; }

    /**
     * <p>List of instance statuses that game servers may be claimed on. If provided,
     * the list must contain the <code>ACTIVE</code> status.</p>
     */
    inline void SetInstanceStatuses(Aws::Vector<FilterInstanceStatus>&& value) { m_instanceStatusesHasBeenSet = true; m_instanceStatuses = std::move(value); }

    /**
     * <p>List of instance statuses that game servers may be claimed on. If provided,
     * the list must contain the <code>ACTIVE</code> status.</p>
     */
    inline ClaimFilterOption& WithInstanceStatuses(const Aws::Vector<FilterInstanceStatus>& value) { SetInstanceStatuses(value); return *this;}

    /**
     * <p>List of instance statuses that game servers may be claimed on. If provided,
     * the list must contain the <code>ACTIVE</code> status.</p>
     */
    inline ClaimFilterOption& WithInstanceStatuses(Aws::Vector<FilterInstanceStatus>&& value) { SetInstanceStatuses(std::move(value)); return *this;}

    /**
     * <p>List of instance statuses that game servers may be claimed on. If provided,
     * the list must contain the <code>ACTIVE</code> status.</p>
     */
    inline ClaimFilterOption& AddInstanceStatuses(const FilterInstanceStatus& value) { m_instanceStatusesHasBeenSet = true; m_instanceStatuses.push_back(value); return *this; }

    /**
     * <p>List of instance statuses that game servers may be claimed on. If provided,
     * the list must contain the <code>ACTIVE</code> status.</p>
     */
    inline ClaimFilterOption& AddInstanceStatuses(FilterInstanceStatus&& value) { m_instanceStatusesHasBeenSet = true; m_instanceStatuses.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FilterInstanceStatus> m_instanceStatuses;
    bool m_instanceStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
