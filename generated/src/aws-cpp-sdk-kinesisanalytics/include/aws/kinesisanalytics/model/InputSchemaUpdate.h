/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InputSchemaUpdate
  {
  public:
    AWS_KINESISANALYTICS_API InputSchemaUpdate() = default;
    AWS_KINESISANALYTICS_API InputSchemaUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API InputSchemaUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the format of the records on the streaming source.</p>
     */
    inline const RecordFormat& GetRecordFormatUpdate() const { return m_recordFormatUpdate; }
    inline bool RecordFormatUpdateHasBeenSet() const { return m_recordFormatUpdateHasBeenSet; }
    template<typename RecordFormatUpdateT = RecordFormat>
    void SetRecordFormatUpdate(RecordFormatUpdateT&& value) { m_recordFormatUpdateHasBeenSet = true; m_recordFormatUpdate = std::forward<RecordFormatUpdateT>(value); }
    template<typename RecordFormatUpdateT = RecordFormat>
    InputSchemaUpdate& WithRecordFormatUpdate(RecordFormatUpdateT&& value) { SetRecordFormatUpdate(std::forward<RecordFormatUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the encoding of the records in the streaming source. For example,
     * UTF-8.</p>
     */
    inline const Aws::String& GetRecordEncodingUpdate() const { return m_recordEncodingUpdate; }
    inline bool RecordEncodingUpdateHasBeenSet() const { return m_recordEncodingUpdateHasBeenSet; }
    template<typename RecordEncodingUpdateT = Aws::String>
    void SetRecordEncodingUpdate(RecordEncodingUpdateT&& value) { m_recordEncodingUpdateHasBeenSet = true; m_recordEncodingUpdate = std::forward<RecordEncodingUpdateT>(value); }
    template<typename RecordEncodingUpdateT = Aws::String>
    InputSchemaUpdate& WithRecordEncodingUpdate(RecordEncodingUpdateT&& value) { SetRecordEncodingUpdate(std::forward<RecordEncodingUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>RecordColumn</code> objects. Each object describes the
     * mapping of the streaming source element to the corresponding column in the
     * in-application stream. </p>
     */
    inline const Aws::Vector<RecordColumn>& GetRecordColumnUpdates() const { return m_recordColumnUpdates; }
    inline bool RecordColumnUpdatesHasBeenSet() const { return m_recordColumnUpdatesHasBeenSet; }
    template<typename RecordColumnUpdatesT = Aws::Vector<RecordColumn>>
    void SetRecordColumnUpdates(RecordColumnUpdatesT&& value) { m_recordColumnUpdatesHasBeenSet = true; m_recordColumnUpdates = std::forward<RecordColumnUpdatesT>(value); }
    template<typename RecordColumnUpdatesT = Aws::Vector<RecordColumn>>
    InputSchemaUpdate& WithRecordColumnUpdates(RecordColumnUpdatesT&& value) { SetRecordColumnUpdates(std::forward<RecordColumnUpdatesT>(value)); return *this;}
    template<typename RecordColumnUpdatesT = RecordColumn>
    InputSchemaUpdate& AddRecordColumnUpdates(RecordColumnUpdatesT&& value) { m_recordColumnUpdatesHasBeenSet = true; m_recordColumnUpdates.emplace_back(std::forward<RecordColumnUpdatesT>(value)); return *this; }
    ///@}
  private:

    RecordFormat m_recordFormatUpdate;
    bool m_recordFormatUpdateHasBeenSet = false;

    Aws::String m_recordEncodingUpdate;
    bool m_recordEncodingUpdateHasBeenSet = false;

    Aws::Vector<RecordColumn> m_recordColumnUpdates;
    bool m_recordColumnUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
