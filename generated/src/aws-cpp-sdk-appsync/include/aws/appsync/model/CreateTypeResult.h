/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/Type.h>
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
namespace AppSync
{
namespace Model
{
  class CreateTypeResult
  {
  public:
    AWS_APPSYNC_API CreateTypeResult();
    AWS_APPSYNC_API CreateTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API CreateTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>Type</code> object.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The <code>Type</code> object.</p>
     */
    inline void SetType(const Type& value) { m_type = value; }

    /**
     * <p>The <code>Type</code> object.</p>
     */
    inline void SetType(Type&& value) { m_type = std::move(value); }

    /**
     * <p>The <code>Type</code> object.</p>
     */
    inline CreateTypeResult& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The <code>Type</code> object.</p>
     */
    inline CreateTypeResult& WithType(Type&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Type m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
