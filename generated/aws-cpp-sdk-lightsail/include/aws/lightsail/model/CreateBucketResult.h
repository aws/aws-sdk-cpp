﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/Bucket.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_LIGHTSAIL_API CreateBucketResult
  {
  public:
    CreateBucketResult();
    CreateBucketResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateBucketResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the bucket that is created.</p>
     */
    inline const Bucket& GetBucket() const{ return m_bucket; }

    /**
     * <p>An object that describes the bucket that is created.</p>
     */
    inline void SetBucket(const Bucket& value) { m_bucket = value; }

    /**
     * <p>An object that describes the bucket that is created.</p>
     */
    inline void SetBucket(Bucket&& value) { m_bucket = std::move(value); }

    /**
     * <p>An object that describes the bucket that is created.</p>
     */
    inline CreateBucketResult& WithBucket(const Bucket& value) { SetBucket(value); return *this;}

    /**
     * <p>An object that describes the bucket that is created.</p>
     */
    inline CreateBucketResult& WithBucket(Bucket&& value) { SetBucket(std::move(value)); return *this;}


    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const{ return m_operations; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline void SetOperations(const Aws::Vector<Operation>& value) { m_operations = value; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline void SetOperations(Aws::Vector<Operation>&& value) { m_operations = std::move(value); }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateBucketResult& WithOperations(const Aws::Vector<Operation>& value) { SetOperations(value); return *this;}

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateBucketResult& WithOperations(Aws::Vector<Operation>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateBucketResult& AddOperations(const Operation& value) { m_operations.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateBucketResult& AddOperations(Operation&& value) { m_operations.push_back(std::move(value)); return *this; }

  private:

    Bucket m_bucket;

    Aws::Vector<Operation> m_operations;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
