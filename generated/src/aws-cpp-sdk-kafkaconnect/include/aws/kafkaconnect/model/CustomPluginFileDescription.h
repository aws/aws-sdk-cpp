﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>Details about a custom plugin file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/CustomPluginFileDescription">AWS
   * API Reference</a></p>
   */
  class CustomPluginFileDescription
  {
  public:
    AWS_KAFKACONNECT_API CustomPluginFileDescription() = default;
    AWS_KAFKACONNECT_API CustomPluginFileDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API CustomPluginFileDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hex-encoded MD5 checksum of the custom plugin file. You can use it to
     * validate the file.</p>
     */
    inline const Aws::String& GetFileMd5() const { return m_fileMd5; }
    inline bool FileMd5HasBeenSet() const { return m_fileMd5HasBeenSet; }
    template<typename FileMd5T = Aws::String>
    void SetFileMd5(FileMd5T&& value) { m_fileMd5HasBeenSet = true; m_fileMd5 = std::forward<FileMd5T>(value); }
    template<typename FileMd5T = Aws::String>
    CustomPluginFileDescription& WithFileMd5(FileMd5T&& value) { SetFileMd5(std::forward<FileMd5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size in bytes of the custom plugin file. You can use it to validate the
     * file.</p>
     */
    inline long long GetFileSize() const { return m_fileSize; }
    inline bool FileSizeHasBeenSet() const { return m_fileSizeHasBeenSet; }
    inline void SetFileSize(long long value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }
    inline CustomPluginFileDescription& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}
  private:

    Aws::String m_fileMd5;
    bool m_fileMd5HasBeenSet = false;

    long long m_fileSize{0};
    bool m_fileSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
