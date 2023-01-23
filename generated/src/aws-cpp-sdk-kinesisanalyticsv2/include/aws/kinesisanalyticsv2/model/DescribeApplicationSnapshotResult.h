/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotDetails.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalyticsV2
{
namespace Model
{
  class DescribeApplicationSnapshotResult
  {
  public:
    AWS_KINESISANALYTICSV2_API DescribeApplicationSnapshotResult();
    AWS_KINESISANALYTICSV2_API DescribeApplicationSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API DescribeApplicationSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing information about the application snapshot.</p>
     */
    inline const SnapshotDetails& GetSnapshotDetails() const{ return m_snapshotDetails; }

    /**
     * <p>An object containing information about the application snapshot.</p>
     */
    inline void SetSnapshotDetails(const SnapshotDetails& value) { m_snapshotDetails = value; }

    /**
     * <p>An object containing information about the application snapshot.</p>
     */
    inline void SetSnapshotDetails(SnapshotDetails&& value) { m_snapshotDetails = std::move(value); }

    /**
     * <p>An object containing information about the application snapshot.</p>
     */
    inline DescribeApplicationSnapshotResult& WithSnapshotDetails(const SnapshotDetails& value) { SetSnapshotDetails(value); return *this;}

    /**
     * <p>An object containing information about the application snapshot.</p>
     */
    inline DescribeApplicationSnapshotResult& WithSnapshotDetails(SnapshotDetails&& value) { SetSnapshotDetails(std::move(value)); return *this;}

  private:

    SnapshotDetails m_snapshotDetails;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
