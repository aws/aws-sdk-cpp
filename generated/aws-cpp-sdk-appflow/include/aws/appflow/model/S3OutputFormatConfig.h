/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/FileType.h>
#include <aws/appflow/model/PrefixConfig.h>
#include <aws/appflow/model/AggregationConfig.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The configuration that determines how Amazon AppFlow should format the flow
   * output data when Amazon S3 is used as the destination. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/S3OutputFormatConfig">AWS
   * API Reference</a></p>
   */
  class AWS_APPFLOW_API S3OutputFormatConfig
  {
  public:
    S3OutputFormatConfig();
    S3OutputFormatConfig(Aws::Utils::Json::JsonView jsonValue);
    S3OutputFormatConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Amazon S3 bucket.
     * </p>
     */
    inline const FileType& GetFileType() const{ return m_fileType; }

    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Amazon S3 bucket.
     * </p>
     */
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }

    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Amazon S3 bucket.
     * </p>
     */
    inline void SetFileType(const FileType& value) { m_fileTypeHasBeenSet = true; m_fileType = value; }

    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Amazon S3 bucket.
     * </p>
     */
    inline void SetFileType(FileType&& value) { m_fileTypeHasBeenSet = true; m_fileType = std::move(value); }

    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Amazon S3 bucket.
     * </p>
     */
    inline S3OutputFormatConfig& WithFileType(const FileType& value) { SetFileType(value); return *this;}

    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Amazon S3 bucket.
     * </p>
     */
    inline S3OutputFormatConfig& WithFileType(FileType&& value) { SetFileType(std::move(value)); return *this;}


    /**
     * <p> Determines the prefix that Amazon AppFlow applies to the folder name in the
     * Amazon S3 bucket. You can name folders according to the flow frequency and date.
     * </p>
     */
    inline const PrefixConfig& GetPrefixConfig() const{ return m_prefixConfig; }

    /**
     * <p> Determines the prefix that Amazon AppFlow applies to the folder name in the
     * Amazon S3 bucket. You can name folders according to the flow frequency and date.
     * </p>
     */
    inline bool PrefixConfigHasBeenSet() const { return m_prefixConfigHasBeenSet; }

    /**
     * <p> Determines the prefix that Amazon AppFlow applies to the folder name in the
     * Amazon S3 bucket. You can name folders according to the flow frequency and date.
     * </p>
     */
    inline void SetPrefixConfig(const PrefixConfig& value) { m_prefixConfigHasBeenSet = true; m_prefixConfig = value; }

    /**
     * <p> Determines the prefix that Amazon AppFlow applies to the folder name in the
     * Amazon S3 bucket. You can name folders according to the flow frequency and date.
     * </p>
     */
    inline void SetPrefixConfig(PrefixConfig&& value) { m_prefixConfigHasBeenSet = true; m_prefixConfig = std::move(value); }

    /**
     * <p> Determines the prefix that Amazon AppFlow applies to the folder name in the
     * Amazon S3 bucket. You can name folders according to the flow frequency and date.
     * </p>
     */
    inline S3OutputFormatConfig& WithPrefixConfig(const PrefixConfig& value) { SetPrefixConfig(value); return *this;}

    /**
     * <p> Determines the prefix that Amazon AppFlow applies to the folder name in the
     * Amazon S3 bucket. You can name folders according to the flow frequency and date.
     * </p>
     */
    inline S3OutputFormatConfig& WithPrefixConfig(PrefixConfig&& value) { SetPrefixConfig(std::move(value)); return *this;}


    
    inline const AggregationConfig& GetAggregationConfig() const{ return m_aggregationConfig; }

    
    inline bool AggregationConfigHasBeenSet() const { return m_aggregationConfigHasBeenSet; }

    
    inline void SetAggregationConfig(const AggregationConfig& value) { m_aggregationConfigHasBeenSet = true; m_aggregationConfig = value; }

    
    inline void SetAggregationConfig(AggregationConfig&& value) { m_aggregationConfigHasBeenSet = true; m_aggregationConfig = std::move(value); }

    
    inline S3OutputFormatConfig& WithAggregationConfig(const AggregationConfig& value) { SetAggregationConfig(value); return *this;}

    
    inline S3OutputFormatConfig& WithAggregationConfig(AggregationConfig&& value) { SetAggregationConfig(std::move(value)); return *this;}

  private:

    FileType m_fileType;
    bool m_fileTypeHasBeenSet;

    PrefixConfig m_prefixConfig;
    bool m_prefixConfigHasBeenSet;

    AggregationConfig m_aggregationConfig;
    bool m_aggregationConfigHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
