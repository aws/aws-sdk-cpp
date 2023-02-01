/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/EntityType.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetEntityTypesResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetEntityTypesResult();
    AWS_FRAUDDETECTOR_API GetEntityTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetEntityTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of entity types.</p>
     */
    inline const Aws::Vector<EntityType>& GetEntityTypes() const{ return m_entityTypes; }

    /**
     * <p>An array of entity types.</p>
     */
    inline void SetEntityTypes(const Aws::Vector<EntityType>& value) { m_entityTypes = value; }

    /**
     * <p>An array of entity types.</p>
     */
    inline void SetEntityTypes(Aws::Vector<EntityType>&& value) { m_entityTypes = std::move(value); }

    /**
     * <p>An array of entity types.</p>
     */
    inline GetEntityTypesResult& WithEntityTypes(const Aws::Vector<EntityType>& value) { SetEntityTypes(value); return *this;}

    /**
     * <p>An array of entity types.</p>
     */
    inline GetEntityTypesResult& WithEntityTypes(Aws::Vector<EntityType>&& value) { SetEntityTypes(std::move(value)); return *this;}

    /**
     * <p>An array of entity types.</p>
     */
    inline GetEntityTypesResult& AddEntityTypes(const EntityType& value) { m_entityTypes.push_back(value); return *this; }

    /**
     * <p>An array of entity types.</p>
     */
    inline GetEntityTypesResult& AddEntityTypes(EntityType&& value) { m_entityTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The next page token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next page token.</p>
     */
    inline GetEntityTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next page token.</p>
     */
    inline GetEntityTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next page token.</p>
     */
    inline GetEntityTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EntityType> m_entityTypes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
