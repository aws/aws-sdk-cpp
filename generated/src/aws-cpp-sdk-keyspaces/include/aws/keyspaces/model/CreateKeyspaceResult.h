﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
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
namespace Keyspaces
{
namespace Model
{
  class CreateKeyspaceResult
  {
  public:
    AWS_KEYSPACES_API CreateKeyspaceResult();
    AWS_KEYSPACES_API CreateKeyspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API CreateKeyspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline CreateKeyspaceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline CreateKeyspaceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline CreateKeyspaceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateKeyspaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateKeyspaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateKeyspaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_resourceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
