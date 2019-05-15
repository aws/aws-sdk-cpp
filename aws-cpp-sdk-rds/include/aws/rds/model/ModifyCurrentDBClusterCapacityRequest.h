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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API ModifyCurrentDBClusterCapacityRequest : public RDSRequest
  {
  public:
    ModifyCurrentDBClusterCapacityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCurrentDBClusterCapacity"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter is
     * not case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter is
     * not case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster.</p> </li> </ul>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter is
     * not case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter is
     * not case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter is
     * not case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster.</p> </li> </ul>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter is
     * not case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster.</p> </li> </ul>
     */
    inline ModifyCurrentDBClusterCapacityRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter is
     * not case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster.</p> </li> </ul>
     */
    inline ModifyCurrentDBClusterCapacityRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter is
     * not case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster.</p> </li> </ul>
     */
    inline ModifyCurrentDBClusterCapacityRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The DB cluster capacity.</p> <p>When you change the capacity of a paused
     * Aurora Serverless DB cluster, it automatically resumes.</p> <p>Constraints:</p>
     * <ul> <li> <p>Value must be <code>1</code>, <code>2</code>, <code>4</code>,
     * <code>8</code>, <code>16</code>, <code>32</code>, <code>64</code>,
     * <code>128</code>, or <code>256</code>.</p> </li> </ul>
     */
    inline int GetCapacity() const{ return m_capacity; }

    /**
     * <p>The DB cluster capacity.</p> <p>When you change the capacity of a paused
     * Aurora Serverless DB cluster, it automatically resumes.</p> <p>Constraints:</p>
     * <ul> <li> <p>Value must be <code>1</code>, <code>2</code>, <code>4</code>,
     * <code>8</code>, <code>16</code>, <code>32</code>, <code>64</code>,
     * <code>128</code>, or <code>256</code>.</p> </li> </ul>
     */
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }

    /**
     * <p>The DB cluster capacity.</p> <p>When you change the capacity of a paused
     * Aurora Serverless DB cluster, it automatically resumes.</p> <p>Constraints:</p>
     * <ul> <li> <p>Value must be <code>1</code>, <code>2</code>, <code>4</code>,
     * <code>8</code>, <code>16</code>, <code>32</code>, <code>64</code>,
     * <code>128</code>, or <code>256</code>.</p> </li> </ul>
     */
    inline void SetCapacity(int value) { m_capacityHasBeenSet = true; m_capacity = value; }

    /**
     * <p>The DB cluster capacity.</p> <p>When you change the capacity of a paused
     * Aurora Serverless DB cluster, it automatically resumes.</p> <p>Constraints:</p>
     * <ul> <li> <p>Value must be <code>1</code>, <code>2</code>, <code>4</code>,
     * <code>8</code>, <code>16</code>, <code>32</code>, <code>64</code>,
     * <code>128</code>, or <code>256</code>.</p> </li> </ul>
     */
    inline ModifyCurrentDBClusterCapacityRequest& WithCapacity(int value) { SetCapacity(value); return *this;}


    /**
     * <p>The amount of time, in seconds, that Aurora Serverless tries to find a
     * scaling point to perform seamless scaling before enforcing the timeout action.
     * The default is 300.</p> <ul> <li> <p>Value must be from 10 through 600.</p>
     * </li> </ul>
     */
    inline int GetSecondsBeforeTimeout() const{ return m_secondsBeforeTimeout; }

    /**
     * <p>The amount of time, in seconds, that Aurora Serverless tries to find a
     * scaling point to perform seamless scaling before enforcing the timeout action.
     * The default is 300.</p> <ul> <li> <p>Value must be from 10 through 600.</p>
     * </li> </ul>
     */
    inline bool SecondsBeforeTimeoutHasBeenSet() const { return m_secondsBeforeTimeoutHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, that Aurora Serverless tries to find a
     * scaling point to perform seamless scaling before enforcing the timeout action.
     * The default is 300.</p> <ul> <li> <p>Value must be from 10 through 600.</p>
     * </li> </ul>
     */
    inline void SetSecondsBeforeTimeout(int value) { m_secondsBeforeTimeoutHasBeenSet = true; m_secondsBeforeTimeout = value; }

    /**
     * <p>The amount of time, in seconds, that Aurora Serverless tries to find a
     * scaling point to perform seamless scaling before enforcing the timeout action.
     * The default is 300.</p> <ul> <li> <p>Value must be from 10 through 600.</p>
     * </li> </ul>
     */
    inline ModifyCurrentDBClusterCapacityRequest& WithSecondsBeforeTimeout(int value) { SetSecondsBeforeTimeout(value); return *this;}


    /**
     * <p>The action to take when the timeout is reached, either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point is not found in the timeout
     * period.</p>
     */
    inline const Aws::String& GetTimeoutAction() const{ return m_timeoutAction; }

    /**
     * <p>The action to take when the timeout is reached, either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point is not found in the timeout
     * period.</p>
     */
    inline bool TimeoutActionHasBeenSet() const { return m_timeoutActionHasBeenSet; }

    /**
     * <p>The action to take when the timeout is reached, either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point is not found in the timeout
     * period.</p>
     */
    inline void SetTimeoutAction(const Aws::String& value) { m_timeoutActionHasBeenSet = true; m_timeoutAction = value; }

    /**
     * <p>The action to take when the timeout is reached, either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point is not found in the timeout
     * period.</p>
     */
    inline void SetTimeoutAction(Aws::String&& value) { m_timeoutActionHasBeenSet = true; m_timeoutAction = std::move(value); }

    /**
     * <p>The action to take when the timeout is reached, either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point is not found in the timeout
     * period.</p>
     */
    inline void SetTimeoutAction(const char* value) { m_timeoutActionHasBeenSet = true; m_timeoutAction.assign(value); }

    /**
     * <p>The action to take when the timeout is reached, either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point is not found in the timeout
     * period.</p>
     */
    inline ModifyCurrentDBClusterCapacityRequest& WithTimeoutAction(const Aws::String& value) { SetTimeoutAction(value); return *this;}

    /**
     * <p>The action to take when the timeout is reached, either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point is not found in the timeout
     * period.</p>
     */
    inline ModifyCurrentDBClusterCapacityRequest& WithTimeoutAction(Aws::String&& value) { SetTimeoutAction(std::move(value)); return *this;}

    /**
     * <p>The action to take when the timeout is reached, either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point is not found in the timeout
     * period.</p>
     */
    inline ModifyCurrentDBClusterCapacityRequest& WithTimeoutAction(const char* value) { SetTimeoutAction(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    int m_capacity;
    bool m_capacityHasBeenSet;

    int m_secondsBeforeTimeout;
    bool m_secondsBeforeTimeoutHasBeenSet;

    Aws::String m_timeoutAction;
    bool m_timeoutActionHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
