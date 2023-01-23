/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/Operation.h>
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
namespace Lightsail
{
namespace Model
{
  class CloseInstancePublicPortsResult
  {
  public:
    AWS_LIGHTSAIL_API CloseInstancePublicPortsResult();
    AWS_LIGHTSAIL_API CloseInstancePublicPortsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API CloseInstancePublicPortsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the result of the action, such as the status of the
     * request, the timestamp of the request, and the resources affected by the
     * request.</p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }

    /**
     * <p>An object that describes the result of the action, such as the status of the
     * request, the timestamp of the request, and the resources affected by the
     * request.</p>
     */
    inline void SetOperation(const Operation& value) { m_operation = value; }

    /**
     * <p>An object that describes the result of the action, such as the status of the
     * request, the timestamp of the request, and the resources affected by the
     * request.</p>
     */
    inline void SetOperation(Operation&& value) { m_operation = std::move(value); }

    /**
     * <p>An object that describes the result of the action, such as the status of the
     * request, the timestamp of the request, and the resources affected by the
     * request.</p>
     */
    inline CloseInstancePublicPortsResult& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    /**
     * <p>An object that describes the result of the action, such as the status of the
     * request, the timestamp of the request, and the resources affected by the
     * request.</p>
     */
    inline CloseInstancePublicPortsResult& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}

  private:

    Operation m_operation;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
