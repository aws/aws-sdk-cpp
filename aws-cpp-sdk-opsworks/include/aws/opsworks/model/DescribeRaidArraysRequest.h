/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API DescribeRaidArraysRequest : public OpsWorksRequest
  {
  public:
    DescribeRaidArraysRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRaidArrays"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The instance ID. If you use this parameter, <code>DescribeRaidArrays</code>
     * returns descriptions of the RAID arrays associated with the specified instance.
     * </p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID. If you use this parameter, <code>DescribeRaidArrays</code>
     * returns descriptions of the RAID arrays associated with the specified instance.
     * </p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance ID. If you use this parameter, <code>DescribeRaidArrays</code>
     * returns descriptions of the RAID arrays associated with the specified instance.
     * </p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID. If you use this parameter, <code>DescribeRaidArrays</code>
     * returns descriptions of the RAID arrays associated with the specified instance.
     * </p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance ID. If you use this parameter, <code>DescribeRaidArrays</code>
     * returns descriptions of the RAID arrays associated with the specified instance.
     * </p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID. If you use this parameter, <code>DescribeRaidArrays</code>
     * returns descriptions of the RAID arrays associated with the specified instance.
     * </p>
     */
    inline DescribeRaidArraysRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID. If you use this parameter, <code>DescribeRaidArrays</code>
     * returns descriptions of the RAID arrays associated with the specified instance.
     * </p>
     */
    inline DescribeRaidArraysRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance ID. If you use this parameter, <code>DescribeRaidArrays</code>
     * returns descriptions of the RAID arrays associated with the specified instance.
     * </p>
     */
    inline DescribeRaidArraysRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID.</p>
     */
    inline DescribeRaidArraysRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline DescribeRaidArraysRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID.</p>
     */
    inline DescribeRaidArraysRequest& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>An array of RAID array IDs. If you use this parameter,
     * <code>DescribeRaidArrays</code> returns descriptions of the specified arrays.
     * Otherwise, it returns a description of every array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRaidArrayIds() const{ return m_raidArrayIds; }

    /**
     * <p>An array of RAID array IDs. If you use this parameter,
     * <code>DescribeRaidArrays</code> returns descriptions of the specified arrays.
     * Otherwise, it returns a description of every array.</p>
     */
    inline bool RaidArrayIdsHasBeenSet() const { return m_raidArrayIdsHasBeenSet; }

    /**
     * <p>An array of RAID array IDs. If you use this parameter,
     * <code>DescribeRaidArrays</code> returns descriptions of the specified arrays.
     * Otherwise, it returns a description of every array.</p>
     */
    inline void SetRaidArrayIds(const Aws::Vector<Aws::String>& value) { m_raidArrayIdsHasBeenSet = true; m_raidArrayIds = value; }

    /**
     * <p>An array of RAID array IDs. If you use this parameter,
     * <code>DescribeRaidArrays</code> returns descriptions of the specified arrays.
     * Otherwise, it returns a description of every array.</p>
     */
    inline void SetRaidArrayIds(Aws::Vector<Aws::String>&& value) { m_raidArrayIdsHasBeenSet = true; m_raidArrayIds = std::move(value); }

    /**
     * <p>An array of RAID array IDs. If you use this parameter,
     * <code>DescribeRaidArrays</code> returns descriptions of the specified arrays.
     * Otherwise, it returns a description of every array.</p>
     */
    inline DescribeRaidArraysRequest& WithRaidArrayIds(const Aws::Vector<Aws::String>& value) { SetRaidArrayIds(value); return *this;}

    /**
     * <p>An array of RAID array IDs. If you use this parameter,
     * <code>DescribeRaidArrays</code> returns descriptions of the specified arrays.
     * Otherwise, it returns a description of every array.</p>
     */
    inline DescribeRaidArraysRequest& WithRaidArrayIds(Aws::Vector<Aws::String>&& value) { SetRaidArrayIds(std::move(value)); return *this;}

    /**
     * <p>An array of RAID array IDs. If you use this parameter,
     * <code>DescribeRaidArrays</code> returns descriptions of the specified arrays.
     * Otherwise, it returns a description of every array.</p>
     */
    inline DescribeRaidArraysRequest& AddRaidArrayIds(const Aws::String& value) { m_raidArrayIdsHasBeenSet = true; m_raidArrayIds.push_back(value); return *this; }

    /**
     * <p>An array of RAID array IDs. If you use this parameter,
     * <code>DescribeRaidArrays</code> returns descriptions of the specified arrays.
     * Otherwise, it returns a description of every array.</p>
     */
    inline DescribeRaidArraysRequest& AddRaidArrayIds(Aws::String&& value) { m_raidArrayIdsHasBeenSet = true; m_raidArrayIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of RAID array IDs. If you use this parameter,
     * <code>DescribeRaidArrays</code> returns descriptions of the specified arrays.
     * Otherwise, it returns a description of every array.</p>
     */
    inline DescribeRaidArraysRequest& AddRaidArrayIds(const char* value) { m_raidArrayIdsHasBeenSet = true; m_raidArrayIds.push_back(value); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::Vector<Aws::String> m_raidArrayIds;
    bool m_raidArrayIdsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
