/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/GlobalTableDescription.h>
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
namespace DynamoDB
{
namespace Model
{
  class CreateGlobalTableResult
  {
  public:
    AWS_DYNAMODB_API CreateGlobalTableResult();
    AWS_DYNAMODB_API CreateGlobalTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API CreateGlobalTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains the details of the global table.</p>
     */
    inline const GlobalTableDescription& GetGlobalTableDescription() const{ return m_globalTableDescription; }

    /**
     * <p>Contains the details of the global table.</p>
     */
    inline void SetGlobalTableDescription(const GlobalTableDescription& value) { m_globalTableDescription = value; }

    /**
     * <p>Contains the details of the global table.</p>
     */
    inline void SetGlobalTableDescription(GlobalTableDescription&& value) { m_globalTableDescription = std::move(value); }

    /**
     * <p>Contains the details of the global table.</p>
     */
    inline CreateGlobalTableResult& WithGlobalTableDescription(const GlobalTableDescription& value) { SetGlobalTableDescription(value); return *this;}

    /**
     * <p>Contains the details of the global table.</p>
     */
    inline CreateGlobalTableResult& WithGlobalTableDescription(GlobalTableDescription&& value) { SetGlobalTableDescription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateGlobalTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateGlobalTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateGlobalTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    GlobalTableDescription m_globalTableDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
