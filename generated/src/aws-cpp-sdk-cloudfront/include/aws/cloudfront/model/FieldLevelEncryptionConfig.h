/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A complex data type that includes the profile configurations specified for
   * field-level encryption.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/FieldLevelEncryptionConfig">AWS
   * API Reference</a></p>
   */
  class FieldLevelEncryptionConfig
  {
  public:
    AWS_CLOUDFRONT_API FieldLevelEncryptionConfig() = default;
    AWS_CLOUDFRONT_API FieldLevelEncryptionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FieldLevelEncryptionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A unique number that ensures the request can't be replayed.</p>
     */
    inline const Aws::String& GetCallerReference() const { return m_callerReference; }
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }
    template<typename CallerReferenceT = Aws::String>
    void SetCallerReference(CallerReferenceT&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::forward<CallerReferenceT>(value); }
    template<typename CallerReferenceT = Aws::String>
    FieldLevelEncryptionConfig& WithCallerReference(CallerReferenceT&& value) { SetCallerReference(std::forward<CallerReferenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional comment about the configuration. The comment cannot be longer
     * than 128 characters.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    FieldLevelEncryptionConfig& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex data type that specifies when to forward content if a profile isn't
     * found and the profile that can be provided as a query argument in a request.</p>
     */
    inline const QueryArgProfileConfig& GetQueryArgProfileConfig() const { return m_queryArgProfileConfig; }
    inline bool QueryArgProfileConfigHasBeenSet() const { return m_queryArgProfileConfigHasBeenSet; }
    template<typename QueryArgProfileConfigT = QueryArgProfileConfig>
    void SetQueryArgProfileConfig(QueryArgProfileConfigT&& value) { m_queryArgProfileConfigHasBeenSet = true; m_queryArgProfileConfig = std::forward<QueryArgProfileConfigT>(value); }
    template<typename QueryArgProfileConfigT = QueryArgProfileConfig>
    FieldLevelEncryptionConfig& WithQueryArgProfileConfig(QueryArgProfileConfigT&& value) { SetQueryArgProfileConfig(std::forward<QueryArgProfileConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex data type that specifies when to forward content if a content type
     * isn't recognized and profiles to use as by default in a request if a query
     * argument doesn't specify a profile to use.</p>
     */
    inline const ContentTypeProfileConfig& GetContentTypeProfileConfig() const { return m_contentTypeProfileConfig; }
    inline bool ContentTypeProfileConfigHasBeenSet() const { return m_contentTypeProfileConfigHasBeenSet; }
    template<typename ContentTypeProfileConfigT = ContentTypeProfileConfig>
    void SetContentTypeProfileConfig(ContentTypeProfileConfigT&& value) { m_contentTypeProfileConfigHasBeenSet = true; m_contentTypeProfileConfig = std::forward<ContentTypeProfileConfigT>(value); }
    template<typename ContentTypeProfileConfigT = ContentTypeProfileConfig>
    FieldLevelEncryptionConfig& WithContentTypeProfileConfig(ContentTypeProfileConfigT&& value) { SetContentTypeProfileConfig(std::forward<ContentTypeProfileConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet = false;

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
