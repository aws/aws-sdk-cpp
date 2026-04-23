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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/StreamFile.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Information about a stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StreamInfo">AWS API
   * Reference</a></p>
   */
  class AWS_IOT_API StreamInfo
  {
  public:
    StreamInfo();
    StreamInfo(Aws::Utils::Json::JsonView jsonValue);
    StreamInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The stream ID.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>The stream ID.</p>
     */
    inline bool StreamIdHasBeenSet() const { return m_streamIdHasBeenSet; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamIdHasBeenSet = true; m_streamId = value; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamIdHasBeenSet = true; m_streamId = std::move(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const char* value) { m_streamIdHasBeenSet = true; m_streamId.assign(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline StreamInfo& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline StreamInfo& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline StreamInfo& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * <p>The stream ARN.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The stream ARN.</p>
     */
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }

    /**
     * <p>The stream ARN.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }

    /**
     * <p>The stream ARN.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }

    /**
     * <p>The stream ARN.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }

    /**
     * <p>The stream ARN.</p>
     */
    inline StreamInfo& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The stream ARN.</p>
     */
    inline StreamInfo& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The stream ARN.</p>
     */
    inline StreamInfo& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>The stream version.</p>
     */
    inline int GetStreamVersion() const{ return m_streamVersion; }

    /**
     * <p>The stream version.</p>
     */
    inline bool StreamVersionHasBeenSet() const { return m_streamVersionHasBeenSet; }

    /**
     * <p>The stream version.</p>
     */
    inline void SetStreamVersion(int value) { m_streamVersionHasBeenSet = true; m_streamVersion = value; }

    /**
     * <p>The stream version.</p>
     */
    inline StreamInfo& WithStreamVersion(int value) { SetStreamVersion(value); return *this;}


    /**
     * <p>The description of the stream.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the stream.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the stream.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the stream.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the stream.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the stream.</p>
     */
    inline StreamInfo& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the stream.</p>
     */
    inline StreamInfo& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the stream.</p>
     */
    inline StreamInfo& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The files to stream.</p>
     */
    inline const Aws::Vector<StreamFile>& GetFiles() const{ return m_files; }

    /**
     * <p>The files to stream.</p>
     */
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }

    /**
     * <p>The files to stream.</p>
     */
    inline void SetFiles(const Aws::Vector<StreamFile>& value) { m_filesHasBeenSet = true; m_files = value; }

    /**
     * <p>The files to stream.</p>
     */
    inline void SetFiles(Aws::Vector<StreamFile>&& value) { m_filesHasBeenSet = true; m_files = std::move(value); }

    /**
     * <p>The files to stream.</p>
     */
    inline StreamInfo& WithFiles(const Aws::Vector<StreamFile>& value) { SetFiles(value); return *this;}

    /**
     * <p>The files to stream.</p>
     */
    inline StreamInfo& WithFiles(Aws::Vector<StreamFile>&& value) { SetFiles(std::move(value)); return *this;}

    /**
     * <p>The files to stream.</p>
     */
    inline StreamInfo& AddFiles(const StreamFile& value) { m_filesHasBeenSet = true; m_files.push_back(value); return *this; }

    /**
     * <p>The files to stream.</p>
     */
    inline StreamInfo& AddFiles(StreamFile&& value) { m_filesHasBeenSet = true; m_files.push_back(std::move(value)); return *this; }


    /**
     * <p>The date when the stream was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date when the stream was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date when the stream was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date when the stream was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date when the stream was created.</p>
     */
    inline StreamInfo& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date when the stream was created.</p>
     */
    inline StreamInfo& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date when the stream was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The date when the stream was last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The date when the stream was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The date when the stream was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The date when the stream was last updated.</p>
     */
    inline StreamInfo& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The date when the stream was last updated.</p>
     */
    inline StreamInfo& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>An IAM role AWS IoT assumes to access your S3 files.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>An IAM role AWS IoT assumes to access your S3 files.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>An IAM role AWS IoT assumes to access your S3 files.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>An IAM role AWS IoT assumes to access your S3 files.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>An IAM role AWS IoT assumes to access your S3 files.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>An IAM role AWS IoT assumes to access your S3 files.</p>
     */
    inline StreamInfo& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>An IAM role AWS IoT assumes to access your S3 files.</p>
     */
    inline StreamInfo& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>An IAM role AWS IoT assumes to access your S3 files.</p>
     */
    inline StreamInfo& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_streamId;
    bool m_streamIdHasBeenSet;

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet;

    int m_streamVersion;
    bool m_streamVersionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<StreamFile> m_files;
    bool m_filesHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
