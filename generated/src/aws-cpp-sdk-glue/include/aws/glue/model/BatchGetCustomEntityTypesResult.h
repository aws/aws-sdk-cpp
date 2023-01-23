/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/CustomEntityType.h>
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
  class BatchGetCustomEntityTypesResult
  {
  public:
    AWS_GLUE_API BatchGetCustomEntityTypesResult();
    AWS_GLUE_API BatchGetCustomEntityTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchGetCustomEntityTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>CustomEntityType</code> objects representing the custom
     * patterns that have been created.</p>
     */
    inline const Aws::Vector<CustomEntityType>& GetCustomEntityTypes() const{ return m_customEntityTypes; }

    /**
     * <p>A list of <code>CustomEntityType</code> objects representing the custom
     * patterns that have been created.</p>
     */
    inline void SetCustomEntityTypes(const Aws::Vector<CustomEntityType>& value) { m_customEntityTypes = value; }

    /**
     * <p>A list of <code>CustomEntityType</code> objects representing the custom
     * patterns that have been created.</p>
     */
    inline void SetCustomEntityTypes(Aws::Vector<CustomEntityType>&& value) { m_customEntityTypes = std::move(value); }

    /**
     * <p>A list of <code>CustomEntityType</code> objects representing the custom
     * patterns that have been created.</p>
     */
    inline BatchGetCustomEntityTypesResult& WithCustomEntityTypes(const Aws::Vector<CustomEntityType>& value) { SetCustomEntityTypes(value); return *this;}

    /**
     * <p>A list of <code>CustomEntityType</code> objects representing the custom
     * patterns that have been created.</p>
     */
    inline BatchGetCustomEntityTypesResult& WithCustomEntityTypes(Aws::Vector<CustomEntityType>&& value) { SetCustomEntityTypes(std::move(value)); return *this;}

    /**
     * <p>A list of <code>CustomEntityType</code> objects representing the custom
     * patterns that have been created.</p>
     */
    inline BatchGetCustomEntityTypesResult& AddCustomEntityTypes(const CustomEntityType& value) { m_customEntityTypes.push_back(value); return *this; }

    /**
     * <p>A list of <code>CustomEntityType</code> objects representing the custom
     * patterns that have been created.</p>
     */
    inline BatchGetCustomEntityTypesResult& AddCustomEntityTypes(CustomEntityType&& value) { m_customEntityTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the names of custom patterns that were not found.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomEntityTypesNotFound() const{ return m_customEntityTypesNotFound; }

    /**
     * <p>A list of the names of custom patterns that were not found.</p>
     */
    inline void SetCustomEntityTypesNotFound(const Aws::Vector<Aws::String>& value) { m_customEntityTypesNotFound = value; }

    /**
     * <p>A list of the names of custom patterns that were not found.</p>
     */
    inline void SetCustomEntityTypesNotFound(Aws::Vector<Aws::String>&& value) { m_customEntityTypesNotFound = std::move(value); }

    /**
     * <p>A list of the names of custom patterns that were not found.</p>
     */
    inline BatchGetCustomEntityTypesResult& WithCustomEntityTypesNotFound(const Aws::Vector<Aws::String>& value) { SetCustomEntityTypesNotFound(value); return *this;}

    /**
     * <p>A list of the names of custom patterns that were not found.</p>
     */
    inline BatchGetCustomEntityTypesResult& WithCustomEntityTypesNotFound(Aws::Vector<Aws::String>&& value) { SetCustomEntityTypesNotFound(std::move(value)); return *this;}

    /**
     * <p>A list of the names of custom patterns that were not found.</p>
     */
    inline BatchGetCustomEntityTypesResult& AddCustomEntityTypesNotFound(const Aws::String& value) { m_customEntityTypesNotFound.push_back(value); return *this; }

    /**
     * <p>A list of the names of custom patterns that were not found.</p>
     */
    inline BatchGetCustomEntityTypesResult& AddCustomEntityTypesNotFound(Aws::String&& value) { m_customEntityTypesNotFound.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the names of custom patterns that were not found.</p>
     */
    inline BatchGetCustomEntityTypesResult& AddCustomEntityTypesNotFound(const char* value) { m_customEntityTypesNotFound.push_back(value); return *this; }

  private:

    Aws::Vector<CustomEntityType> m_customEntityTypes;

    Aws::Vector<Aws::String> m_customEntityTypesNotFound;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
