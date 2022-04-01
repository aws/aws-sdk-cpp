﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/AccessKey.h>
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
  class AWS_LIGHTSAIL_API CreateBucketAccessKeyResult
  {
  public:
    CreateBucketAccessKeyResult();
    CreateBucketAccessKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateBucketAccessKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the access key that is created.</p>
     */
    inline const AccessKey& GetAccessKey() const{ return m_accessKey; }

    /**
     * <p>An object that describes the access key that is created.</p>
     */
    inline void SetAccessKey(const AccessKey& value) { m_accessKey = value; }

    /**
     * <p>An object that describes the access key that is created.</p>
     */
    inline void SetAccessKey(AccessKey&& value) { m_accessKey = std::move(value); }

    /**
     * <p>An object that describes the access key that is created.</p>
     */
    inline CreateBucketAccessKeyResult& WithAccessKey(const AccessKey& value) { SetAccessKey(value); return *this;}

    /**
     * <p>An object that describes the access key that is created.</p>
     */
    inline CreateBucketAccessKeyResult& WithAccessKey(AccessKey&& value) { SetAccessKey(std::move(value)); return *this;}


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
    inline CreateBucketAccessKeyResult& WithOperations(const Aws::Vector<Operation>& value) { SetOperations(value); return *this;}

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateBucketAccessKeyResult& WithOperations(Aws::Vector<Operation>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateBucketAccessKeyResult& AddOperations(const Operation& value) { m_operations.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline CreateBucketAccessKeyResult& AddOperations(Operation&& value) { m_operations.push_back(std::move(value)); return *this; }

  private:

    AccessKey m_accessKey;

    Aws::Vector<Operation> m_operations;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
