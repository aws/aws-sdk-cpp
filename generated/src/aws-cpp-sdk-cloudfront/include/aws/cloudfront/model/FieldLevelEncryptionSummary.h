/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/QueryArgProfileConfig.h>
#include <aws/cloudfront/model/ContentTypeProfileConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A summary of a field-level encryption item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/FieldLevelEncryptionSummary">AWS
   * API Reference</a></p>
   */
  class FieldLevelEncryptionSummary
  {
  public:
    AWS_CLOUDFRONT_API FieldLevelEncryptionSummary();
    AWS_CLOUDFRONT_API FieldLevelEncryptionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FieldLevelEncryptionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The unique ID of a field-level encryption item.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline FieldLevelEncryptionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline FieldLevelEncryptionSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline FieldLevelEncryptionSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the summary of field-level encryption items was
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline FieldLevelEncryptionSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline FieldLevelEncryptionSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional comment about the field-level encryption item. The comment cannot
     * be longer than 128 characters.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline FieldLevelEncryptionSummary& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline FieldLevelEncryptionSummary& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline FieldLevelEncryptionSummary& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of a query argument-profile mapping.</p>
     */
    inline const QueryArgProfileConfig& GetQueryArgProfileConfig() const{ return m_queryArgProfileConfig; }
    inline bool QueryArgProfileConfigHasBeenSet() const { return m_queryArgProfileConfigHasBeenSet; }
    inline void SetQueryArgProfileConfig(const QueryArgProfileConfig& value) { m_queryArgProfileConfigHasBeenSet = true; m_queryArgProfileConfig = value; }
    inline void SetQueryArgProfileConfig(QueryArgProfileConfig&& value) { m_queryArgProfileConfigHasBeenSet = true; m_queryArgProfileConfig = std::move(value); }
    inline FieldLevelEncryptionSummary& WithQueryArgProfileConfig(const QueryArgProfileConfig& value) { SetQueryArgProfileConfig(value); return *this;}
    inline FieldLevelEncryptionSummary& WithQueryArgProfileConfig(QueryArgProfileConfig&& value) { SetQueryArgProfileConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of a content type-profile mapping.</p>
     */
    inline const ContentTypeProfileConfig& GetContentTypeProfileConfig() const{ return m_contentTypeProfileConfig; }
    inline bool ContentTypeProfileConfigHasBeenSet() const { return m_contentTypeProfileConfigHasBeenSet; }
    inline void SetContentTypeProfileConfig(const ContentTypeProfileConfig& value) { m_contentTypeProfileConfigHasBeenSet = true; m_contentTypeProfileConfig = value; }
    inline void SetContentTypeProfileConfig(ContentTypeProfileConfig&& value) { m_contentTypeProfileConfigHasBeenSet = true; m_contentTypeProfileConfig = std::move(value); }
    inline FieldLevelEncryptionSummary& WithContentTypeProfileConfig(const ContentTypeProfileConfig& value) { SetContentTypeProfileConfig(value); return *this;}
    inline FieldLevelEncryptionSummary& WithContentTypeProfileConfig(ContentTypeProfileConfig&& value) { SetContentTypeProfileConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    QueryArgProfileConfig m_queryArgProfileConfig;
    bool m_queryArgProfileConfigHasBeenSet = false;

    ContentTypeProfileConfig m_contentTypeProfileConfig;
    bool m_contentTypeProfileConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
