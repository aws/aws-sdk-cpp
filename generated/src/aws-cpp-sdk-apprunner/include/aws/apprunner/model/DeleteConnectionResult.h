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
  class DeleteConnectionResult
  {
  public:
    AWS_APPRUNNER_API DeleteConnectionResult();
    AWS_APPRUNNER_API DeleteConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API DeleteConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the App Runner connection that this request just
     * deleted.</p>
     */
    inline const Connection& GetConnection() const{ return m_connection; }

    /**
     * <p>A description of the App Runner connection that this request just
     * deleted.</p>
     */
    inline void SetConnection(const Connection& value) { m_connection = value; }

    /**
     * <p>A description of the App Runner connection that this request just
     * deleted.</p>
     */
    inline void SetConnection(Connection&& value) { m_connection = std::move(value); }

    /**
     * <p>A description of the App Runner connection that this request just
     * deleted.</p>
     */
    inline DeleteConnectionResult& WithConnection(const Connection& value) { SetConnection(value); return *this;}

    /**
     * <p>A description of the App Runner connection that this request just
     * deleted.</p>
     */
    inline DeleteConnectionResult& WithConnection(Connection&& value) { SetConnection(std::move(value)); return *this;}

  private:

    Connection m_connection;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
