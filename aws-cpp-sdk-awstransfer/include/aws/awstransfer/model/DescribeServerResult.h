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
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedServer.h>
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
namespace Transfer
{
namespace Model
{
  class AWS_TRANSFER_API DescribeServerResult
  {
  public:
    DescribeServerResult();
    DescribeServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array containing the properties of the server with the
     * <code>ServerID</code> you specified.</p>
     */
    inline const DescribedServer& GetServer() const{ return m_server; }

    /**
     * <p>An array containing the properties of the server with the
     * <code>ServerID</code> you specified.</p>
     */
    inline void SetServer(const DescribedServer& value) { m_server = value; }

    /**
     * <p>An array containing the properties of the server with the
     * <code>ServerID</code> you specified.</p>
     */
    inline void SetServer(DescribedServer&& value) { m_server = std::move(value); }

    /**
     * <p>An array containing the properties of the server with the
     * <code>ServerID</code> you specified.</p>
     */
    inline DescribeServerResult& WithServer(const DescribedServer& value) { SetServer(value); return *this;}

    /**
     * <p>An array containing the properties of the server with the
     * <code>ServerID</code> you specified.</p>
     */
    inline DescribeServerResult& WithServer(DescribedServer&& value) { SetServer(std::move(value)); return *this;}

  private:

    DescribedServer m_server;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
