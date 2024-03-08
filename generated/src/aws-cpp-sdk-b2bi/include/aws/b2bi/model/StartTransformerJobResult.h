/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
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
namespace B2BI
{
namespace Model
{
  class StartTransformerJobResult
  {
  public:
    AWS_B2BI_API StartTransformerJobResult();
    AWS_B2BI_API StartTransformerJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_B2BI_API StartTransformerJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the unique, system-generated identifier for a transformer run.</p>
     */
    inline const Aws::String& GetTransformerJobId() const{ return m_transformerJobId; }

    /**
     * <p>Returns the unique, system-generated identifier for a transformer run.</p>
     */
    inline void SetTransformerJobId(const Aws::String& value) { m_transformerJobId = value; }

    /**
     * <p>Returns the unique, system-generated identifier for a transformer run.</p>
     */
    inline void SetTransformerJobId(Aws::String&& value) { m_transformerJobId = std::move(value); }

    /**
     * <p>Returns the unique, system-generated identifier for a transformer run.</p>
     */
    inline void SetTransformerJobId(const char* value) { m_transformerJobId.assign(value); }

    /**
     * <p>Returns the unique, system-generated identifier for a transformer run.</p>
     */
    inline StartTransformerJobResult& WithTransformerJobId(const Aws::String& value) { SetTransformerJobId(value); return *this;}

    /**
     * <p>Returns the unique, system-generated identifier for a transformer run.</p>
     */
    inline StartTransformerJobResult& WithTransformerJobId(Aws::String&& value) { SetTransformerJobId(std::move(value)); return *this;}

    /**
     * <p>Returns the unique, system-generated identifier for a transformer run.</p>
     */
    inline StartTransformerJobResult& WithTransformerJobId(const char* value) { SetTransformerJobId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartTransformerJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartTransformerJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartTransformerJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_transformerJobId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
