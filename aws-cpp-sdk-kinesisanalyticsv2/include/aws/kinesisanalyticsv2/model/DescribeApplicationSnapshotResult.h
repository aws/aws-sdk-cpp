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
  class AWS_KINESISANALYTICSV2_API DescribeApplicationSnapshotResult
  {
  public:
    DescribeApplicationSnapshotResult();
    DescribeApplicationSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeApplicationSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
