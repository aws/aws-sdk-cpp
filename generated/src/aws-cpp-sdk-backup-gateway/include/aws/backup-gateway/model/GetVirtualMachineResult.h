﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/model/VirtualMachineDetails.h>
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
namespace BackupGateway
{
namespace Model
{
  class GetVirtualMachineResult
  {
  public:
    AWS_BACKUPGATEWAY_API GetVirtualMachineResult();
    AWS_BACKUPGATEWAY_API GetVirtualMachineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API GetVirtualMachineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This object contains the basic attributes of <code>VirtualMachine</code>
     * contained by the output of <code>GetVirtualMachine</code> </p>
     */
    inline const VirtualMachineDetails& GetVirtualMachine() const{ return m_virtualMachine; }

    /**
     * <p>This object contains the basic attributes of <code>VirtualMachine</code>
     * contained by the output of <code>GetVirtualMachine</code> </p>
     */
    inline void SetVirtualMachine(const VirtualMachineDetails& value) { m_virtualMachine = value; }

    /**
     * <p>This object contains the basic attributes of <code>VirtualMachine</code>
     * contained by the output of <code>GetVirtualMachine</code> </p>
     */
    inline void SetVirtualMachine(VirtualMachineDetails&& value) { m_virtualMachine = std::move(value); }

    /**
     * <p>This object contains the basic attributes of <code>VirtualMachine</code>
     * contained by the output of <code>GetVirtualMachine</code> </p>
     */
    inline GetVirtualMachineResult& WithVirtualMachine(const VirtualMachineDetails& value) { SetVirtualMachine(value); return *this;}

    /**
     * <p>This object contains the basic attributes of <code>VirtualMachine</code>
     * contained by the output of <code>GetVirtualMachine</code> </p>
     */
    inline GetVirtualMachineResult& WithVirtualMachine(VirtualMachineDetails&& value) { SetVirtualMachine(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetVirtualMachineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetVirtualMachineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetVirtualMachineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VirtualMachineDetails m_virtualMachine;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
