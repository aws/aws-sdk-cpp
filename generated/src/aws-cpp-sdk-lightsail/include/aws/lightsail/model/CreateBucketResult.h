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
  class CreateBucketResult
  {
  public:
    AWS_LIGHTSAIL_API CreateBucketResult();
    AWS_LIGHTSAIL_API CreateBucketResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API CreateBucketResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes the bucket that is created.</p>
     */
    inline const Bucket& GetBucket() const{ return m_bucket; }
    inline void SetBucket(const Bucket& value) { m_bucket = value; }
    inline void SetBucket(Bucket&& value) { m_bucket = std::move(value); }
    inline CreateBucketResult& WithBucket(const Bucket& value) { SetBucket(value); return *this;}
    inline CreateBucketResult& WithBucket(Bucket&& value) { SetBucket(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const{ return m_operations; }
    inline void SetOperations(const Aws::Vector<Operation>& value) { m_operations = value; }
    inline void SetOperations(Aws::Vector<Operation>&& value) { m_operations = std::move(value); }
    inline CreateBucketResult& WithOperations(const Aws::Vector<Operation>& value) { SetOperations(value); return *this;}
    inline CreateBucketResult& WithOperations(Aws::Vector<Operation>&& value) { SetOperations(std::move(value)); return *this;}
    inline CreateBucketResult& AddOperations(const Operation& value) { m_operations.push_back(value); return *this; }
    inline CreateBucketResult& AddOperations(Operation&& value) { m_operations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateBucketResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateBucketResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateBucketResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Bucket m_bucket;

    Aws::Vector<Operation> m_operations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
