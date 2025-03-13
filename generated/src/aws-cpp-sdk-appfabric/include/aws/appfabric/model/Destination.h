/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/S3Bucket.h>
#include <aws/appfabric/model/FirehoseStream.h>
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
namespace AppFabric
{
namespace Model
{

  /**
   * <p>Contains information about an audit log destination.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_APPFABRIC_API Destination() = default;
    AWS_APPFABRIC_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about an Amazon S3 bucket.</p>
     */
    inline const S3Bucket& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = S3Bucket>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = S3Bucket>
    Destination& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about an Amazon Kinesis Data Firehose delivery
     * stream.</p>
     */
    inline const FirehoseStream& GetFirehoseStream() const { return m_firehoseStream; }
    inline bool FirehoseStreamHasBeenSet() const { return m_firehoseStreamHasBeenSet; }
    template<typename FirehoseStreamT = FirehoseStream>
    void SetFirehoseStream(FirehoseStreamT&& value) { m_firehoseStreamHasBeenSet = true; m_firehoseStream = std::forward<FirehoseStreamT>(value); }
    template<typename FirehoseStreamT = FirehoseStream>
    Destination& WithFirehoseStream(FirehoseStreamT&& value) { SetFirehoseStream(std::forward<FirehoseStreamT>(value)); return *this;}
    ///@}
  private:

    S3Bucket m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    FirehoseStream m_firehoseStream;
    bool m_firehoseStreamHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
