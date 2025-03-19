/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains details of infected file including name, file path and
   * hash.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScanFilePath">AWS
   * API Reference</a></p>
   */
  class ScanFilePath
  {
  public:
    AWS_GUARDDUTY_API ScanFilePath() = default;
    AWS_GUARDDUTY_API ScanFilePath(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScanFilePath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file path of the infected file.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    ScanFilePath& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>EBS volume ARN details of the infected file.</p>
     */
    inline const Aws::String& GetVolumeArn() const { return m_volumeArn; }
    inline bool VolumeArnHasBeenSet() const { return m_volumeArnHasBeenSet; }
    template<typename VolumeArnT = Aws::String>
    void SetVolumeArn(VolumeArnT&& value) { m_volumeArnHasBeenSet = true; m_volumeArn = std::forward<VolumeArnT>(value); }
    template<typename VolumeArnT = Aws::String>
    ScanFilePath& WithVolumeArn(VolumeArnT&& value) { SetVolumeArn(std::forward<VolumeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hash value of the infected file.</p>
     */
    inline const Aws::String& GetHash() const { return m_hash; }
    inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }
    template<typename HashT = Aws::String>
    void SetHash(HashT&& value) { m_hashHasBeenSet = true; m_hash = std::forward<HashT>(value); }
    template<typename HashT = Aws::String>
    ScanFilePath& WithHash(HashT&& value) { SetHash(std::forward<HashT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>File name of the infected file.</p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    ScanFilePath& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    Aws::String m_volumeArn;
    bool m_volumeArnHasBeenSet = false;

    Aws::String m_hash;
    bool m_hashHasBeenSet = false;

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
