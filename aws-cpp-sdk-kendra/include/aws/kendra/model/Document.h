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
    AWS_KENDRA_API Document();
    AWS_KENDRA_API Document(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Document& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A identifier of the document in the index.</p> <p>Note, each document ID must
     * be unique per index. You cannot create a data source to index your documents
     * with their unique IDs and then use the <code>BatchPutDocument</code> API to
     * index the same documents, or vice versa. You can delete a data source and then
     * use the <code>BatchPutDocument</code> API to index the same documents, or vice
     * versa.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A identifier of the document in the index.</p> <p>Note, each document ID must
     * be unique per index. You cannot create a data source to index your documents
     * with their unique IDs and then use the <code>BatchPutDocument</code> API to
     * index the same documents, or vice versa. You can delete a data source and then
     * use the <code>BatchPutDocument</code> API to index the same documents, or vice
     * versa.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A identifier of the document in the index.</p> <p>Note, each document ID must
     * be unique per index. You cannot create a data source to index your documents
     * with their unique IDs and then use the <code>BatchPutDocument</code> API to
     * index the same documents, or vice versa. You can delete a data source and then
     * use the <code>BatchPutDocument</code> API to index the same documents, or vice
     * versa.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A identifier of the document in the index.</p> <p>Note, each document ID must
     * be unique per index. You cannot create a data source to index your documents
     * with their unique IDs and then use the <code>BatchPutDocument</code> API to
     * index the same documents, or vice versa. You can delete a data source and then
     * use the <code>BatchPutDocument</code> API to index the same documents, or vice
     * versa.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A identifier of the document in the index.</p> <p>Note, each document ID must
     * be unique per index. You cannot create a data source to index your documents
     * with their unique IDs and then use the <code>BatchPutDocument</code> API to
     * index the same documents, or vice versa. You can delete a data source and then
     * use the <code>BatchPutDocument</code> API to index the same documents, or vice
     * versa.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A identifier of the document in the index.</p> <p>Note, each document ID must
     * be unique per index. You cannot create a data source to index your documents
     * with their unique IDs and then use the <code>BatchPutDocument</code> API to
     * index the same documents, or vice versa. You can delete a data source and then
     * use the <code>BatchPutDocument</code> API to index the same documents, or vice
     * versa.</p>
     */
    inline Document& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A identifier of the document in the index.</p> <p>Note, each document ID must
     * be unique per index. You cannot create a data source to index your documents
     * with their unique IDs and then use the <code>BatchPutDocument</code> API to
     * index the same documents, or vice versa. You can delete a data source and then
     * use the <code>BatchPutDocument</code> API to index the same documents, or vice
     * versa.</p>
     */
    inline Document& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A identifier of the document in the index.</p> <p>Note, each document ID must
     * be unique per index. You cannot create a data source to index your documents
     * with their unique IDs and then use the <code>BatchPutDocument</code> API to
     * index the same documents, or vice versa. You can delete a data source and then
     * use the <code>BatchPutDocument</code> API to index the same documents, or vice
     * versa.</p>
     */
    inline Document& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The title of the document.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the document.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the document.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the document.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the document.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the document.</p>
     */
    inline Document& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the document.</p>
     */
    inline Document& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the document.</p>
     */
    inline Document& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The contents of the document. </p> <p>Documents passed to the
     * <code>Blob</code> parameter must be base64 encoded. Your code might not need to
     * encode the document file bytes if you're using an Amazon Web Services SDK to
     * call Amazon Kendra APIs. If you are calling the Amazon Kendra endpoint directly
     * using REST, you must base64 encode the contents before sending.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBlob() const{ return m_blob; }

    /**
     * <p>The contents of the document. </p> <p>Documents passed to the
     * <code>Blob</code> parameter must be base64 encoded. Your code might not need to
     * encode the document file bytes if you're using an Amazon Web Services SDK to
     * call Amazon Kendra APIs. If you are calling the Amazon Kendra endpoint directly
     * using REST, you must base64 encode the contents before sending.</p>
     */
    inline bool BlobHasBeenSet() const { return m_blobHasBeenSet; }

    /**
     * <p>The contents of the document. </p> <p>Documents passed to the
     * <code>Blob</code> parameter must be base64 encoded. Your code might not need to
     * encode the document file bytes if you're using an Amazon Web Services SDK to
     * call Amazon Kendra APIs. If you are calling the Amazon Kendra endpoint directly
     * using REST, you must base64 encode the contents before sending.</p>
     */
    inline void SetBlob(const Aws::Utils::ByteBuffer& value) { m_blobHasBeenSet = true; m_blob = value; }

    /**
     * <p>The contents of the document. </p> <p>Documents passed to the
     * <code>Blob</code> parameter must be base64 encoded. Your code might not need to
     * encode the document file bytes if you're using an Amazon Web Services SDK to
     * call Amazon Kendra APIs. If you are calling the Amazon Kendra endpoint directly
     * using REST, you must base64 encode the contents before sending.</p>
     */
    inline void SetBlob(Aws::Utils::ByteBuffer&& value) { m_blobHasBeenSet = true; m_blob = std::move(value); }

    /**
     * <p>The contents of the document. </p> <p>Documents passed to the
     * <code>Blob</code> parameter must be base64 encoded. Your code might not need to
     * encode the document file bytes if you're using an Amazon Web Services SDK to
     * call Amazon Kendra APIs. If you are calling the Amazon Kendra endpoint directly
     * using REST, you must base64 encode the contents before sending.</p>
     */
    inline Document& WithBlob(const Aws::Utils::ByteBuffer& value) { SetBlob(value); return *this;}

    /**
     * <p>The contents of the document. </p> <p>Documents passed to the
     * <code>Blob</code> parameter must be base64 encoded. Your code might not need to
     * encode the document file bytes if you're using an Amazon Web Services SDK to
     * call Amazon Kendra APIs. If you are calling the Amazon Kendra endpoint directly
     * using REST, you must base64 encode the contents before sending.</p>
     */
    inline Document& WithBlob(Aws::Utils::ByteBuffer&& value) { SetBlob(std::move(value)); return *this;}


    
    inline const S3Path& GetS3Path() const{ return m_s3Path; }

    
    inline bool S3PathHasBeenSet() const { return m_s3PathHasBeenSet; }

    
    inline void SetS3Path(const S3Path& value) { m_s3PathHasBeenSet = true; m_s3Path = value; }

    
    inline void SetS3Path(S3Path&& value) { m_s3PathHasBeenSet = true; m_s3Path = std::move(value); }

    
    inline Document& WithS3Path(const S3Path& value) { SetS3Path(value); return *this;}

    
    inline Document& WithS3Path(S3Path&& value) { SetS3Path(std::move(value)); return *this;}


    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     * <p>For example, 'DataSourceId' and 'DataSourceSyncJobId' are custom attributes
     * that provide information on the synchronization of documents running on a data
     * source. Note, 'DataSourceSyncJobId' could be an optional custom attribute as
     * Amazon Kendra will use the ID of a running sync job.</p>
     */
    inline const Aws::Vector<DocumentAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     * <p>For example, 'DataSourceId' and 'DataSourceSyncJobId' are custom attributes
     * that provide information on the synchronization of documents running on a data
     * source. Note, 'DataSourceSyncJobId' could be an optional custom attribute as
     * Amazon Kendra will use the ID of a running sync job.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     * <p>For example, 'DataSourceId' and 'DataSourceSyncJobId' are custom attributes
     * that provide information on the synchronization of documents running on a data
     * source. Note, 'DataSourceSyncJobId' could be an optional custom attribute as
     * Amazon Kendra will use the ID of a running sync job.</p>
     */
    inline void SetAttributes(const Aws::Vector<DocumentAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     * <p>For example, 'DataSourceId' and 'DataSourceSyncJobId' are custom attributes
     * that provide information on the synchronization of documents running on a data
     * source. Note, 'DataSourceSyncJobId' could be an optional custom attribute as
     * Amazon Kendra will use the ID of a running sync job.</p>
     */
    inline void SetAttributes(Aws::Vector<DocumentAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     * <p>For example, 'DataSourceId' and 'DataSourceSyncJobId' are custom attributes
     * that provide information on the synchronization of documents running on a data
     * source. Note, 'DataSourceSyncJobId' could be an optional custom attribute as
     * Amazon Kendra will use the ID of a running sync job.</p>
     */
    inline Document& WithAttributes(const Aws::Vector<DocumentAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     * <p>For example, 'DataSourceId' and 'DataSourceSyncJobId' are custom attributes
     * that provide information on the synchronization of documents running on a data
     * source. Note, 'DataSourceSyncJobId' could be an optional custom attribute as
     * Amazon Kendra will use the ID of a running sync job.</p>
     */
    inline Document& WithAttributes(Aws::Vector<DocumentAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     * <p>For example, 'DataSourceId' and 'DataSourceSyncJobId' are custom attributes
     * that provide information on the synchronization of documents running on a data
     * source. Note, 'DataSourceSyncJobId' could be an optional custom attribute as
     * Amazon Kendra will use the ID of a running sync job.</p>
     */
    inline Document& AddAttributes(const DocumentAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     * <p>For example, 'DataSourceId' and 'DataSourceSyncJobId' are custom attributes
     * that provide information on the synchronization of documents running on a data
     * source. Note, 'DataSourceSyncJobId' could be an optional custom attribute as
     * Amazon Kendra will use the ID of a running sync job.</p>
     */
    inline Document& AddAttributes(DocumentAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline const Aws::Vector<Principal>& GetAccessControlList() const{ return m_accessControlList; }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline void SetAccessControlList(const Aws::Vector<Principal>& value) { m_accessControlListHasBeenSet = true; m_accessControlList = value; }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline void SetAccessControlList(Aws::Vector<Principal>&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::move(value); }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline Document& WithAccessControlList(const Aws::Vector<Principal>& value) { SetAccessControlList(value); return *this;}

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline Document& WithAccessControlList(Aws::Vector<Principal>&& value) { SetAccessControlList(std::move(value)); return *this;}

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline Document& AddAccessControlList(const Principal& value) { m_accessControlListHasBeenSet = true; m_accessControlList.push_back(value); return *this; }

    /**
     * <p>Information on principals (users and/or groups) and which documents they
     * should have access to. This is useful for user context filtering, where search
     * results are filtered based on the user or their group access to documents.</p>
     */
    inline Document& AddAccessControlList(Principal&& value) { m_accessControlListHasBeenSet = true; m_accessControlList.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline const Aws::Vector<HierarchicalPrincipal>& GetHierarchicalAccessControlList() const{ return m_hierarchicalAccessControlList; }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline bool HierarchicalAccessControlListHasBeenSet() const { return m_hierarchicalAccessControlListHasBeenSet; }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline void SetHierarchicalAccessControlList(const Aws::Vector<HierarchicalPrincipal>& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList = value; }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline void SetHierarchicalAccessControlList(Aws::Vector<HierarchicalPrincipal>&& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList = std::move(value); }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline Document& WithHierarchicalAccessControlList(const Aws::Vector<HierarchicalPrincipal>& value) { SetHierarchicalAccessControlList(value); return *this;}

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline Document& WithHierarchicalAccessControlList(Aws::Vector<HierarchicalPrincipal>&& value) { SetHierarchicalAccessControlList(std::move(value)); return *this;}

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline Document& AddHierarchicalAccessControlList(const HierarchicalPrincipal& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList.push_back(value); return *this; }

    /**
     * <p>The list of <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/API_Principal.html">principal</a>
     * lists that define the hierarchy for which documents users should have access
     * to.</p>
     */
    inline Document& AddHierarchicalAccessControlList(HierarchicalPrincipal&& value) { m_hierarchicalAccessControlListHasBeenSet = true; m_hierarchicalAccessControlList.push_back(std::move(value)); return *this; }


    /**
     * <p>The file type of the document in the <code>Blob</code> field.</p>
     */
    inline const ContentType& GetContentType() const{ return m_contentType; }

    /**
     * <p>The file type of the document in the <code>Blob</code> field.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The file type of the document in the <code>Blob</code> field.</p>
     */
    inline void SetContentType(const ContentType& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The file type of the document in the <code>Blob</code> field.</p>
     */
    inline void SetContentType(ContentType&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The file type of the document in the <code>Blob</code> field.</p>
     */
    inline Document& WithContentType(const ContentType& value) { SetContentType(value); return *this;}

    /**
     * <p>The file type of the document in the <code>Blob</code> field.</p>
     */
    inline Document& WithContentType(ContentType&& value) { SetContentType(std::move(value)); return *this;}


    /**
     * <p>The identifier of the access control configuration that you want to apply to
     * the document.</p>
     */
    inline const Aws::String& GetAccessControlConfigurationId() const{ return m_accessControlConfigurationId; }

    /**
     * <p>The identifier of the access control configuration that you want to apply to
     * the document.</p>
     */
    inline bool AccessControlConfigurationIdHasBeenSet() const { return m_accessControlConfigurationIdHasBeenSet; }

    /**
     * <p>The identifier of the access control configuration that you want to apply to
     * the document.</p>
     */
    inline void SetAccessControlConfigurationId(const Aws::String& value) { m_accessControlConfigurationIdHasBeenSet = true; m_accessControlConfigurationId = value; }

    /**
     * <p>The identifier of the access control configuration that you want to apply to
     * the document.</p>
     */
    inline void SetAccessControlConfigurationId(Aws::String&& value) { m_accessControlConfigurationIdHasBeenSet = true; m_accessControlConfigurationId = std::move(value); }

    /**
     * <p>The identifier of the access control configuration that you want to apply to
     * the document.</p>
     */
    inline void SetAccessControlConfigurationId(const char* value) { m_accessControlConfigurationIdHasBeenSet = true; m_accessControlConfigurationId.assign(value); }

    /**
     * <p>The identifier of the access control configuration that you want to apply to
     * the document.</p>
     */
    inline Document& WithAccessControlConfigurationId(const Aws::String& value) { SetAccessControlConfigurationId(value); return *this;}

    /**
     * <p>The identifier of the access control configuration that you want to apply to
     * the document.</p>
     */
    inline Document& WithAccessControlConfigurationId(Aws::String&& value) { SetAccessControlConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the access control configuration that you want to apply to
     * the document.</p>
     */
    inline Document& WithAccessControlConfigurationId(const char* value) { SetAccessControlConfigurationId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Utils::ByteBuffer m_blob;
    bool m_blobHasBeenSet = false;

    S3Path m_s3Path;
    bool m_s3PathHasBeenSet = false;

    Aws::Vector<DocumentAttribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<Principal> m_accessControlList;
    bool m_accessControlListHasBeenSet = false;

    Aws::Vector<HierarchicalPrincipal> m_hierarchicalAccessControlList;
    bool m_hierarchicalAccessControlListHasBeenSet = false;

    ContentType m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_accessControlConfigurationId;
    bool m_accessControlConfigurationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
