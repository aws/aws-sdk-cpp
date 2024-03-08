/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/ApproximateCreationDateTimePrecision.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Enables setting the configuration for Kinesis Streaming.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/EnableKinesisStreamingConfiguration">AWS
   * API Reference</a></p>
   */
  class EnableKinesisStreamingConfiguration
  {
  public:
    AWS_DYNAMODB_API EnableKinesisStreamingConfiguration();
    AWS_DYNAMODB_API EnableKinesisStreamingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API EnableKinesisStreamingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Toggle for the precision of Kinesis data stream timestamp. The values are
     * either <code>MILLISECOND</code> or <code>MICROSECOND</code>.</p>
     */
    inline const ApproximateCreationDateTimePrecision& GetApproximateCreationDateTimePrecision() const{ return m_approximateCreationDateTimePrecision; }

    /**
     * <p>Toggle for the precision of Kinesis data stream timestamp. The values are
     * either <code>MILLISECOND</code> or <code>MICROSECOND</code>.</p>
     */
    inline bool ApproximateCreationDateTimePrecisionHasBeenSet() const { return m_approximateCreationDateTimePrecisionHasBeenSet; }

    /**
     * <p>Toggle for the precision of Kinesis data stream timestamp. The values are
     * either <code>MILLISECOND</code> or <code>MICROSECOND</code>.</p>
     */
    inline void SetApproximateCreationDateTimePrecision(const ApproximateCreationDateTimePrecision& value) { m_approximateCreationDateTimePrecisionHasBeenSet = true; m_approximateCreationDateTimePrecision = value; }

    /**
     * <p>Toggle for the precision of Kinesis data stream timestamp. The values are
     * either <code>MILLISECOND</code> or <code>MICROSECOND</code>.</p>
     */
    inline void SetApproximateCreationDateTimePrecision(ApproximateCreationDateTimePrecision&& value) { m_approximateCreationDateTimePrecisionHasBeenSet = true; m_approximateCreationDateTimePrecision = std::move(value); }

    /**
     * <p>Toggle for the precision of Kinesis data stream timestamp. The values are
     * either <code>MILLISECOND</code> or <code>MICROSECOND</code>.</p>
     */
    inline EnableKinesisStreamingConfiguration& WithApproximateCreationDateTimePrecision(const ApproximateCreationDateTimePrecision& value) { SetApproximateCreationDateTimePrecision(value); return *this;}

    /**
     * <p>Toggle for the precision of Kinesis data stream timestamp. The values are
     * either <code>MILLISECOND</code> or <code>MICROSECOND</code>.</p>
     */
    inline EnableKinesisStreamingConfiguration& WithApproximateCreationDateTimePrecision(ApproximateCreationDateTimePrecision&& value) { SetApproximateCreationDateTimePrecision(std::move(value)); return *this;}

  private:

    ApproximateCreationDateTimePrecision m_approximateCreationDateTimePrecision;
    bool m_approximateCreationDateTimePrecisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
