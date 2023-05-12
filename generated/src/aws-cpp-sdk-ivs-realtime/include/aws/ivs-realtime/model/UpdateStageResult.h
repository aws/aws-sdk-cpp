/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/Stage.h>
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
  class UpdateStageResult
  {
  public:
    AWS_IVSREALTIME_API UpdateStageResult();
    AWS_IVSREALTIME_API UpdateStageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API UpdateStageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated stage.</p>
     */
    inline const Stage& GetStage() const{ return m_stage; }

    /**
     * <p>The updated stage.</p>
     */
    inline void SetStage(const Stage& value) { m_stage = value; }

    /**
     * <p>The updated stage.</p>
     */
    inline void SetStage(Stage&& value) { m_stage = std::move(value); }

    /**
     * <p>The updated stage.</p>
     */
    inline UpdateStageResult& WithStage(const Stage& value) { SetStage(value); return *this;}

    /**
     * <p>The updated stage.</p>
     */
    inline UpdateStageResult& WithStage(Stage&& value) { SetStage(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateStageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateStageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateStageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Stage m_stage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
