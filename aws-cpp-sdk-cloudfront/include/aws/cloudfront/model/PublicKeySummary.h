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
#include <aws/core/utils/DateTime.h>
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
   * <p>A complex data type for public key information. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/PublicKeySummary">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API PublicKeySummary
  {
  public:
    PublicKeySummary();
    PublicKeySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    PublicKeySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p> ID for public key information summary. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> ID for public key information summary. </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p> ID for public key information summary. </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p> ID for public key information summary. </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p> ID for public key information summary. </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p> ID for public key information summary. </p>
     */
    inline PublicKeySummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> ID for public key information summary. </p>
     */
    inline PublicKeySummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> ID for public key information summary. </p>
     */
    inline PublicKeySummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> Name for public key information summary. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> Name for public key information summary. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> Name for public key information summary. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> Name for public key information summary. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> Name for public key information summary. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> Name for public key information summary. </p>
     */
    inline PublicKeySummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> Name for public key information summary. </p>
     */
    inline PublicKeySummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> Name for public key information summary. </p>
     */
    inline PublicKeySummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> Creation time for public key information summary. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p> Creation time for public key information summary. </p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p> Creation time for public key information summary. </p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p> Creation time for public key information summary. </p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p> Creation time for public key information summary. </p>
     */
    inline PublicKeySummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p> Creation time for public key information summary. </p>
     */
    inline PublicKeySummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p> Encoded key for public key information summary. </p>
     */
    inline const Aws::String& GetEncodedKey() const{ return m_encodedKey; }

    /**
     * <p> Encoded key for public key information summary. </p>
     */
    inline bool EncodedKeyHasBeenSet() const { return m_encodedKeyHasBeenSet; }

    /**
     * <p> Encoded key for public key information summary. </p>
     */
    inline void SetEncodedKey(const Aws::String& value) { m_encodedKeyHasBeenSet = true; m_encodedKey = value; }

    /**
     * <p> Encoded key for public key information summary. </p>
     */
    inline void SetEncodedKey(Aws::String&& value) { m_encodedKeyHasBeenSet = true; m_encodedKey = std::move(value); }

    /**
     * <p> Encoded key for public key information summary. </p>
     */
    inline void SetEncodedKey(const char* value) { m_encodedKeyHasBeenSet = true; m_encodedKey.assign(value); }

    /**
     * <p> Encoded key for public key information summary. </p>
     */
    inline PublicKeySummary& WithEncodedKey(const Aws::String& value) { SetEncodedKey(value); return *this;}

    /**
     * <p> Encoded key for public key information summary. </p>
     */
    inline PublicKeySummary& WithEncodedKey(Aws::String&& value) { SetEncodedKey(std::move(value)); return *this;}

    /**
     * <p> Encoded key for public key information summary. </p>
     */
    inline PublicKeySummary& WithEncodedKey(const char* value) { SetEncodedKey(value); return *this;}


    /**
     * <p> Comment for public key information summary. </p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p> Comment for public key information summary. </p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p> Comment for public key information summary. </p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p> Comment for public key information summary. </p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p> Comment for public key information summary. </p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p> Comment for public key information summary. </p>
     */
    inline PublicKeySummary& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p> Comment for public key information summary. </p>
     */
    inline PublicKeySummary& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p> Comment for public key information summary. </p>
     */
    inline PublicKeySummary& WithComment(const char* value) { SetComment(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::String m_encodedKey;
    bool m_encodedKeyHasBeenSet;

    Aws::String m_comment;
    bool m_commentHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
