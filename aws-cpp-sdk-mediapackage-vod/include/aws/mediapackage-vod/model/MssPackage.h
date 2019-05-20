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
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/mediapackage-vod/model/MssEncryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage-vod/model/MssManifest.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * A Microsoft Smooth Streaming (MSS) PackagingConfiguration.<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/MssPackage">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIAPACKAGEVOD_API MssPackage
  {
  public:
    MssPackage();
    MssPackage(Aws::Utils::Json::JsonView jsonValue);
    MssPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const MssEncryption& GetEncryption() const{ return m_encryption; }

    
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    
    inline void SetEncryption(const MssEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    
    inline void SetEncryption(MssEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    
    inline MssPackage& WithEncryption(const MssEncryption& value) { SetEncryption(value); return *this;}

    
    inline MssPackage& WithEncryption(MssEncryption&& value) { SetEncryption(std::move(value)); return *this;}


    /**
     * A list of MSS manifest configurations.
     */
    inline const Aws::Vector<MssManifest>& GetMssManifests() const{ return m_mssManifests; }

    /**
     * A list of MSS manifest configurations.
     */
    inline bool MssManifestsHasBeenSet() const { return m_mssManifestsHasBeenSet; }

    /**
     * A list of MSS manifest configurations.
     */
    inline void SetMssManifests(const Aws::Vector<MssManifest>& value) { m_mssManifestsHasBeenSet = true; m_mssManifests = value; }

    /**
     * A list of MSS manifest configurations.
     */
    inline void SetMssManifests(Aws::Vector<MssManifest>&& value) { m_mssManifestsHasBeenSet = true; m_mssManifests = std::move(value); }

    /**
     * A list of MSS manifest configurations.
     */
    inline MssPackage& WithMssManifests(const Aws::Vector<MssManifest>& value) { SetMssManifests(value); return *this;}

    /**
     * A list of MSS manifest configurations.
     */
    inline MssPackage& WithMssManifests(Aws::Vector<MssManifest>&& value) { SetMssManifests(std::move(value)); return *this;}

    /**
     * A list of MSS manifest configurations.
     */
    inline MssPackage& AddMssManifests(const MssManifest& value) { m_mssManifestsHasBeenSet = true; m_mssManifests.push_back(value); return *this; }

    /**
     * A list of MSS manifest configurations.
     */
    inline MssPackage& AddMssManifests(MssManifest&& value) { m_mssManifestsHasBeenSet = true; m_mssManifests.push_back(std::move(value)); return *this; }


    /**
     * The duration (in seconds) of each segment.
     */
    inline int GetSegmentDurationSeconds() const{ return m_segmentDurationSeconds; }

    /**
     * The duration (in seconds) of each segment.
     */
    inline bool SegmentDurationSecondsHasBeenSet() const { return m_segmentDurationSecondsHasBeenSet; }

    /**
     * The duration (in seconds) of each segment.
     */
    inline void SetSegmentDurationSeconds(int value) { m_segmentDurationSecondsHasBeenSet = true; m_segmentDurationSeconds = value; }

    /**
     * The duration (in seconds) of each segment.
     */
    inline MssPackage& WithSegmentDurationSeconds(int value) { SetSegmentDurationSeconds(value); return *this;}

  private:

    MssEncryption m_encryption;
    bool m_encryptionHasBeenSet;

    Aws::Vector<MssManifest> m_mssManifests;
    bool m_mssManifestsHasBeenSet;

    int m_segmentDurationSeconds;
    bool m_segmentDurationSecondsHasBeenSet;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
