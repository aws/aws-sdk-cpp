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
   * <p>Enables updating the configuration for Kinesis Streaming.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/UpdateKinesisStreamingConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateKinesisStreamingConfiguration
  {
  public:
    AWS_DYNAMODB_API UpdateKinesisStreamingConfiguration() = default;
    AWS_DYNAMODB_API UpdateKinesisStreamingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API UpdateKinesisStreamingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables updating the precision of Kinesis data stream timestamp. </p>
     */
    inline ApproximateCreationDateTimePrecision GetApproximateCreationDateTimePrecision() const { return m_approximateCreationDateTimePrecision; }
    inline bool ApproximateCreationDateTimePrecisionHasBeenSet() const { return m_approximateCreationDateTimePrecisionHasBeenSet; }
    inline void SetApproximateCreationDateTimePrecision(ApproximateCreationDateTimePrecision value) { m_approximateCreationDateTimePrecisionHasBeenSet = true; m_approximateCreationDateTimePrecision = value; }
    inline UpdateKinesisStreamingConfiguration& WithApproximateCreationDateTimePrecision(ApproximateCreationDateTimePrecision value) { SetApproximateCreationDateTimePrecision(value); return *this;}
    ///@}
  private:

    ApproximateCreationDateTimePrecision m_approximateCreationDateTimePrecision{ApproximateCreationDateTimePrecision::NOT_SET};
    bool m_approximateCreationDateTimePrecisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
