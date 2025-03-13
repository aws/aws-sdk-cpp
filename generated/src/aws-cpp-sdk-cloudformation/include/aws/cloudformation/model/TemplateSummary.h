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
    AWS_CLOUDFORMATION_API TemplateSummary() = default;
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
    inline const Aws::String& GetGeneratedTemplateId() const { return m_generatedTemplateId; }
    inline bool GeneratedTemplateIdHasBeenSet() const { return m_generatedTemplateIdHasBeenSet; }
    template<typename GeneratedTemplateIdT = Aws::String>
    void SetGeneratedTemplateId(GeneratedTemplateIdT&& value) { m_generatedTemplateIdHasBeenSet = true; m_generatedTemplateId = std::forward<GeneratedTemplateIdT>(value); }
    template<typename GeneratedTemplateIdT = Aws::String>
    TemplateSummary& WithGeneratedTemplateId(GeneratedTemplateIdT&& value) { SetGeneratedTemplateId(std::forward<GeneratedTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the generated template.</p>
     */
    inline const Aws::String& GetGeneratedTemplateName() const { return m_generatedTemplateName; }
    inline bool GeneratedTemplateNameHasBeenSet() const { return m_generatedTemplateNameHasBeenSet; }
    template<typename GeneratedTemplateNameT = Aws::String>
    void SetGeneratedTemplateName(GeneratedTemplateNameT&& value) { m_generatedTemplateNameHasBeenSet = true; m_generatedTemplateName = std::forward<GeneratedTemplateNameT>(value); }
    template<typename GeneratedTemplateNameT = Aws::String>
    TemplateSummary& WithGeneratedTemplateName(GeneratedTemplateNameT&& value) { SetGeneratedTemplateName(std::forward<GeneratedTemplateNameT>(value)); return *this;}
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
    inline GeneratedTemplateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(GeneratedTemplateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TemplateSummary& WithStatus(GeneratedTemplateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current template generation status. This will provide more
     * details if a failure happened.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    TemplateSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the generated template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TemplateSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the generated template was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    TemplateSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources in the generated template. This is a total of
     * resources in pending, in-progress, completed, and failed states.</p>
     */
    inline int GetNumberOfResources() const { return m_numberOfResources; }
    inline bool NumberOfResourcesHasBeenSet() const { return m_numberOfResourcesHasBeenSet; }
    inline void SetNumberOfResources(int value) { m_numberOfResourcesHasBeenSet = true; m_numberOfResources = value; }
    inline TemplateSummary& WithNumberOfResources(int value) { SetNumberOfResources(value); return *this;}
    ///@}
  private:

    Aws::String m_generatedTemplateId;
    bool m_generatedTemplateIdHasBeenSet = false;

    Aws::String m_generatedTemplateName;
    bool m_generatedTemplateNameHasBeenSet = false;

    GeneratedTemplateStatus m_status{GeneratedTemplateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    int m_numberOfResources{0};
    bool m_numberOfResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
