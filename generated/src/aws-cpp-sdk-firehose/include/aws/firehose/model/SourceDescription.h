/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/KinesisStreamSourceDescription.h>
#include <aws/firehose/model/MSKSourceDescription.h>
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
   * <p>Details about a Kinesis data stream used as the source for a Firehose
   * delivery stream.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The configuration description for the Amazon MSK cluster to be used as the
     * source for a delivery stream.</p>
     */
    inline const MSKSourceDescription& GetMSKSourceDescription() const{ return m_mSKSourceDescription; }

    /**
     * <p>The configuration description for the Amazon MSK cluster to be used as the
     * source for a delivery stream.</p>
     */
    inline bool MSKSourceDescriptionHasBeenSet() const { return m_mSKSourceDescriptionHasBeenSet; }

    /**
     * <p>The configuration description for the Amazon MSK cluster to be used as the
     * source for a delivery stream.</p>
     */
    inline void SetMSKSourceDescription(const MSKSourceDescription& value) { m_mSKSourceDescriptionHasBeenSet = true; m_mSKSourceDescription = value; }

    /**
     * <p>The configuration description for the Amazon MSK cluster to be used as the
     * source for a delivery stream.</p>
     */
    inline void SetMSKSourceDescription(MSKSourceDescription&& value) { m_mSKSourceDescriptionHasBeenSet = true; m_mSKSourceDescription = std::move(value); }

    /**
     * <p>The configuration description for the Amazon MSK cluster to be used as the
     * source for a delivery stream.</p>
     */
    inline SourceDescription& WithMSKSourceDescription(const MSKSourceDescription& value) { SetMSKSourceDescription(value); return *this;}

    /**
     * <p>The configuration description for the Amazon MSK cluster to be used as the
     * source for a delivery stream.</p>
     */
    inline SourceDescription& WithMSKSourceDescription(MSKSourceDescription&& value) { SetMSKSourceDescription(std::move(value)); return *this;}

  private:

    KinesisStreamSourceDescription m_kinesisStreamSourceDescription;
    bool m_kinesisStreamSourceDescriptionHasBeenSet = false;

    MSKSourceDescription m_mSKSourceDescription;
    bool m_mSKSourceDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
