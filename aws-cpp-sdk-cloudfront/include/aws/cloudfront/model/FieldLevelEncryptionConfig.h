/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * field-level encryption. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/FieldLevelEncryptionConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API FieldLevelEncryptionConfig
  {
  public:
    FieldLevelEncryptionConfig();
    FieldLevelEncryptionConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    FieldLevelEncryptionConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A unique number that ensures the request can't be replayed.</p>
     */
    inline const Aws::String& GetCallerReference() const{ return m_callerReference; }

    /**
     * <p>A unique number that ensures the request can't be replayed.</p>
     */
    inline bool CallerReferenceHasBeenSet() const { return m_callerReferenceHasBeenSet; }

    /**
     * <p>A unique number that ensures the request can't be replayed.</p>
     */
    inline void SetCallerReference(const Aws::String& value) { m_callerReferenceHasBeenSet = true; m_callerReference = value; }

    /**
     * <p>A unique number that ensures the request can't be replayed.</p>
     */
    inline void SetCallerReference(Aws::String&& value) { m_callerReferenceHasBeenSet = true; m_callerReference = std::move(value); }

    /**
     * <p>A unique number that ensures the request can't be replayed.</p>
     */
    inline void SetCallerReference(const char* value) { m_callerReferenceHasBeenSet = true; m_callerReference.assign(value); }

    /**
     * <p>A unique number that ensures the request can't be replayed.</p>
     */
    inline FieldLevelEncryptionConfig& WithCallerReference(const Aws::String& value) { SetCallerReference(value); return *this;}

    /**
     * <p>A unique number that ensures the request can't be replayed.</p>
     */
    inline FieldLevelEncryptionConfig& WithCallerReference(Aws::String&& value) { SetCallerReference(std::move(value)); return *this;}

    /**
     * <p>A unique number that ensures the request can't be replayed.</p>
     */
    inline FieldLevelEncryptionConfig& WithCallerReference(const char* value) { SetCallerReference(value); return *this;}


    /**
     * <p>An optional comment about the configuration.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>An optional comment about the configuration.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>An optional comment about the configuration.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>An optional comment about the configuration.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>An optional comment about the configuration.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>An optional comment about the configuration.</p>
     */
    inline FieldLevelEncryptionConfig& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>An optional comment about the configuration.</p>
     */
    inline FieldLevelEncryptionConfig& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>An optional comment about the configuration.</p>
     */
    inline FieldLevelEncryptionConfig& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>A complex data type that specifies when to forward content if a profile isn't
     * found and the profile that can be provided as a query argument in a request.</p>
     */
    inline const QueryArgProfileConfig& GetQueryArgProfileConfig() const{ return m_queryArgProfileConfig; }

    /**
     * <p>A complex data type that specifies when to forward content if a profile isn't
     * found and the profile that can be provided as a query argument in a request.</p>
     */
    inline bool QueryArgProfileConfigHasBeenSet() const { return m_queryArgProfileConfigHasBeenSet; }

    /**
     * <p>A complex data type that specifies when to forward content if a profile isn't
     * found and the profile that can be provided as a query argument in a request.</p>
     */
    inline void SetQueryArgProfileConfig(const QueryArgProfileConfig& value) { m_queryArgProfileConfigHasBeenSet = true; m_queryArgProfileConfig = value; }

    /**
     * <p>A complex data type that specifies when to forward content if a profile isn't
     * found and the profile that can be provided as a query argument in a request.</p>
     */
    inline void SetQueryArgProfileConfig(QueryArgProfileConfig&& value) { m_queryArgProfileConfigHasBeenSet = true; m_queryArgProfileConfig = std::move(value); }

    /**
     * <p>A complex data type that specifies when to forward content if a profile isn't
     * found and the profile that can be provided as a query argument in a request.</p>
     */
    inline FieldLevelEncryptionConfig& WithQueryArgProfileConfig(const QueryArgProfileConfig& value) { SetQueryArgProfileConfig(value); return *this;}

    /**
     * <p>A complex data type that specifies when to forward content if a profile isn't
     * found and the profile that can be provided as a query argument in a request.</p>
     */
    inline FieldLevelEncryptionConfig& WithQueryArgProfileConfig(QueryArgProfileConfig&& value) { SetQueryArgProfileConfig(std::move(value)); return *this;}


    /**
     * <p>A complex data type that specifies when to forward content if a content type
     * isn't recognized and profiles to use as by default in a request if a query
     * argument doesn't specify a profile to use.</p>
     */
    inline const ContentTypeProfileConfig& GetContentTypeProfileConfig() const{ return m_contentTypeProfileConfig; }

    /**
     * <p>A complex data type that specifies when to forward content if a content type
     * isn't recognized and profiles to use as by default in a request if a query
     * argument doesn't specify a profile to use.</p>
     */
    inline bool ContentTypeProfileConfigHasBeenSet() const { return m_contentTypeProfileConfigHasBeenSet; }

    /**
     * <p>A complex data type that specifies when to forward content if a content type
     * isn't recognized and profiles to use as by default in a request if a query
     * argument doesn't specify a profile to use.</p>
     */
    inline void SetContentTypeProfileConfig(const ContentTypeProfileConfig& value) { m_contentTypeProfileConfigHasBeenSet = true; m_contentTypeProfileConfig = value; }

    /**
     * <p>A complex data type that specifies when to forward content if a content type
     * isn't recognized and profiles to use as by default in a request if a query
     * argument doesn't specify a profile to use.</p>
     */
    inline void SetContentTypeProfileConfig(ContentTypeProfileConfig&& value) { m_contentTypeProfileConfigHasBeenSet = true; m_contentTypeProfileConfig = std::move(value); }

    /**
     * <p>A complex data type that specifies when to forward content if a content type
     * isn't recognized and profiles to use as by default in a request if a query
     * argument doesn't specify a profile to use.</p>
     */
    inline FieldLevelEncryptionConfig& WithContentTypeProfileConfig(const ContentTypeProfileConfig& value) { SetContentTypeProfileConfig(value); return *this;}

    /**
     * <p>A complex data type that specifies when to forward content if a content type
     * isn't recognized and profiles to use as by default in a request if a query
     * argument doesn't specify a profile to use.</p>
     */
    inline FieldLevelEncryptionConfig& WithContentTypeProfileConfig(ContentTypeProfileConfig&& value) { SetContentTypeProfileConfig(std::move(value)); return *this;}

  private:

    Aws::String m_callerReference;
    bool m_callerReferenceHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;

    QueryArgProfileConfig m_queryArgProfileConfig;
    bool m_queryArgProfileConfigHasBeenSet;

    ContentTypeProfileConfig m_contentTypeProfileConfig;
    bool m_contentTypeProfileConfigHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
