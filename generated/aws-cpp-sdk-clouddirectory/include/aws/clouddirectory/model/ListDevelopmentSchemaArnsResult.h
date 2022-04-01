﻿/**
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
  class AWS_CLOUDDIRECTORY_API ListDevelopmentSchemaArnsResult
  {
  public:
    ListDevelopmentSchemaArnsResult();
    ListDevelopmentSchemaArnsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDevelopmentSchemaArnsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARNs of retrieved development schemas.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSchemaArns() const{ return m_schemaArns; }

    /**
     * <p>The ARNs of retrieved development schemas.</p>
     */
    inline void SetSchemaArns(const Aws::Vector<Aws::String>& value) { m_schemaArns = value; }

    /**
     * <p>The ARNs of retrieved development schemas.</p>
     */
    inline void SetSchemaArns(Aws::Vector<Aws::String>&& value) { m_schemaArns = std::move(value); }

    /**
     * <p>The ARNs of retrieved development schemas.</p>
     */
    inline ListDevelopmentSchemaArnsResult& WithSchemaArns(const Aws::Vector<Aws::String>& value) { SetSchemaArns(value); return *this;}

    /**
     * <p>The ARNs of retrieved development schemas.</p>
     */
    inline ListDevelopmentSchemaArnsResult& WithSchemaArns(Aws::Vector<Aws::String>&& value) { SetSchemaArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of retrieved development schemas.</p>
     */
    inline ListDevelopmentSchemaArnsResult& AddSchemaArns(const Aws::String& value) { m_schemaArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of retrieved development schemas.</p>
     */
    inline ListDevelopmentSchemaArnsResult& AddSchemaArns(Aws::String&& value) { m_schemaArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of retrieved development schemas.</p>
     */
    inline ListDevelopmentSchemaArnsResult& AddSchemaArns(const char* value) { m_schemaArns.push_back(value); return *this; }


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
    inline ListDevelopmentSchemaArnsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListDevelopmentSchemaArnsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListDevelopmentSchemaArnsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_schemaArns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
