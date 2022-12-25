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
    AWS_KINESISANALYTICSV2_API CodeContentUpdate();
    AWS_KINESISANALYTICSV2_API CodeContentUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API CodeContentUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes an update to the text code for an application.</p>
     */
    inline const Aws::String& GetTextContentUpdate() const{ return m_textContentUpdate; }

    /**
     * <p>Describes an update to the text code for an application.</p>
     */
    inline bool TextContentUpdateHasBeenSet() const { return m_textContentUpdateHasBeenSet; }

    /**
     * <p>Describes an update to the text code for an application.</p>
     */
    inline void SetTextContentUpdate(const Aws::String& value) { m_textContentUpdateHasBeenSet = true; m_textContentUpdate = value; }

    /**
     * <p>Describes an update to the text code for an application.</p>
     */
    inline void SetTextContentUpdate(Aws::String&& value) { m_textContentUpdateHasBeenSet = true; m_textContentUpdate = std::move(value); }

    /**
     * <p>Describes an update to the text code for an application.</p>
     */
    inline void SetTextContentUpdate(const char* value) { m_textContentUpdateHasBeenSet = true; m_textContentUpdate.assign(value); }

    /**
     * <p>Describes an update to the text code for an application.</p>
     */
    inline CodeContentUpdate& WithTextContentUpdate(const Aws::String& value) { SetTextContentUpdate(value); return *this;}

    /**
     * <p>Describes an update to the text code for an application.</p>
     */
    inline CodeContentUpdate& WithTextContentUpdate(Aws::String&& value) { SetTextContentUpdate(std::move(value)); return *this;}

    /**
     * <p>Describes an update to the text code for an application.</p>
     */
    inline CodeContentUpdate& WithTextContentUpdate(const char* value) { SetTextContentUpdate(value); return *this;}


    /**
     * <p>Describes an update to the zipped code for an application.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetZipFileContentUpdate() const{ return m_zipFileContentUpdate; }

    /**
     * <p>Describes an update to the zipped code for an application.</p>
     */
    inline bool ZipFileContentUpdateHasBeenSet() const { return m_zipFileContentUpdateHasBeenSet; }

    /**
     * <p>Describes an update to the zipped code for an application.</p>
     */
    inline void SetZipFileContentUpdate(const Aws::Utils::ByteBuffer& value) { m_zipFileContentUpdateHasBeenSet = true; m_zipFileContentUpdate = value; }

    /**
     * <p>Describes an update to the zipped code for an application.</p>
     */
    inline void SetZipFileContentUpdate(Aws::Utils::ByteBuffer&& value) { m_zipFileContentUpdateHasBeenSet = true; m_zipFileContentUpdate = std::move(value); }

    /**
     * <p>Describes an update to the zipped code for an application.</p>
     */
    inline CodeContentUpdate& WithZipFileContentUpdate(const Aws::Utils::ByteBuffer& value) { SetZipFileContentUpdate(value); return *this;}

    /**
     * <p>Describes an update to the zipped code for an application.</p>
     */
    inline CodeContentUpdate& WithZipFileContentUpdate(Aws::Utils::ByteBuffer&& value) { SetZipFileContentUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes an update to the location of code for an application.</p>
     */
    inline const S3ContentLocationUpdate& GetS3ContentLocationUpdate() const{ return m_s3ContentLocationUpdate; }

    /**
     * <p>Describes an update to the location of code for an application.</p>
     */
    inline bool S3ContentLocationUpdateHasBeenSet() const { return m_s3ContentLocationUpdateHasBeenSet; }

    /**
     * <p>Describes an update to the location of code for an application.</p>
     */
    inline void SetS3ContentLocationUpdate(const S3ContentLocationUpdate& value) { m_s3ContentLocationUpdateHasBeenSet = true; m_s3ContentLocationUpdate = value; }

    /**
     * <p>Describes an update to the location of code for an application.</p>
     */
    inline void SetS3ContentLocationUpdate(S3ContentLocationUpdate&& value) { m_s3ContentLocationUpdateHasBeenSet = true; m_s3ContentLocationUpdate = std::move(value); }

    /**
     * <p>Describes an update to the location of code for an application.</p>
     */
    inline CodeContentUpdate& WithS3ContentLocationUpdate(const S3ContentLocationUpdate& value) { SetS3ContentLocationUpdate(value); return *this;}

    /**
     * <p>Describes an update to the location of code for an application.</p>
     */
    inline CodeContentUpdate& WithS3ContentLocationUpdate(S3ContentLocationUpdate&& value) { SetS3ContentLocationUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_textContentUpdate;
    bool m_textContentUpdateHasBeenSet = false;

    Aws::Utils::ByteBuffer m_zipFileContentUpdate;
    bool m_zipFileContentUpdateHasBeenSet = false;

    S3ContentLocationUpdate m_s3ContentLocationUpdate;
    bool m_s3ContentLocationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
