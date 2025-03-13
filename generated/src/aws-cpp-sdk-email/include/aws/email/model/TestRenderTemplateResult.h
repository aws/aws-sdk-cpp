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
    AWS_SES_API TestRenderTemplateResult() = default;
    AWS_SES_API TestRenderTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API TestRenderTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The complete MIME message rendered by applying the data in the TemplateData
     * parameter to the template specified in the TemplateName parameter.</p>
     */
    inline const Aws::String& GetRenderedTemplate() const { return m_renderedTemplate; }
    template<typename RenderedTemplateT = Aws::String>
    void SetRenderedTemplate(RenderedTemplateT&& value) { m_renderedTemplateHasBeenSet = true; m_renderedTemplate = std::forward<RenderedTemplateT>(value); }
    template<typename RenderedTemplateT = Aws::String>
    TestRenderTemplateResult& WithRenderedTemplate(RenderedTemplateT&& value) { SetRenderedTemplate(std::forward<RenderedTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    TestRenderTemplateResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_renderedTemplate;
    bool m_renderedTemplateHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
