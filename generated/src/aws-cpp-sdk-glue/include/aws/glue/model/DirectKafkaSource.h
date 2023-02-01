/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/KafkaStreamingSourceOptions.h>
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
   * <p>Specifies an Apache Kafka data store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DirectKafkaSource">AWS
   * API Reference</a></p>
   */
  class DirectKafkaSource
  {
  public:
    AWS_GLUE_API DirectKafkaSource();
    AWS_GLUE_API DirectKafkaSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DirectKafkaSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data store.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data store.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data store.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data store.</p>
     */
    inline DirectKafkaSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data store.</p>
     */
    inline DirectKafkaSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data store.</p>
     */
    inline DirectKafkaSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies the streaming options.</p>
     */
    inline const KafkaStreamingSourceOptions& GetStreamingOptions() const{ return m_streamingOptions; }

    /**
     * <p>Specifies the streaming options.</p>
     */
    inline bool StreamingOptionsHasBeenSet() const { return m_streamingOptionsHasBeenSet; }

    /**
     * <p>Specifies the streaming options.</p>
     */
    inline void SetStreamingOptions(const KafkaStreamingSourceOptions& value) { m_streamingOptionsHasBeenSet = true; m_streamingOptions = value; }

    /**
     * <p>Specifies the streaming options.</p>
     */
    inline void SetStreamingOptions(KafkaStreamingSourceOptions&& value) { m_streamingOptionsHasBeenSet = true; m_streamingOptions = std::move(value); }

    /**
     * <p>Specifies the streaming options.</p>
     */
    inline DirectKafkaSource& WithStreamingOptions(const KafkaStreamingSourceOptions& value) { SetStreamingOptions(value); return *this;}

    /**
     * <p>Specifies the streaming options.</p>
     */
    inline DirectKafkaSource& WithStreamingOptions(KafkaStreamingSourceOptions&& value) { SetStreamingOptions(std::move(value)); return *this;}


    /**
     * <p>The amount of time to spend processing each micro batch.</p>
     */
    inline int GetWindowSize() const{ return m_windowSize; }

    /**
     * <p>The amount of time to spend processing each micro batch.</p>
     */
    inline bool WindowSizeHasBeenSet() const { return m_windowSizeHasBeenSet; }

    /**
     * <p>The amount of time to spend processing each micro batch.</p>
     */
    inline void SetWindowSize(int value) { m_windowSizeHasBeenSet = true; m_windowSize = value; }

    /**
     * <p>The amount of time to spend processing each micro batch.</p>
     */
    inline DirectKafkaSource& WithWindowSize(int value) { SetWindowSize(value); return *this;}


    /**
     * <p>Whether to automatically determine the schema from the incoming data.</p>
     */
    inline bool GetDetectSchema() const{ return m_detectSchema; }

    /**
     * <p>Whether to automatically determine the schema from the incoming data.</p>
     */
    inline bool DetectSchemaHasBeenSet() const { return m_detectSchemaHasBeenSet; }

    /**
     * <p>Whether to automatically determine the schema from the incoming data.</p>
     */
    inline void SetDetectSchema(bool value) { m_detectSchemaHasBeenSet = true; m_detectSchema = value; }

    /**
     * <p>Whether to automatically determine the schema from the incoming data.</p>
     */
    inline DirectKafkaSource& WithDetectSchema(bool value) { SetDetectSchema(value); return *this;}


    /**
     * <p>Specifies options related to data preview for viewing a sample of your
     * data.</p>
     */
    inline const StreamingDataPreviewOptions& GetDataPreviewOptions() const{ return m_dataPreviewOptions; }

    /**
     * <p>Specifies options related to data preview for viewing a sample of your
     * data.</p>
     */
    inline bool DataPreviewOptionsHasBeenSet() const { return m_dataPreviewOptionsHasBeenSet; }

    /**
     * <p>Specifies options related to data preview for viewing a sample of your
     * data.</p>
     */
    inline void SetDataPreviewOptions(const StreamingDataPreviewOptions& value) { m_dataPreviewOptionsHasBeenSet = true; m_dataPreviewOptions = value; }

    /**
     * <p>Specifies options related to data preview for viewing a sample of your
     * data.</p>
     */
    inline void SetDataPreviewOptions(StreamingDataPreviewOptions&& value) { m_dataPreviewOptionsHasBeenSet = true; m_dataPreviewOptions = std::move(value); }

    /**
     * <p>Specifies options related to data preview for viewing a sample of your
     * data.</p>
     */
    inline DirectKafkaSource& WithDataPreviewOptions(const StreamingDataPreviewOptions& value) { SetDataPreviewOptions(value); return *this;}

    /**
     * <p>Specifies options related to data preview for viewing a sample of your
     * data.</p>
     */
    inline DirectKafkaSource& WithDataPreviewOptions(StreamingDataPreviewOptions&& value) { SetDataPreviewOptions(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    KafkaStreamingSourceOptions m_streamingOptions;
    bool m_streamingOptionsHasBeenSet = false;

    int m_windowSize;
    bool m_windowSizeHasBeenSet = false;

    bool m_detectSchema;
    bool m_detectSchemaHasBeenSet = false;

    StreamingDataPreviewOptions m_dataPreviewOptions;
    bool m_dataPreviewOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
