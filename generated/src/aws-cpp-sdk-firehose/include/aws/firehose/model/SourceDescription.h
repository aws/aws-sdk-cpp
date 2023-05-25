/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/KinesisStreamSourceDescription.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Details about a Kinesis data stream used as the source for a Kinesis Data
   * Firehose delivery stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SourceDescription">AWS
   * API Reference</a></p>
   */
  class SourceDescription
  {
  public:
    AWS_FIREHOSE_API SourceDescription();
    AWS_FIREHOSE_API SourceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a>KinesisStreamSourceDescription</a> value for the source Kinesis data
     * stream.</p>
     */
    inline const KinesisStreamSourceDescription& GetKinesisStreamSourceDescription() const{ return m_kinesisStreamSourceDescription; }

    /**
     * <p>The <a>KinesisStreamSourceDescription</a> value for the source Kinesis data
     * stream.</p>
     */
    inline bool KinesisStreamSourceDescriptionHasBeenSet() const { return m_kinesisStreamSourceDescriptionHasBeenSet; }

    /**
     * <p>The <a>KinesisStreamSourceDescription</a> value for the source Kinesis data
     * stream.</p>
     */
    inline void SetKinesisStreamSourceDescription(const KinesisStreamSourceDescription& value) { m_kinesisStreamSourceDescriptionHasBeenSet = true; m_kinesisStreamSourceDescription = value; }

    /**
     * <p>The <a>KinesisStreamSourceDescription</a> value for the source Kinesis data
     * stream.</p>
     */
    inline void SetKinesisStreamSourceDescription(KinesisStreamSourceDescription&& value) { m_kinesisStreamSourceDescriptionHasBeenSet = true; m_kinesisStreamSourceDescription = std::move(value); }

    /**
     * <p>The <a>KinesisStreamSourceDescription</a> value for the source Kinesis data
     * stream.</p>
     */
    inline SourceDescription& WithKinesisStreamSourceDescription(const KinesisStreamSourceDescription& value) { SetKinesisStreamSourceDescription(value); return *this;}

    /**
     * <p>The <a>KinesisStreamSourceDescription</a> value for the source Kinesis data
     * stream.</p>
     */
    inline SourceDescription& WithKinesisStreamSourceDescription(KinesisStreamSourceDescription&& value) { SetKinesisStreamSourceDescription(std::move(value)); return *this;}

  private:

    KinesisStreamSourceDescription m_kinesisStreamSourceDescription;
    bool m_kinesisStreamSourceDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
