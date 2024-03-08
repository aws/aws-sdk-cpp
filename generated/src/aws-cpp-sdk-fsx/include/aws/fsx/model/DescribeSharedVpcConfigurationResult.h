/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace FSx
{
namespace Model
{
  class DescribeSharedVpcConfigurationResult
  {
  public:
    AWS_FSX_API DescribeSharedVpcConfigurationResult();
    AWS_FSX_API DescribeSharedVpcConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DescribeSharedVpcConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets.</p>
     */
    inline const Aws::String& GetEnableFsxRouteTableUpdatesFromParticipantAccounts() const{ return m_enableFsxRouteTableUpdatesFromParticipantAccounts; }

    /**
     * <p>Indicates whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets.</p>
     */
    inline void SetEnableFsxRouteTableUpdatesFromParticipantAccounts(const Aws::String& value) { m_enableFsxRouteTableUpdatesFromParticipantAccounts = value; }

    /**
     * <p>Indicates whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets.</p>
     */
    inline void SetEnableFsxRouteTableUpdatesFromParticipantAccounts(Aws::String&& value) { m_enableFsxRouteTableUpdatesFromParticipantAccounts = std::move(value); }

    /**
     * <p>Indicates whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets.</p>
     */
    inline void SetEnableFsxRouteTableUpdatesFromParticipantAccounts(const char* value) { m_enableFsxRouteTableUpdatesFromParticipantAccounts.assign(value); }

    /**
     * <p>Indicates whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets.</p>
     */
    inline DescribeSharedVpcConfigurationResult& WithEnableFsxRouteTableUpdatesFromParticipantAccounts(const Aws::String& value) { SetEnableFsxRouteTableUpdatesFromParticipantAccounts(value); return *this;}

    /**
     * <p>Indicates whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets.</p>
     */
    inline DescribeSharedVpcConfigurationResult& WithEnableFsxRouteTableUpdatesFromParticipantAccounts(Aws::String&& value) { SetEnableFsxRouteTableUpdatesFromParticipantAccounts(std::move(value)); return *this;}

    /**
     * <p>Indicates whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets.</p>
     */
    inline DescribeSharedVpcConfigurationResult& WithEnableFsxRouteTableUpdatesFromParticipantAccounts(const char* value) { SetEnableFsxRouteTableUpdatesFromParticipantAccounts(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeSharedVpcConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeSharedVpcConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeSharedVpcConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_enableFsxRouteTableUpdatesFromParticipantAccounts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
