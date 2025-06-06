﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/ChangeType.h>
#include <aws/cloudformation/model/ResourceChange.h>
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
   * <p>The <code>Change</code> structure describes the changes CloudFormation will
   * perform if you execute the change set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/Change">AWS
   * API Reference</a></p>
   */
  class Change
  {
  public:
    AWS_CLOUDFORMATION_API Change() = default;
    AWS_CLOUDFORMATION_API Change(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API Change& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of entity that CloudFormation changes.</p> <ul> <li> <p>
     * <code>Resource</code> This change is for a resource.</p> </li> </ul>
     */
    inline ChangeType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChangeType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Change& WithType(ChangeType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Is either <code>null</code>, if no Hooks invoke for the resource, or contains
     * the number of Hooks that will invoke for the resource.</p>
     */
    inline int GetHookInvocationCount() const { return m_hookInvocationCount; }
    inline bool HookInvocationCountHasBeenSet() const { return m_hookInvocationCountHasBeenSet; }
    inline void SetHookInvocationCount(int value) { m_hookInvocationCountHasBeenSet = true; m_hookInvocationCount = value; }
    inline Change& WithHookInvocationCount(int value) { SetHookInvocationCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ResourceChange</code> structure that describes the resource and
     * action that CloudFormation will perform.</p>
     */
    inline const ResourceChange& GetResourceChange() const { return m_resourceChange; }
    inline bool ResourceChangeHasBeenSet() const { return m_resourceChangeHasBeenSet; }
    template<typename ResourceChangeT = ResourceChange>
    void SetResourceChange(ResourceChangeT&& value) { m_resourceChangeHasBeenSet = true; m_resourceChange = std::forward<ResourceChangeT>(value); }
    template<typename ResourceChangeT = ResourceChange>
    Change& WithResourceChange(ResourceChangeT&& value) { SetResourceChange(std::forward<ResourceChangeT>(value)); return *this;}
    ///@}
  private:

    ChangeType m_type{ChangeType::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_hookInvocationCount{0};
    bool m_hookInvocationCountHasBeenSet = false;

    ResourceChange m_resourceChange;
    bool m_resourceChangeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
