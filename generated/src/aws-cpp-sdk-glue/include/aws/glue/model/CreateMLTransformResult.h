﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class CreateMLTransformResult
  {
  public:
    AWS_GLUE_API CreateMLTransformResult();
    AWS_GLUE_API CreateMLTransformResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateMLTransformResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier that is generated for the transform.</p>
     */
    inline const Aws::String& GetTransformId() const{ return m_transformId; }
    inline void SetTransformId(const Aws::String& value) { m_transformId = value; }
    inline void SetTransformId(Aws::String&& value) { m_transformId = std::move(value); }
    inline void SetTransformId(const char* value) { m_transformId.assign(value); }
    inline CreateMLTransformResult& WithTransformId(const Aws::String& value) { SetTransformId(value); return *this;}
    inline CreateMLTransformResult& WithTransformId(Aws::String&& value) { SetTransformId(std::move(value)); return *this;}
    inline CreateMLTransformResult& WithTransformId(const char* value) { SetTransformId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMLTransformResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMLTransformResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMLTransformResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_transformId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
