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
    AWS_GUARDDUTY_API ScanFilePath();
    AWS_GUARDDUTY_API ScanFilePath(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScanFilePath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file path of the infected file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }

    /**
     * <p>The file path of the infected file.</p>
     */
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }

    /**
     * <p>The file path of the infected file.</p>
     */
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }

    /**
     * <p>The file path of the infected file.</p>
     */
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }

    /**
     * <p>The file path of the infected file.</p>
     */
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }

    /**
     * <p>The file path of the infected file.</p>
     */
    inline ScanFilePath& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}

    /**
     * <p>The file path of the infected file.</p>
     */
    inline ScanFilePath& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}

    /**
     * <p>The file path of the infected file.</p>
     */
    inline ScanFilePath& WithFilePath(const char* value) { SetFilePath(value); return *this;}


    /**
     * <p>EBS volume Arn details of the infected file.</p>
     */
    inline const Aws::String& GetVolumeArn() const{ return m_volumeArn; }

    /**
     * <p>EBS volume Arn details of the infected file.</p>
     */
    inline bool VolumeArnHasBeenSet() const { return m_volumeArnHasBeenSet; }

    /**
     * <p>EBS volume Arn details of the infected file.</p>
     */
    inline void SetVolumeArn(const Aws::String& value) { m_volumeArnHasBeenSet = true; m_volumeArn = value; }

    /**
     * <p>EBS volume Arn details of the infected file.</p>
     */
    inline void SetVolumeArn(Aws::String&& value) { m_volumeArnHasBeenSet = true; m_volumeArn = std::move(value); }

    /**
     * <p>EBS volume Arn details of the infected file.</p>
     */
    inline void SetVolumeArn(const char* value) { m_volumeArnHasBeenSet = true; m_volumeArn.assign(value); }

    /**
     * <p>EBS volume Arn details of the infected file.</p>
     */
    inline ScanFilePath& WithVolumeArn(const Aws::String& value) { SetVolumeArn(value); return *this;}

    /**
     * <p>EBS volume Arn details of the infected file.</p>
     */
    inline ScanFilePath& WithVolumeArn(Aws::String&& value) { SetVolumeArn(std::move(value)); return *this;}

    /**
     * <p>EBS volume Arn details of the infected file.</p>
     */
    inline ScanFilePath& WithVolumeArn(const char* value) { SetVolumeArn(value); return *this;}


    /**
     * <p>The hash value of the infected file.</p>
     */
    inline const Aws::String& GetHash() const{ return m_hash; }

    /**
     * <p>The hash value of the infected file.</p>
     */
    inline bool HashHasBeenSet() const { return m_hashHasBeenSet; }

    /**
     * <p>The hash value of the infected file.</p>
     */
    inline void SetHash(const Aws::String& value) { m_hashHasBeenSet = true; m_hash = value; }

    /**
     * <p>The hash value of the infected file.</p>
     */
    inline void SetHash(Aws::String&& value) { m_hashHasBeenSet = true; m_hash = std::move(value); }

    /**
     * <p>The hash value of the infected file.</p>
     */
    inline void SetHash(const char* value) { m_hashHasBeenSet = true; m_hash.assign(value); }

    /**
     * <p>The hash value of the infected file.</p>
     */
    inline ScanFilePath& WithHash(const Aws::String& value) { SetHash(value); return *this;}

    /**
     * <p>The hash value of the infected file.</p>
     */
    inline ScanFilePath& WithHash(Aws::String&& value) { SetHash(std::move(value)); return *this;}

    /**
     * <p>The hash value of the infected file.</p>
     */
    inline ScanFilePath& WithHash(const char* value) { SetHash(value); return *this;}


    /**
     * <p>File name of the infected file.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }

    /**
     * <p>File name of the infected file.</p>
     */
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }

    /**
     * <p>File name of the infected file.</p>
     */
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }

    /**
     * <p>File name of the infected file.</p>
     */
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }

    /**
     * <p>File name of the infected file.</p>
     */
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }

    /**
     * <p>File name of the infected file.</p>
     */
    inline ScanFilePath& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}

    /**
     * <p>File name of the infected file.</p>
     */
    inline ScanFilePath& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}

    /**
     * <p>File name of the infected file.</p>
     */
    inline ScanFilePath& WithFileName(const char* value) { SetFileName(value); return *this;}

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
