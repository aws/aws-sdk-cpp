/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{
  class CreateLayoutResult
  {
  public:
    AWS_CONNECTCASES_API CreateLayoutResult();
    AWS_CONNECTCASES_API CreateLayoutResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API CreateLayoutResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline const Aws::String& GetLayoutArn() const{ return m_layoutArn; }
    inline void SetLayoutArn(const Aws::String& value) { m_layoutArn = value; }
    inline void SetLayoutArn(Aws::String&& value) { m_layoutArn = std::move(value); }
    inline void SetLayoutArn(const char* value) { m_layoutArn.assign(value); }
    inline CreateLayoutResult& WithLayoutArn(const Aws::String& value) { SetLayoutArn(value); return *this;}
    inline CreateLayoutResult& WithLayoutArn(Aws::String&& value) { SetLayoutArn(std::move(value)); return *this;}
    inline CreateLayoutResult& WithLayoutArn(const char* value) { SetLayoutArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline const Aws::String& GetLayoutId() const{ return m_layoutId; }
    inline void SetLayoutId(const Aws::String& value) { m_layoutId = value; }
    inline void SetLayoutId(Aws::String&& value) { m_layoutId = std::move(value); }
    inline void SetLayoutId(const char* value) { m_layoutId.assign(value); }
    inline CreateLayoutResult& WithLayoutId(const Aws::String& value) { SetLayoutId(value); return *this;}
    inline CreateLayoutResult& WithLayoutId(Aws::String&& value) { SetLayoutId(std::move(value)); return *this;}
    inline CreateLayoutResult& WithLayoutId(const char* value) { SetLayoutId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLayoutResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLayoutResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLayoutResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_layoutArn;

    Aws::String m_layoutId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
