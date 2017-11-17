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
#include <aws/organizations/model/EnabledServicePrincipal.h>
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
  class AWS_ORGANIZATIONS_API ListAWSServiceAccessForOrganizationResult
  {
  public:
    ListAWSServiceAccessForOrganizationResult();
    ListAWSServiceAccessForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAWSServiceAccessForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the service principals for the services that are enabled to
     * integrate with your organization. Each principal is a structure that includes
     * the name and the date that it was enabled for integration with AWS
     * Organizations.</p>
     */
    inline const Aws::Vector<EnabledServicePrincipal>& GetEnabledServicePrincipals() const{ return m_enabledServicePrincipals; }

    /**
     * <p>A list of the service principals for the services that are enabled to
     * integrate with your organization. Each principal is a structure that includes
     * the name and the date that it was enabled for integration with AWS
     * Organizations.</p>
     */
    inline void SetEnabledServicePrincipals(const Aws::Vector<EnabledServicePrincipal>& value) { m_enabledServicePrincipals = value; }

    /**
     * <p>A list of the service principals for the services that are enabled to
     * integrate with your organization. Each principal is a structure that includes
     * the name and the date that it was enabled for integration with AWS
     * Organizations.</p>
     */
    inline void SetEnabledServicePrincipals(Aws::Vector<EnabledServicePrincipal>&& value) { m_enabledServicePrincipals = std::move(value); }

    /**
     * <p>A list of the service principals for the services that are enabled to
     * integrate with your organization. Each principal is a structure that includes
     * the name and the date that it was enabled for integration with AWS
     * Organizations.</p>
     */
    inline ListAWSServiceAccessForOrganizationResult& WithEnabledServicePrincipals(const Aws::Vector<EnabledServicePrincipal>& value) { SetEnabledServicePrincipals(value); return *this;}

    /**
     * <p>A list of the service principals for the services that are enabled to
     * integrate with your organization. Each principal is a structure that includes
     * the name and the date that it was enabled for integration with AWS
     * Organizations.</p>
     */
    inline ListAWSServiceAccessForOrganizationResult& WithEnabledServicePrincipals(Aws::Vector<EnabledServicePrincipal>&& value) { SetEnabledServicePrincipals(std::move(value)); return *this;}

    /**
     * <p>A list of the service principals for the services that are enabled to
     * integrate with your organization. Each principal is a structure that includes
     * the name and the date that it was enabled for integration with AWS
     * Organizations.</p>
     */
    inline ListAWSServiceAccessForOrganizationResult& AddEnabledServicePrincipals(const EnabledServicePrincipal& value) { m_enabledServicePrincipals.push_back(value); return *this; }

    /**
     * <p>A list of the service principals for the services that are enabled to
     * integrate with your organization. Each principal is a structure that includes
     * the name and the date that it was enabled for integration with AWS
     * Organizations.</p>
     */
    inline ListAWSServiceAccessForOrganizationResult& AddEnabledServicePrincipals(EnabledServicePrincipal&& value) { m_enabledServicePrincipals.push_back(std::move(value)); return *this; }


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
    inline ListAWSServiceAccessForOrganizationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline ListAWSServiceAccessForOrganizationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, this value indicates that there is more output available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>.</p>
     */
    inline ListAWSServiceAccessForOrganizationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EnabledServicePrincipal> m_enabledServicePrincipals;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
