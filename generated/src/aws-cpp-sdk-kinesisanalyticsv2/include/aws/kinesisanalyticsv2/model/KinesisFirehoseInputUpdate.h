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
   * <p>For a SQL-based Kinesis Data Analytics application, when updating application
   * input configuration, provides information about a Kinesis Data Firehose delivery
   * stream as the streaming source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/KinesisFirehoseInputUpdate">AWS
   * API Reference</a></p>
   */
  class KinesisFirehoseInputUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API KinesisFirehoseInputUpdate() = default;
    AWS_KINESISANALYTICSV2_API KinesisFirehoseInputUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API KinesisFirehoseInputUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the input delivery stream to read.</p>
     */
    inline const Aws::String& GetResourceARNUpdate() const { return m_resourceARNUpdate; }
    inline bool ResourceARNUpdateHasBeenSet() const { return m_resourceARNUpdateHasBeenSet; }
    template<typename ResourceARNUpdateT = Aws::String>
    void SetResourceARNUpdate(ResourceARNUpdateT&& value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate = std::forward<ResourceARNUpdateT>(value); }
    template<typename ResourceARNUpdateT = Aws::String>
    KinesisFirehoseInputUpdate& WithResourceARNUpdate(ResourceARNUpdateT&& value) { SetResourceARNUpdate(std::forward<ResourceARNUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceARNUpdate;
    bool m_resourceARNUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
