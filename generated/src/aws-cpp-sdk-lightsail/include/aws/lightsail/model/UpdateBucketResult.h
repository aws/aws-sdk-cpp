/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/Bucket.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/Operation.h>
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
namespace Lightsail
{
namespace Model
{
  class UpdateBucketResult
  {
  public:
    AWS_LIGHTSAIL_API UpdateBucketResult() = default;
    AWS_LIGHTSAIL_API UpdateBucketResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API UpdateBucketResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the bucket that is updated.</p>
     */
    inline const Bucket& GetBucket() const { return m_bucket; }
    template<typename BucketT = Bucket>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Bucket>
    UpdateBucketResult& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const { return m_operations; }
    template<typename OperationsT = Aws::Vector<Operation>>
    void SetOperations(OperationsT&& value) { m_operationsHasBeenSet = true; m_operations = std::forward<OperationsT>(value); }
    template<typename OperationsT = Aws::Vector<Operation>>
    UpdateBucketResult& WithOperations(OperationsT&& value) { SetOperations(std::forward<OperationsT>(value)); return *this;}
    template<typename OperationsT = Operation>
    UpdateBucketResult& AddOperations(OperationsT&& value) { m_operationsHasBeenSet = true; m_operations.emplace_back(std::forward<OperationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateBucketResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Bucket m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::Vector<Operation> m_operations;
    bool m_operationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
