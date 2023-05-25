/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
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
namespace Detective
{
namespace Model
{
  class CreateGraphResult
  {
  public:
    AWS_DETECTIVE_API CreateGraphResult();
    AWS_DETECTIVE_API CreateGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DETECTIVE_API CreateGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline const Aws::String& GetGraphArn() const{ return m_graphArn; }

    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline void SetGraphArn(const Aws::String& value) { m_graphArn = value; }

    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline void SetGraphArn(Aws::String&& value) { m_graphArn = std::move(value); }

    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline void SetGraphArn(const char* value) { m_graphArn.assign(value); }

    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline CreateGraphResult& WithGraphArn(const Aws::String& value) { SetGraphArn(value); return *this;}

    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline CreateGraphResult& WithGraphArn(Aws::String&& value) { SetGraphArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the new behavior graph.</p>
     */
    inline CreateGraphResult& WithGraphArn(const char* value) { SetGraphArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateGraphResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateGraphResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateGraphResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_graphArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
