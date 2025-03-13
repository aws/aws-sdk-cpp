/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/FileFormat.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains the configuration information of a job, such as the file format used
   * to save data in Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/JobConfiguration">AWS
   * API Reference</a></p>
   */
  class JobConfiguration
  {
  public:
    AWS_IOTSITEWISE_API JobConfiguration() = default;
    AWS_IOTSITEWISE_API JobConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API JobConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file format of the data in S3.</p>
     */
    inline const FileFormat& GetFileFormat() const { return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    template<typename FileFormatT = FileFormat>
    void SetFileFormat(FileFormatT&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::forward<FileFormatT>(value); }
    template<typename FileFormatT = FileFormat>
    JobConfiguration& WithFileFormat(FileFormatT&& value) { SetFileFormat(std::forward<FileFormatT>(value)); return *this;}
    ///@}
  private:

    FileFormat m_fileFormat;
    bool m_fileFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
