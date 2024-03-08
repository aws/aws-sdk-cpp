/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/Composition.h>
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
namespace ivsrealtime
{
namespace Model
{
  class GetCompositionResult
  {
  public:
    AWS_IVSREALTIME_API GetCompositionResult();
    AWS_IVSREALTIME_API GetCompositionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API GetCompositionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Composition that was returned.</p>
     */
    inline const Composition& GetComposition() const{ return m_composition; }

    /**
     * <p>The Composition that was returned.</p>
     */
    inline void SetComposition(const Composition& value) { m_composition = value; }

    /**
     * <p>The Composition that was returned.</p>
     */
    inline void SetComposition(Composition&& value) { m_composition = std::move(value); }

    /**
     * <p>The Composition that was returned.</p>
     */
    inline GetCompositionResult& WithComposition(const Composition& value) { SetComposition(value); return *this;}

    /**
     * <p>The Composition that was returned.</p>
     */
    inline GetCompositionResult& WithComposition(Composition&& value) { SetComposition(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCompositionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCompositionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCompositionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Composition m_composition;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
