/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/Type.h>
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
namespace AppSync
{
namespace Model
{
  class ListTypesByAssociationResult
  {
  public:
    AWS_APPSYNC_API ListTypesByAssociationResult();
    AWS_APPSYNC_API ListTypesByAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API ListTypesByAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline const Aws::Vector<Type>& GetTypes() const{ return m_types; }

    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline void SetTypes(const Aws::Vector<Type>& value) { m_types = value; }

    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline void SetTypes(Aws::Vector<Type>&& value) { m_types = std::move(value); }

    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline ListTypesByAssociationResult& WithTypes(const Aws::Vector<Type>& value) { SetTypes(value); return *this;}

    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline ListTypesByAssociationResult& WithTypes(Aws::Vector<Type>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline ListTypesByAssociationResult& AddTypes(const Type& value) { m_types.push_back(value); return *this; }

    /**
     * <p>The <code>Type</code> objects.</p>
     */
    inline ListTypesByAssociationResult& AddTypes(Type&& value) { m_types.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline ListTypesByAssociationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline ListTypesByAssociationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline ListTypesByAssociationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTypesByAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTypesByAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTypesByAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Type> m_types;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
