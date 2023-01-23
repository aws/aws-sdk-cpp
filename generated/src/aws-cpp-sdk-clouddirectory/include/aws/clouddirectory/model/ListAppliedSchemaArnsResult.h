/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListAppliedSchemaArnsResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListAppliedSchemaArnsResult();
    AWS_CLOUDDIRECTORY_API ListAppliedSchemaArnsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListAppliedSchemaArnsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARNs of schemas that are applied to the directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSchemaArns() const{ return m_schemaArns; }

    /**
     * <p>The ARNs of schemas that are applied to the directory.</p>
     */
    inline void SetSchemaArns(const Aws::Vector<Aws::String>& value) { m_schemaArns = value; }

    /**
     * <p>The ARNs of schemas that are applied to the directory.</p>
     */
    inline void SetSchemaArns(Aws::Vector<Aws::String>&& value) { m_schemaArns = std::move(value); }

    /**
     * <p>The ARNs of schemas that are applied to the directory.</p>
     */
    inline ListAppliedSchemaArnsResult& WithSchemaArns(const Aws::Vector<Aws::String>& value) { SetSchemaArns(value); return *this;}

    /**
     * <p>The ARNs of schemas that are applied to the directory.</p>
     */
    inline ListAppliedSchemaArnsResult& WithSchemaArns(Aws::Vector<Aws::String>&& value) { SetSchemaArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of schemas that are applied to the directory.</p>
     */
    inline ListAppliedSchemaArnsResult& AddSchemaArns(const Aws::String& value) { m_schemaArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of schemas that are applied to the directory.</p>
     */
    inline ListAppliedSchemaArnsResult& AddSchemaArns(Aws::String&& value) { m_schemaArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of schemas that are applied to the directory.</p>
     */
    inline ListAppliedSchemaArnsResult& AddSchemaArns(const char* value) { m_schemaArns.push_back(value); return *this; }


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
    inline ListAppliedSchemaArnsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListAppliedSchemaArnsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListAppliedSchemaArnsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_schemaArns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
