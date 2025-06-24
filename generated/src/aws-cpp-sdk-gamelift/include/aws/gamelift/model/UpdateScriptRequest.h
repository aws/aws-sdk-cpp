/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateScriptRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API UpdateScriptRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScript"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the Realtime script to update. You can use either the
     * script ID or ARN value.</p>
     */
    inline const Aws::String& GetScriptId() const { return m_scriptId; }
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }
    template<typename ScriptIdT = Aws::String>
    void SetScriptId(ScriptIdT&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::forward<ScriptIdT>(value); }
    template<typename ScriptIdT = Aws::String>
    UpdateScriptRequest& WithScriptId(ScriptIdT&& value) { SetScriptId(std::forward<ScriptIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with a script. Script names do not
     * need to be unique.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateScriptRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    UpdateScriptRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the Amazon S3 bucket where a zipped file containing your
     * Realtime scripts is stored. The storage location must specify the Amazon S3
     * bucket name, the zip file name (the "key"), and a role ARN that allows Amazon
     * GameLift Servers to access the Amazon S3 storage location. The S3 bucket must be
     * in the same Region where you want to create a new script. By default, Amazon
     * GameLift Servers uploads the latest version of the zip file; if you have S3
     * object versioning turned on, you can use the <code>ObjectVersion</code>
     * parameter to specify an earlier version. </p>
     */
    inline const S3Location& GetStorageLocation() const { return m_storageLocation; }
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }
    template<typename StorageLocationT = S3Location>
    void SetStorageLocation(StorageLocationT&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::forward<StorageLocationT>(value); }
    template<typename StorageLocationT = S3Location>
    UpdateScriptRequest& WithStorageLocation(StorageLocationT&& value) { SetStorageLocation(std::forward<StorageLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A data object containing your Realtime scripts and dependencies as a zip
     * file. The zip file can have one or multiple files. Maximum size of a zip file is
     * 5 MB.</p> <p>When using the Amazon Web Services CLI tool to create a script,
     * this parameter is set to the zip file name. It must be prepended with the string
     * "fileb://" to indicate that the file data is a binary object. For example:
     * <code>--zip-file fileb://myRealtimeScript.zip</code>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetZipFile() const { return m_zipFile; }
    inline bool ZipFileHasBeenSet() const { return m_zipFileHasBeenSet; }
    template<typename ZipFileT = Aws::Utils::ByteBuffer>
    void SetZipFile(ZipFileT&& value) { m_zipFileHasBeenSet = true; m_zipFile = std::forward<ZipFileT>(value); }
    template<typename ZipFileT = Aws::Utils::ByteBuffer>
    UpdateScriptRequest& WithZipFile(ZipFileT&& value) { SetZipFile(std::forward<ZipFileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scriptId;
    bool m_scriptIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    S3Location m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    Aws::Utils::ByteBuffer m_zipFile{};
    bool m_zipFileHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
