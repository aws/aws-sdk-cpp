/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/PiiEntity.h>
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
  class DetectPiiEntitiesResult
  {
  public:
    AWS_COMPREHEND_API DetectPiiEntitiesResult();
    AWS_COMPREHEND_API DetectPiiEntitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DetectPiiEntitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of PII entities identified in the input text. For each entity,
     * the response provides the entity type, where the entity text begins and ends,
     * and the level of confidence that Amazon Comprehend has in the detection.</p>
     */
    inline const Aws::Vector<PiiEntity>& GetEntities() const{ return m_entities; }

    /**
     * <p>A collection of PII entities identified in the input text. For each entity,
     * the response provides the entity type, where the entity text begins and ends,
     * and the level of confidence that Amazon Comprehend has in the detection.</p>
     */
    inline void SetEntities(const Aws::Vector<PiiEntity>& value) { m_entities = value; }

    /**
     * <p>A collection of PII entities identified in the input text. For each entity,
     * the response provides the entity type, where the entity text begins and ends,
     * and the level of confidence that Amazon Comprehend has in the detection.</p>
     */
    inline void SetEntities(Aws::Vector<PiiEntity>&& value) { m_entities = std::move(value); }

    /**
     * <p>A collection of PII entities identified in the input text. For each entity,
     * the response provides the entity type, where the entity text begins and ends,
     * and the level of confidence that Amazon Comprehend has in the detection.</p>
     */
    inline DetectPiiEntitiesResult& WithEntities(const Aws::Vector<PiiEntity>& value) { SetEntities(value); return *this;}

    /**
     * <p>A collection of PII entities identified in the input text. For each entity,
     * the response provides the entity type, where the entity text begins and ends,
     * and the level of confidence that Amazon Comprehend has in the detection.</p>
     */
    inline DetectPiiEntitiesResult& WithEntities(Aws::Vector<PiiEntity>&& value) { SetEntities(std::move(value)); return *this;}

    /**
     * <p>A collection of PII entities identified in the input text. For each entity,
     * the response provides the entity type, where the entity text begins and ends,
     * and the level of confidence that Amazon Comprehend has in the detection.</p>
     */
    inline DetectPiiEntitiesResult& AddEntities(const PiiEntity& value) { m_entities.push_back(value); return *this; }

    /**
     * <p>A collection of PII entities identified in the input text. For each entity,
     * the response provides the entity type, where the entity text begins and ends,
     * and the level of confidence that Amazon Comprehend has in the detection.</p>
     */
    inline DetectPiiEntitiesResult& AddEntities(PiiEntity&& value) { m_entities.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DetectPiiEntitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DetectPiiEntitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DetectPiiEntitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PiiEntity> m_entities;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
