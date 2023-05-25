/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/Stack.h>
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
namespace AppStream
{
namespace Model
{
  class CreateStackResult
  {
  public:
    AWS_APPSTREAM_API CreateStackResult();
    AWS_APPSTREAM_API CreateStackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateStackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the stack.</p>
     */
    inline const Stack& GetStack() const{ return m_stack; }

    /**
     * <p>Information about the stack.</p>
     */
    inline void SetStack(const Stack& value) { m_stack = value; }

    /**
     * <p>Information about the stack.</p>
     */
    inline void SetStack(Stack&& value) { m_stack = std::move(value); }

    /**
     * <p>Information about the stack.</p>
     */
    inline CreateStackResult& WithStack(const Stack& value) { SetStack(value); return *this;}

    /**
     * <p>Information about the stack.</p>
     */
    inline CreateStackResult& WithStack(Stack&& value) { SetStack(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateStackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateStackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateStackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Stack m_stack;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
