/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/email/model/TemplateMetadata.h>
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
  class ListTemplatesResult
  {
  public:
    AWS_SES_API ListTemplatesResult() = default;
    AWS_SES_API ListTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API ListTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An array the contains the name and creation time stamp for each template in
     * your Amazon SES account.</p>
     */
    inline const Aws::Vector<TemplateMetadata>& GetTemplatesMetadata() const { return m_templatesMetadata; }
    template<typename TemplatesMetadataT = Aws::Vector<TemplateMetadata>>
    void SetTemplatesMetadata(TemplatesMetadataT&& value) { m_templatesMetadataHasBeenSet = true; m_templatesMetadata = std::forward<TemplatesMetadataT>(value); }
    template<typename TemplatesMetadataT = Aws::Vector<TemplateMetadata>>
    ListTemplatesResult& WithTemplatesMetadata(TemplatesMetadataT&& value) { SetTemplatesMetadata(std::forward<TemplatesMetadataT>(value)); return *this;}
    template<typename TemplatesMetadataT = TemplateMetadata>
    ListTemplatesResult& AddTemplatesMetadata(TemplatesMetadataT&& value) { m_templatesMetadataHasBeenSet = true; m_templatesMetadata.emplace_back(std::forward<TemplatesMetadataT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating that there are additional email templates available to be
     * listed. Pass this token to a subsequent call to <code>ListTemplates</code> to
     * retrieve the next set of email templates within your page size.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListTemplatesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TemplateMetadata> m_templatesMetadata;
    bool m_templatesMetadataHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
