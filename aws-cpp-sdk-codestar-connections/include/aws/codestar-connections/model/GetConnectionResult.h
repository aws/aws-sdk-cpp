/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/codestar-connections/model/Connection.h>
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
namespace CodeStarconnections
{
namespace Model
{
  class GetConnectionResult
  {
  public:
    AWS_CODESTARCONNECTIONS_API GetConnectionResult();
    AWS_CODESTARCONNECTIONS_API GetConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODESTARCONNECTIONS_API GetConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The connection details, such as status, owner, and provider type.</p>
     */
    inline const Connection& GetConnection() const{ return m_connection; }

    /**
     * <p>The connection details, such as status, owner, and provider type.</p>
     */
    inline void SetConnection(const Connection& value) { m_connection = value; }

    /**
     * <p>The connection details, such as status, owner, and provider type.</p>
     */
    inline void SetConnection(Connection&& value) { m_connection = std::move(value); }

    /**
     * <p>The connection details, such as status, owner, and provider type.</p>
     */
    inline GetConnectionResult& WithConnection(const Connection& value) { SetConnection(value); return *this;}

    /**
     * <p>The connection details, such as status, owner, and provider type.</p>
     */
    inline GetConnectionResult& WithConnection(Connection&& value) { SetConnection(std::move(value)); return *this;}

  private:

    Connection m_connection;
  };

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
