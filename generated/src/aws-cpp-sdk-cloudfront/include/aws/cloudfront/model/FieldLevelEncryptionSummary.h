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
    AWS_CLOUDFRONT_API FieldLevelEncryptionSummary() = default;
    AWS_CLOUDFRONT_API FieldLevelEncryptionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FieldLevelEncryptionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The unique ID of a field-level encryption item.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    FieldLevelEncryptionSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the summary of field-level encryption items was
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    FieldLevelEncryptionSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional comment about the field-level encryption item. The comment cannot
     * be longer than 128 characters.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    FieldLevelEncryptionSummary& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of a query argument-profile mapping.</p>
     */
    inline const QueryArgProfileConfig& GetQueryArgProfileConfig() const { return m_queryArgProfileConfig; }
    inline bool QueryArgProfileConfigHasBeenSet() const { return m_queryArgProfileConfigHasBeenSet; }
    template<typename QueryArgProfileConfigT = QueryArgProfileConfig>
    void SetQueryArgProfileConfig(QueryArgProfileConfigT&& value) { m_queryArgProfileConfigHasBeenSet = true; m_queryArgProfileConfig = std::forward<QueryArgProfileConfigT>(value); }
    template<typename QueryArgProfileConfigT = QueryArgProfileConfig>
    FieldLevelEncryptionSummary& WithQueryArgProfileConfig(QueryArgProfileConfigT&& value) { SetQueryArgProfileConfig(std::forward<QueryArgProfileConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of a content type-profile mapping.</p>
     */
    inline const ContentTypeProfileConfig& GetContentTypeProfileConfig() const { return m_contentTypeProfileConfig; }
    inline bool ContentTypeProfileConfigHasBeenSet() const { return m_contentTypeProfileConfigHasBeenSet; }
    template<typename ContentTypeProfileConfigT = ContentTypeProfileConfig>
    void SetContentTypeProfileConfig(ContentTypeProfileConfigT&& value) { m_contentTypeProfileConfigHasBeenSet = true; m_contentTypeProfileConfig = std::forward<ContentTypeProfileConfigT>(value); }
    template<typename ContentTypeProfileConfigT = ContentTypeProfileConfig>
    FieldLevelEncryptionSummary& WithContentTypeProfileConfig(ContentTypeProfileConfigT&& value) { SetContentTypeProfileConfig(std::forward<ContentTypeProfileConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
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
