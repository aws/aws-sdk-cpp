/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmailmessageflow/WorkMailMessageFlow_EXPORTS.h>
#include <aws/workmailmessageflow/model/S3Reference.h>
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
namespace WorkMailMessageFlow
{
namespace Model
{

  /**
   * <p>Provides the MIME content of the updated email message as an S3 object. All
   * MIME content must meet the following criteria:</p> <ul> <li> <p>Each part of a
   * multipart MIME message must be formatted properly.</p> </li> <li> <p>Attachments
   * must be of a content type that Amazon SES supports. For more information, see <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types-appendix.html">Unsupported
   * Attachment Types</a>.</p> </li> <li> <p>If any of the MIME parts in a message
   * contain content that is outside of the 7-bit ASCII character range, we recommend
   * encoding that content.</p> </li> <li> <p>Per <a
   * href="https://tools.ietf.org/html/rfc5321#section-4.5.3.1.6">RFC 5321</a>, the
   * maximum length of each line of text, including the &lt;CRLF&gt;, must not exceed
   * 1,000 characters.</p> </li> <li> <p>The message must contain all the required
   * header fields. Check the returned error message for more information.</p> </li>
   * <li> <p>The value of immutable headers must remain unchanged. Check the returned
   * error message for more information.</p> </li> <li> <p>Certain unique headers can
   * only appear once. Check the returned error message for more information.</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmailmessageflow-2019-05-01/RawMessageContent">AWS
   * API Reference</a></p>
   */
  class RawMessageContent
  {
  public:
    AWS_WORKMAILMESSAGEFLOW_API RawMessageContent();
    AWS_WORKMAILMESSAGEFLOW_API RawMessageContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAILMESSAGEFLOW_API RawMessageContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAILMESSAGEFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 reference of an email message.</p>
     */
    inline const S3Reference& GetS3Reference() const{ return m_s3Reference; }

    /**
     * <p>The S3 reference of an email message.</p>
     */
    inline bool S3ReferenceHasBeenSet() const { return m_s3ReferenceHasBeenSet; }

    /**
     * <p>The S3 reference of an email message.</p>
     */
    inline void SetS3Reference(const S3Reference& value) { m_s3ReferenceHasBeenSet = true; m_s3Reference = value; }

    /**
     * <p>The S3 reference of an email message.</p>
     */
    inline void SetS3Reference(S3Reference&& value) { m_s3ReferenceHasBeenSet = true; m_s3Reference = std::move(value); }

    /**
     * <p>The S3 reference of an email message.</p>
     */
    inline RawMessageContent& WithS3Reference(const S3Reference& value) { SetS3Reference(value); return *this;}

    /**
     * <p>The S3 reference of an email message.</p>
     */
    inline RawMessageContent& WithS3Reference(S3Reference&& value) { SetS3Reference(std::move(value)); return *this;}

  private:

    S3Reference m_s3Reference;
    bool m_s3ReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMailMessageFlow
} // namespace Aws
