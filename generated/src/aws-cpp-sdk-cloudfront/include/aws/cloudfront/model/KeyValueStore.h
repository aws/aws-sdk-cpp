/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The Key Value Store. Use this to separate data from function code, allowing
   * you to update data without having to publish a new version of a function. The
   * Key Value Store holds keys and their corresponding values.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/KeyValueStore">AWS
   * API Reference</a></p>
   */
  class KeyValueStore
  {
  public:
    AWS_CLOUDFRONT_API KeyValueStore();
    AWS_CLOUDFRONT_API KeyValueStore(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API KeyValueStore& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The name of the Key Value Store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Key Value Store.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the Key Value Store.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the Key Value Store.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the Key Value Store.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the Key Value Store.</p>
     */
    inline KeyValueStore& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Key Value Store.</p>
     */
    inline KeyValueStore& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Key Value Store.</p>
     */
    inline KeyValueStore& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique Id for the Key Value Store.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique Id for the Key Value Store.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique Id for the Key Value Store.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique Id for the Key Value Store.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique Id for the Key Value Store.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique Id for the Key Value Store.</p>
     */
    inline KeyValueStore& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique Id for the Key Value Store.</p>
     */
    inline KeyValueStore& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique Id for the Key Value Store.</p>
     */
    inline KeyValueStore& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A comment for the Key Value Store.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }

    /**
     * <p>A comment for the Key Value Store.</p>
     */
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }

    /**
     * <p>A comment for the Key Value Store.</p>
     */
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }

    /**
     * <p>A comment for the Key Value Store.</p>
     */
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }

    /**
     * <p>A comment for the Key Value Store.</p>
     */
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }

    /**
     * <p>A comment for the Key Value Store.</p>
     */
    inline KeyValueStore& WithComment(const Aws::String& value) { SetComment(value); return *this;}

    /**
     * <p>A comment for the Key Value Store.</p>
     */
    inline KeyValueStore& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}

    /**
     * <p>A comment for the Key Value Store.</p>
     */
    inline KeyValueStore& WithComment(const char* value) { SetComment(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline KeyValueStore& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline KeyValueStore& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline KeyValueStore& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The status of the Key Value Store.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Key Value Store.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Key Value Store.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Key Value Store.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Key Value Store.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the Key Value Store.</p>
     */
    inline KeyValueStore& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Key Value Store.</p>
     */
    inline KeyValueStore& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the Key Value Store.</p>
     */
    inline KeyValueStore& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The last-modified time of the Key Value Store.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last-modified time of the Key Value Store.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last-modified time of the Key Value Store.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last-modified time of the Key Value Store.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last-modified time of the Key Value Store.</p>
     */
    inline KeyValueStore& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last-modified time of the Key Value Store.</p>
     */
    inline KeyValueStore& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
