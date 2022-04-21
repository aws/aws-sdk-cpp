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
  class AWS_GLUE_API BatchGetCustomEntityTypesResult
  {
  public:
    BatchGetCustomEntityTypesResult();
    BatchGetCustomEntityTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetCustomEntityTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<CustomEntityType>& GetCustomEntityTypes() const{ return m_customEntityTypes; }

    
    inline void SetCustomEntityTypes(const Aws::Vector<CustomEntityType>& value) { m_customEntityTypes = value; }

    
    inline void SetCustomEntityTypes(Aws::Vector<CustomEntityType>&& value) { m_customEntityTypes = std::move(value); }

    
    inline BatchGetCustomEntityTypesResult& WithCustomEntityTypes(const Aws::Vector<CustomEntityType>& value) { SetCustomEntityTypes(value); return *this;}

    
    inline BatchGetCustomEntityTypesResult& WithCustomEntityTypes(Aws::Vector<CustomEntityType>&& value) { SetCustomEntityTypes(std::move(value)); return *this;}

    
    inline BatchGetCustomEntityTypesResult& AddCustomEntityTypes(const CustomEntityType& value) { m_customEntityTypes.push_back(value); return *this; }

    
    inline BatchGetCustomEntityTypesResult& AddCustomEntityTypes(CustomEntityType&& value) { m_customEntityTypes.push_back(std::move(value)); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetCustomEntityTypesNotFound() const{ return m_customEntityTypesNotFound; }

    
    inline void SetCustomEntityTypesNotFound(const Aws::Vector<Aws::String>& value) { m_customEntityTypesNotFound = value; }

    
    inline void SetCustomEntityTypesNotFound(Aws::Vector<Aws::String>&& value) { m_customEntityTypesNotFound = std::move(value); }

    
    inline BatchGetCustomEntityTypesResult& WithCustomEntityTypesNotFound(const Aws::Vector<Aws::String>& value) { SetCustomEntityTypesNotFound(value); return *this;}

    
    inline BatchGetCustomEntityTypesResult& WithCustomEntityTypesNotFound(Aws::Vector<Aws::String>&& value) { SetCustomEntityTypesNotFound(std::move(value)); return *this;}

    
    inline BatchGetCustomEntityTypesResult& AddCustomEntityTypesNotFound(const Aws::String& value) { m_customEntityTypesNotFound.push_back(value); return *this; }

    
    inline BatchGetCustomEntityTypesResult& AddCustomEntityTypesNotFound(Aws::String&& value) { m_customEntityTypesNotFound.push_back(std::move(value)); return *this; }

    
    inline BatchGetCustomEntityTypesResult& AddCustomEntityTypesNotFound(const char* value) { m_customEntityTypesNotFound.push_back(value); return *this; }

  private:

    Aws::Vector<CustomEntityType> m_customEntityTypes;

    Aws::Vector<Aws::String> m_customEntityTypesNotFound;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
