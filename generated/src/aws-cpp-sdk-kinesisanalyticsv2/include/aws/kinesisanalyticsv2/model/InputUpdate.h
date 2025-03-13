/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/InputProcessingConfigurationUpdate.h>
#include <aws/kinesisanalyticsv2/model/KinesisStreamsInputUpdate.h>
#include <aws/kinesisanalyticsv2/model/KinesisFirehoseInputUpdate.h>
#include <aws/kinesisanalyticsv2/model/InputSchemaUpdate.h>
#include <aws/kinesisanalyticsv2/model/InputParallelismUpdate.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>For a SQL-based Kinesis Data Analytics application, describes updates to a
   * specific input configuration (identified by the <code>InputId</code> of an
   * application). </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/InputUpdate">AWS
   * API Reference</a></p>
   */
  class InputUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API InputUpdate() = default;
    AWS_KINESISANALYTICSV2_API InputUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API InputUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input ID of the application input to be updated.</p>
     */
    inline const Aws::String& GetInputId() const { return m_inputId; }
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }
    template<typename InputIdT = Aws::String>
    void SetInputId(InputIdT&& value) { m_inputIdHasBeenSet = true; m_inputId = std::forward<InputIdT>(value); }
    template<typename InputIdT = Aws::String>
    InputUpdate& WithInputId(InputIdT&& value) { SetInputId(std::forward<InputIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name prefix for in-application streams that Kinesis Data Analytics
     * creates for the specific streaming source.</p>
     */
    inline const Aws::String& GetNamePrefixUpdate() const { return m_namePrefixUpdate; }
    inline bool NamePrefixUpdateHasBeenSet() const { return m_namePrefixUpdateHasBeenSet; }
    template<typename NamePrefixUpdateT = Aws::String>
    void SetNamePrefixUpdate(NamePrefixUpdateT&& value) { m_namePrefixUpdateHasBeenSet = true; m_namePrefixUpdate = std::forward<NamePrefixUpdateT>(value); }
    template<typename NamePrefixUpdateT = Aws::String>
    InputUpdate& WithNamePrefixUpdate(NamePrefixUpdateT&& value) { SetNamePrefixUpdate(std::forward<NamePrefixUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to an <a>InputProcessingConfiguration</a>.</p>
     */
    inline const InputProcessingConfigurationUpdate& GetInputProcessingConfigurationUpdate() const { return m_inputProcessingConfigurationUpdate; }
    inline bool InputProcessingConfigurationUpdateHasBeenSet() const { return m_inputProcessingConfigurationUpdateHasBeenSet; }
    template<typename InputProcessingConfigurationUpdateT = InputProcessingConfigurationUpdate>
    void SetInputProcessingConfigurationUpdate(InputProcessingConfigurationUpdateT&& value) { m_inputProcessingConfigurationUpdateHasBeenSet = true; m_inputProcessingConfigurationUpdate = std::forward<InputProcessingConfigurationUpdateT>(value); }
    template<typename InputProcessingConfigurationUpdateT = InputProcessingConfigurationUpdate>
    InputUpdate& WithInputProcessingConfigurationUpdate(InputProcessingConfigurationUpdateT&& value) { SetInputProcessingConfigurationUpdate(std::forward<InputProcessingConfigurationUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a Kinesis data stream is the streaming source to be updated, provides an
     * updated stream Amazon Resource Name (ARN).</p>
     */
    inline const KinesisStreamsInputUpdate& GetKinesisStreamsInputUpdate() const { return m_kinesisStreamsInputUpdate; }
    inline bool KinesisStreamsInputUpdateHasBeenSet() const { return m_kinesisStreamsInputUpdateHasBeenSet; }
    template<typename KinesisStreamsInputUpdateT = KinesisStreamsInputUpdate>
    void SetKinesisStreamsInputUpdate(KinesisStreamsInputUpdateT&& value) { m_kinesisStreamsInputUpdateHasBeenSet = true; m_kinesisStreamsInputUpdate = std::forward<KinesisStreamsInputUpdateT>(value); }
    template<typename KinesisStreamsInputUpdateT = KinesisStreamsInputUpdate>
    InputUpdate& WithKinesisStreamsInputUpdate(KinesisStreamsInputUpdateT&& value) { SetKinesisStreamsInputUpdate(std::forward<KinesisStreamsInputUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a Kinesis Data Firehose delivery stream is the streaming source to be
     * updated, provides an updated stream ARN.</p>
     */
    inline const KinesisFirehoseInputUpdate& GetKinesisFirehoseInputUpdate() const { return m_kinesisFirehoseInputUpdate; }
    inline bool KinesisFirehoseInputUpdateHasBeenSet() const { return m_kinesisFirehoseInputUpdateHasBeenSet; }
    template<typename KinesisFirehoseInputUpdateT = KinesisFirehoseInputUpdate>
    void SetKinesisFirehoseInputUpdate(KinesisFirehoseInputUpdateT&& value) { m_kinesisFirehoseInputUpdateHasBeenSet = true; m_kinesisFirehoseInputUpdate = std::forward<KinesisFirehoseInputUpdateT>(value); }
    template<typename KinesisFirehoseInputUpdateT = KinesisFirehoseInputUpdate>
    InputUpdate& WithKinesisFirehoseInputUpdate(KinesisFirehoseInputUpdateT&& value) { SetKinesisFirehoseInputUpdate(std::forward<KinesisFirehoseInputUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the data format on the streaming source, and how record elements on
     * the streaming source map to columns of the in-application stream that is
     * created.</p>
     */
    inline const InputSchemaUpdate& GetInputSchemaUpdate() const { return m_inputSchemaUpdate; }
    inline bool InputSchemaUpdateHasBeenSet() const { return m_inputSchemaUpdateHasBeenSet; }
    template<typename InputSchemaUpdateT = InputSchemaUpdate>
    void SetInputSchemaUpdate(InputSchemaUpdateT&& value) { m_inputSchemaUpdateHasBeenSet = true; m_inputSchemaUpdate = std::forward<InputSchemaUpdateT>(value); }
    template<typename InputSchemaUpdateT = InputSchemaUpdate>
    InputUpdate& WithInputSchemaUpdate(InputSchemaUpdateT&& value) { SetInputSchemaUpdate(std::forward<InputSchemaUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the parallelism updates (the number of in-application streams
     * Kinesis Data Analytics creates for the specific streaming source).</p>
     */
    inline const InputParallelismUpdate& GetInputParallelismUpdate() const { return m_inputParallelismUpdate; }
    inline bool InputParallelismUpdateHasBeenSet() const { return m_inputParallelismUpdateHasBeenSet; }
    template<typename InputParallelismUpdateT = InputParallelismUpdate>
    void SetInputParallelismUpdate(InputParallelismUpdateT&& value) { m_inputParallelismUpdateHasBeenSet = true; m_inputParallelismUpdate = std::forward<InputParallelismUpdateT>(value); }
    template<typename InputParallelismUpdateT = InputParallelismUpdate>
    InputUpdate& WithInputParallelismUpdate(InputParallelismUpdateT&& value) { SetInputParallelismUpdate(std::forward<InputParallelismUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet = false;

    Aws::String m_namePrefixUpdate;
    bool m_namePrefixUpdateHasBeenSet = false;

    InputProcessingConfigurationUpdate m_inputProcessingConfigurationUpdate;
    bool m_inputProcessingConfigurationUpdateHasBeenSet = false;

    KinesisStreamsInputUpdate m_kinesisStreamsInputUpdate;
    bool m_kinesisStreamsInputUpdateHasBeenSet = false;

    KinesisFirehoseInputUpdate m_kinesisFirehoseInputUpdate;
    bool m_kinesisFirehoseInputUpdateHasBeenSet = false;

    InputSchemaUpdate m_inputSchemaUpdate;
    bool m_inputSchemaUpdateHasBeenSet = false;

    InputParallelismUpdate m_inputParallelismUpdate;
    bool m_inputParallelismUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
