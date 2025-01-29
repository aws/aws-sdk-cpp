/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-rpc-10/JSONRPC10_EXPORTS.h>
#include <aws/json-rpc-10/model/MyUnion.h>
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
namespace JSONRPC10
{
namespace Model
{
  class JsonUnionsResult
  {
  public:
    AWS_JSONRPC10_API JsonUnionsResult();
    AWS_JSONRPC10_API JsonUnionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_JSONRPC10_API JsonUnionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const MyUnion& GetContents() const{ return m_contents; }
    inline void SetContents(const MyUnion& value) { m_contents = value; }
    inline void SetContents(MyUnion&& value) { m_contents = std::move(value); }
    inline JsonUnionsResult& WithContents(const MyUnion& value) { SetContents(value); return *this;}
    inline JsonUnionsResult& WithContents(MyUnion&& value) { SetContents(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline JsonUnionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline JsonUnionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline JsonUnionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MyUnion m_contents;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace JSONRPC10
} // namespace Aws
