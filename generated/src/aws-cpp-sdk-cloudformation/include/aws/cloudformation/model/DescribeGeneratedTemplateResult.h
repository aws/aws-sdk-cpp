/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/GeneratedTemplateStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/TemplateProgress.h>
#include <aws/cloudformation/model/TemplateConfiguration.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/ResourceDetail.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  class DescribeGeneratedTemplateResult
  {
  public:
    AWS_CLOUDFORMATION_API DescribeGeneratedTemplateResult();
    AWS_CLOUDFORMATION_API DescribeGeneratedTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API DescribeGeneratedTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the generated template. The format is
     * <code>arn:${Partition}:cloudformation:${Region}:${Account}:generatedtemplate/${Id}</code>.
     * For example,
     * <code>arn:aws:cloudformation:<i>us-east-1</i>:<i>123456789012</i>:generatedtemplate/<i>2e8465c1-9a80-43ea-a3a3-4f2d692fe6dc</i>
     * </code>.</p>
     */
    inline const Aws::String& GetGeneratedTemplateId() const{ return m_generatedTemplateId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the generated template. The format is
     * <code>arn:${Partition}:cloudformation:${Region}:${Account}:generatedtemplate/${Id}</code>.
     * For example,
     * <code>arn:aws:cloudformation:<i>us-east-1</i>:<i>123456789012</i>:generatedtemplate/<i>2e8465c1-9a80-43ea-a3a3-4f2d692fe6dc</i>
     * </code>.</p>
     */
    inline void SetGeneratedTemplateId(const Aws::String& value) { m_generatedTemplateId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the generated template. The format is
     * <code>arn:${Partition}:cloudformation:${Region}:${Account}:generatedtemplate/${Id}</code>.
     * For example,
     * <code>arn:aws:cloudformation:<i>us-east-1</i>:<i>123456789012</i>:generatedtemplate/<i>2e8465c1-9a80-43ea-a3a3-4f2d692fe6dc</i>
     * </code>.</p>
     */
    inline void SetGeneratedTemplateId(Aws::String&& value) { m_generatedTemplateId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the generated template. The format is
     * <code>arn:${Partition}:cloudformation:${Region}:${Account}:generatedtemplate/${Id}</code>.
     * For example,
     * <code>arn:aws:cloudformation:<i>us-east-1</i>:<i>123456789012</i>:generatedtemplate/<i>2e8465c1-9a80-43ea-a3a3-4f2d692fe6dc</i>
     * </code>.</p>
     */
    inline void SetGeneratedTemplateId(const char* value) { m_generatedTemplateId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the generated template. The format is
     * <code>arn:${Partition}:cloudformation:${Region}:${Account}:generatedtemplate/${Id}</code>.
     * For example,
     * <code>arn:aws:cloudformation:<i>us-east-1</i>:<i>123456789012</i>:generatedtemplate/<i>2e8465c1-9a80-43ea-a3a3-4f2d692fe6dc</i>
     * </code>.</p>
     */
    inline DescribeGeneratedTemplateResult& WithGeneratedTemplateId(const Aws::String& value) { SetGeneratedTemplateId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the generated template. The format is
     * <code>arn:${Partition}:cloudformation:${Region}:${Account}:generatedtemplate/${Id}</code>.
     * For example,
     * <code>arn:aws:cloudformation:<i>us-east-1</i>:<i>123456789012</i>:generatedtemplate/<i>2e8465c1-9a80-43ea-a3a3-4f2d692fe6dc</i>
     * </code>.</p>
     */
    inline DescribeGeneratedTemplateResult& WithGeneratedTemplateId(Aws::String&& value) { SetGeneratedTemplateId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the generated template. The format is
     * <code>arn:${Partition}:cloudformation:${Region}:${Account}:generatedtemplate/${Id}</code>.
     * For example,
     * <code>arn:aws:cloudformation:<i>us-east-1</i>:<i>123456789012</i>:generatedtemplate/<i>2e8465c1-9a80-43ea-a3a3-4f2d692fe6dc</i>
     * </code>.</p>
     */
    inline DescribeGeneratedTemplateResult& WithGeneratedTemplateId(const char* value) { SetGeneratedTemplateId(value); return *this;}


    /**
     * <p>The name of the generated template.</p>
     */
    inline const Aws::String& GetGeneratedTemplateName() const{ return m_generatedTemplateName; }

    /**
     * <p>The name of the generated template.</p>
     */
    inline void SetGeneratedTemplateName(const Aws::String& value) { m_generatedTemplateName = value; }

    /**
     * <p>The name of the generated template.</p>
     */
    inline void SetGeneratedTemplateName(Aws::String&& value) { m_generatedTemplateName = std::move(value); }

    /**
     * <p>The name of the generated template.</p>
     */
    inline void SetGeneratedTemplateName(const char* value) { m_generatedTemplateName.assign(value); }

    /**
     * <p>The name of the generated template.</p>
     */
    inline DescribeGeneratedTemplateResult& WithGeneratedTemplateName(const Aws::String& value) { SetGeneratedTemplateName(value); return *this;}

    /**
     * <p>The name of the generated template.</p>
     */
    inline DescribeGeneratedTemplateResult& WithGeneratedTemplateName(Aws::String&& value) { SetGeneratedTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the generated template.</p>
     */
    inline DescribeGeneratedTemplateResult& WithGeneratedTemplateName(const char* value) { SetGeneratedTemplateName(value); return *this;}


    /**
     * <p>A list of objects describing the details of the resources in the template
     * generation.</p>
     */
    inline const Aws::Vector<ResourceDetail>& GetResources() const{ return m_resources; }

    /**
     * <p>A list of objects describing the details of the resources in the template
     * generation.</p>
     */
    inline void SetResources(const Aws::Vector<ResourceDetail>& value) { m_resources = value; }

    /**
     * <p>A list of objects describing the details of the resources in the template
     * generation.</p>
     */
    inline void SetResources(Aws::Vector<ResourceDetail>&& value) { m_resources = std::move(value); }

    /**
     * <p>A list of objects describing the details of the resources in the template
     * generation.</p>
     */
    inline DescribeGeneratedTemplateResult& WithResources(const Aws::Vector<ResourceDetail>& value) { SetResources(value); return *this;}

    /**
     * <p>A list of objects describing the details of the resources in the template
     * generation.</p>
     */
    inline DescribeGeneratedTemplateResult& WithResources(Aws::Vector<ResourceDetail>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>A list of objects describing the details of the resources in the template
     * generation.</p>
     */
    inline DescribeGeneratedTemplateResult& AddResources(const ResourceDetail& value) { m_resources.push_back(value); return *this; }

    /**
     * <p>A list of objects describing the details of the resources in the template
     * generation.</p>
     */
    inline DescribeGeneratedTemplateResult& AddResources(ResourceDetail&& value) { m_resources.push_back(std::move(value)); return *this; }


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
    inline void SetStatus(const GeneratedTemplateStatus& value) { m_status = value; }

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
    inline void SetStatus(GeneratedTemplateStatus&& value) { m_status = std::move(value); }

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
    inline DescribeGeneratedTemplateResult& WithStatus(const GeneratedTemplateStatus& value) { SetStatus(value); return *this;}

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
    inline DescribeGeneratedTemplateResult& WithStatus(GeneratedTemplateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the current template generation status. This will provide more
     * details if a failure happened.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the current template generation status. This will provide more
     * details if a failure happened.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>The reason for the current template generation status. This will provide more
     * details if a failure happened.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>The reason for the current template generation status. This will provide more
     * details if a failure happened.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>The reason for the current template generation status. This will provide more
     * details if a failure happened.</p>
     */
    inline DescribeGeneratedTemplateResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the current template generation status. This will provide more
     * details if a failure happened.</p>
     */
    inline DescribeGeneratedTemplateResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the current template generation status. This will provide more
     * details if a failure happened.</p>
     */
    inline DescribeGeneratedTemplateResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The time the generated template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the generated template was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time the generated template was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time the generated template was created.</p>
     */
    inline DescribeGeneratedTemplateResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the generated template was created.</p>
     */
    inline DescribeGeneratedTemplateResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the generated template was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time the generated template was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>The time the generated template was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time the generated template was last updated.</p>
     */
    inline DescribeGeneratedTemplateResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time the generated template was last updated.</p>
     */
    inline DescribeGeneratedTemplateResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>An object describing the progress of the template generation.</p>
     */
    inline const TemplateProgress& GetProgress() const{ return m_progress; }

    /**
     * <p>An object describing the progress of the template generation.</p>
     */
    inline void SetProgress(const TemplateProgress& value) { m_progress = value; }

    /**
     * <p>An object describing the progress of the template generation.</p>
     */
    inline void SetProgress(TemplateProgress&& value) { m_progress = std::move(value); }

    /**
     * <p>An object describing the progress of the template generation.</p>
     */
    inline DescribeGeneratedTemplateResult& WithProgress(const TemplateProgress& value) { SetProgress(value); return *this;}

    /**
     * <p>An object describing the progress of the template generation.</p>
     */
    inline DescribeGeneratedTemplateResult& WithProgress(TemplateProgress&& value) { SetProgress(std::move(value)); return *this;}


    /**
     * <p>The stack ARN of the base stack if a base stack was provided when generating
     * the template.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ARN of the base stack if a base stack was provided when generating
     * the template.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackId = value; }

    /**
     * <p>The stack ARN of the base stack if a base stack was provided when generating
     * the template.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackId = std::move(value); }

    /**
     * <p>The stack ARN of the base stack if a base stack was provided when generating
     * the template.</p>
     */
    inline void SetStackId(const char* value) { m_stackId.assign(value); }

    /**
     * <p>The stack ARN of the base stack if a base stack was provided when generating
     * the template.</p>
     */
    inline DescribeGeneratedTemplateResult& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ARN of the base stack if a base stack was provided when generating
     * the template.</p>
     */
    inline DescribeGeneratedTemplateResult& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ARN of the base stack if a base stack was provided when generating
     * the template.</p>
     */
    inline DescribeGeneratedTemplateResult& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The configuration details of the generated template, including the
     * <code>DeletionPolicy</code> and <code>UpdateReplacePolicy</code>.</p>
     */
    inline const TemplateConfiguration& GetTemplateConfiguration() const{ return m_templateConfiguration; }

    /**
     * <p>The configuration details of the generated template, including the
     * <code>DeletionPolicy</code> and <code>UpdateReplacePolicy</code>.</p>
     */
    inline void SetTemplateConfiguration(const TemplateConfiguration& value) { m_templateConfiguration = value; }

    /**
     * <p>The configuration details of the generated template, including the
     * <code>DeletionPolicy</code> and <code>UpdateReplacePolicy</code>.</p>
     */
    inline void SetTemplateConfiguration(TemplateConfiguration&& value) { m_templateConfiguration = std::move(value); }

    /**
     * <p>The configuration details of the generated template, including the
     * <code>DeletionPolicy</code> and <code>UpdateReplacePolicy</code>.</p>
     */
    inline DescribeGeneratedTemplateResult& WithTemplateConfiguration(const TemplateConfiguration& value) { SetTemplateConfiguration(value); return *this;}

    /**
     * <p>The configuration details of the generated template, including the
     * <code>DeletionPolicy</code> and <code>UpdateReplacePolicy</code>.</p>
     */
    inline DescribeGeneratedTemplateResult& WithTemplateConfiguration(TemplateConfiguration&& value) { SetTemplateConfiguration(std::move(value)); return *this;}


    /**
     * <p>The number of warnings generated for this template. The warnings are found in
     * the details of each of the resources in the template.</p>
     */
    inline int GetTotalWarnings() const{ return m_totalWarnings; }

    /**
     * <p>The number of warnings generated for this template. The warnings are found in
     * the details of each of the resources in the template.</p>
     */
    inline void SetTotalWarnings(int value) { m_totalWarnings = value; }

    /**
     * <p>The number of warnings generated for this template. The warnings are found in
     * the details of each of the resources in the template.</p>
     */
    inline DescribeGeneratedTemplateResult& WithTotalWarnings(int value) { SetTotalWarnings(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeGeneratedTemplateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeGeneratedTemplateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_generatedTemplateId;

    Aws::String m_generatedTemplateName;

    Aws::Vector<ResourceDetail> m_resources;

    GeneratedTemplateStatus m_status;

    Aws::String m_statusReason;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastUpdatedTime;

    TemplateProgress m_progress;

    Aws::String m_stackId;

    TemplateConfiguration m_templateConfiguration;

    int m_totalWarnings;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
