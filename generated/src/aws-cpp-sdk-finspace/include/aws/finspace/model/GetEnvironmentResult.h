/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/model/Environment.h>
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
  class GetEnvironmentResult
  {
  public:
    AWS_FINSPACE_API GetEnvironmentResult();
    AWS_FINSPACE_API GetEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline const Environment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline void SetEnvironment(const Environment& value) { m_environment = value; }

    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline void SetEnvironment(Environment&& value) { m_environment = std::move(value); }

    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline GetEnvironmentResult& WithEnvironment(const Environment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The name of the FinSpace environment.</p>
     */
    inline GetEnvironmentResult& WithEnvironment(Environment&& value) { SetEnvironment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEnvironmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEnvironmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEnvironmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Environment m_environment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
