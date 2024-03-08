/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
  class SetupInstanceHttpsResult
  {
  public:
    AWS_LIGHTSAIL_API SetupInstanceHttpsResult();
    AWS_LIGHTSAIL_API SetupInstanceHttpsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API SetupInstanceHttpsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The available API operations for <code>SetupInstanceHttps</code>.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const{ return m_operations; }

    /**
     * <p>The available API operations for <code>SetupInstanceHttps</code>.</p>
     */
    inline void SetOperations(const Aws::Vector<Operation>& value) { m_operations = value; }

    /**
     * <p>The available API operations for <code>SetupInstanceHttps</code>.</p>
     */
    inline void SetOperations(Aws::Vector<Operation>&& value) { m_operations = std::move(value); }

    /**
     * <p>The available API operations for <code>SetupInstanceHttps</code>.</p>
     */
    inline SetupInstanceHttpsResult& WithOperations(const Aws::Vector<Operation>& value) { SetOperations(value); return *this;}

    /**
     * <p>The available API operations for <code>SetupInstanceHttps</code>.</p>
     */
    inline SetupInstanceHttpsResult& WithOperations(Aws::Vector<Operation>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>The available API operations for <code>SetupInstanceHttps</code>.</p>
     */
    inline SetupInstanceHttpsResult& AddOperations(const Operation& value) { m_operations.push_back(value); return *this; }

    /**
     * <p>The available API operations for <code>SetupInstanceHttps</code>.</p>
     */
    inline SetupInstanceHttpsResult& AddOperations(Operation&& value) { m_operations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SetupInstanceHttpsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SetupInstanceHttpsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SetupInstanceHttpsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Operation> m_operations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
