/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/GeneratedTemplateStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The summary of a generated template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/TemplateSummary">AWS
   * API Reference</a></p>
   */
  class TemplateSummary
  {
  public:
    AWS_CLOUDFORMATION_API TemplateSummary();
    AWS_CLOUDFORMATION_API TemplateSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API TemplateSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the generated template. The format is
     * <code>arn:${Partition}:cloudformation:${Region}:${Account}:generatedtemplate/${Id}</code>.
     * For example,
     * <code>arn:aws:cloudformation:<i>us-east-1</i>:<i>123456789012</i>:generatedtemplate/<i>2e8465c1-9a80-43ea-a3a3-4f2d692fe6dc</i>
     * </code>.</p>
     */
    inline const Aws::String& GetGeneratedTemplateId() const{ return m_generatedTemplateId; }
    inline bool GeneratedTemplateIdHasBeenSet() const { return m_generatedTemplateIdHasBeenSet; }
    inline void SetGeneratedTemplateId(const Aws::String& value) { m_generatedTemplateIdHasBeenSet = true; m_generatedTemplateId = value; }
    inline void SetGeneratedTemplateId(Aws::String&& value) { m_generatedTemplateIdHasBeenSet = true; m_generatedTemplateId = std::move(value); }
    inline void SetGeneratedTemplateId(const char* value) { m_generatedTemplateIdHasBeenSet = true; m_generatedTemplateId.assign(value); }
    inline TemplateSummary& WithGeneratedTemplateId(const Aws::String& value) { SetGeneratedTemplateId(value); return *this;}
    inline TemplateSummary& WithGeneratedTemplateId(Aws::String&& value) { SetGeneratedTemplateId(std::move(value)); return *this;}
    inline TemplateSummary& WithGeneratedTemplateId(const char* value) { SetGeneratedTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the generated template.</p>
     */
    inline const Aws::String& GetGeneratedTemplateName() const{ return m_generatedTemplateName; }
    inline bool GeneratedTemplateNameHasBeenSet() const { return m_generatedTemplateNameHasBeenSet; }
    inline void SetGeneratedTemplateName(const Aws::String& value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName = value; }
    inline void SetGeneratedTemplateName(Aws::String&& value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName = std::move(value); }
    inline void SetGeneratedTemplateName(const char* value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName.assign(value); }
    inline TemplateSummary& WithGeneratedTemplateName(const Aws::String& value) { SetGeneratedTemplateName(value); return *this;}
    inline TemplateSummary& WithGeneratedTemplateName(Aws::String&& value) { SetGeneratedTemplateName(std::move(value)); return *this;}
    inline TemplateSummary& WithGeneratedTemplateName(const char* value) { SetGeneratedTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the template generation. Supported values are:</p> <ul> <li>
     * <p> <code>CreatePending</code> - the creation of the template is pending.</p>
     * </li> <li> <p> <code>CreateInProgress</code> - the creation of the template is
     * in progress.</p> </li> <li> <p> <code>DeletePending</code> - the deletion of the
     * template is pending.</p> </li> <li> <p> <code>DeleteInProgress</code> - the
     * deletion of the template is in progress.</p> </li> <li> <p>
     * <code>UpdatePending</code> - the update of the template is pending.</p> </li>
     * <li> <p> <code>UpdateInProgress</code> - the update of the template is in
     * progress.</p> </li> <li> <p> <code>Failed</code> - the template operation
     * failed.</p> </li> <li> <p> <code>Complete</code> - the template operation is
     * complete.</p> </li> </ul>
     */
    inline const GeneratedTemplateStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const GeneratedTemplateStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(GeneratedTemplateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TemplateSummary& WithStatus(const GeneratedTemplateStatus& value) { SetStatus(value); return *this;}
    inline TemplateSummary& WithStatus(GeneratedTemplateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current template generation status. This will provide more
     * details if a failure happened.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline TemplateSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline TemplateSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline TemplateSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the generated template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline TemplateSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline TemplateSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the generated template was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline TemplateSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline TemplateSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources in the generated template. This is a total of
     * resources in pending, in-progress, completed, and failed states.</p>
     */
    inline int GetNumberOfResources() const{ return m_numberOfResources; }
    inline bool NumberOfResourcesHasBeenSet() const { return m_numberOfResourcesHasBeenSet; }
    inline void SetNumberOfResources(int value) { m_numberOfResourcesHasBeenSet = true; m_numberOfResources = value; }
    inline TemplateSummary& WithNumberOfResources(int value) { SetNumberOfResources(value); return *this;}
    ///@}
  private:

    Aws::String m_generatedTemplateId;
    bool m_generatedTemplateIdHasBeenSet = false;

    Aws::String m_generatedTemplateName;
    bool m_generatedTemplateNameHasBeenSet = false;

    GeneratedTemplateStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    int m_numberOfResources;
    bool m_numberOfResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
