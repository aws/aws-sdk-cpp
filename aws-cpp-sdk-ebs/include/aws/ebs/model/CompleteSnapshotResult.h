/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/ebs/model/Status.h>
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
namespace EBS
{
namespace Model
{
  class CompleteSnapshotResult
  {
  public:
    AWS_EBS_API CompleteSnapshotResult();
    AWS_EBS_API CompleteSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EBS_API CompleteSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the snapshot.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the snapshot.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The status of the snapshot.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the snapshot.</p>
     */
    inline CompleteSnapshotResult& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the snapshot.</p>
     */
    inline CompleteSnapshotResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Status m_status;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
