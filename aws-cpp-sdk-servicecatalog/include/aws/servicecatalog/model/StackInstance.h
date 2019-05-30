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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/StackInstanceStatus.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>An AWS CloudFormation stack, in a specific account and region, that's part of
   * a stack set operation. A stack instance is a reference to an attempted or actual
   * stack in a given account within a given region. A stack instance can exist
   * without a stack—for example, if the stack couldn't be created for some reason. A
   * stack instance is associated with only one stack set. Each stack instance
   * contains the ID of its associated stack set, as well as the ID of the actual
   * stack and the stack status. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/StackInstance">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API StackInstance
  {
  public:
    StackInstance();
    StackInstance(Aws::Utils::Json::JsonView jsonValue);
    StackInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the AWS account that the stack instance is associated with.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>The name of the AWS account that the stack instance is associated with.</p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>The name of the AWS account that the stack instance is associated with.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>The name of the AWS account that the stack instance is associated with.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>The name of the AWS account that the stack instance is associated with.</p>
     */
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }

    /**
     * <p>The name of the AWS account that the stack instance is associated with.</p>
     */
    inline StackInstance& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>The name of the AWS account that the stack instance is associated with.</p>
     */
    inline StackInstance& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS account that the stack instance is associated with.</p>
     */
    inline StackInstance& WithAccount(const char* value) { SetAccount(value); return *this;}


    /**
     * <p>The name of the AWS region that the stack instance is associated with.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The name of the AWS region that the stack instance is associated with.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The name of the AWS region that the stack instance is associated with.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The name of the AWS region that the stack instance is associated with.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The name of the AWS region that the stack instance is associated with.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The name of the AWS region that the stack instance is associated with.</p>
     */
    inline StackInstance& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The name of the AWS region that the stack instance is associated with.</p>
     */
    inline StackInstance& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS region that the stack instance is associated with.</p>
     */
    inline StackInstance& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set. </p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to true, to delete the stack instance, and then delete the stack manually. </p>
     * </li> <li> <p> <code>OUTDATED</code>: The stack isn't currently up to date with
     * the stack set because either the associated stack failed during a
     * <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation, or the
     * stack was part of a <code>CreateStackSet</code> or <code>UpdateStackSet</code>
     * operation that failed or was stopped before the stack was created or
     * updated.</p> </li> <li> <p> <code>CURRENT</code>: The stack is currently up to
     * date with the stack set.</p> </li> </ul>
     */
    inline const StackInstanceStatus& GetStackInstanceStatus() const{ return m_stackInstanceStatus; }

    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set. </p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to true, to delete the stack instance, and then delete the stack manually. </p>
     * </li> <li> <p> <code>OUTDATED</code>: The stack isn't currently up to date with
     * the stack set because either the associated stack failed during a
     * <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation, or the
     * stack was part of a <code>CreateStackSet</code> or <code>UpdateStackSet</code>
     * operation that failed or was stopped before the stack was created or
     * updated.</p> </li> <li> <p> <code>CURRENT</code>: The stack is currently up to
     * date with the stack set.</p> </li> </ul>
     */
    inline bool StackInstanceStatusHasBeenSet() const { return m_stackInstanceStatusHasBeenSet; }

    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set. </p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to true, to delete the stack instance, and then delete the stack manually. </p>
     * </li> <li> <p> <code>OUTDATED</code>: The stack isn't currently up to date with
     * the stack set because either the associated stack failed during a
     * <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation, or the
     * stack was part of a <code>CreateStackSet</code> or <code>UpdateStackSet</code>
     * operation that failed or was stopped before the stack was created or
     * updated.</p> </li> <li> <p> <code>CURRENT</code>: The stack is currently up to
     * date with the stack set.</p> </li> </ul>
     */
    inline void SetStackInstanceStatus(const StackInstanceStatus& value) { m_stackInstanceStatusHasBeenSet = true; m_stackInstanceStatus = value; }

    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set. </p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to true, to delete the stack instance, and then delete the stack manually. </p>
     * </li> <li> <p> <code>OUTDATED</code>: The stack isn't currently up to date with
     * the stack set because either the associated stack failed during a
     * <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation, or the
     * stack was part of a <code>CreateStackSet</code> or <code>UpdateStackSet</code>
     * operation that failed or was stopped before the stack was created or
     * updated.</p> </li> <li> <p> <code>CURRENT</code>: The stack is currently up to
     * date with the stack set.</p> </li> </ul>
     */
    inline void SetStackInstanceStatus(StackInstanceStatus&& value) { m_stackInstanceStatusHasBeenSet = true; m_stackInstanceStatus = std::move(value); }

    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set. </p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to true, to delete the stack instance, and then delete the stack manually. </p>
     * </li> <li> <p> <code>OUTDATED</code>: The stack isn't currently up to date with
     * the stack set because either the associated stack failed during a
     * <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation, or the
     * stack was part of a <code>CreateStackSet</code> or <code>UpdateStackSet</code>
     * operation that failed or was stopped before the stack was created or
     * updated.</p> </li> <li> <p> <code>CURRENT</code>: The stack is currently up to
     * date with the stack set.</p> </li> </ul>
     */
    inline StackInstance& WithStackInstanceStatus(const StackInstanceStatus& value) { SetStackInstanceStatus(value); return *this;}

    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set. </p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to true, to delete the stack instance, and then delete the stack manually. </p>
     * </li> <li> <p> <code>OUTDATED</code>: The stack isn't currently up to date with
     * the stack set because either the associated stack failed during a
     * <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation, or the
     * stack was part of a <code>CreateStackSet</code> or <code>UpdateStackSet</code>
     * operation that failed or was stopped before the stack was created or
     * updated.</p> </li> <li> <p> <code>CURRENT</code>: The stack is currently up to
     * date with the stack set.</p> </li> </ul>
     */
    inline StackInstance& WithStackInstanceStatus(StackInstanceStatus&& value) { SetStackInstanceStatus(std::move(value)); return *this;}

  private:

    Aws::String m_account;
    bool m_accountHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    StackInstanceStatus m_stackInstanceStatus;
    bool m_stackInstanceStatusHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
