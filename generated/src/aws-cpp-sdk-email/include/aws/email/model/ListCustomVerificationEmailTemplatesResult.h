/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/email/model/CustomVerificationEmailTemplate.h>
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
  /**
   * <p>A paginated list of custom verification email templates.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/ListCustomVerificationEmailTemplatesResponse">AWS
   * API Reference</a></p>
   */
  class ListCustomVerificationEmailTemplatesResult
  {
  public:
    AWS_SES_API ListCustomVerificationEmailTemplatesResult() = default;
    AWS_SES_API ListCustomVerificationEmailTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API ListCustomVerificationEmailTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of the custom verification email templates that exist in your
     * account.</p>
     */
    inline const Aws::Vector<CustomVerificationEmailTemplate>& GetCustomVerificationEmailTemplates() const { return m_customVerificationEmailTemplates; }
    template<typename CustomVerificationEmailTemplatesT = Aws::Vector<CustomVerificationEmailTemplate>>
    void SetCustomVerificationEmailTemplates(CustomVerificationEmailTemplatesT&& value) { m_customVerificationEmailTemplatesHasBeenSet = true; m_customVerificationEmailTemplates = std::forward<CustomVerificationEmailTemplatesT>(value); }
    template<typename CustomVerificationEmailTemplatesT = Aws::Vector<CustomVerificationEmailTemplate>>
    ListCustomVerificationEmailTemplatesResult& WithCustomVerificationEmailTemplates(CustomVerificationEmailTemplatesT&& value) { SetCustomVerificationEmailTemplates(std::forward<CustomVerificationEmailTemplatesT>(value)); return *this;}
    template<typename CustomVerificationEmailTemplatesT = CustomVerificationEmailTemplate>
    ListCustomVerificationEmailTemplatesResult& AddCustomVerificationEmailTemplates(CustomVerificationEmailTemplatesT&& value) { m_customVerificationEmailTemplatesHasBeenSet = true; m_customVerificationEmailTemplates.emplace_back(std::forward<CustomVerificationEmailTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token indicating that there are additional custom verification email
     * templates available to be listed. Pass this token to a subsequent call to
     * <code>ListTemplates</code> to retrieve the next 50 custom verification email
     * templates.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCustomVerificationEmailTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListCustomVerificationEmailTemplatesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomVerificationEmailTemplate> m_customVerificationEmailTemplates;
    bool m_customVerificationEmailTemplatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
