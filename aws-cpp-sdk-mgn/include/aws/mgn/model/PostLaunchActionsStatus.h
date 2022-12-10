/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/JobPostLaunchActionsLaunchStatus.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Status of the Post Launch Actions running on the Test or Cutover
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/PostLaunchActionsStatus">AWS
   * API Reference</a></p>
   */
  class PostLaunchActionsStatus
  {
  public:
    AWS_MGN_API PostLaunchActionsStatus();
    AWS_MGN_API PostLaunchActionsStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API PostLaunchActionsStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of Post Launch Action status.</p>
     */
    inline const Aws::Vector<JobPostLaunchActionsLaunchStatus>& GetPostLaunchActionsLaunchStatusList() const{ return m_postLaunchActionsLaunchStatusList; }

    /**
     * <p>List of Post Launch Action status.</p>
     */
    inline bool PostLaunchActionsLaunchStatusListHasBeenSet() const { return m_postLaunchActionsLaunchStatusListHasBeenSet; }

    /**
     * <p>List of Post Launch Action status.</p>
     */
    inline void SetPostLaunchActionsLaunchStatusList(const Aws::Vector<JobPostLaunchActionsLaunchStatus>& value) { m_postLaunchActionsLaunchStatusListHasBeenSet = true; m_postLaunchActionsLaunchStatusList = value; }

    /**
     * <p>List of Post Launch Action status.</p>
     */
    inline void SetPostLaunchActionsLaunchStatusList(Aws::Vector<JobPostLaunchActionsLaunchStatus>&& value) { m_postLaunchActionsLaunchStatusListHasBeenSet = true; m_postLaunchActionsLaunchStatusList = std::move(value); }

    /**
     * <p>List of Post Launch Action status.</p>
     */
    inline PostLaunchActionsStatus& WithPostLaunchActionsLaunchStatusList(const Aws::Vector<JobPostLaunchActionsLaunchStatus>& value) { SetPostLaunchActionsLaunchStatusList(value); return *this;}

    /**
     * <p>List of Post Launch Action status.</p>
     */
    inline PostLaunchActionsStatus& WithPostLaunchActionsLaunchStatusList(Aws::Vector<JobPostLaunchActionsLaunchStatus>&& value) { SetPostLaunchActionsLaunchStatusList(std::move(value)); return *this;}

    /**
     * <p>List of Post Launch Action status.</p>
     */
    inline PostLaunchActionsStatus& AddPostLaunchActionsLaunchStatusList(const JobPostLaunchActionsLaunchStatus& value) { m_postLaunchActionsLaunchStatusListHasBeenSet = true; m_postLaunchActionsLaunchStatusList.push_back(value); return *this; }

    /**
     * <p>List of Post Launch Action status.</p>
     */
    inline PostLaunchActionsStatus& AddPostLaunchActionsLaunchStatusList(JobPostLaunchActionsLaunchStatus&& value) { m_postLaunchActionsLaunchStatusListHasBeenSet = true; m_postLaunchActionsLaunchStatusList.push_back(std::move(value)); return *this; }


    /**
     * <p>Time where the AWS Systems Manager was detected as running on the Test or
     * Cutover instance.</p>
     */
    inline const Aws::String& GetSsmAgentDiscoveryDatetime() const{ return m_ssmAgentDiscoveryDatetime; }

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the Test or
     * Cutover instance.</p>
     */
    inline bool SsmAgentDiscoveryDatetimeHasBeenSet() const { return m_ssmAgentDiscoveryDatetimeHasBeenSet; }

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the Test or
     * Cutover instance.</p>
     */
    inline void SetSsmAgentDiscoveryDatetime(const Aws::String& value) { m_ssmAgentDiscoveryDatetimeHasBeenSet = true; m_ssmAgentDiscoveryDatetime = value; }

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the Test or
     * Cutover instance.</p>
     */
    inline void SetSsmAgentDiscoveryDatetime(Aws::String&& value) { m_ssmAgentDiscoveryDatetimeHasBeenSet = true; m_ssmAgentDiscoveryDatetime = std::move(value); }

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the Test or
     * Cutover instance.</p>
     */
    inline void SetSsmAgentDiscoveryDatetime(const char* value) { m_ssmAgentDiscoveryDatetimeHasBeenSet = true; m_ssmAgentDiscoveryDatetime.assign(value); }

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the Test or
     * Cutover instance.</p>
     */
    inline PostLaunchActionsStatus& WithSsmAgentDiscoveryDatetime(const Aws::String& value) { SetSsmAgentDiscoveryDatetime(value); return *this;}

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the Test or
     * Cutover instance.</p>
     */
    inline PostLaunchActionsStatus& WithSsmAgentDiscoveryDatetime(Aws::String&& value) { SetSsmAgentDiscoveryDatetime(std::move(value)); return *this;}

    /**
     * <p>Time where the AWS Systems Manager was detected as running on the Test or
     * Cutover instance.</p>
     */
    inline PostLaunchActionsStatus& WithSsmAgentDiscoveryDatetime(const char* value) { SetSsmAgentDiscoveryDatetime(value); return *this;}

  private:

    Aws::Vector<JobPostLaunchActionsLaunchStatus> m_postLaunchActionsLaunchStatusList;
    bool m_postLaunchActionsLaunchStatusListHasBeenSet = false;

    Aws::String m_ssmAgentDiscoveryDatetime;
    bool m_ssmAgentDiscoveryDatetimeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
