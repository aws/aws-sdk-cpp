﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/EndpointAccess.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class AWS_REDSHIFTSERVERLESS_API CreateEndpointAccessResult
  {
  public:
    CreateEndpointAccessResult();
    CreateEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The created VPC endpoint.</p>
     */
    inline const EndpointAccess& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The created VPC endpoint.</p>
     */
    inline void SetEndpoint(const EndpointAccess& value) { m_endpoint = value; }

    /**
     * <p>The created VPC endpoint.</p>
     */
    inline void SetEndpoint(EndpointAccess&& value) { m_endpoint = std::move(value); }

    /**
     * <p>The created VPC endpoint.</p>
     */
    inline CreateEndpointAccessResult& WithEndpoint(const EndpointAccess& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The created VPC endpoint.</p>
     */
    inline CreateEndpointAccessResult& WithEndpoint(EndpointAccess&& value) { SetEndpoint(std::move(value)); return *this;}

  private:

    EndpointAccess m_endpoint;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
