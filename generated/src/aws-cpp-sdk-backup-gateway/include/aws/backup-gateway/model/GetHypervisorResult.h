/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/model/HypervisorDetails.h>
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
  class GetHypervisorResult
  {
  public:
    AWS_BACKUPGATEWAY_API GetHypervisorResult();
    AWS_BACKUPGATEWAY_API GetHypervisorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API GetHypervisorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the requested hypervisor.</p>
     */
    inline const HypervisorDetails& GetHypervisor() const{ return m_hypervisor; }

    /**
     * <p>Details about the requested hypervisor.</p>
     */
    inline void SetHypervisor(const HypervisorDetails& value) { m_hypervisor = value; }

    /**
     * <p>Details about the requested hypervisor.</p>
     */
    inline void SetHypervisor(HypervisorDetails&& value) { m_hypervisor = std::move(value); }

    /**
     * <p>Details about the requested hypervisor.</p>
     */
    inline GetHypervisorResult& WithHypervisor(const HypervisorDetails& value) { SetHypervisor(value); return *this;}

    /**
     * <p>Details about the requested hypervisor.</p>
     */
    inline GetHypervisorResult& WithHypervisor(HypervisorDetails&& value) { SetHypervisor(std::move(value)); return *this;}

  private:

    HypervisorDetails m_hypervisor;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
