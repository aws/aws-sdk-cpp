/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeServerResult
  {
  public:
    AWS_TRANSFER_API DescribeServerResult();
    AWS_TRANSFER_API DescribeServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array containing the properties of a server with the <code>ServerID</code>
     * you specified.</p>
     */
    inline const DescribedServer& GetServer() const{ return m_server; }

    /**
     * <p>An array containing the properties of a server with the <code>ServerID</code>
     * you specified.</p>
     */
    inline void SetServer(const DescribedServer& value) { m_server = value; }

    /**
     * <p>An array containing the properties of a server with the <code>ServerID</code>
     * you specified.</p>
     */
    inline void SetServer(DescribedServer&& value) { m_server = std::move(value); }

    /**
     * <p>An array containing the properties of a server with the <code>ServerID</code>
     * you specified.</p>
     */
    inline DescribeServerResult& WithServer(const DescribedServer& value) { SetServer(value); return *this;}

    /**
     * <p>An array containing the properties of a server with the <code>ServerID</code>
     * you specified.</p>
     */
    inline DescribeServerResult& WithServer(DescribedServer&& value) { SetServer(std::move(value)); return *this;}

  private:

    DescribedServer m_server;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
