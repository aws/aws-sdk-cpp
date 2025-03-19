/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/kinesisanalyticsv2/model/S3ContentLocationUpdate.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes an update to the code of an application. Not supported for Apache
   * Zeppelin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CodeContentUpdate">AWS
   * API Reference</a></p>
   */
  class CodeContentUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API CodeContentUpdate() = default;
    AWS_KINESISANALYTICSV2_API CodeContentUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CodeContentUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes an update to the text code for an application.</p>
     */
    inline const Aws::String& GetTextContentUpdate() const { return m_textContentUpdate; }
    inline bool TextContentUpdateHasBeenSet() const { return m_textContentUpdateHasBeenSet; }
    template<typename TextContentUpdateT = Aws::String>
    void SetTextContentUpdate(TextContentUpdateT&& value) { m_textContentUpdateHasBeenSet = true; m_textContentUpdate = std::forward<TextContentUpdateT>(value); }
    template<typename TextContentUpdateT = Aws::String>
    CodeContentUpdate& WithTextContentUpdate(TextContentUpdateT&& value) { SetTextContentUpdate(std::forward<TextContentUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update to the zipped code for an application.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetZipFileContentUpdate() const { return m_zipFileContentUpdate; }
    inline bool ZipFileContentUpdateHasBeenSet() const { return m_zipFileContentUpdateHasBeenSet; }
    template<typename ZipFileContentUpdateT = Aws::Utils::ByteBuffer>
    void SetZipFileContentUpdate(ZipFileContentUpdateT&& value) { m_zipFileContentUpdateHasBeenSet = true; m_zipFileContentUpdate = std::forward<ZipFileContentUpdateT>(value); }
    template<typename ZipFileContentUpdateT = Aws::Utils::ByteBuffer>
    CodeContentUpdate& WithZipFileContentUpdate(ZipFileContentUpdateT&& value) { SetZipFileContentUpdate(std::forward<ZipFileContentUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes an update to the location of code for an application.</p>
     */
    inline const S3ContentLocationUpdate& GetS3ContentLocationUpdate() const { return m_s3ContentLocationUpdate; }
    inline bool S3ContentLocationUpdateHasBeenSet() const { return m_s3ContentLocationUpdateHasBeenSet; }
    template<typename S3ContentLocationUpdateT = S3ContentLocationUpdate>
    void SetS3ContentLocationUpdate(S3ContentLocationUpdateT&& value) { m_s3ContentLocationUpdateHasBeenSet = true; m_s3ContentLocationUpdate = std::forward<S3ContentLocationUpdateT>(value); }
    template<typename S3ContentLocationUpdateT = S3ContentLocationUpdate>
    CodeContentUpdate& WithS3ContentLocationUpdate(S3ContentLocationUpdateT&& value) { SetS3ContentLocationUpdate(std::forward<S3ContentLocationUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_textContentUpdate;
    bool m_textContentUpdateHasBeenSet = false;

    Aws::Utils::ByteBuffer m_zipFileContentUpdate{};
    bool m_zipFileContentUpdateHasBeenSet = false;

    S3ContentLocationUpdate m_s3ContentLocationUpdate;
    bool m_s3ContentLocationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
