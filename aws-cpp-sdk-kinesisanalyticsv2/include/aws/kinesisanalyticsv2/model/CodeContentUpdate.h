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
   * <p>Describes an update to the code of a Java-based Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/CodeContentUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API CodeContentUpdate
  {
  public:
    CodeContentUpdate();
    CodeContentUpdate(Aws::Utils::Json::JsonView jsonValue);
    CodeContentUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_textContentUpdateHasBeenSet;

    Aws::Utils::ByteBuffer m_zipFileContentUpdate;
    bool m_zipFileContentUpdateHasBeenSet;

    S3ContentLocationUpdate m_s3ContentLocationUpdate;
    bool m_s3ContentLocationUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
