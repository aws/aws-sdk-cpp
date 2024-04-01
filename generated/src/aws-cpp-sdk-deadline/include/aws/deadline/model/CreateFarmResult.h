/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{
  class CreateFarmResult
  {
  public:
    AWS_DEADLINE_API CreateFarmResult();
    AWS_DEADLINE_API CreateFarmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API CreateFarmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The farm ID.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmId = value; }

    /**
     * <p>The farm ID.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmId = std::move(value); }

    /**
     * <p>The farm ID.</p>
     */
    inline void SetFarmId(const char* value) { m_farmId.assign(value); }

    /**
     * <p>The farm ID.</p>
     */
    inline CreateFarmResult& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID.</p>
     */
    inline CreateFarmResult& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID.</p>
     */
    inline CreateFarmResult& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateFarmResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateFarmResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateFarmResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_farmId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
