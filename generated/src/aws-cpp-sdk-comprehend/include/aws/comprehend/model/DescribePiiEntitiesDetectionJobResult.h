/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/PiiEntitiesDetectionJobProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class DescribePiiEntitiesDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API DescribePiiEntitiesDetectionJobResult();
    AWS_COMPREHEND_API DescribePiiEntitiesDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribePiiEntitiesDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const PiiEntitiesDetectionJobProperties& GetPiiEntitiesDetectionJobProperties() const{ return m_piiEntitiesDetectionJobProperties; }

    
    inline void SetPiiEntitiesDetectionJobProperties(const PiiEntitiesDetectionJobProperties& value) { m_piiEntitiesDetectionJobProperties = value; }

    
    inline void SetPiiEntitiesDetectionJobProperties(PiiEntitiesDetectionJobProperties&& value) { m_piiEntitiesDetectionJobProperties = std::move(value); }

    
    inline DescribePiiEntitiesDetectionJobResult& WithPiiEntitiesDetectionJobProperties(const PiiEntitiesDetectionJobProperties& value) { SetPiiEntitiesDetectionJobProperties(value); return *this;}

    
    inline DescribePiiEntitiesDetectionJobResult& WithPiiEntitiesDetectionJobProperties(PiiEntitiesDetectionJobProperties&& value) { SetPiiEntitiesDetectionJobProperties(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribePiiEntitiesDetectionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribePiiEntitiesDetectionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribePiiEntitiesDetectionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PiiEntitiesDetectionJobProperties m_piiEntitiesDetectionJobProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
