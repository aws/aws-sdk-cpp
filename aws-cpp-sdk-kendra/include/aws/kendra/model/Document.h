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
  class AWS_KENDRA_API Document
  {
  public:
    Document();
    Document(Aws::Utils::Json::JsonView jsonValue);
    Document& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier of the document in the index.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier of the document in the index.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier of the document in the index.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier of the document in the index.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier of the document in the index.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier of the document in the index.</p>
     */
    inline Document& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier of the document in the index.</p>
     */
    inline Document& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the document in the index.</p>
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
     * encode the document file bytes if you're using an AWS SDK to call Amazon Kendra
     * operations. If you are calling the Amazon Kendra endpoint directly using REST,
     * you must base64 encode the contents before sending.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBlob() const{ return m_blob; }

    /**
     * <p>The contents of the document. </p> <p>Documents passed to the
     * <code>Blob</code> parameter must be base64 encoded. Your code might not need to
     * encode the document file bytes if you're using an AWS SDK to call Amazon Kendra
     * operations. If you are calling the Amazon Kendra endpoint directly using REST,
     * you must base64 encode the contents before sending.</p>
     */
    inline bool BlobHasBeenSet() const { return m_blobHasBeenSet; }

    /**
     * <p>The contents of the document. </p> <p>Documents passed to the
     * <code>Blob</code> parameter must be base64 encoded. Your code might not need to
     * encode the document file bytes if you're using an AWS SDK to call Amazon Kendra
     * operations. If you are calling the Amazon Kendra endpoint directly using REST,
     * you must base64 encode the contents before sending.</p>
     */
    inline void SetBlob(const Aws::Utils::ByteBuffer& value) { m_blobHasBeenSet = true; m_blob = value; }

    /**
     * <p>The contents of the document. </p> <p>Documents passed to the
     * <code>Blob</code> parameter must be base64 encoded. Your code might not need to
     * encode the document file bytes if you're using an AWS SDK to call Amazon Kendra
     * operations. If you are calling the Amazon Kendra endpoint directly using REST,
     * you must base64 encode the contents before sending.</p>
     */
    inline void SetBlob(Aws::Utils::ByteBuffer&& value) { m_blobHasBeenSet = true; m_blob = std::move(value); }

    /**
     * <p>The contents of the document. </p> <p>Documents passed to the
     * <code>Blob</code> parameter must be base64 encoded. Your code might not need to
     * encode the document file bytes if you're using an AWS SDK to call Amazon Kendra
     * operations. If you are calling the Amazon Kendra endpoint directly using REST,
     * you must base64 encode the contents before sending.</p>
     */
    inline Document& WithBlob(const Aws::Utils::ByteBuffer& value) { SetBlob(value); return *this;}

    /**
     * <p>The contents of the document. </p> <p>Documents passed to the
     * <code>Blob</code> parameter must be base64 encoded. Your code might not need to
     * encode the document file bytes if you're using an AWS SDK to call Amazon Kendra
     * operations. If you are calling the Amazon Kendra endpoint directly using REST,
     * you must base64 encode the contents before sending.</p>
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
     */
    inline const Aws::Vector<DocumentAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     */
    inline void SetAttributes(const Aws::Vector<DocumentAttribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     */
    inline void SetAttributes(Aws::Vector<DocumentAttribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     */
    inline Document& WithAttributes(const Aws::Vector<DocumentAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     */
    inline Document& WithAttributes(Aws::Vector<DocumentAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     */
    inline Document& AddAttributes(const DocumentAttribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>Custom attributes to apply to the document. Use the custom attributes to
     * provide additional information for searching, to provide facets for refining
     * searches, and to provide additional information in the query response.</p>
     */
    inline Document& AddAttributes(DocumentAttribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>Information to use for user context filtering.</p>
     */
    inline const Aws::Vector<Principal>& GetAccessControlList() const{ return m_accessControlList; }

    /**
     * <p>Information to use for user context filtering.</p>
     */
    inline bool AccessControlListHasBeenSet() const { return m_accessControlListHasBeenSet; }

    /**
     * <p>Information to use for user context filtering.</p>
     */
    inline void SetAccessControlList(const Aws::Vector<Principal>& value) { m_accessControlListHasBeenSet = true; m_accessControlList = value; }

    /**
     * <p>Information to use for user context filtering.</p>
     */
    inline void SetAccessControlList(Aws::Vector<Principal>&& value) { m_accessControlListHasBeenSet = true; m_accessControlList = std::move(value); }

    /**
     * <p>Information to use for user context filtering.</p>
     */
    inline Document& WithAccessControlList(const Aws::Vector<Principal>& value) { SetAccessControlList(value); return *this;}

    /**
     * <p>Information to use for user context filtering.</p>
     */
    inline Document& WithAccessControlList(Aws::Vector<Principal>&& value) { SetAccessControlList(std::move(value)); return *this;}

    /**
     * <p>Information to use for user context filtering.</p>
     */
    inline Document& AddAccessControlList(const Principal& value) { m_accessControlListHasBeenSet = true; m_accessControlList.push_back(value); return *this; }

    /**
     * <p>Information to use for user context filtering.</p>
     */
    inline Document& AddAccessControlList(Principal&& value) { m_accessControlListHasBeenSet = true; m_accessControlList.push_back(std::move(value)); return *this; }


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

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::Utils::ByteBuffer m_blob;
    bool m_blobHasBeenSet;

    S3Path m_s3Path;
    bool m_s3PathHasBeenSet;

    Aws::Vector<DocumentAttribute> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::Vector<Principal> m_accessControlList;
    bool m_accessControlListHasBeenSet;

    ContentType m_contentType;
    bool m_contentTypeHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
