/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CustomEntityType.h>
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
  class ListCustomEntityTypesResult
  {
  public:
    AWS_GLUE_API ListCustomEntityTypesResult();
    AWS_GLUE_API ListCustomEntityTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListCustomEntityTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>CustomEntityType</code> objects representing custom
     * patterns.</p>
     */
    inline const Aws::Vector<CustomEntityType>& GetCustomEntityTypes() const{ return m_customEntityTypes; }

    /**
     * <p>A list of <code>CustomEntityType</code> objects representing custom
     * patterns.</p>
     */
    inline void SetCustomEntityTypes(const Aws::Vector<CustomEntityType>& value) { m_customEntityTypes = value; }

    /**
     * <p>A list of <code>CustomEntityType</code> objects representing custom
     * patterns.</p>
     */
    inline void SetCustomEntityTypes(Aws::Vector<CustomEntityType>&& value) { m_customEntityTypes = std::move(value); }

    /**
     * <p>A list of <code>CustomEntityType</code> objects representing custom
     * patterns.</p>
     */
    inline ListCustomEntityTypesResult& WithCustomEntityTypes(const Aws::Vector<CustomEntityType>& value) { SetCustomEntityTypes(value); return *this;}

    /**
     * <p>A list of <code>CustomEntityType</code> objects representing custom
     * patterns.</p>
     */
    inline ListCustomEntityTypesResult& WithCustomEntityTypes(Aws::Vector<CustomEntityType>&& value) { SetCustomEntityTypes(std::move(value)); return *this;}

    /**
     * <p>A list of <code>CustomEntityType</code> objects representing custom
     * patterns.</p>
     */
    inline ListCustomEntityTypesResult& AddCustomEntityTypes(const CustomEntityType& value) { m_customEntityTypes.push_back(value); return *this; }

    /**
     * <p>A list of <code>CustomEntityType</code> objects representing custom
     * patterns.</p>
     */
    inline ListCustomEntityTypesResult& AddCustomEntityTypes(CustomEntityType&& value) { m_customEntityTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline ListCustomEntityTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline ListCustomEntityTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline ListCustomEntityTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CustomEntityType> m_customEntityTypes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
