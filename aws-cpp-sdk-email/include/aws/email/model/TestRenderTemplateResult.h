/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/ResponseMetadata.h>
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
namespace SES
{
namespace Model
{
  class TestRenderTemplateResult
  {
  public:
    AWS_SES_API TestRenderTemplateResult();
    AWS_SES_API TestRenderTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API TestRenderTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The complete MIME message rendered by applying the data in the TemplateData
     * parameter to the template specified in the TemplateName parameter.</p>
     */
    inline const Aws::String& GetRenderedTemplate() const{ return m_renderedTemplate; }

    /**
     * <p>The complete MIME message rendered by applying the data in the TemplateData
     * parameter to the template specified in the TemplateName parameter.</p>
     */
    inline void SetRenderedTemplate(const Aws::String& value) { m_renderedTemplate = value; }

    /**
     * <p>The complete MIME message rendered by applying the data in the TemplateData
     * parameter to the template specified in the TemplateName parameter.</p>
     */
    inline void SetRenderedTemplate(Aws::String&& value) { m_renderedTemplate = std::move(value); }

    /**
     * <p>The complete MIME message rendered by applying the data in the TemplateData
     * parameter to the template specified in the TemplateName parameter.</p>
     */
    inline void SetRenderedTemplate(const char* value) { m_renderedTemplate.assign(value); }

    /**
     * <p>The complete MIME message rendered by applying the data in the TemplateData
     * parameter to the template specified in the TemplateName parameter.</p>
     */
    inline TestRenderTemplateResult& WithRenderedTemplate(const Aws::String& value) { SetRenderedTemplate(value); return *this;}

    /**
     * <p>The complete MIME message rendered by applying the data in the TemplateData
     * parameter to the template specified in the TemplateName parameter.</p>
     */
    inline TestRenderTemplateResult& WithRenderedTemplate(Aws::String&& value) { SetRenderedTemplate(std::move(value)); return *this;}

    /**
     * <p>The complete MIME message rendered by applying the data in the TemplateData
     * parameter to the template specified in the TemplateName parameter.</p>
     */
    inline TestRenderTemplateResult& WithRenderedTemplate(const char* value) { SetRenderedTemplate(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline TestRenderTemplateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline TestRenderTemplateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_renderedTemplate;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
