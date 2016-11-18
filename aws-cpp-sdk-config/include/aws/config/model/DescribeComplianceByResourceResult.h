/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ComplianceByResource.h>

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
namespace ConfigService
{
namespace Model
{
  /**
   * <p/>
   */
  class AWS_CONFIGSERVICE_API DescribeComplianceByResourceResult
  {
  public:
    DescribeComplianceByResourceResult();
    DescribeComplianceByResourceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeComplianceByResourceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Indicates whether the specified AWS resource complies with all of the AWS
     * Config rules that evaluate it.</p>
     */
    inline const Aws::Vector<ComplianceByResource>& GetComplianceByResources() const{ return m_complianceByResources; }

    /**
     * <p>Indicates whether the specified AWS resource complies with all of the AWS
     * Config rules that evaluate it.</p>
     */
    inline void SetComplianceByResources(const Aws::Vector<ComplianceByResource>& value) { m_complianceByResources = value; }

    /**
     * <p>Indicates whether the specified AWS resource complies with all of the AWS
     * Config rules that evaluate it.</p>
     */
    inline void SetComplianceByResources(Aws::Vector<ComplianceByResource>&& value) { m_complianceByResources = value; }

    /**
     * <p>Indicates whether the specified AWS resource complies with all of the AWS
     * Config rules that evaluate it.</p>
     */
    inline DescribeComplianceByResourceResult& WithComplianceByResources(const Aws::Vector<ComplianceByResource>& value) { SetComplianceByResources(value); return *this;}

    /**
     * <p>Indicates whether the specified AWS resource complies with all of the AWS
     * Config rules that evaluate it.</p>
     */
    inline DescribeComplianceByResourceResult& WithComplianceByResources(Aws::Vector<ComplianceByResource>&& value) { SetComplianceByResources(value); return *this;}

    /**
     * <p>Indicates whether the specified AWS resource complies with all of the AWS
     * Config rules that evaluate it.</p>
     */
    inline DescribeComplianceByResourceResult& AddComplianceByResources(const ComplianceByResource& value) { m_complianceByResources.push_back(value); return *this; }

    /**
     * <p>Indicates whether the specified AWS resource complies with all of the AWS
     * Config rules that evaluate it.</p>
     */
    inline DescribeComplianceByResourceResult& AddComplianceByResources(ComplianceByResource&& value) { m_complianceByResources.push_back(value); return *this; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline DescribeComplianceByResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline DescribeComplianceByResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string that you use in a subsequent request to get the next page of
     * results in a paginated response.</p>
     */
    inline DescribeComplianceByResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<ComplianceByResource> m_complianceByResources;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
