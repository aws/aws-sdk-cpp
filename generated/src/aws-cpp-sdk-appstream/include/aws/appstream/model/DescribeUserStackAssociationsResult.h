/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/UserStackAssociation.h>
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
namespace AppStream
{
namespace Model
{
  class DescribeUserStackAssociationsResult
  {
  public:
    AWS_APPSTREAM_API DescribeUserStackAssociationsResult();
    AWS_APPSTREAM_API DescribeUserStackAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeUserStackAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The UserStackAssociation objects.</p>
     */
    inline const Aws::Vector<UserStackAssociation>& GetUserStackAssociations() const{ return m_userStackAssociations; }

    /**
     * <p>The UserStackAssociation objects.</p>
     */
    inline void SetUserStackAssociations(const Aws::Vector<UserStackAssociation>& value) { m_userStackAssociations = value; }

    /**
     * <p>The UserStackAssociation objects.</p>
     */
    inline void SetUserStackAssociations(Aws::Vector<UserStackAssociation>&& value) { m_userStackAssociations = std::move(value); }

    /**
     * <p>The UserStackAssociation objects.</p>
     */
    inline DescribeUserStackAssociationsResult& WithUserStackAssociations(const Aws::Vector<UserStackAssociation>& value) { SetUserStackAssociations(value); return *this;}

    /**
     * <p>The UserStackAssociation objects.</p>
     */
    inline DescribeUserStackAssociationsResult& WithUserStackAssociations(Aws::Vector<UserStackAssociation>&& value) { SetUserStackAssociations(std::move(value)); return *this;}

    /**
     * <p>The UserStackAssociation objects.</p>
     */
    inline DescribeUserStackAssociationsResult& AddUserStackAssociations(const UserStackAssociation& value) { m_userStackAssociations.push_back(value); return *this; }

    /**
     * <p>The UserStackAssociation objects.</p>
     */
    inline DescribeUserStackAssociationsResult& AddUserStackAssociations(UserStackAssociation&& value) { m_userStackAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeUserStackAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeUserStackAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeUserStackAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<UserStackAssociation> m_userStackAssociations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
