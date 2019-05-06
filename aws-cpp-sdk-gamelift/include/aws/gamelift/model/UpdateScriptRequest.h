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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/S3Location.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class AWS_GAMELIFT_API UpdateScriptRequest : public GameLiftRequest
  {
  public:
    UpdateScriptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScript"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a Realtime script to update.</p>
     */
    inline const Aws::String& GetScriptId() const{ return m_scriptId; }

    /**
     * <p>Unique identifier for a Realtime script to update.</p>
     */
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }

    /**
     * <p>Unique identifier for a Realtime script to update.</p>
     */
    inline void SetScriptId(const Aws::String& value) { m_scriptIdHasBeenSet = true; m_scriptId = value; }

    /**
     * <p>Unique identifier for a Realtime script to update.</p>
     */
    inline void SetScriptId(Aws::String&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::move(value); }

    /**
     * <p>Unique identifier for a Realtime script to update.</p>
     */
    inline void SetScriptId(const char* value) { m_scriptIdHasBeenSet = true; m_scriptId.assign(value); }

    /**
     * <p>Unique identifier for a Realtime script to update.</p>
     */
    inline UpdateScriptRequest& WithScriptId(const Aws::String& value) { SetScriptId(value); return *this;}

    /**
     * <p>Unique identifier for a Realtime script to update.</p>
     */
    inline UpdateScriptRequest& WithScriptId(Aws::String&& value) { SetScriptId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a Realtime script to update.</p>
     */
    inline UpdateScriptRequest& WithScriptId(const char* value) { SetScriptId(value); return *this;}


    /**
     * <p>Descriptive label that is associated with a script. Script names do not need
     * to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label that is associated with a script. Script names do not need
     * to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Descriptive label that is associated with a script. Script names do not need
     * to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label that is associated with a script. Script names do not need
     * to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Descriptive label that is associated with a script. Script names do not need
     * to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label that is associated with a script. Script names do not need
     * to be unique.</p>
     */
    inline UpdateScriptRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with a script. Script names do not need
     * to be unique.</p>
     */
    inline UpdateScriptRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Descriptive label that is associated with a script. Script names do not need
     * to be unique.</p>
     */
    inline UpdateScriptRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline UpdateScriptRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline UpdateScriptRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline UpdateScriptRequest& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>Location of the Amazon S3 bucket where a zipped file containing your Realtime
     * scripts is stored. The storage location must specify the Amazon S3 bucket name,
     * the zip file name (the "key"), and a role ARN that allows Amazon GameLift to
     * access the Amazon S3 storage location. The S3 bucket must be in the same region
     * where you want to create a new script. By default, Amazon GameLift uploads the
     * latest version of the zip file; if you have S3 object versioning turned on, you
     * can use the <code>ObjectVersion</code> parameter to specify an earlier version.
     * </p>
     */
    inline const S3Location& GetStorageLocation() const{ return m_storageLocation; }

    /**
     * <p>Location of the Amazon S3 bucket where a zipped file containing your Realtime
     * scripts is stored. The storage location must specify the Amazon S3 bucket name,
     * the zip file name (the "key"), and a role ARN that allows Amazon GameLift to
     * access the Amazon S3 storage location. The S3 bucket must be in the same region
     * where you want to create a new script. By default, Amazon GameLift uploads the
     * latest version of the zip file; if you have S3 object versioning turned on, you
     * can use the <code>ObjectVersion</code> parameter to specify an earlier version.
     * </p>
     */
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }

    /**
     * <p>Location of the Amazon S3 bucket where a zipped file containing your Realtime
     * scripts is stored. The storage location must specify the Amazon S3 bucket name,
     * the zip file name (the "key"), and a role ARN that allows Amazon GameLift to
     * access the Amazon S3 storage location. The S3 bucket must be in the same region
     * where you want to create a new script. By default, Amazon GameLift uploads the
     * latest version of the zip file; if you have S3 object versioning turned on, you
     * can use the <code>ObjectVersion</code> parameter to specify an earlier version.
     * </p>
     */
    inline void SetStorageLocation(const S3Location& value) { m_storageLocationHasBeenSet = true; m_storageLocation = value; }

    /**
     * <p>Location of the Amazon S3 bucket where a zipped file containing your Realtime
     * scripts is stored. The storage location must specify the Amazon S3 bucket name,
     * the zip file name (the "key"), and a role ARN that allows Amazon GameLift to
     * access the Amazon S3 storage location. The S3 bucket must be in the same region
     * where you want to create a new script. By default, Amazon GameLift uploads the
     * latest version of the zip file; if you have S3 object versioning turned on, you
     * can use the <code>ObjectVersion</code> parameter to specify an earlier version.
     * </p>
     */
    inline void SetStorageLocation(S3Location&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::move(value); }

    /**
     * <p>Location of the Amazon S3 bucket where a zipped file containing your Realtime
     * scripts is stored. The storage location must specify the Amazon S3 bucket name,
     * the zip file name (the "key"), and a role ARN that allows Amazon GameLift to
     * access the Amazon S3 storage location. The S3 bucket must be in the same region
     * where you want to create a new script. By default, Amazon GameLift uploads the
     * latest version of the zip file; if you have S3 object versioning turned on, you
     * can use the <code>ObjectVersion</code> parameter to specify an earlier version.
     * </p>
     */
    inline UpdateScriptRequest& WithStorageLocation(const S3Location& value) { SetStorageLocation(value); return *this;}

    /**
     * <p>Location of the Amazon S3 bucket where a zipped file containing your Realtime
     * scripts is stored. The storage location must specify the Amazon S3 bucket name,
     * the zip file name (the "key"), and a role ARN that allows Amazon GameLift to
     * access the Amazon S3 storage location. The S3 bucket must be in the same region
     * where you want to create a new script. By default, Amazon GameLift uploads the
     * latest version of the zip file; if you have S3 object versioning turned on, you
     * can use the <code>ObjectVersion</code> parameter to specify an earlier version.
     * </p>
     */
    inline UpdateScriptRequest& WithStorageLocation(S3Location&& value) { SetStorageLocation(std::move(value)); return *this;}


    /**
     * <p>Data object containing your Realtime scripts and dependencies as a zip file.
     * The zip file can have one or multiple files. Maximum size of a zip file is 5
     * MB.</p> <p>When using the AWS CLI tool to create a script, this parameter is set
     * to the zip file name. It must be prepended with the string "fileb://" to
     * indicate that the file data is a binary object. For example: <code>--zip-file
     * fileb://myRealtimeScript.zip</code>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetZipFile() const{ return m_zipFile; }

    /**
     * <p>Data object containing your Realtime scripts and dependencies as a zip file.
     * The zip file can have one or multiple files. Maximum size of a zip file is 5
     * MB.</p> <p>When using the AWS CLI tool to create a script, this parameter is set
     * to the zip file name. It must be prepended with the string "fileb://" to
     * indicate that the file data is a binary object. For example: <code>--zip-file
     * fileb://myRealtimeScript.zip</code>.</p>
     */
    inline bool ZipFileHasBeenSet() const { return m_zipFileHasBeenSet; }

    /**
     * <p>Data object containing your Realtime scripts and dependencies as a zip file.
     * The zip file can have one or multiple files. Maximum size of a zip file is 5
     * MB.</p> <p>When using the AWS CLI tool to create a script, this parameter is set
     * to the zip file name. It must be prepended with the string "fileb://" to
     * indicate that the file data is a binary object. For example: <code>--zip-file
     * fileb://myRealtimeScript.zip</code>.</p>
     */
    inline void SetZipFile(const Aws::Utils::ByteBuffer& value) { m_zipFileHasBeenSet = true; m_zipFile = value; }

    /**
     * <p>Data object containing your Realtime scripts and dependencies as a zip file.
     * The zip file can have one or multiple files. Maximum size of a zip file is 5
     * MB.</p> <p>When using the AWS CLI tool to create a script, this parameter is set
     * to the zip file name. It must be prepended with the string "fileb://" to
     * indicate that the file data is a binary object. For example: <code>--zip-file
     * fileb://myRealtimeScript.zip</code>.</p>
     */
    inline void SetZipFile(Aws::Utils::ByteBuffer&& value) { m_zipFileHasBeenSet = true; m_zipFile = std::move(value); }

    /**
     * <p>Data object containing your Realtime scripts and dependencies as a zip file.
     * The zip file can have one or multiple files. Maximum size of a zip file is 5
     * MB.</p> <p>When using the AWS CLI tool to create a script, this parameter is set
     * to the zip file name. It must be prepended with the string "fileb://" to
     * indicate that the file data is a binary object. For example: <code>--zip-file
     * fileb://myRealtimeScript.zip</code>.</p>
     */
    inline UpdateScriptRequest& WithZipFile(const Aws::Utils::ByteBuffer& value) { SetZipFile(value); return *this;}

    /**
     * <p>Data object containing your Realtime scripts and dependencies as a zip file.
     * The zip file can have one or multiple files. Maximum size of a zip file is 5
     * MB.</p> <p>When using the AWS CLI tool to create a script, this parameter is set
     * to the zip file name. It must be prepended with the string "fileb://" to
     * indicate that the file data is a binary object. For example: <code>--zip-file
     * fileb://myRealtimeScript.zip</code>.</p>
     */
    inline UpdateScriptRequest& WithZipFile(Aws::Utils::ByteBuffer&& value) { SetZipFile(std::move(value)); return *this;}

  private:

    Aws::String m_scriptId;
    bool m_scriptIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    S3Location m_storageLocation;
    bool m_storageLocationHasBeenSet;

    Aws::Utils::ByteBuffer m_zipFile;
    bool m_zipFileHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
