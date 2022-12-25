/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrassv2/model/DisassociateClientDeviceFromCoreDeviceErrorEntry.h>
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
namespace GreengrassV2
{
namespace Model
{
  class BatchDisassociateClientDeviceFromCoreDeviceResult
  {
  public:
    AWS_GREENGRASSV2_API BatchDisassociateClientDeviceFromCoreDeviceResult();
    AWS_GREENGRASSV2_API BatchDisassociateClientDeviceFromCoreDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API BatchDisassociateClientDeviceFromCoreDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to disassociate.</p>
     */
    inline const Aws::Vector<DisassociateClientDeviceFromCoreDeviceErrorEntry>& GetErrorEntries() const{ return m_errorEntries; }

    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to disassociate.</p>
     */
    inline void SetErrorEntries(const Aws::Vector<DisassociateClientDeviceFromCoreDeviceErrorEntry>& value) { m_errorEntries = value; }

    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to disassociate.</p>
     */
    inline void SetErrorEntries(Aws::Vector<DisassociateClientDeviceFromCoreDeviceErrorEntry>&& value) { m_errorEntries = std::move(value); }

    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to disassociate.</p>
     */
    inline BatchDisassociateClientDeviceFromCoreDeviceResult& WithErrorEntries(const Aws::Vector<DisassociateClientDeviceFromCoreDeviceErrorEntry>& value) { SetErrorEntries(value); return *this;}

    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to disassociate.</p>
     */
    inline BatchDisassociateClientDeviceFromCoreDeviceResult& WithErrorEntries(Aws::Vector<DisassociateClientDeviceFromCoreDeviceErrorEntry>&& value) { SetErrorEntries(std::move(value)); return *this;}

    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to disassociate.</p>
     */
    inline BatchDisassociateClientDeviceFromCoreDeviceResult& AddErrorEntries(const DisassociateClientDeviceFromCoreDeviceErrorEntry& value) { m_errorEntries.push_back(value); return *this; }

    /**
     * <p>The list of any errors for the entries in the request. Each error entry
     * contains the name of the IoT thing that failed to disassociate.</p>
     */
    inline BatchDisassociateClientDeviceFromCoreDeviceResult& AddErrorEntries(DisassociateClientDeviceFromCoreDeviceErrorEntry&& value) { m_errorEntries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DisassociateClientDeviceFromCoreDeviceErrorEntry> m_errorEntries;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
