﻿/**
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
  class UpdateSharedVpcConfigurationResult
  {
  public:
    AWS_FSX_API UpdateSharedVpcConfigurationResult();
    AWS_FSX_API UpdateSharedVpcConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API UpdateSharedVpcConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates whether participant accounts can create FSx for ONTAP Multi-AZ file
     * systems in shared subnets.</p>
     */
    inline const Aws::String& GetEnableFsxRouteTableUpdatesFromParticipantAccounts() const{ return m_enableFsxRouteTableUpdatesFromParticipantAccounts; }
    inline void SetEnableFsxRouteTableUpdatesFromParticipantAccounts(const Aws::String& value) { m_enableFsxRouteTableUpdatesFromParticipantAccounts = value; }
    inline void SetEnableFsxRouteTableUpdatesFromParticipantAccounts(Aws::String&& value) { m_enableFsxRouteTableUpdatesFromParticipantAccounts = std::move(value); }
    inline void SetEnableFsxRouteTableUpdatesFromParticipantAccounts(const char* value) { m_enableFsxRouteTableUpdatesFromParticipantAccounts.assign(value); }
    inline UpdateSharedVpcConfigurationResult& WithEnableFsxRouteTableUpdatesFromParticipantAccounts(const Aws::String& value) { SetEnableFsxRouteTableUpdatesFromParticipantAccounts(value); return *this;}
    inline UpdateSharedVpcConfigurationResult& WithEnableFsxRouteTableUpdatesFromParticipantAccounts(Aws::String&& value) { SetEnableFsxRouteTableUpdatesFromParticipantAccounts(std::move(value)); return *this;}
    inline UpdateSharedVpcConfigurationResult& WithEnableFsxRouteTableUpdatesFromParticipantAccounts(const char* value) { SetEnableFsxRouteTableUpdatesFromParticipantAccounts(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateSharedVpcConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateSharedVpcConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateSharedVpcConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_enableFsxRouteTableUpdatesFromParticipantAccounts;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
