/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamelift/model/S3Location.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Properties describing a Realtime script.</p> <p> <b>Related actions</b> </p>
   * <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
   * APIs by task</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Script">AWS API
   * Reference</a></p>
   */
  class Script
  {
  public:
    AWS_GAMELIFT_API Script();
    AWS_GAMELIFT_API Script(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Script& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the Realtime script</p>
     */
    inline const Aws::String& GetScriptId() const{ return m_scriptId; }
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }
    inline void SetScriptId(const Aws::String& value) { m_scriptIdHasBeenSet = true; m_scriptId = value; }
    inline void SetScriptId(Aws::String&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::move(value); }
    inline void SetScriptId(const char* value) { m_scriptIdHasBeenSet = true; m_scriptId.assign(value); }
    inline Script& WithScriptId(const Aws::String& value) { SetScriptId(value); return *this;}
    inline Script& WithScriptId(Aws::String&& value) { SetScriptId(std::move(value)); return *this;}
    inline Script& WithScriptId(const char* value) { SetScriptId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift script resource and uniquely identifies
     * it. ARNs are unique across all Regions. In a GameLift script ARN, the resource
     * ID matches the <i>ScriptId</i> value.</p>
     */
    inline const Aws::String& GetScriptArn() const{ return m_scriptArn; }
    inline bool ScriptArnHasBeenSet() const { return m_scriptArnHasBeenSet; }
    inline void SetScriptArn(const Aws::String& value) { m_scriptArnHasBeenSet = true; m_scriptArn = value; }
    inline void SetScriptArn(Aws::String&& value) { m_scriptArnHasBeenSet = true; m_scriptArn = std::move(value); }
    inline void SetScriptArn(const char* value) { m_scriptArnHasBeenSet = true; m_scriptArn.assign(value); }
    inline Script& WithScriptArn(const Aws::String& value) { SetScriptArn(value); return *this;}
    inline Script& WithScriptArn(Aws::String&& value) { SetScriptArn(std::move(value)); return *this;}
    inline Script& WithScriptArn(const char* value) { SetScriptArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label that is associated with a script. Script names do not
     * need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Script& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Script& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Script& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version information that is associated with a build or script. Version
     * strings do not need to be unique.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline Script& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline Script& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline Script& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file size of the uploaded Realtime script, expressed in bytes. When files
     * are uploaded from an S3 location, this value remains at "0".</p>
     */
    inline long long GetSizeOnDisk() const{ return m_sizeOnDisk; }
    inline bool SizeOnDiskHasBeenSet() const { return m_sizeOnDiskHasBeenSet; }
    inline void SetSizeOnDisk(long long value) { m_sizeOnDiskHasBeenSet = true; m_sizeOnDisk = value; }
    inline Script& WithSizeOnDisk(long long value) { SetSizeOnDisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example
     * <code>"1469498468.057"</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Script& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Script& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the Amazon S3 bucket where a zipped file containing your
     * Realtime scripts is stored. The storage location must specify the Amazon S3
     * bucket name, the zip file name (the "key"), and a role ARN that allows Amazon
     * GameLift to access the Amazon S3 storage location. The S3 bucket must be in the
     * same Region where you want to create a new script. By default, Amazon GameLift
     * uploads the latest version of the zip file; if you have S3 object versioning
     * turned on, you can use the <code>ObjectVersion</code> parameter to specify an
     * earlier version. </p>
     */
    inline const S3Location& GetStorageLocation() const{ return m_storageLocation; }
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }
    inline void SetStorageLocation(const S3Location& value) { m_storageLocationHasBeenSet = true; m_storageLocation = value; }
    inline void SetStorageLocation(S3Location&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::move(value); }
    inline Script& WithStorageLocation(const S3Location& value) { SetStorageLocation(value); return *this;}
    inline Script& WithStorageLocation(S3Location&& value) { SetStorageLocation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_scriptId;
    bool m_scriptIdHasBeenSet = false;

    Aws::String m_scriptArn;
    bool m_scriptArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    long long m_sizeOnDisk;
    bool m_sizeOnDiskHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    S3Location m_storageLocation;
    bool m_storageLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
