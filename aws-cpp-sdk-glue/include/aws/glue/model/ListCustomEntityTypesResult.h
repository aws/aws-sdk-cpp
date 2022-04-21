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
  class AWS_GLUE_API ListCustomEntityTypesResult
  {
  public:
    ListCustomEntityTypesResult();
    ListCustomEntityTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCustomEntityTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<CustomEntityType>& GetCustomEntityTypes() const{ return m_customEntityTypes; }

    
    inline void SetCustomEntityTypes(const Aws::Vector<CustomEntityType>& value) { m_customEntityTypes = value; }

    
    inline void SetCustomEntityTypes(Aws::Vector<CustomEntityType>&& value) { m_customEntityTypes = std::move(value); }

    
    inline ListCustomEntityTypesResult& WithCustomEntityTypes(const Aws::Vector<CustomEntityType>& value) { SetCustomEntityTypes(value); return *this;}

    
    inline ListCustomEntityTypesResult& WithCustomEntityTypes(Aws::Vector<CustomEntityType>&& value) { SetCustomEntityTypes(std::move(value)); return *this;}

    
    inline ListCustomEntityTypesResult& AddCustomEntityTypes(const CustomEntityType& value) { m_customEntityTypes.push_back(value); return *this; }

    
    inline ListCustomEntityTypesResult& AddCustomEntityTypes(CustomEntityType&& value) { m_customEntityTypes.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListCustomEntityTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListCustomEntityTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListCustomEntityTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CustomEntityType> m_customEntityTypes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
