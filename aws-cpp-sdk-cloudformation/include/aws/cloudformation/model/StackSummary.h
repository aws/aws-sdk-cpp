/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/StackStatus.h>

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
   * <p>The StackSummary Data Type</p>
   */
  class AWS_CLOUDFORMATION_API StackSummary
  {
  public:
    StackSummary();
    StackSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    StackSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>Unique stack identifier.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>Unique stack identifier.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>Unique stack identifier.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>Unique stack identifier.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>Unique stack identifier.</p>
     */
    inline StackSummary& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>Unique stack identifier.</p>
     */
    inline StackSummary& WithStackId(Aws::String&& value) { SetStackId(value); return *this;}

    /**
     * <p>Unique stack identifier.</p>
     */
    inline StackSummary& WithStackId(const char* value) { SetStackId(value); return *this;}

    /**
     * <p>The name associated with the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name associated with the stack.</p>
     */
    inline StackSummary& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name associated with the stack.</p>
     */
    inline StackSummary& WithStackName(Aws::String&& value) { SetStackName(value); return *this;}

    /**
     * <p>The name associated with the stack.</p>
     */
    inline StackSummary& WithStackName(const char* value) { SetStackName(value); return *this;}

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline const Aws::String& GetTemplateDescription() const{ return m_templateDescription; }

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline void SetTemplateDescription(const Aws::String& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = value; }

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline void SetTemplateDescription(Aws::String&& value) { m_templateDescriptionHasBeenSet = true; m_templateDescription = value; }

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline void SetTemplateDescription(const char* value) { m_templateDescriptionHasBeenSet = true; m_templateDescription.assign(value); }

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline StackSummary& WithTemplateDescription(const Aws::String& value) { SetTemplateDescription(value); return *this;}

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline StackSummary& WithTemplateDescription(Aws::String&& value) { SetTemplateDescription(value); return *this;}

    /**
     * <p>The template description of the template used to create the stack.</p>
     */
    inline StackSummary& WithTemplateDescription(const char* value) { SetTemplateDescription(value); return *this;}

    /**
     * <p>The time the stack was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the stack was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the stack was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the stack was created.</p>
     */
    inline StackSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the stack was created.</p>
     */
    inline StackSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline StackSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time the stack was last updated. This field will only be returned if the
     * stack has been updated at least once.</p>
     */
    inline StackSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionTime() const{ return m_deletionTime; }

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline void SetDeletionTime(const Aws::Utils::DateTime& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = value; }

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline void SetDeletionTime(Aws::Utils::DateTime&& value) { m_deletionTimeHasBeenSet = true; m_deletionTime = value; }

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline StackSummary& WithDeletionTime(const Aws::Utils::DateTime& value) { SetDeletionTime(value); return *this;}

    /**
     * <p>The time the stack was deleted.</p>
     */
    inline StackSummary& WithDeletionTime(Aws::Utils::DateTime&& value) { SetDeletionTime(value); return *this;}

    /**
     * <p>The current status of the stack.</p>
     */
    inline const StackStatus& GetStackStatus() const{ return m_stackStatus; }

    /**
     * <p>The current status of the stack.</p>
     */
    inline void SetStackStatus(const StackStatus& value) { m_stackStatusHasBeenSet = true; m_stackStatus = value; }

    /**
     * <p>The current status of the stack.</p>
     */
    inline void SetStackStatus(StackStatus&& value) { m_stackStatusHasBeenSet = true; m_stackStatus = value; }

    /**
     * <p>The current status of the stack.</p>
     */
    inline StackSummary& WithStackStatus(const StackStatus& value) { SetStackStatus(value); return *this;}

    /**
     * <p>The current status of the stack.</p>
     */
    inline StackSummary& WithStackStatus(StackStatus&& value) { SetStackStatus(value); return *this;}

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline const Aws::String& GetStackStatusReason() const{ return m_stackStatusReason; }

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline void SetStackStatusReason(const Aws::String& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = value; }

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline void SetStackStatusReason(Aws::String&& value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason = value; }

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline void SetStackStatusReason(const char* value) { m_stackStatusReasonHasBeenSet = true; m_stackStatusReason.assign(value); }

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline StackSummary& WithStackStatusReason(const Aws::String& value) { SetStackStatusReason(value); return *this;}

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline StackSummary& WithStackStatusReason(Aws::String&& value) { SetStackStatusReason(value); return *this;}

    /**
     * <p>Success/Failure message associated with the stack status.</p>
     */
    inline StackSummary& WithStackStatusReason(const char* value) { SetStackStatusReason(value); return *this;}

  private:
    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;
    Aws::String m_stackName;
    bool m_stackNameHasBeenSet;
    Aws::String m_templateDescription;
    bool m_templateDescriptionHasBeenSet;
    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;
    Aws::Utils::DateTime m_deletionTime;
    bool m_deletionTimeHasBeenSet;
    StackStatus m_stackStatus;
    bool m_stackStatusHasBeenSet;
    Aws::String m_stackStatusReason;
    bool m_stackStatusReasonHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
