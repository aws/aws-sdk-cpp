/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/InputProcessingConfigurationUpdate.h>
#include <aws/kinesisanalytics/model/KinesisStreamsInputUpdate.h>
#include <aws/kinesisanalytics/model/KinesisFirehoseInputUpdate.h>
#include <aws/kinesisanalytics/model/InputSchemaUpdate.h>
#include <aws/kinesisanalytics/model/InputParallelismUpdate.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Describes updates to a specific input configuration (identified by the
   * <code>InputId</code> of an application). </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/InputUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API InputUpdate
  {
  public:
    InputUpdate();
    InputUpdate(Aws::Utils::Json::JsonView jsonValue);
    InputUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Input ID of the application input to be updated.</p>
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }

    /**
     * <p>Input ID of the application input to be updated.</p>
     */
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }

    /**
     * <p>Input ID of the application input to be updated.</p>
     */
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }

    /**
     * <p>Input ID of the application input to be updated.</p>
     */
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = std::move(value); }

    /**
     * <p>Input ID of the application input to be updated.</p>
     */
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }

    /**
     * <p>Input ID of the application input to be updated.</p>
     */
    inline InputUpdate& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}

    /**
     * <p>Input ID of the application input to be updated.</p>
     */
    inline InputUpdate& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}

    /**
     * <p>Input ID of the application input to be updated.</p>
     */
    inline InputUpdate& WithInputId(const char* value) { SetInputId(value); return *this;}


    /**
     * <p>Name prefix for in-application streams that Amazon Kinesis Analytics creates
     * for the specific streaming source.</p>
     */
    inline const Aws::String& GetNamePrefixUpdate() const{ return m_namePrefixUpdate; }

    /**
     * <p>Name prefix for in-application streams that Amazon Kinesis Analytics creates
     * for the specific streaming source.</p>
     */
    inline bool NamePrefixUpdateHasBeenSet() const { return m_namePrefixUpdateHasBeenSet; }

    /**
     * <p>Name prefix for in-application streams that Amazon Kinesis Analytics creates
     * for the specific streaming source.</p>
     */
    inline void SetNamePrefixUpdate(const Aws::String& value) { m_namePrefixUpdateHasBeenSet = true; m_namePrefixUpdate = value; }

    /**
     * <p>Name prefix for in-application streams that Amazon Kinesis Analytics creates
     * for the specific streaming source.</p>
     */
    inline void SetNamePrefixUpdate(Aws::String&& value) { m_namePrefixUpdateHasBeenSet = true; m_namePrefixUpdate = std::move(value); }

    /**
     * <p>Name prefix for in-application streams that Amazon Kinesis Analytics creates
     * for the specific streaming source.</p>
     */
    inline void SetNamePrefixUpdate(const char* value) { m_namePrefixUpdateHasBeenSet = true; m_namePrefixUpdate.assign(value); }

    /**
     * <p>Name prefix for in-application streams that Amazon Kinesis Analytics creates
     * for the specific streaming source.</p>
     */
    inline InputUpdate& WithNamePrefixUpdate(const Aws::String& value) { SetNamePrefixUpdate(value); return *this;}

    /**
     * <p>Name prefix for in-application streams that Amazon Kinesis Analytics creates
     * for the specific streaming source.</p>
     */
    inline InputUpdate& WithNamePrefixUpdate(Aws::String&& value) { SetNamePrefixUpdate(std::move(value)); return *this;}

    /**
     * <p>Name prefix for in-application streams that Amazon Kinesis Analytics creates
     * for the specific streaming source.</p>
     */
    inline InputUpdate& WithNamePrefixUpdate(const char* value) { SetNamePrefixUpdate(value); return *this;}


    /**
     * <p>Describes updates for an input processing configuration.</p>
     */
    inline const InputProcessingConfigurationUpdate& GetInputProcessingConfigurationUpdate() const{ return m_inputProcessingConfigurationUpdate; }

    /**
     * <p>Describes updates for an input processing configuration.</p>
     */
    inline bool InputProcessingConfigurationUpdateHasBeenSet() const { return m_inputProcessingConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes updates for an input processing configuration.</p>
     */
    inline void SetInputProcessingConfigurationUpdate(const InputProcessingConfigurationUpdate& value) { m_inputProcessingConfigurationUpdateHasBeenSet = true; m_inputProcessingConfigurationUpdate = value; }

    /**
     * <p>Describes updates for an input processing configuration.</p>
     */
    inline void SetInputProcessingConfigurationUpdate(InputProcessingConfigurationUpdate&& value) { m_inputProcessingConfigurationUpdateHasBeenSet = true; m_inputProcessingConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes updates for an input processing configuration.</p>
     */
    inline InputUpdate& WithInputProcessingConfigurationUpdate(const InputProcessingConfigurationUpdate& value) { SetInputProcessingConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes updates for an input processing configuration.</p>
     */
    inline InputUpdate& WithInputProcessingConfigurationUpdate(InputProcessingConfigurationUpdate&& value) { SetInputProcessingConfigurationUpdate(std::move(value)); return *this;}


    /**
     * <p>If an Amazon Kinesis stream is the streaming source to be updated, provides
     * an updated stream Amazon Resource Name (ARN) and IAM role ARN.</p>
     */
    inline const KinesisStreamsInputUpdate& GetKinesisStreamsInputUpdate() const{ return m_kinesisStreamsInputUpdate; }

    /**
     * <p>If an Amazon Kinesis stream is the streaming source to be updated, provides
     * an updated stream Amazon Resource Name (ARN) and IAM role ARN.</p>
     */
    inline bool KinesisStreamsInputUpdateHasBeenSet() const { return m_kinesisStreamsInputUpdateHasBeenSet; }

    /**
     * <p>If an Amazon Kinesis stream is the streaming source to be updated, provides
     * an updated stream Amazon Resource Name (ARN) and IAM role ARN.</p>
     */
    inline void SetKinesisStreamsInputUpdate(const KinesisStreamsInputUpdate& value) { m_kinesisStreamsInputUpdateHasBeenSet = true; m_kinesisStreamsInputUpdate = value; }

    /**
     * <p>If an Amazon Kinesis stream is the streaming source to be updated, provides
     * an updated stream Amazon Resource Name (ARN) and IAM role ARN.</p>
     */
    inline void SetKinesisStreamsInputUpdate(KinesisStreamsInputUpdate&& value) { m_kinesisStreamsInputUpdateHasBeenSet = true; m_kinesisStreamsInputUpdate = std::move(value); }

    /**
     * <p>If an Amazon Kinesis stream is the streaming source to be updated, provides
     * an updated stream Amazon Resource Name (ARN) and IAM role ARN.</p>
     */
    inline InputUpdate& WithKinesisStreamsInputUpdate(const KinesisStreamsInputUpdate& value) { SetKinesisStreamsInputUpdate(value); return *this;}

    /**
     * <p>If an Amazon Kinesis stream is the streaming source to be updated, provides
     * an updated stream Amazon Resource Name (ARN) and IAM role ARN.</p>
     */
    inline InputUpdate& WithKinesisStreamsInputUpdate(KinesisStreamsInputUpdate&& value) { SetKinesisStreamsInputUpdate(std::move(value)); return *this;}


    /**
     * <p>If an Amazon Kinesis Firehose delivery stream is the streaming source to be
     * updated, provides an updated stream ARN and IAM role ARN.</p>
     */
    inline const KinesisFirehoseInputUpdate& GetKinesisFirehoseInputUpdate() const{ return m_kinesisFirehoseInputUpdate; }

    /**
     * <p>If an Amazon Kinesis Firehose delivery stream is the streaming source to be
     * updated, provides an updated stream ARN and IAM role ARN.</p>
     */
    inline bool KinesisFirehoseInputUpdateHasBeenSet() const { return m_kinesisFirehoseInputUpdateHasBeenSet; }

    /**
     * <p>If an Amazon Kinesis Firehose delivery stream is the streaming source to be
     * updated, provides an updated stream ARN and IAM role ARN.</p>
     */
    inline void SetKinesisFirehoseInputUpdate(const KinesisFirehoseInputUpdate& value) { m_kinesisFirehoseInputUpdateHasBeenSet = true; m_kinesisFirehoseInputUpdate = value; }

    /**
     * <p>If an Amazon Kinesis Firehose delivery stream is the streaming source to be
     * updated, provides an updated stream ARN and IAM role ARN.</p>
     */
    inline void SetKinesisFirehoseInputUpdate(KinesisFirehoseInputUpdate&& value) { m_kinesisFirehoseInputUpdateHasBeenSet = true; m_kinesisFirehoseInputUpdate = std::move(value); }

    /**
     * <p>If an Amazon Kinesis Firehose delivery stream is the streaming source to be
     * updated, provides an updated stream ARN and IAM role ARN.</p>
     */
    inline InputUpdate& WithKinesisFirehoseInputUpdate(const KinesisFirehoseInputUpdate& value) { SetKinesisFirehoseInputUpdate(value); return *this;}

    /**
     * <p>If an Amazon Kinesis Firehose delivery stream is the streaming source to be
     * updated, provides an updated stream ARN and IAM role ARN.</p>
     */
    inline InputUpdate& WithKinesisFirehoseInputUpdate(KinesisFirehoseInputUpdate&& value) { SetKinesisFirehoseInputUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes the data format on the streaming source, and how record elements on
     * the streaming source map to columns of the in-application stream that is
     * created.</p>
     */
    inline const InputSchemaUpdate& GetInputSchemaUpdate() const{ return m_inputSchemaUpdate; }

    /**
     * <p>Describes the data format on the streaming source, and how record elements on
     * the streaming source map to columns of the in-application stream that is
     * created.</p>
     */
    inline bool InputSchemaUpdateHasBeenSet() const { return m_inputSchemaUpdateHasBeenSet; }

    /**
     * <p>Describes the data format on the streaming source, and how record elements on
     * the streaming source map to columns of the in-application stream that is
     * created.</p>
     */
    inline void SetInputSchemaUpdate(const InputSchemaUpdate& value) { m_inputSchemaUpdateHasBeenSet = true; m_inputSchemaUpdate = value; }

    /**
     * <p>Describes the data format on the streaming source, and how record elements on
     * the streaming source map to columns of the in-application stream that is
     * created.</p>
     */
    inline void SetInputSchemaUpdate(InputSchemaUpdate&& value) { m_inputSchemaUpdateHasBeenSet = true; m_inputSchemaUpdate = std::move(value); }

    /**
     * <p>Describes the data format on the streaming source, and how record elements on
     * the streaming source map to columns of the in-application stream that is
     * created.</p>
     */
    inline InputUpdate& WithInputSchemaUpdate(const InputSchemaUpdate& value) { SetInputSchemaUpdate(value); return *this;}

    /**
     * <p>Describes the data format on the streaming source, and how record elements on
     * the streaming source map to columns of the in-application stream that is
     * created.</p>
     */
    inline InputUpdate& WithInputSchemaUpdate(InputSchemaUpdate&& value) { SetInputSchemaUpdate(std::move(value)); return *this;}


    /**
     * <p>Describes the parallelism updates (the number in-application streams Amazon
     * Kinesis Analytics creates for the specific streaming source).</p>
     */
    inline const InputParallelismUpdate& GetInputParallelismUpdate() const{ return m_inputParallelismUpdate; }

    /**
     * <p>Describes the parallelism updates (the number in-application streams Amazon
     * Kinesis Analytics creates for the specific streaming source).</p>
     */
    inline bool InputParallelismUpdateHasBeenSet() const { return m_inputParallelismUpdateHasBeenSet; }

    /**
     * <p>Describes the parallelism updates (the number in-application streams Amazon
     * Kinesis Analytics creates for the specific streaming source).</p>
     */
    inline void SetInputParallelismUpdate(const InputParallelismUpdate& value) { m_inputParallelismUpdateHasBeenSet = true; m_inputParallelismUpdate = value; }

    /**
     * <p>Describes the parallelism updates (the number in-application streams Amazon
     * Kinesis Analytics creates for the specific streaming source).</p>
     */
    inline void SetInputParallelismUpdate(InputParallelismUpdate&& value) { m_inputParallelismUpdateHasBeenSet = true; m_inputParallelismUpdate = std::move(value); }

    /**
     * <p>Describes the parallelism updates (the number in-application streams Amazon
     * Kinesis Analytics creates for the specific streaming source).</p>
     */
    inline InputUpdate& WithInputParallelismUpdate(const InputParallelismUpdate& value) { SetInputParallelismUpdate(value); return *this;}

    /**
     * <p>Describes the parallelism updates (the number in-application streams Amazon
     * Kinesis Analytics creates for the specific streaming source).</p>
     */
    inline InputUpdate& WithInputParallelismUpdate(InputParallelismUpdate&& value) { SetInputParallelismUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet;

    Aws::String m_namePrefixUpdate;
    bool m_namePrefixUpdateHasBeenSet;

    InputProcessingConfigurationUpdate m_inputProcessingConfigurationUpdate;
    bool m_inputProcessingConfigurationUpdateHasBeenSet;

    KinesisStreamsInputUpdate m_kinesisStreamsInputUpdate;
    bool m_kinesisStreamsInputUpdateHasBeenSet;

    KinesisFirehoseInputUpdate m_kinesisFirehoseInputUpdate;
    bool m_kinesisFirehoseInputUpdateHasBeenSet;

    InputSchemaUpdate m_inputSchemaUpdate;
    bool m_inputSchemaUpdateHasBeenSet;

    InputParallelismUpdate m_inputParallelismUpdate;
    bool m_inputParallelismUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
