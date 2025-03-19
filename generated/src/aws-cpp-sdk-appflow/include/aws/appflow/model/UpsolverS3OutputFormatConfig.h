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
    AWS_APPFLOW_API UpsolverS3OutputFormatConfig() = default;
    AWS_APPFLOW_API UpsolverS3OutputFormatConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API UpsolverS3OutputFormatConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Upsolver Amazon S3
     * bucket. </p>
     */
    inline FileType GetFileType() const { return m_fileType; }
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }
    inline void SetFileType(FileType value) { m_fileTypeHasBeenSet = true; m_fileType = value; }
    inline UpsolverS3OutputFormatConfig& WithFileType(FileType value) { SetFileType(value); return *this;}
    ///@}

    ///@{
    
    inline const PrefixConfig& GetPrefixConfig() const { return m_prefixConfig; }
    inline bool PrefixConfigHasBeenSet() const { return m_prefixConfigHasBeenSet; }
    template<typename PrefixConfigT = PrefixConfig>
    void SetPrefixConfig(PrefixConfigT&& value) { m_prefixConfigHasBeenSet = true; m_prefixConfig = std::forward<PrefixConfigT>(value); }
    template<typename PrefixConfigT = PrefixConfig>
    UpsolverS3OutputFormatConfig& WithPrefixConfig(PrefixConfigT&& value) { SetPrefixConfig(std::forward<PrefixConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AggregationConfig& GetAggregationConfig() const { return m_aggregationConfig; }
    inline bool AggregationConfigHasBeenSet() const { return m_aggregationConfigHasBeenSet; }
    template<typename AggregationConfigT = AggregationConfig>
    void SetAggregationConfig(AggregationConfigT&& value) { m_aggregationConfigHasBeenSet = true; m_aggregationConfig = std::forward<AggregationConfigT>(value); }
    template<typename AggregationConfigT = AggregationConfig>
    UpsolverS3OutputFormatConfig& WithAggregationConfig(AggregationConfigT&& value) { SetAggregationConfig(std::forward<AggregationConfigT>(value)); return *this;}
    ///@}
  private:

    FileType m_fileType{FileType::NOT_SET};
    bool m_fileTypeHasBeenSet = false;

    PrefixConfig m_prefixConfig;
    bool m_prefixConfigHasBeenSet = false;

    AggregationConfig m_aggregationConfig;
    bool m_aggregationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
