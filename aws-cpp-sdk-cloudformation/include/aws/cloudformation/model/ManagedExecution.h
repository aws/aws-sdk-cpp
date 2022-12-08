/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>Describes whether StackSets performs non-conflicting operations concurrently
   * and queues conflicting operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/ManagedExecution">AWS
   * API Reference</a></p>
   */
  class ManagedExecution
  {
  public:
    AWS_CLOUDFORMATION_API ManagedExecution();
    AWS_CLOUDFORMATION_API ManagedExecution(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API ManagedExecution& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>When <code>true</code>, StackSets performs non-conflicting operations
     * concurrently and queues conflicting operations. After conflicting operations
     * finish, StackSets starts queued operations in request order.</p>  <p>If
     * there are already running or queued operations, StackSets queues all incoming
     * operations even if they are non-conflicting.</p> <p>You can't modify your stack
     * set's execution configuration while there are running or queued operations for
     * that stack set.</p>  <p>When <code>false</code> (default), StackSets
     * performs one operation at a time in request order.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>When <code>true</code>, StackSets performs non-conflicting operations
     * concurrently and queues conflicting operations. After conflicting operations
     * finish, StackSets starts queued operations in request order.</p>  <p>If
     * there are already running or queued operations, StackSets queues all incoming
     * operations even if they are non-conflicting.</p> <p>You can't modify your stack
     * set's execution configuration while there are running or queued operations for
     * that stack set.</p>  <p>When <code>false</code> (default), StackSets
     * performs one operation at a time in request order.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>When <code>true</code>, StackSets performs non-conflicting operations
     * concurrently and queues conflicting operations. After conflicting operations
     * finish, StackSets starts queued operations in request order.</p>  <p>If
     * there are already running or queued operations, StackSets queues all incoming
     * operations even if they are non-conflicting.</p> <p>You can't modify your stack
     * set's execution configuration while there are running or queued operations for
     * that stack set.</p>  <p>When <code>false</code> (default), StackSets
     * performs one operation at a time in request order.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>When <code>true</code>, StackSets performs non-conflicting operations
     * concurrently and queues conflicting operations. After conflicting operations
     * finish, StackSets starts queued operations in request order.</p>  <p>If
     * there are already running or queued operations, StackSets queues all incoming
     * operations even if they are non-conflicting.</p> <p>You can't modify your stack
     * set's execution configuration while there are running or queued operations for
     * that stack set.</p>  <p>When <code>false</code> (default), StackSets
     * performs one operation at a time in request order.</p>
     */
    inline ManagedExecution& WithActive(bool value) { SetActive(value); return *this;}

  private:

    bool m_active;
    bool m_activeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
