/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/GeneratedTemplateStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
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
  class GetGeneratedTemplateResult
  {
  public:
    AWS_CLOUDFORMATION_API GetGeneratedTemplateResult();
    AWS_CLOUDFORMATION_API GetGeneratedTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API GetGeneratedTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetStatus(const GeneratedTemplateStatus& value) { m_status = value; }
    inline void SetStatus(GeneratedTemplateStatus&& value) { m_status = std::move(value); }
    inline GetGeneratedTemplateResult& WithStatus(const GeneratedTemplateStatus& value) { SetStatus(value); return *this;}
    inline GetGeneratedTemplateResult& WithStatus(GeneratedTemplateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template body of the generated template, in the language specified by the
     * <code>Language</code> parameter.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }
    inline void SetTemplateBody(const Aws::String& value) { m_templateBody = value; }
    inline void SetTemplateBody(Aws::String&& value) { m_templateBody = std::move(value); }
    inline void SetTemplateBody(const char* value) { m_templateBody.assign(value); }
    inline GetGeneratedTemplateResult& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}
    inline GetGeneratedTemplateResult& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}
    inline GetGeneratedTemplateResult& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetGeneratedTemplateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetGeneratedTemplateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    GeneratedTemplateStatus m_status;

    Aws::String m_templateBody;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
