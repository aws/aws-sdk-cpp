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
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CreateEndpointResponse">AWS
   * API Reference</a></p>
   */
  class CreateEndpointResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CreateEndpointResult();
    AWS_DATABASEMIGRATIONSERVICE_API CreateEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API CreateEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The endpoint that was created.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint that was created.</p>
     */
    inline void SetEndpoint(const Endpoint& value) { m_endpoint = value; }

    /**
     * <p>The endpoint that was created.</p>
     */
    inline void SetEndpoint(Endpoint&& value) { m_endpoint = std::move(value); }

    /**
     * <p>The endpoint that was created.</p>
     */
    inline CreateEndpointResult& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint that was created.</p>
     */
    inline CreateEndpointResult& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}

  private:

    Endpoint m_endpoint;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
