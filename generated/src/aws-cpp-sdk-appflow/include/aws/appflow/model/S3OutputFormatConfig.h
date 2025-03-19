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
  class S3OutputFormatConfig
  {
  public:
    AWS_APPFLOW_API S3OutputFormatConfig() = default;
    AWS_APPFLOW_API S3OutputFormatConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API S3OutputFormatConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Indicates the file type that Amazon AppFlow places in the Amazon S3 bucket.
     * </p>
     */
    inline FileType GetFileType() const { return m_fileType; }
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }
    inline void SetFileType(FileType value) { m_fileTypeHasBeenSet = true; m_fileType = value; }
    inline S3OutputFormatConfig& WithFileType(FileType value) { SetFileType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines the prefix that Amazon AppFlow applies to the folder name in the
     * Amazon S3 bucket. You can name folders according to the flow frequency and date.
     * </p>
     */
    inline const PrefixConfig& GetPrefixConfig() const { return m_prefixConfig; }
    inline bool PrefixConfigHasBeenSet() const { return m_prefixConfigHasBeenSet; }
    template<typename PrefixConfigT = PrefixConfig>
    void SetPrefixConfig(PrefixConfigT&& value) { m_prefixConfigHasBeenSet = true; m_prefixConfig = std::forward<PrefixConfigT>(value); }
    template<typename PrefixConfigT = PrefixConfig>
    S3OutputFormatConfig& WithPrefixConfig(PrefixConfigT&& value) { SetPrefixConfig(std::forward<PrefixConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AggregationConfig& GetAggregationConfig() const { return m_aggregationConfig; }
    inline bool AggregationConfigHasBeenSet() const { return m_aggregationConfigHasBeenSet; }
    template<typename AggregationConfigT = AggregationConfig>
    void SetAggregationConfig(AggregationConfigT&& value) { m_aggregationConfigHasBeenSet = true; m_aggregationConfig = std::forward<AggregationConfigT>(value); }
    template<typename AggregationConfigT = AggregationConfig>
    S3OutputFormatConfig& WithAggregationConfig(AggregationConfigT&& value) { SetAggregationConfig(std::forward<AggregationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If your file output format is Parquet, use this parameter to set whether
     * Amazon AppFlow preserves the data types in your source data when it writes the
     * output to Amazon S3. </p> <ul> <li> <p> <code>true</code>: Amazon AppFlow
     * preserves the data types when it writes to Amazon S3. For example, an integer or
     * <code>1</code> in your source data is still an integer in your output.</p> </li>
     * <li> <p> <code>false</code>: Amazon AppFlow converts all of the source data into
     * strings when it writes to Amazon S3. For example, an integer of <code>1</code>
     * in your source data becomes the string <code>"1"</code> in the output.</p> </li>
     * </ul>
     */
    inline bool GetPreserveSourceDataTyping() const { return m_preserveSourceDataTyping; }
    inline bool PreserveSourceDataTypingHasBeenSet() const { return m_preserveSourceDataTypingHasBeenSet; }
    inline void SetPreserveSourceDataTyping(bool value) { m_preserveSourceDataTypingHasBeenSet = true; m_preserveSourceDataTyping = value; }
    inline S3OutputFormatConfig& WithPreserveSourceDataTyping(bool value) { SetPreserveSourceDataTyping(value); return *this;}
    ///@}
  private:

    FileType m_fileType{FileType::NOT_SET};
    bool m_fileTypeHasBeenSet = false;

    PrefixConfig m_prefixConfig;
    bool m_prefixConfigHasBeenSet = false;

    AggregationConfig m_aggregationConfig;
    bool m_aggregationConfigHasBeenSet = false;

    bool m_preserveSourceDataTyping{false};
    bool m_preserveSourceDataTypingHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
