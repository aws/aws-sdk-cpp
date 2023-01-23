/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/Member.h>
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
namespace Inspector2
{
namespace Model
{
  class ListMembersResult
  {
  public:
    AWS_INSPECTOR2_API ListMembersResult();
    AWS_INSPECTOR2_API ListMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains details for each member account.</p>
     */
    inline const Aws::Vector<Member>& GetMembers() const{ return m_members; }

    /**
     * <p>An object that contains details for each member account.</p>
     */
    inline void SetMembers(const Aws::Vector<Member>& value) { m_members = value; }

    /**
     * <p>An object that contains details for each member account.</p>
     */
    inline void SetMembers(Aws::Vector<Member>&& value) { m_members = std::move(value); }

    /**
     * <p>An object that contains details for each member account.</p>
     */
    inline ListMembersResult& WithMembers(const Aws::Vector<Member>& value) { SetMembers(value); return *this;}

    /**
     * <p>An object that contains details for each member account.</p>
     */
    inline ListMembersResult& WithMembers(Aws::Vector<Member>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>An object that contains details for each member account.</p>
     */
    inline ListMembersResult& AddMembers(const Member& value) { m_members.push_back(value); return *this; }

    /**
     * <p>An object that contains details for each member account.</p>
     */
    inline ListMembersResult& AddMembers(Member&& value) { m_members.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination parameter to be used on the next list operation to retrieve
     * more items.</p>
     */
    inline ListMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Member> m_members;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
