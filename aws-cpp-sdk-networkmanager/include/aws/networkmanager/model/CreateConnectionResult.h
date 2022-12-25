/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Connection.h>
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
namespace NetworkManager
{
namespace Model
{
  class CreateConnectionResult
  {
  public:
    AWS_NETWORKMANAGER_API CreateConnectionResult();
    AWS_NETWORKMANAGER_API CreateConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API CreateConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the connection.</p>
     */
    inline const Connection& GetConnection() const{ return m_connection; }

    /**
     * <p>Information about the connection.</p>
     */
    inline void SetConnection(const Connection& value) { m_connection = value; }

    /**
     * <p>Information about the connection.</p>
     */
    inline void SetConnection(Connection&& value) { m_connection = std::move(value); }

    /**
     * <p>Information about the connection.</p>
     */
    inline CreateConnectionResult& WithConnection(const Connection& value) { SetConnection(value); return *this;}

    /**
     * <p>Information about the connection.</p>
     */
    inline CreateConnectionResult& WithConnection(Connection&& value) { SetConnection(std::move(value)); return *this;}

  private:

    Connection m_connection;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
