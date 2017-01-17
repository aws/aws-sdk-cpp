﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/Endpoint.h>

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
  class AWS_DATABASEMIGRATIONSERVICE_API CreateEndpointResult
  {
  public:
    CreateEndpointResult();
    CreateEndpointResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateEndpointResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetEndpoint(Endpoint&& value) { m_endpoint = value; }

    /**
     * <p>The endpoint that was created.</p>
     */
    inline CreateEndpointResult& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint that was created.</p>
     */
    inline CreateEndpointResult& WithEndpoint(Endpoint&& value) { SetEndpoint(value); return *this;}

  private:
    Endpoint m_endpoint;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
