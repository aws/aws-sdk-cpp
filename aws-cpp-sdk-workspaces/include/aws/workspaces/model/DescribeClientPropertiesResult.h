/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeClientPropertiesResult
  {
  public:
    AWS_WORKSPACES_API DescribeClientPropertiesResult();
    AWS_WORKSPACES_API DescribeClientPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeClientPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
