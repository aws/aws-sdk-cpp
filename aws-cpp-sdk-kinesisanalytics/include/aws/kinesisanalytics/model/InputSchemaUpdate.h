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
#include <aws/kinesisanalytics/model/RecordFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalytics/model/RecordColumn.h>
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
   * <p>Describes updates for the application's input schema.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/InputSchemaUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API InputSchemaUpdate
  {
  public:
    InputSchemaUpdate();
    InputSchemaUpdate(Aws::Utils::Json::JsonView jsonValue);
    InputSchemaUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline const RecordFormat& GetRecordFormatUpdate() const{ return m_recordFormatUpdate; }

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline bool RecordFormatUpdateHasBeenSet() const { return m_recordFormatUpdateHasBeenSet; }

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline void SetRecordFormatUpdate(const RecordFormat& value) { m_recordFormatUpdateHasBeenSet = true; m_recordFormatUpdate = value; }

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline void SetRecordFormatUpdate(RecordFormat&& value) { m_recordFormatUpdateHasBeenSet = true; m_recordFormatUpdate = std::move(value); }

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline InputSchemaUpdate& WithRecordFormatUpdate(const RecordFormat& value) { SetRecordFormatUpdate(value); return *this;}

    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline InputSchemaUpdate& WithRecordFormatUpdate(RecordFormat&& value) { SetRecordFormatUpdate(std::move(value)); return *this;}


    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline const Aws::String& GetRecordEncodingUpdate() const{ return m_recordEncodingUpdate; }

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline bool RecordEncodingUpdateHasBeenSet() const { return m_recordEncodingUpdateHasBeenSet; }

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline void SetRecordEncodingUpdate(const Aws::String& value) { m_recordEncodingUpdateHasBeenSet = true; m_recordEncodingUpdate = value; }

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline void SetRecordEncodingUpdate(Aws::String&& value) { m_recordEncodingUpdateHasBeenSet = true; m_recordEncodingUpdate = std::move(value); }

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline void SetRecordEncodingUpdate(const char* value) { m_recordEncodingUpdateHasBeenSet = true; m_recordEncodingUpdate.assign(value); }

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline InputSchemaUpdate& WithRecordEncodingUpdate(const Aws::String& value) { SetRecordEncodingUpdate(value); return *this;}

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline InputSchemaUpdate& WithRecordEncodingUpdate(Aws::String&& value) { SetRecordEncodingUpdate(std::move(value)); return *this;}

    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline InputSchemaUpdate& WithRecordEncodingUpdate(const char* value) { SetRecordEncodingUpdate(value); return *this;}


    /**
     * <p>A list of <code>RecordColumn</code> objects. Each object describes the
     * mapping of the streaming source element to the corresponding column in the
     * in-application stream. </p>
     */
    inline const Aws::Vector<RecordColumn>& GetRecordColumnUpdates() const{ return m_recordColumnUpdates; }

    /**
     * <p>A list of <code>RecordColumn</code> objects. Each object describes the
     * mapping of the streaming source element to the corresponding column in the
     * in-application stream. </p>
     */
    inline bool RecordColumnUpdatesHasBeenSet() const { return m_recordColumnUpdatesHasBeenSet; }

    /**
     * <p>A list of <code>RecordColumn</code> objects. Each object describes the
     * mapping of the streaming source element to the corresponding column in the
     * in-application stream. </p>
     */
    inline void SetRecordColumnUpdates(const Aws::Vector<RecordColumn>& value) { m_recordColumnUpdatesHasBeenSet = true; m_recordColumnUpdates = value; }

    /**
     * <p>A list of <code>RecordColumn</code> objects. Each object describes the
     * mapping of the streaming source element to the corresponding column in the
     * in-application stream. </p>
     */
    inline void SetRecordColumnUpdates(Aws::Vector<RecordColumn>&& value) { m_recordColumnUpdatesHasBeenSet = true; m_recordColumnUpdates = std::move(value); }

    /**
     * <p>A list of <code>RecordColumn</code> objects. Each object describes the
     * mapping of the streaming source element to the corresponding column in the
     * in-application stream. </p>
     */
    inline InputSchemaUpdate& WithRecordColumnUpdates(const Aws::Vector<RecordColumn>& value) { SetRecordColumnUpdates(value); return *this;}

    /**
     * <p>A list of <code>RecordColumn</code> objects. Each object describes the
     * mapping of the streaming source element to the corresponding column in the
     * in-application stream. </p>
     */
    inline InputSchemaUpdate& WithRecordColumnUpdates(Aws::Vector<RecordColumn>&& value) { SetRecordColumnUpdates(std::move(value)); return *this;}

    /**
     * <p>A list of <code>RecordColumn</code> objects. Each object describes the
     * mapping of the streaming source element to the corresponding column in the
     * in-application stream. </p>
     */
    inline InputSchemaUpdate& AddRecordColumnUpdates(const RecordColumn& value) { m_recordColumnUpdatesHasBeenSet = true; m_recordColumnUpdates.push_back(value); return *this; }

    /**
     * <p>A list of <code>RecordColumn</code> objects. Each object describes the
     * mapping of the streaming source element to the corresponding column in the
     * in-application stream. </p>
     */
    inline InputSchemaUpdate& AddRecordColumnUpdates(RecordColumn&& value) { m_recordColumnUpdatesHasBeenSet = true; m_recordColumnUpdates.push_back(std::move(value)); return *this; }

  private:

    RecordFormat m_recordFormatUpdate;
    bool m_recordFormatUpdateHasBeenSet;

    Aws::String m_recordEncodingUpdate;
    bool m_recordEncodingUpdateHasBeenSet;

    Aws::Vector<RecordColumn> m_recordColumnUpdates;
    bool m_recordColumnUpdatesHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
