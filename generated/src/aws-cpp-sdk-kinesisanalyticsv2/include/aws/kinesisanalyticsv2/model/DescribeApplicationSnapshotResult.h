/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/SnapshotDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_KINESISANALYTICSV2_API DescribeApplicationSnapshotResult() = default;
    AWS_KINESISANALYTICSV2_API DescribeApplicationSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISANALYTICSV2_API DescribeApplicationSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object containing information about the application snapshot.</p>
     */
    inline const SnapshotDetails& GetSnapshotDetails() const { return m_snapshotDetails; }
    template<typename SnapshotDetailsT = SnapshotDetails>
    void SetSnapshotDetails(SnapshotDetailsT&& value) { m_snapshotDetailsHasBeenSet = true; m_snapshotDetails = std::forward<SnapshotDetailsT>(value); }
    template<typename SnapshotDetailsT = SnapshotDetails>
    DescribeApplicationSnapshotResult& WithSnapshotDetails(SnapshotDetailsT&& value) { SetSnapshotDetails(std::forward<SnapshotDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApplicationSnapshotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SnapshotDetails m_snapshotDetails;
    bool m_snapshotDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
