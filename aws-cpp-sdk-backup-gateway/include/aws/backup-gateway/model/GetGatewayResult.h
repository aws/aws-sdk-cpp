/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/model/GatewayDetails.h>
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
namespace BackupGateway
{
namespace Model
{
  class AWS_BACKUPGATEWAY_API GetGatewayResult
  {
  public:
    GetGatewayResult();
    GetGatewayResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetGatewayResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>By providing the ARN (Amazon Resource Name), this API returns the
     * gateway.</p>
     */
    inline const GatewayDetails& GetGateway() const{ return m_gateway; }

    /**
     * <p>By providing the ARN (Amazon Resource Name), this API returns the
     * gateway.</p>
     */
    inline void SetGateway(const GatewayDetails& value) { m_gateway = value; }

    /**
     * <p>By providing the ARN (Amazon Resource Name), this API returns the
     * gateway.</p>
     */
    inline void SetGateway(GatewayDetails&& value) { m_gateway = std::move(value); }

    /**
     * <p>By providing the ARN (Amazon Resource Name), this API returns the
     * gateway.</p>
     */
    inline GetGatewayResult& WithGateway(const GatewayDetails& value) { SetGateway(value); return *this;}

    /**
     * <p>By providing the ARN (Amazon Resource Name), this API returns the
     * gateway.</p>
     */
    inline GetGatewayResult& WithGateway(GatewayDetails&& value) { SetGateway(std::move(value)); return *this;}

  private:

    GatewayDetails m_gateway;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
