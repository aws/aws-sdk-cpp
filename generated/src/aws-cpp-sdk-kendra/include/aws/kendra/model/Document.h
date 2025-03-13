/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/kendra/model/S3Path.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ContentType.h>
#include <aws/kendra/model/DocumentAttribute.h>
#include <aws/kendra/model/Principal.h>
#include <aws/kendra/model/HierarchicalPrincipal.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{

  /**
   * <p>A document in an index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/Document">AWS API
   * Reference</a></p>
   */
  class Document
  {
  public:
    AWS_KENDRA_API Document() = default;
    AWS_KENDRA_API Document(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Document& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A identifier of the document in the index.</p> <p>Note, each document ID must
     * be unique per index. You cannot create a data source to index your documents
     * with their unique IDs and then use the <code>BatchPutDocument</code> API to
     * index the same documents, or vice versa. You can delete a data source and then
     * use the <code>BatchPutDocument</code> API to index the same documents, or vice
     * versa.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Document& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the document.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Document& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contents of the document. </p> <p>Documents passed to the
     * <code>Blob</code> parameter must be base64 encoded. Your code might not need to
     * encode the document file bytes if you're using an Amazon Web Services SDK to
     * call Amazon Kendra APIs. If you are calling the Amazon Kendra endpoint directly
     * using REST, you must base64 encode the contents before sending.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBlob() const { return m_blob; }
    inline bool BlobHasBeenSet() const { return m_blobHasBeenSet; }
    template<typename BlobT = Aws::Utils::ByteBuffer>
    void SetBlob(BlobT&& value) { m_blobHasBeenSet = true; m_blob = std::forward<BlobT>(value); }
    template<typename BlobT = Aws::Utils::ByteBuffer>
    Document& WithBlob(BlobT&& value) { SetBlob(std::forward<BlobT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const S3Path& GetS3Path() const { return m_s3Path; }
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }
    template<typename S3PathT = S3Path>
    void SetS3Path(S3PathT&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::forward<S3PathT>(value); }
    template<typename S3PathT = S3Path>
    Document& WithS3Path(S3PathT&& value) { SetS3Path(std::forward<S3PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     * <p>For example, 'DataSourceId' and 'DataSourceSyncJobId' are custom attributes
     * that provide information on the synchronization of documents running on a data
     * source. Note, 'DataSourceSyncJobId' could be an optional custom attribute as
     * Amazon Kendra will use the ID of a running sync job.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<DocumentAttribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<DocumentAttribute>>
    Document& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = DocumentAttribute>
    Document& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline const Aws::Vector<Principal>& GetAccessControlList() const { return m_accessControlList; }
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }
    template<typename AccessControlListT = Aws::Vector<Principal>>
    void SetAccessControlList(AccessControlListT&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::forward<AccessControlListT>(value); }
    template<typename AccessControlListT = Aws::Vector<Principal>>
    Document& WithAccessControlList(AccessControlListT&& value) { SetAccessControlList(std::forward<AccessControlListT>(value)); return *this;}
    template<typename AccessControlListT = Principal>
    Document& AddAccessControlList(AccessControlListT&& value) { m_accessControlListHasBeenSet = true; m_accessControlList.emplace_back(std::forward<AccessControlListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline const Aws::Vector<HierarchicalPrincipal>& GetHierarchicalAccessControlList() const { return m_hierarchicalAccessControlList; }
    inline bool HierarchicalAccessControlListHasBeenSet() const { return m_hierarchicalAccessControlListHasBeenSet; }
    template<typename HierarchicalAccessControlListT = Aws::Vector<HierarchicalPrincipal>>
    void SetHierarchicalAccessControlList(HierarchicalAccessControlListT&& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList = std::forward<HierarchicalAccessControlListT>(value); }
    template<typename HierarchicalAccessControlListT = Aws::Vector<HierarchicalPrincipal>>
    Document& WithHierarchicalAccessControlList(HierarchicalAccessControlListT&& value) { SetHierarchicalAccessControlList(std::forward<HierarchicalAccessControlListT>(value)); return *this;}
    template<typename HierarchicalAccessControlListT = HierarchicalPrincipal>
    Document& AddHierarchicalAccessControlList(HierarchicalAccessControlListT&& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList.emplace_back(std::forward<HierarchicalAccessControlListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The file type of the document in the <code>Blob</code> field.</p> <p>If you
     * want to index snippets or subsets of HTML documents instead of the entirety of
     * the HTML documents, you must add the <code>HTML</code> start and closing tags
     * (<code>&lt;HTML&gt;content&lt;/HTML&gt;</code>) around the content.</p>
     */
    inline ContentType GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(ContentType value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline Document& WithContentType(ContentType value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the access control configuration that you want to apply to
     * the document.</p>
     */
    inline const Aws::String& GetAccessControlConfigurationId() const { return m_accessControlConfigurationId; }
    inline bool AccessControlConfigurationIdHasBeenSet() const { return m_accessControlConfigurationIdHasBeenSet; }
    template<typename AccessControlConfigurationIdT = Aws::String>
    void SetAccessControlConfigurationId(AccessControlConfigurationIdT&& value) { m_accessControlConfigurationIdHasBeenSet = true; m_accessControlConfigurationId = std::forward<AccessControlConfigurationIdT>(value); }
    template<typename AccessControlConfigurationIdT = Aws::String>
    Document& WithAccessControlConfigurationId(AccessControlConfigurationIdT&& value) { SetAccessControlConfigurationId(std::forward<AccessControlConfigurationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Utils::ByteBuffer m_blob{};
    bool m_blobHasBeenSet = false;

    S3Path m_s3Path;
    bool m_s3PathHasBeenSet = false;

    Aws::Vector<DocumentAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<Principal> m_accessControlList;
    bool m_accessControlListHasBeenSet = false;

    Aws::Vector<HierarchicalPrincipal> m_hierarchicalAccessControlList;
    bool m_hierarchicalAccessControlListHasBeenSet = false;

    ContentType m_contentType{ContentType::NOT_SET};
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_accessControlConfigurationId;
    bool m_accessControlConfigurationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
