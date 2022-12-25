/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/Operation.h>
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
namespace ServiceDiscovery
{
namespace Model
{
  class GetOperationResult
  {
  public:
    AWS_SERVICEDISCOVERY_API GetOperationResult();
    AWS_SERVICEDISCOVERY_API GetOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API GetOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }

    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline void SetOperation(const Operation& value) { m_operation = value; }

    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline void SetOperation(Operation&& value) { m_operation = std::move(value); }

    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline GetOperationResult& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline GetOperationResult& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}

  private:

    Operation m_operation;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
