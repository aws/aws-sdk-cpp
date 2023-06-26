/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Blueprint.h>
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
  class GetBlueprintResult
  {
  public:
    AWS_GLUE_API GetBlueprintResult();
    AWS_GLUE_API GetBlueprintResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetBlueprintResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a <code>Blueprint</code> object.</p>
     */
    inline const Blueprint& GetBlueprint() const{ return m_blueprint; }

    /**
     * <p>Returns a <code>Blueprint</code> object.</p>
     */
    inline void SetBlueprint(const Blueprint& value) { m_blueprint = value; }

    /**
     * <p>Returns a <code>Blueprint</code> object.</p>
     */
    inline void SetBlueprint(Blueprint&& value) { m_blueprint = std::move(value); }

    /**
     * <p>Returns a <code>Blueprint</code> object.</p>
     */
    inline GetBlueprintResult& WithBlueprint(const Blueprint& value) { SetBlueprint(value); return *this;}

    /**
     * <p>Returns a <code>Blueprint</code> object.</p>
     */
    inline GetBlueprintResult& WithBlueprint(Blueprint&& value) { SetBlueprint(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetBlueprintResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetBlueprintResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetBlueprintResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Blueprint m_blueprint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
