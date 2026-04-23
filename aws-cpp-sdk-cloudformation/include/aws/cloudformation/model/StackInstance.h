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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/StackInstanceStatus.h>
#include <aws/cloudformation/model/Parameter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
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
   * stack and the stack status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackInstance">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API StackInstance
  {
  public:
    StackInstance();
    StackInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    StackInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name or unique ID of the stack set that the stack instance is associated
     * with.</p>
     */
    inline const Aws::String& GetStackSetId() const{ return m_stackSetId; }

    /**
     * <p>The name or unique ID of the stack set that the stack instance is associated
     * with.</p>
     */
    inline bool StackSetIdHasBeenSet() const { return m_stackSetIdHasBeenSet; }

    /**
     * <p>The name or unique ID of the stack set that the stack instance is associated
     * with.</p>
     */
    inline void SetStackSetId(const Aws::String& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = value; }

    /**
     * <p>The name or unique ID of the stack set that the stack instance is associated
     * with.</p>
     */
    inline void SetStackSetId(Aws::String&& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = std::move(value); }

    /**
     * <p>The name or unique ID of the stack set that the stack instance is associated
     * with.</p>
     */
    inline void SetStackSetId(const char* value) { m_stackSetIdHasBeenSet = true; m_stackSetId.assign(value); }

    /**
     * <p>The name or unique ID of the stack set that the stack instance is associated
     * with.</p>
     */
    inline StackInstance& WithStackSetId(const Aws::String& value) { SetStackSetId(value); return *this;}

    /**
     * <p>The name or unique ID of the stack set that the stack instance is associated
     * with.</p>
     */
    inline StackInstance& WithStackSetId(Aws::String&& value) { SetStackSetId(std::move(value)); return *this;}

    /**
     * <p>The name or unique ID of the stack set that the stack instance is associated
     * with.</p>
     */
    inline StackInstance& WithStackSetId(const char* value) { SetStackSetId(value); return *this;}


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
     * <p>The ID of the stack instance.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline StackInstance& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline StackInstance& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The ID of the stack instance.</p>
     */
    inline StackInstance& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>A list of parameters from the stack set template whose values have been
     * overridden in this stack instance.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameterOverrides() const{ return m_parameterOverrides; }

    /**
     * <p>A list of parameters from the stack set template whose values have been
     * overridden in this stack instance.</p>
     */
    inline bool ParameterOverridesHasBeenSet() const { return m_parameterOverridesHasBeenSet; }

    /**
     * <p>A list of parameters from the stack set template whose values have been
     * overridden in this stack instance.</p>
     */
    inline void SetParameterOverrides(const Aws::Vector<Parameter>& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = value; }

    /**
     * <p>A list of parameters from the stack set template whose values have been
     * overridden in this stack instance.</p>
     */
    inline void SetParameterOverrides(Aws::Vector<Parameter>&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = std::move(value); }

    /**
     * <p>A list of parameters from the stack set template whose values have been
     * overridden in this stack instance.</p>
     */
    inline StackInstance& WithParameterOverrides(const Aws::Vector<Parameter>& value) { SetParameterOverrides(value); return *this;}

    /**
     * <p>A list of parameters from the stack set template whose values have been
     * overridden in this stack instance.</p>
     */
    inline StackInstance& WithParameterOverrides(Aws::Vector<Parameter>&& value) { SetParameterOverrides(std::move(value)); return *this;}

    /**
     * <p>A list of parameters from the stack set template whose values have been
     * overridden in this stack instance.</p>
     */
    inline StackInstance& AddParameterOverrides(const Parameter& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.push_back(value); return *this; }

    /**
     * <p>A list of parameters from the stack set template whose values have been
     * overridden in this stack instance.</p>
     */
    inline StackInstance& AddParameterOverrides(Parameter&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set.</p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to <code>true</code>, to delete the stack instance, and then delete the stack
     * manually.</p> </li> <li> <p> <code>OUTDATED</code>: The stack isn't currently up
     * to date with the stack set because:</p> <ul> <li> <p>The associated stack failed
     * during a <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation.
     * </p> </li> <li> <p>The stack was part of a <code>CreateStackSet</code> or
     * <code>UpdateStackSet</code> operation that failed or was stopped before the
     * stack was created or updated. </p> </li> </ul> </li> <li> <p>
     * <code>CURRENT</code>: The stack is currently up to date with the stack set.</p>
     * </li> </ul>
     */
    inline const StackInstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set.</p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to <code>true</code>, to delete the stack instance, and then delete the stack
     * manually.</p> </li> <li> <p> <code>OUTDATED</code>: The stack isn't currently up
     * to date with the stack set because:</p> <ul> <li> <p>The associated stack failed
     * during a <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation.
     * </p> </li> <li> <p>The stack was part of a <code>CreateStackSet</code> or
     * <code>UpdateStackSet</code> operation that failed or was stopped before the
     * stack was created or updated. </p> </li> </ul> </li> <li> <p>
     * <code>CURRENT</code>: The stack is currently up to date with the stack set.</p>
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set.</p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to <code>true</code>, to delete the stack instance, and then delete the stack
     * manually.</p> </li> <li> <p> <code>OUTDATED</code>: The stack isn't currently up
     * to date with the stack set because:</p> <ul> <li> <p>The associated stack failed
     * during a <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation.
     * </p> </li> <li> <p>The stack was part of a <code>CreateStackSet</code> or
     * <code>UpdateStackSet</code> operation that failed or was stopped before the
     * stack was created or updated. </p> </li> </ul> </li> <li> <p>
     * <code>CURRENT</code>: The stack is currently up to date with the stack set.</p>
     * </li> </ul>
     */
    inline void SetStatus(const StackInstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set.</p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to <code>true</code>, to delete the stack instance, and then delete the stack
     * manually.</p> </li> <li> <p> <code>OUTDATED</code>: The stack isn't currently up
     * to date with the stack set because:</p> <ul> <li> <p>The associated stack failed
     * during a <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation.
     * </p> </li> <li> <p>The stack was part of a <code>CreateStackSet</code> or
     * <code>UpdateStackSet</code> operation that failed or was stopped before the
     * stack was created or updated. </p> </li> </ul> </li> <li> <p>
     * <code>CURRENT</code>: The stack is currently up to date with the stack set.</p>
     * </li> </ul>
     */
    inline void SetStatus(StackInstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set.</p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to <code>true</code>, to delete the stack instance, and then delete the stack
     * manually.</p> </li> <li> <p> <code>OUTDATED</code>: The stack isn't currently up
     * to date with the stack set because:</p> <ul> <li> <p>The associated stack failed
     * during a <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation.
     * </p> </li> <li> <p>The stack was part of a <code>CreateStackSet</code> or
     * <code>UpdateStackSet</code> operation that failed or was stopped before the
     * stack was created or updated. </p> </li> </ul> </li> <li> <p>
     * <code>CURRENT</code>: The stack is currently up to date with the stack set.</p>
     * </li> </ul>
     */
    inline StackInstance& WithStatus(const StackInstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set.</p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to <code>true</code>, to delete the stack instance, and then delete the stack
     * manually.</p> </li> <li> <p> <code>OUTDATED</code>: The stack isn't currently up
     * to date with the stack set because:</p> <ul> <li> <p>The associated stack failed
     * during a <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation.
     * </p> </li> <li> <p>The stack was part of a <code>CreateStackSet</code> or
     * <code>UpdateStackSet</code> operation that failed or was stopped before the
     * stack was created or updated. </p> </li> </ul> </li> <li> <p>
     * <code>CURRENT</code>: The stack is currently up to date with the stack set.</p>
     * </li> </ul>
     */
    inline StackInstance& WithStatus(StackInstanceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The explanation for the specific status code that is assigned to this stack
     * instance.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The explanation for the specific status code that is assigned to this stack
     * instance.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The explanation for the specific status code that is assigned to this stack
     * instance.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The explanation for the specific status code that is assigned to this stack
     * instance.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The explanation for the specific status code that is assigned to this stack
     * instance.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The explanation for the specific status code that is assigned to this stack
     * instance.</p>
     */
    inline StackInstance& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The explanation for the specific status code that is assigned to this stack
     * instance.</p>
     */
    inline StackInstance& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The explanation for the specific status code that is assigned to this stack
     * instance.</p>
     */
    inline StackInstance& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:

    Aws::String m_stackSetId;
    bool m_stackSetIdHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_account;
    bool m_accountHasBeenSet;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::Vector<Parameter> m_parameterOverrides;
    bool m_parameterOverridesHasBeenSet;

    StackInstanceStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
