﻿/**
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
  class RebootRelationalDatabaseResult
  {
  public:
    AWS_LIGHTSAIL_API RebootRelationalDatabaseResult();
    AWS_LIGHTSAIL_API RebootRelationalDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API RebootRelationalDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe the result of the action, such as the
     * status of the request, the timestamp of the request, and the resources affected
     * by the request.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const{ return m_operations; }
    inline void SetOperations(const Aws::Vector<Operation>& value) { m_operations = value; }
    inline void SetOperations(Aws::Vector<Operation>&& value) { m_operations = std::move(value); }
    inline RebootRelationalDatabaseResult& WithOperations(const Aws::Vector<Operation>& value) { SetOperations(value); return *this;}
    inline RebootRelationalDatabaseResult& WithOperations(Aws::Vector<Operation>&& value) { SetOperations(std::move(value)); return *this;}
    inline RebootRelationalDatabaseResult& AddOperations(const Operation& value) { m_operations.push_back(value); return *this; }
    inline RebootRelationalDatabaseResult& AddOperations(Operation&& value) { m_operations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RebootRelationalDatabaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RebootRelationalDatabaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RebootRelationalDatabaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Operation> m_operations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
