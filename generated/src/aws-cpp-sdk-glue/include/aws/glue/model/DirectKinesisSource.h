/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/KinesisStreamingSourceOptions.h>
#include <aws/glue/model/StreamingDataPreviewOptions.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies a direct Amazon Kinesis data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DirectKinesisSource">AWS
   * API Reference</a></p>
   */
  class DirectKinesisSource
  {
  public:
    AWS_GLUE_API DirectKinesisSource() = default;
    AWS_GLUE_API DirectKinesisSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DirectKinesisSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DirectKinesisSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time to spend processing each micro batch.</p>
     */
    inline int GetWindowSize() const { return m_windowSize; }
    inline bool WindowSizeHasBeenSet() const { return m_windowSizeHasBeenSet; }
    inline void SetWindowSize(int value) { m_windowSizeHasBeenSet = true; m_windowSize = value; }
    inline DirectKinesisSource& WithWindowSize(int value) { SetWindowSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to automatically determine the schema from the incoming data.</p>
     */
    inline bool GetDetectSchema() const { return m_detectSchema; }
    inline bool DetectSchemaHasBeenSet() const { return m_detectSchemaHasBeenSet; }
    inline void SetDetectSchema(bool value) { m_detectSchemaHasBeenSet = true; m_detectSchema = value; }
    inline DirectKinesisSource& WithDetectSchema(bool value) { SetDetectSchema(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options for the Kinesis streaming data source.</p>
     */
    inline const KinesisStreamingSourceOptions& GetStreamingOptions() const { return m_streamingOptions; }
    inline bool StreamingOptionsHasBeenSet() const { return m_streamingOptionsHasBeenSet; }
    template<typename StreamingOptionsT = KinesisStreamingSourceOptions>
    void SetStreamingOptions(StreamingOptionsT&& value) { m_streamingOptionsHasBeenSet = true; m_streamingOptions = std::forward<StreamingOptionsT>(value); }
    template<typename StreamingOptionsT = KinesisStreamingSourceOptions>
    DirectKinesisSource& WithStreamingOptions(StreamingOptionsT&& value) { SetStreamingOptions(std::forward<StreamingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options for data preview.</p>
     */
    inline const StreamingDataPreviewOptions& GetDataPreviewOptions() const { return m_dataPreviewOptions; }
    inline bool DataPreviewOptionsHasBeenSet() const { return m_dataPreviewOptionsHasBeenSet; }
    template<typename DataPreviewOptionsT = StreamingDataPreviewOptions>
    void SetDataPreviewOptions(DataPreviewOptionsT&& value) { m_dataPreviewOptionsHasBeenSet = true; m_dataPreviewOptions = std::forward<DataPreviewOptionsT>(value); }
    template<typename DataPreviewOptionsT = StreamingDataPreviewOptions>
    DirectKinesisSource& WithDataPreviewOptions(DataPreviewOptionsT&& value) { SetDataPreviewOptions(std::forward<DataPreviewOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_windowSize{0};
    bool m_windowSizeHasBeenSet = false;

    bool m_detectSchema{false};
    bool m_detectSchemaHasBeenSet = false;

    KinesisStreamingSourceOptions m_streamingOptions;
    bool m_streamingOptionsHasBeenSet = false;

    StreamingDataPreviewOptions m_dataPreviewOptions;
    bool m_dataPreviewOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
