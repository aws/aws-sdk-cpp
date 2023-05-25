/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/BlueprintRun.h>
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
  class GetBlueprintRunResult
  {
  public:
    AWS_GLUE_API GetBlueprintRunResult();
    AWS_GLUE_API GetBlueprintRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetBlueprintRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a <code>BlueprintRun</code> object.</p>
     */
    inline const BlueprintRun& GetBlueprintRun() const{ return m_blueprintRun; }

    /**
     * <p>Returns a <code>BlueprintRun</code> object.</p>
     */
    inline void SetBlueprintRun(const BlueprintRun& value) { m_blueprintRun = value; }

    /**
     * <p>Returns a <code>BlueprintRun</code> object.</p>
     */
    inline void SetBlueprintRun(BlueprintRun&& value) { m_blueprintRun = std::move(value); }

    /**
     * <p>Returns a <code>BlueprintRun</code> object.</p>
     */
    inline GetBlueprintRunResult& WithBlueprintRun(const BlueprintRun& value) { SetBlueprintRun(value); return *this;}

    /**
     * <p>Returns a <code>BlueprintRun</code> object.</p>
     */
    inline GetBlueprintRunResult& WithBlueprintRun(BlueprintRun&& value) { SetBlueprintRun(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetBlueprintRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetBlueprintRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetBlueprintRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BlueprintRun m_blueprintRun;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
