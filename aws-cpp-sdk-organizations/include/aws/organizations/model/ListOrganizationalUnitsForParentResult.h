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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/OrganizationalUnit.h>
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
namespace Organizations
{
namespace Model
{
  class AWS_ORGANIZATIONS_API ListOrganizationalUnitsForParentResult
  {
  public:
    ListOrganizationalUnitsForParentResult();
    ListOrganizationalUnitsForParentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListOrganizationalUnitsForParentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the OUs in the specified root or parent OU.</p>
     */
    inline const Aws::Vector<OrganizationalUnit>& GetOrganizationalUnits() const{ return m_organizationalUnits; }

    /**
     * <p>A list of the OUs in the specified root or parent OU.</p>
     */
    inline void SetOrganizationalUnits(const Aws::Vector<OrganizationalUnit>& value) { m_organizationalUnits = value; }

    /**
     * <p>A list of the OUs in the specified root or parent OU.</p>
     */
    inline void SetOrganizationalUnits(Aws::Vector<OrganizationalUnit>&& value) { m_organizationalUnits = std::move(value); }

    /**
     * <p>A list of the OUs in the specified root or parent OU.</p>
     */
    inline ListOrganizationalUnitsForParentResult& WithOrganizationalUnits(const Aws::Vector<OrganizationalUnit>& value) { SetOrganizationalUnits(value); return *this;}

    /**
     * <p>A list of the OUs in the specified root or parent OU.</p>
     */
    inline ListOrganizationalUnitsForParentResult& WithOrganizationalUnits(Aws::Vector<OrganizationalUnit>&& value) { SetOrganizationalUnits(std::move(value)); return *this;}

    /**
     * <p>A list of the OUs in the specified root or parent OU.</p>
     */
    inline ListOrganizationalUnitsForParentResult& AddOrganizationalUnits(const OrganizationalUnit& value) { m_organizationalUnits.push_back(value); return *this; }

    /**
     * <p>A list of the OUs in the specified root or parent OU.</p>
     */
    inline ListOrganizationalUnitsForParentResult& AddOrganizationalUnits(OrganizationalUnit&& value) { m_organizationalUnits.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline ListOrganizationalUnitsForParentResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline ListOrganizationalUnitsForParentResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline ListOrganizationalUnitsForParentResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<OrganizationalUnit> m_organizationalUnits;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
