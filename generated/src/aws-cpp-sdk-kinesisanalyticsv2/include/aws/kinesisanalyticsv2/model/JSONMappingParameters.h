/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>For a SQL-based Kinesis Data Analytics application, provides additional
   * mapping information when JSON is the record format on the streaming
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/JSONMappingParameters">AWS
   * API Reference</a></p>
   */
  class JSONMappingParameters
  {
  public:
    AWS_KINESISANALYTICSV2_API JSONMappingParameters() = default;
    AWS_KINESISANALYTICSV2_API JSONMappingParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API JSONMappingParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the top-level parent that contains the records.</p>
     */
    inline const Aws::String& GetRecordRowPath() const { return m_recordRowPath; }
    inline bool RecordRowPathHasBeenSet() const { return m_recordRowPathHasBeenSet; }
    template<typename RecordRowPathT = Aws::String>
    void SetRecordRowPath(RecordRowPathT&& value) { m_recordRowPathHasBeenSet = true; m_recordRowPath = std::forward<RecordRowPathT>(value); }
    template<typename RecordRowPathT = Aws::String>
    JSONMappingParameters& WithRecordRowPath(RecordRowPathT&& value) { SetRecordRowPath(std::forward<RecordRowPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recordRowPath;
    bool m_recordRowPathHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
