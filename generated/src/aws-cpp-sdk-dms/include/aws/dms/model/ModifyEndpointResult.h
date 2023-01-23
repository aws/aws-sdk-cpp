/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/Endpoint.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ModifyEndpointResponse">AWS
   * API Reference</a></p>
   */
  class ModifyEndpointResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ModifyEndpointResult();
    AWS_DATABASEMIGRATIONSERVICE_API ModifyEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API ModifyEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The modified endpoint.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The modified endpoint.</p>
     */
    inline void SetEndpoint(const Endpoint& value) { m_endpoint = value; }

    /**
     * <p>The modified endpoint.</p>
     */
    inline void SetEndpoint(Endpoint&& value) { m_endpoint = std::move(value); }

    /**
     * <p>The modified endpoint.</p>
     */
    inline ModifyEndpointResult& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The modified endpoint.</p>
     */
    inline ModifyEndpointResult& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}

  private:

    Endpoint m_endpoint;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
