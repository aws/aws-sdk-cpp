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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API ListManagedSchemaArnsResult
  {
  public:
    ListManagedSchemaArnsResult();
    ListManagedSchemaArnsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListManagedSchemaArnsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARNs for all AWS managed schemas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSchemaArns() const{ return m_schemaArns; }

    /**
     * <p>The ARNs for all AWS managed schemas.</p>
     */
    inline void SetSchemaArns(const Aws::Vector<Aws::String>& value) { m_schemaArns = value; }

    /**
     * <p>The ARNs for all AWS managed schemas.</p>
     */
    inline void SetSchemaArns(Aws::Vector<Aws::String>&& value) { m_schemaArns = std::move(value); }

    /**
     * <p>The ARNs for all AWS managed schemas.</p>
     */
    inline ListManagedSchemaArnsResult& WithSchemaArns(const Aws::Vector<Aws::String>& value) { SetSchemaArns(value); return *this;}

    /**
     * <p>The ARNs for all AWS managed schemas.</p>
     */
    inline ListManagedSchemaArnsResult& WithSchemaArns(Aws::Vector<Aws::String>&& value) { SetSchemaArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs for all AWS managed schemas.</p>
     */
    inline ListManagedSchemaArnsResult& AddSchemaArns(const Aws::String& value) { m_schemaArns.push_back(value); return *this; }

    /**
     * <p>The ARNs for all AWS managed schemas.</p>
     */
    inline ListManagedSchemaArnsResult& AddSchemaArns(Aws::String&& value) { m_schemaArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs for all AWS managed schemas.</p>
     */
    inline ListManagedSchemaArnsResult& AddSchemaArns(const char* value) { m_schemaArns.push_back(value); return *this; }


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListManagedSchemaArnsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListManagedSchemaArnsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListManagedSchemaArnsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_schemaArns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
