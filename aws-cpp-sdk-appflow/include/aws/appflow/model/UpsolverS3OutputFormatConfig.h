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
   * <p> The configuration that determines how Amazon AppFlow formats the flow output
   * data when Upsolver is used as the destination. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/UpsolverS3OutputFormatConfig">AWS
   * API Reference</a></p>
   */
  class UpsolverS3OutputFormatConfig
  {
  public:
    AWS_APPFLOW_API UpsolverS3OutputFormatConfig();
    AWS_APPFLOW_API UpsolverS3OutputFormatConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API UpsolverS3OutputFormatConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Upsolver Amazon S3
     * bucket. </p>
     */
    inline const FileType& GetFileType() const{ return m_fileType; }

    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Upsolver Amazon S3
     * bucket. </p>
     */
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }

    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Upsolver Amazon S3
     * bucket. </p>
     */
    inline void SetFileType(const FileType& value) { m_fileTypeHasBeenSet = true; m_fileType = value; }

    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Upsolver Amazon S3
     * bucket. </p>
     */
    inline void SetFileType(FileType&& value) { m_fileTypeHasBeenSet = true; m_fileType = std::move(value); }

    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Upsolver Amazon S3
     * bucket. </p>
     */
    inline UpsolverS3OutputFormatConfig& WithFileType(const FileType& value) { SetFileType(value); return *this;}

    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Upsolver Amazon S3
     * bucket. </p>
     */
    inline UpsolverS3OutputFormatConfig& WithFileType(FileType&& value) { SetFileType(std::move(value)); return *this;}


    
    inline const PrefixConfig& GetPrefixConfig() const{ return m_prefixConfig; }

    
    inline bool PrefixConfigHasBeenSet() const { return m_prefixConfigHasBeenSet; }

    
    inline void SetPrefixConfig(const PrefixConfig& value) { m_prefixConfigHasBeenSet = true; m_prefixConfig = value; }

    
    inline void SetPrefixConfig(PrefixConfig&& value) { m_prefixConfigHasBeenSet = true; m_prefixConfig = std::move(value); }

    
    inline UpsolverS3OutputFormatConfig& WithPrefixConfig(const PrefixConfig& value) { SetPrefixConfig(value); return *this;}

    
    inline UpsolverS3OutputFormatConfig& WithPrefixConfig(PrefixConfig&& value) { SetPrefixConfig(std::move(value)); return *this;}


    
    inline const AggregationConfig& GetAggregationConfig() const{ return m_aggregationConfig; }

    
    inline bool AggregationConfigHasBeenSet() const { return m_aggregationConfigHasBeenSet; }

    
    inline void SetAggregationConfig(const AggregationConfig& value) { m_aggregationConfigHasBeenSet = true; m_aggregationConfig = value; }

    
    inline void SetAggregationConfig(AggregationConfig&& value) { m_aggregationConfigHasBeenSet = true; m_aggregationConfig = std::move(value); }

    
    inline UpsolverS3OutputFormatConfig& WithAggregationConfig(const AggregationConfig& value) { SetAggregationConfig(value); return *this;}

    
    inline UpsolverS3OutputFormatConfig& WithAggregationConfig(AggregationConfig&& value) { SetAggregationConfig(std::move(value)); return *this;}

  private:

    FileType m_fileType;
    bool m_fileTypeHasBeenSet = false;

    PrefixConfig m_prefixConfig;
    bool m_prefixConfigHasBeenSet = false;

    AggregationConfig m_aggregationConfig;
    bool m_aggregationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
