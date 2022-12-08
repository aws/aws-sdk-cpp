/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/UploadSettings.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/InputColumn.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A physical table type for an S3 data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/S3Source">AWS
   * API Reference</a></p>
   */
  class S3Source
  {
  public:
    AWS_QUICKSIGHT_API S3Source();
    AWS_QUICKSIGHT_API S3Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API S3Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the data source.</p>
     */
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the data source.</p>
     */
    inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the data source.</p>
     */
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the data source.</p>
     */
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the data source.</p>
     */
    inline void SetDataSourceArn(const char* value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the data source.</p>
     */
    inline S3Source& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the data source.</p>
     */
    inline S3Source& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the data source.</p>
     */
    inline S3Source& WithDataSourceArn(const char* value) { SetDataSourceArn(value); return *this;}


    /**
     * <p>Information about the format for the S3 source file or files.</p>
     */
    inline const UploadSettings& GetUploadSettings() const{ return m_uploadSettings; }

    /**
     * <p>Information about the format for the S3 source file or files.</p>
     */
    inline bool UploadSettingsHasBeenSet() const { return m_uploadSettingsHasBeenSet; }

    /**
     * <p>Information about the format for the S3 source file or files.</p>
     */
    inline void SetUploadSettings(const UploadSettings& value) { m_uploadSettingsHasBeenSet = true; m_uploadSettings = value; }

    /**
     * <p>Information about the format for the S3 source file or files.</p>
     */
    inline void SetUploadSettings(UploadSettings&& value) { m_uploadSettingsHasBeenSet = true; m_uploadSettings = std::move(value); }

    /**
     * <p>Information about the format for the S3 source file or files.</p>
     */
    inline S3Source& WithUploadSettings(const UploadSettings& value) { SetUploadSettings(value); return *this;}

    /**
     * <p>Information about the format for the S3 source file or files.</p>
     */
    inline S3Source& WithUploadSettings(UploadSettings&& value) { SetUploadSettings(std::move(value)); return *this;}


    /**
     * <p>A physical table type for an S3 data source.</p>  <p>For files that
     * aren't JSON, only <code>STRING</code> data types are supported in input
     * columns.</p> 
     */
    inline const Aws::Vector<InputColumn>& GetInputColumns() const{ return m_inputColumns; }

    /**
     * <p>A physical table type for an S3 data source.</p>  <p>For files that
     * aren't JSON, only <code>STRING</code> data types are supported in input
     * columns.</p> 
     */
    inline bool InputColumnsHasBeenSet() const { return m_inputColumnsHasBeenSet; }

    /**
     * <p>A physical table type for an S3 data source.</p>  <p>For files that
     * aren't JSON, only <code>STRING</code> data types are supported in input
     * columns.</p> 
     */
    inline void SetInputColumns(const Aws::Vector<InputColumn>& value) { m_inputColumnsHasBeenSet = true; m_inputColumns = value; }

    /**
     * <p>A physical table type for an S3 data source.</p>  <p>For files that
     * aren't JSON, only <code>STRING</code> data types are supported in input
     * columns.</p> 
     */
    inline void SetInputColumns(Aws::Vector<InputColumn>&& value) { m_inputColumnsHasBeenSet = true; m_inputColumns = std::move(value); }

    /**
     * <p>A physical table type for an S3 data source.</p>  <p>For files that
     * aren't JSON, only <code>STRING</code> data types are supported in input
     * columns.</p> 
     */
    inline S3Source& WithInputColumns(const Aws::Vector<InputColumn>& value) { SetInputColumns(value); return *this;}

    /**
     * <p>A physical table type for an S3 data source.</p>  <p>For files that
     * aren't JSON, only <code>STRING</code> data types are supported in input
     * columns.</p> 
     */
    inline S3Source& WithInputColumns(Aws::Vector<InputColumn>&& value) { SetInputColumns(std::move(value)); return *this;}

    /**
     * <p>A physical table type for an S3 data source.</p>  <p>For files that
     * aren't JSON, only <code>STRING</code> data types are supported in input
     * columns.</p> 
     */
    inline S3Source& AddInputColumns(const InputColumn& value) { m_inputColumnsHasBeenSet = true; m_inputColumns.push_back(value); return *this; }

    /**
     * <p>A physical table type for an S3 data source.</p>  <p>For files that
     * aren't JSON, only <code>STRING</code> data types are supported in input
     * columns.</p> 
     */
    inline S3Source& AddInputColumns(InputColumn&& value) { m_inputColumnsHasBeenSet = true; m_inputColumns.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dataSourceArn;
    bool m_dataSourceArnHasBeenSet = false;

    UploadSettings m_uploadSettings;
    bool m_uploadSettingsHasBeenSet = false;

    Aws::Vector<InputColumn> m_inputColumns;
    bool m_inputColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
