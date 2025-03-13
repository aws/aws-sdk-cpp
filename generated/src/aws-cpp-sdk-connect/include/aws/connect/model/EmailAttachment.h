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
    AWS_CONNECT_API EmailAttachment() = default;
    AWS_CONNECT_API EmailAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EmailAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A case-sensitive name of the attached file being uploaded.</p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    EmailAttachment& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pre-signed URLs for the S3 bucket where the email attachment is
     * stored.</p>
     */
    inline const Aws::String& GetS3Url() const { return m_s3Url; }
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }
    template<typename S3UrlT = Aws::String>
    void SetS3Url(S3UrlT&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::forward<S3UrlT>(value); }
    template<typename S3UrlT = Aws::String>
    EmailAttachment& WithS3Url(S3UrlT&& value) { SetS3Url(std::forward<S3UrlT>(value)); return *this;}
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
