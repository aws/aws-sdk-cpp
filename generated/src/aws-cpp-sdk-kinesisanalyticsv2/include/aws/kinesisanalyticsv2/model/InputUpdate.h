﻿/**
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
    AWS_KINESISANALYTICSV2_API InputUpdate();
    AWS_KINESISANALYTICSV2_API InputUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API InputUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input ID of the application input to be updated.</p>
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = std::move(value); }
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }
    inline InputUpdate& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}
    inline InputUpdate& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}
    inline InputUpdate& WithInputId(const char* value) { SetInputId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name prefix for in-application streams that Kinesis Data Analytics
     * creates for the specific streaming source.</p>
     */
    inline const Aws::String& GetNamePrefixUpdate() const{ return m_namePrefixUpdate; }
    inline bool NamePrefixUpdateHasBeenSet() const { return m_namePrefixUpdateHasBeenSet; }
    inline void SetNamePrefixUpdate(const Aws::String& value) { m_namePrefixUpdateHasBeenSet = true; m_namePrefixUpdate = value; }
    inline void SetNamePrefixUpdate(Aws::String&& value) { m_namePrefixUpdateHasBeenSet = true; m_namePrefixUpdate = std::move(value); }
    inline void SetNamePrefixUpdate(const char* value) { m_namePrefixUpdateHasBeenSet = true; m_namePrefixUpdate.assign(value); }
    inline InputUpdate& WithNamePrefixUpdate(const Aws::String& value) { SetNamePrefixUpdate(value); return *this;}
    inline InputUpdate& WithNamePrefixUpdate(Aws::String&& value) { SetNamePrefixUpdate(std::move(value)); return *this;}
    inline InputUpdate& WithNamePrefixUpdate(const char* value) { SetNamePrefixUpdate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to an <a>InputProcessingConfiguration</a>.</p>
     */
    inline const InputProcessingConfigurationUpdate& GetInputProcessingConfigurationUpdate() const{ return m_inputProcessingConfigurationUpdate; }
    inline bool InputProcessingConfigurationUpdateHasBeenSet() const { return m_inputProcessingConfigurationUpdateHasBeenSet; }
    inline void SetInputProcessingConfigurationUpdate(const InputProcessingConfigurationUpdate& value) { m_inputProcessingConfigurationUpdateHasBeenSet = true; m_inputProcessingConfigurationUpdate = value; }
    inline void SetInputProcessingConfigurationUpdate(InputProcessingConfigurationUpdate&& value) { m_inputProcessingConfigurationUpdateHasBeenSet = true; m_inputProcessingConfigurationUpdate = std::move(value); }
    inline InputUpdate& WithInputProcessingConfigurationUpdate(const InputProcessingConfigurationUpdate& value) { SetInputProcessingConfigurationUpdate(value); return *this;}
    inline InputUpdate& WithInputProcessingConfigurationUpdate(InputProcessingConfigurationUpdate&& value) { SetInputProcessingConfigurationUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a Kinesis data stream is the streaming source to be updated, provides an
     * updated stream Amazon Resource Name (ARN).</p>
     */
    inline const KinesisStreamsInputUpdate& GetKinesisStreamsInputUpdate() const{ return m_kinesisStreamsInputUpdate; }
    inline bool KinesisStreamsInputUpdateHasBeenSet() const { return m_kinesisStreamsInputUpdateHasBeenSet; }
    inline void SetKinesisStreamsInputUpdate(const KinesisStreamsInputUpdate& value) { m_kinesisStreamsInputUpdateHasBeenSet = true; m_kinesisStreamsInputUpdate = value; }
    inline void SetKinesisStreamsInputUpdate(KinesisStreamsInputUpdate&& value) { m_kinesisStreamsInputUpdateHasBeenSet = true; m_kinesisStreamsInputUpdate = std::move(value); }
    inline InputUpdate& WithKinesisStreamsInputUpdate(const KinesisStreamsInputUpdate& value) { SetKinesisStreamsInputUpdate(value); return *this;}
    inline InputUpdate& WithKinesisStreamsInputUpdate(KinesisStreamsInputUpdate&& value) { SetKinesisStreamsInputUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a Kinesis Data Firehose delivery stream is the streaming source to be
     * updated, provides an updated stream ARN.</p>
     */
    inline const KinesisFirehoseInputUpdate& GetKinesisFirehoseInputUpdate() const{ return m_kinesisFirehoseInputUpdate; }
    inline bool KinesisFirehoseInputUpdateHasBeenSet() const { return m_kinesisFirehoseInputUpdateHasBeenSet; }
    inline void SetKinesisFirehoseInputUpdate(const KinesisFirehoseInputUpdate& value) { m_kinesisFirehoseInputUpdateHasBeenSet = true; m_kinesisFirehoseInputUpdate = value; }
    inline void SetKinesisFirehoseInputUpdate(KinesisFirehoseInputUpdate&& value) { m_kinesisFirehoseInputUpdateHasBeenSet = true; m_kinesisFirehoseInputUpdate = std::move(value); }
    inline InputUpdate& WithKinesisFirehoseInputUpdate(const KinesisFirehoseInputUpdate& value) { SetKinesisFirehoseInputUpdate(value); return *this;}
    inline InputUpdate& WithKinesisFirehoseInputUpdate(KinesisFirehoseInputUpdate&& value) { SetKinesisFirehoseInputUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the data format on the streaming source, and how record elements on
     * the streaming source map to columns of the in-application stream that is
     * created.</p>
     */
    inline const InputSchemaUpdate& GetInputSchemaUpdate() const{ return m_inputSchemaUpdate; }
    inline bool InputSchemaUpdateHasBeenSet() const { return m_inputSchemaUpdateHasBeenSet; }
    inline void SetInputSchemaUpdate(const InputSchemaUpdate& value) { m_inputSchemaUpdateHasBeenSet = true; m_inputSchemaUpdate = value; }
    inline void SetInputSchemaUpdate(InputSchemaUpdate&& value) { m_inputSchemaUpdateHasBeenSet = true; m_inputSchemaUpdate = std::move(value); }
    inline InputUpdate& WithInputSchemaUpdate(const InputSchemaUpdate& value) { SetInputSchemaUpdate(value); return *this;}
    inline InputUpdate& WithInputSchemaUpdate(InputSchemaUpdate&& value) { SetInputSchemaUpdate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the parallelism updates (the number of in-application streams
     * Kinesis Data Analytics creates for the specific streaming source).</p>
     */
    inline const InputParallelismUpdate& GetInputParallelismUpdate() const{ return m_inputParallelismUpdate; }
    inline bool InputParallelismUpdateHasBeenSet() const { return m_inputParallelismUpdateHasBeenSet; }
    inline void SetInputParallelismUpdate(const InputParallelismUpdate& value) { m_inputParallelismUpdateHasBeenSet = true; m_inputParallelismUpdate = value; }
    inline void SetInputParallelismUpdate(InputParallelismUpdate&& value) { m_inputParallelismUpdateHasBeenSet = true; m_inputParallelismUpdate = std::move(value); }
    inline InputUpdate& WithInputParallelismUpdate(const InputParallelismUpdate& value) { SetInputParallelismUpdate(value); return *this;}
    inline InputUpdate& WithInputParallelismUpdate(InputParallelismUpdate&& value) { SetInputParallelismUpdate(std::move(value)); return *this;}
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
