/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/Connection.h>
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
namespace AppRunner
{
namespace Model
{
  class CreateConnectionResult
  {
  public:
    AWS_APPRUNNER_API CreateConnectionResult();
    AWS_APPRUNNER_API CreateConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API CreateConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the App Runner connection that's created by this
     * request.</p>
     */
    inline const Connection& GetConnection() const{ return m_connection; }

    /**
     * <p>A description of the App Runner connection that's created by this
     * request.</p>
     */
    inline void SetConnection(const Connection& value) { m_connection = value; }

    /**
     * <p>A description of the App Runner connection that's created by this
     * request.</p>
     */
    inline void SetConnection(Connection&& value) { m_connection = std::move(value); }

    /**
     * <p>A description of the App Runner connection that's created by this
     * request.</p>
     */
    inline CreateConnectionResult& WithConnection(const Connection& value) { SetConnection(value); return *this;}

    /**
     * <p>A description of the App Runner connection that's created by this
     * request.</p>
     */
    inline CreateConnectionResult& WithConnection(Connection&& value) { SetConnection(std::move(value)); return *this;}

  private:

    Connection m_connection;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
