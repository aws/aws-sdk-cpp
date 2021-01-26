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
   * <p>Properties describing a Realtime script.</p> <p> <b>Related operations</b>
   * </p> <ul> <li> <p> <a>CreateScript</a> </p> </li> <li> <p> <a>ListScripts</a>
   * </p> </li> <li> <p> <a>DescribeScript</a> </p> </li> <li> <p>
   * <a>UpdateScript</a> </p> </li> <li> <p> <a>DeleteScript</a> </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Script">AWS API
   * Reference</a></p>
   */
  class AWS_GAMELIFT_API Script
  {
  public:
    Script();
    Script(Aws::Utils::Json::JsonView jsonValue);
    Script& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a Realtime script</p>
     */
    inline const Aws::String& GetScriptId() const{ return m_scriptId; }

    /**
     * <p>A unique identifier for a Realtime script</p>
     */
    inline bool ScriptIdHasBeenSet() const { return m_scriptIdHasBeenSet; }

    /**
     * <p>A unique identifier for a Realtime script</p>
     */
    inline void SetScriptId(const Aws::String& value) { m_scriptIdHasBeenSet = true; m_scriptId = value; }

    /**
     * <p>A unique identifier for a Realtime script</p>
     */
    inline void SetScriptId(Aws::String&& value) { m_scriptIdHasBeenSet = true; m_scriptId = std::move(value); }

    /**
     * <p>A unique identifier for a Realtime script</p>
     */
    inline void SetScriptId(const char* value) { m_scriptIdHasBeenSet = true; m_scriptId.assign(value); }

    /**
     * <p>A unique identifier for a Realtime script</p>
     */
    inline Script& WithScriptId(const Aws::String& value) { SetScriptId(value); return *this;}

    /**
     * <p>A unique identifier for a Realtime script</p>
     */
    inline Script& WithScriptId(Aws::String&& value) { SetScriptId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a Realtime script</p>
     */
    inline Script& WithScriptId(const char* value) { SetScriptId(value); return *this;}


    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift script resource and uniquely identifies it. ARNs
     * are unique across all Regions. In a GameLift script ARN, the resource ID matches
     * the <i>ScriptId</i> value.</p>
     */
    inline const Aws::String& GetScriptArn() const{ return m_scriptArn; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift script resource and uniquely identifies it. ARNs
     * are unique across all Regions. In a GameLift script ARN, the resource ID matches
     * the <i>ScriptId</i> value.</p>
     */
    inline bool ScriptArnHasBeenSet() const { return m_scriptArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift script resource and uniquely identifies it. ARNs
     * are unique across all Regions. In a GameLift script ARN, the resource ID matches
     * the <i>ScriptId</i> value.</p>
     */
    inline void SetScriptArn(const Aws::String& value) { m_scriptArnHasBeenSet = true; m_scriptArn = value; }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift script resource and uniquely identifies it. ARNs
     * are unique across all Regions. In a GameLift script ARN, the resource ID matches
     * the <i>ScriptId</i> value.</p>
     */
    inline void SetScriptArn(Aws::String&& value) { m_scriptArnHasBeenSet = true; m_scriptArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift script resource and uniquely identifies it. ARNs
     * are unique across all Regions. In a GameLift script ARN, the resource ID matches
     * the <i>ScriptId</i> value.</p>
     */
    inline void SetScriptArn(const char* value) { m_scriptArnHasBeenSet = true; m_scriptArn.assign(value); }

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift script resource and uniquely identifies it. ARNs
     * are unique across all Regions. In a GameLift script ARN, the resource ID matches
     * the <i>ScriptId</i> value.</p>
     */
    inline Script& WithScriptArn(const Aws::String& value) { SetScriptArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift script resource and uniquely identifies it. ARNs
     * are unique across all Regions. In a GameLift script ARN, the resource ID matches
     * the <i>ScriptId</i> value.</p>
     */
    inline Script& WithScriptArn(Aws::String&& value) { SetScriptArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>)
     * that is assigned to a GameLift script resource and uniquely identifies it. ARNs
     * are unique across all Regions. In a GameLift script ARN, the resource ID matches
     * the <i>ScriptId</i> value.</p>
     */
    inline Script& WithScriptArn(const char* value) { SetScriptArn(value); return *this;}


    /**
     * <p>A descriptive label that is associated with a script. Script names do not
     * need to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A descriptive label that is associated with a script. Script names do not
     * need to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A descriptive label that is associated with a script. Script names do not
     * need to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A descriptive label that is associated with a script. Script names do not
     * need to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A descriptive label that is associated with a script. Script names do not
     * need to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A descriptive label that is associated with a script. Script names do not
     * need to be unique.</p>
     */
    inline Script& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A descriptive label that is associated with a script. Script names do not
     * need to be unique.</p>
     */
    inline Script& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A descriptive label that is associated with a script. Script names do not
     * need to be unique.</p>
     */
    inline Script& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline Script& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline Script& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version that is associated with a build or script. Version strings do not
     * need to be unique.</p>
     */
    inline Script& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The file size of the uploaded Realtime script, expressed in bytes. When files
     * are uploaded from an S3 location, this value remains at "0".</p>
     */
    inline long long GetSizeOnDisk() const{ return m_sizeOnDisk; }

    /**
     * <p>The file size of the uploaded Realtime script, expressed in bytes. When files
     * are uploaded from an S3 location, this value remains at "0".</p>
     */
    inline bool SizeOnDiskHasBeenSet() const { return m_sizeOnDiskHasBeenSet; }

    /**
     * <p>The file size of the uploaded Realtime script, expressed in bytes. When files
     * are uploaded from an S3 location, this value remains at "0".</p>
     */
    inline void SetSizeOnDisk(long long value) { m_sizeOnDiskHasBeenSet = true; m_sizeOnDisk = value; }

    /**
     * <p>The file size of the uploaded Realtime script, expressed in bytes. When files
     * are uploaded from an S3 location, this value remains at "0".</p>
     */
    inline Script& WithSizeOnDisk(long long value) { SetSizeOnDisk(value); return *this;}


    /**
     * <p>A time stamp indicating when this data object was created. The format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A time stamp indicating when this data object was created. The format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A time stamp indicating when this data object was created. The format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A time stamp indicating when this data object was created. The format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A time stamp indicating when this data object was created. The format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline Script& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A time stamp indicating when this data object was created. The format is a
     * number expressed in Unix time as milliseconds (for example
     * "1469498468.057").</p>
     */
    inline Script& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    
    inline const S3Location& GetStorageLocation() const{ return m_storageLocation; }

    
    inline bool StorageLocationHasBeenSet() const { return m_storageLocationHasBeenSet; }

    
    inline void SetStorageLocation(const S3Location& value) { m_storageLocationHasBeenSet = true; m_storageLocation = value; }

    
    inline void SetStorageLocation(S3Location&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::move(value); }

    
    inline Script& WithStorageLocation(const S3Location& value) { SetStorageLocation(value); return *this;}

    
    inline Script& WithStorageLocation(S3Location&& value) { SetStorageLocation(std::move(value)); return *this;}

  private:

    Aws::String m_scriptId;
    bool m_scriptIdHasBeenSet;

    Aws::String m_scriptArn;
    bool m_scriptArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    long long m_sizeOnDisk;
    bool m_sizeOnDiskHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    S3Location m_storageLocation;
    bool m_storageLocationHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
