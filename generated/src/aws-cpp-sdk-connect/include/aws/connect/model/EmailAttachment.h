/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the email attachment files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EmailAttachment">AWS
   * API Reference</a></p>
   */
  class EmailAttachment
  {
  public:
    AWS_CONNECT_API EmailAttachment();
    AWS_CONNECT_API EmailAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EmailAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A case-sensitive name of the attached file being uploaded.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }
    inline EmailAttachment& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}
    inline EmailAttachment& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}
    inline EmailAttachment& WithFileName(const char* value) { SetFileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-signed URLs for the S3 bucket where the email attachment is
     * stored.</p>
     */
    inline const Aws::String& GetS3Url() const{ return m_s3Url; }
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }
    inline void SetS3Url(const Aws::String& value) { m_s3UrlHasBeenSet = true; m_s3Url = value; }
    inline void SetS3Url(Aws::String&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::move(value); }
    inline void SetS3Url(const char* value) { m_s3UrlHasBeenSet = true; m_s3Url.assign(value); }
    inline EmailAttachment& WithS3Url(const Aws::String& value) { SetS3Url(value); return *this;}
    inline EmailAttachment& WithS3Url(Aws::String&& value) { SetS3Url(std::move(value)); return *this;}
    inline EmailAttachment& WithS3Url(const char* value) { SetS3Url(value); return *this;}
    ///@}
  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
