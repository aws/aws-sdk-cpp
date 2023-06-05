/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
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
namespace finspace
{
namespace Model
{
  class GetKxConnectionStringResult
  {
  public:
    AWS_FINSPACE_API GetKxConnectionStringResult();
    AWS_FINSPACE_API GetKxConnectionStringResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxConnectionStringResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The signed connection string that you can use to connect to clusters.</p>
     */
    inline const Aws::String& GetSignedConnectionString() const{ return m_signedConnectionString; }

    /**
     * <p>The signed connection string that you can use to connect to clusters.</p>
     */
    inline void SetSignedConnectionString(const Aws::String& value) { m_signedConnectionString = value; }

    /**
     * <p>The signed connection string that you can use to connect to clusters.</p>
     */
    inline void SetSignedConnectionString(Aws::String&& value) { m_signedConnectionString = std::move(value); }

    /**
     * <p>The signed connection string that you can use to connect to clusters.</p>
     */
    inline void SetSignedConnectionString(const char* value) { m_signedConnectionString.assign(value); }

    /**
     * <p>The signed connection string that you can use to connect to clusters.</p>
     */
    inline GetKxConnectionStringResult& WithSignedConnectionString(const Aws::String& value) { SetSignedConnectionString(value); return *this;}

    /**
     * <p>The signed connection string that you can use to connect to clusters.</p>
     */
    inline GetKxConnectionStringResult& WithSignedConnectionString(Aws::String&& value) { SetSignedConnectionString(std::move(value)); return *this;}

    /**
     * <p>The signed connection string that you can use to connect to clusters.</p>
     */
    inline GetKxConnectionStringResult& WithSignedConnectionString(const char* value) { SetSignedConnectionString(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetKxConnectionStringResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetKxConnectionStringResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetKxConnectionStringResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_signedConnectionString;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
