/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/BuiltinSlotTypeMetadata.h>
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
namespace LexModelBuildingService
{
namespace Model
{
  class AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinSlotTypesResult
  {
  public:
    GetBuiltinSlotTypesResult();
    GetBuiltinSlotTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBuiltinSlotTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>BuiltInSlotTypeMetadata</code> objects, one entry for each
     * slot type returned.</p>
     */
    inline const Aws::Vector<BuiltinSlotTypeMetadata>& GetSlotTypes() const{ return m_slotTypes; }

    /**
     * <p>An array of <code>BuiltInSlotTypeMetadata</code> objects, one entry for each
     * slot type returned.</p>
     */
    inline void SetSlotTypes(const Aws::Vector<BuiltinSlotTypeMetadata>& value) { m_slotTypes = value; }

    /**
     * <p>An array of <code>BuiltInSlotTypeMetadata</code> objects, one entry for each
     * slot type returned.</p>
     */
    inline void SetSlotTypes(Aws::Vector<BuiltinSlotTypeMetadata>&& value) { m_slotTypes = std::move(value); }

    /**
     * <p>An array of <code>BuiltInSlotTypeMetadata</code> objects, one entry for each
     * slot type returned.</p>
     */
    inline GetBuiltinSlotTypesResult& WithSlotTypes(const Aws::Vector<BuiltinSlotTypeMetadata>& value) { SetSlotTypes(value); return *this;}

    /**
     * <p>An array of <code>BuiltInSlotTypeMetadata</code> objects, one entry for each
     * slot type returned.</p>
     */
    inline GetBuiltinSlotTypesResult& WithSlotTypes(Aws::Vector<BuiltinSlotTypeMetadata>&& value) { SetSlotTypes(std::move(value)); return *this;}

    /**
     * <p>An array of <code>BuiltInSlotTypeMetadata</code> objects, one entry for each
     * slot type returned.</p>
     */
    inline GetBuiltinSlotTypesResult& AddSlotTypes(const BuiltinSlotTypeMetadata& value) { m_slotTypes.push_back(value); return *this; }

    /**
     * <p>An array of <code>BuiltInSlotTypeMetadata</code> objects, one entry for each
     * slot type returned.</p>
     */
    inline GetBuiltinSlotTypesResult& AddSlotTypes(BuiltinSlotTypeMetadata&& value) { m_slotTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can use in your next request to fetch the next page of slot types.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can use in your next request to fetch the next page of slot types.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can use in your next request to fetch the next page of slot types.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can use in your next request to fetch the next page of slot types.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can use in your next request to fetch the next page of slot types.</p>
     */
    inline GetBuiltinSlotTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can use in your next request to fetch the next page of slot types.</p>
     */
    inline GetBuiltinSlotTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, the response includes a pagination token that
     * you can use in your next request to fetch the next page of slot types.</p>
     */
    inline GetBuiltinSlotTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BuiltinSlotTypeMetadata> m_slotTypes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
