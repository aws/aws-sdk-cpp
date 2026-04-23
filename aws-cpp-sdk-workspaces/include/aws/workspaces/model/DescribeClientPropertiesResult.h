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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ClientPropertiesResult.h>
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
namespace WorkSpaces
{
namespace Model
{
  class AWS_WORKSPACES_API DescribeClientPropertiesResult
  {
  public:
    DescribeClientPropertiesResult();
    DescribeClientPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeClientPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the specified Amazon WorkSpaces clients.</p>
     */
    inline const Aws::Vector<ClientPropertiesResult>& GetClientPropertiesList() const{ return m_clientPropertiesList; }

    /**
     * <p>Information about the specified Amazon WorkSpaces clients.</p>
     */
    inline void SetClientPropertiesList(const Aws::Vector<ClientPropertiesResult>& value) { m_clientPropertiesList = value; }

    /**
     * <p>Information about the specified Amazon WorkSpaces clients.</p>
     */
    inline void SetClientPropertiesList(Aws::Vector<ClientPropertiesResult>&& value) { m_clientPropertiesList = std::move(value); }

    /**
     * <p>Information about the specified Amazon WorkSpaces clients.</p>
     */
    inline DescribeClientPropertiesResult& WithClientPropertiesList(const Aws::Vector<ClientPropertiesResult>& value) { SetClientPropertiesList(value); return *this;}

    /**
     * <p>Information about the specified Amazon WorkSpaces clients.</p>
     */
    inline DescribeClientPropertiesResult& WithClientPropertiesList(Aws::Vector<ClientPropertiesResult>&& value) { SetClientPropertiesList(std::move(value)); return *this;}

    /**
     * <p>Information about the specified Amazon WorkSpaces clients.</p>
     */
    inline DescribeClientPropertiesResult& AddClientPropertiesList(const ClientPropertiesResult& value) { m_clientPropertiesList.push_back(value); return *this; }

    /**
     * <p>Information about the specified Amazon WorkSpaces clients.</p>
     */
    inline DescribeClientPropertiesResult& AddClientPropertiesList(ClientPropertiesResult&& value) { m_clientPropertiesList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ClientPropertiesResult> m_clientPropertiesList;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
