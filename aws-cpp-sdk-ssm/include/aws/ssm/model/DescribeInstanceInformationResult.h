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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InstanceInformation.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API DescribeInstanceInformationResult
  {
  public:
    DescribeInstanceInformationResult();
    DescribeInstanceInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeInstanceInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The instance information list.</p>
     */
    inline const Aws::Vector<InstanceInformation>& GetInstanceInformationList() const{ return m_instanceInformationList; }

    /**
     * <p>The instance information list.</p>
     */
    inline void SetInstanceInformationList(const Aws::Vector<InstanceInformation>& value) { m_instanceInformationList = value; }

    /**
     * <p>The instance information list.</p>
     */
    inline void SetInstanceInformationList(Aws::Vector<InstanceInformation>&& value) { m_instanceInformationList = std::move(value); }

    /**
     * <p>The instance information list.</p>
     */
    inline DescribeInstanceInformationResult& WithInstanceInformationList(const Aws::Vector<InstanceInformation>& value) { SetInstanceInformationList(value); return *this;}

    /**
     * <p>The instance information list.</p>
     */
    inline DescribeInstanceInformationResult& WithInstanceInformationList(Aws::Vector<InstanceInformation>&& value) { SetInstanceInformationList(std::move(value)); return *this;}

    /**
     * <p>The instance information list.</p>
     */
    inline DescribeInstanceInformationResult& AddInstanceInformationList(const InstanceInformation& value) { m_instanceInformationList.push_back(value); return *this; }

    /**
     * <p>The instance information list.</p>
     */
    inline DescribeInstanceInformationResult& AddInstanceInformationList(InstanceInformation&& value) { m_instanceInformationList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty. </p>
     */
    inline DescribeInstanceInformationResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty. </p>
     */
    inline DescribeInstanceInformationResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty. </p>
     */
    inline DescribeInstanceInformationResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InstanceInformation> m_instanceInformationList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
