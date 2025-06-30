/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/Tag.h>
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
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetOpenIDConnectProvider.html">GetOpenIDConnectProvider</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetOpenIDConnectProviderResponse">AWS
   * API Reference</a></p>
   */
  class GetOpenIDConnectProviderResult
  {
  public:
    AWS_IAM_API GetOpenIDConnectProviderResult() = default;
    AWS_IAM_API GetOpenIDConnectProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetOpenIDConnectProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The URL that the IAM OIDC provider resource object is associated with. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateOpenIDConnectProvider.html">CreateOpenIDConnectProvider</a>.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    GetOpenIDConnectProviderResult& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of client IDs (also known as audiences) that are associated with the
     * specified IAM OIDC provider resource object. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateOpenIDConnectProvider.html">CreateOpenIDConnectProvider</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientIDList() const { return m_clientIDList; }
    template<typename ClientIDListT = Aws::Vector<Aws::String>>
    void SetClientIDList(ClientIDListT&& value) { m_clientIDListHasBeenSet = true; m_clientIDList = std::forward<ClientIDListT>(value); }
    template<typename ClientIDListT = Aws::Vector<Aws::String>>
    GetOpenIDConnectProviderResult& WithClientIDList(ClientIDListT&& value) { SetClientIDList(std::forward<ClientIDListT>(value)); return *this;}
    template<typename ClientIDListT = Aws::String>
    GetOpenIDConnectProviderResult& AddClientIDList(ClientIDListT&& value) { m_clientIDListHasBeenSet = true; m_clientIDList.emplace_back(std::forward<ClientIDListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of certificate thumbprints that are associated with the specified IAM
     * OIDC provider resource object. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateOpenIDConnectProvider.html">CreateOpenIDConnectProvider</a>.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetThumbprintList() const { return m_thumbprintList; }
    template<typename ThumbprintListT = Aws::Vector<Aws::String>>
    void SetThumbprintList(ThumbprintListT&& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList = std::forward<ThumbprintListT>(value); }
    template<typename ThumbprintListT = Aws::Vector<Aws::String>>
    GetOpenIDConnectProviderResult& WithThumbprintList(ThumbprintListT&& value) { SetThumbprintList(std::forward<ThumbprintListT>(value)); return *this;}
    template<typename ThumbprintListT = Aws::String>
    GetOpenIDConnectProviderResult& AddThumbprintList(ThumbprintListT&& value) { m_thumbprintListHasBeenSet = true; m_thumbprintList.emplace_back(std::forward<ThumbprintListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the IAM OIDC provider resource object was created in
     * the Amazon Web Services account.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDate() const { return m_createDate; }
    template<typename CreateDateT = Aws::Utils::DateTime>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::Utils::DateTime>
    GetOpenIDConnectProviderResult& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that are attached to the specified IAM OIDC provider. The
     * returned list of tags is sorted by tag key. For more information about tagging,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_tags.html">Tagging IAM
     * resources</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    GetOpenIDConnectProviderResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    GetOpenIDConnectProviderResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetOpenIDConnectProviderResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientIDList;
    bool m_clientIDListHasBeenSet = false;

    Aws::Vector<Aws::String> m_thumbprintList;
    bool m_thumbprintListHasBeenSet = false;

    Aws::Utils::DateTime m_createDate{};
    bool m_createDateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
