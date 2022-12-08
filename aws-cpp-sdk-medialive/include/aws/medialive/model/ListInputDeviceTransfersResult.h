/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/TransferringInputDeviceSummary.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for ListInputDeviceTransfersResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListInputDeviceTransfersResponse">AWS
   * API Reference</a></p>
   */
  class ListInputDeviceTransfersResult
  {
  public:
    AWS_MEDIALIVE_API ListInputDeviceTransfersResult();
    AWS_MEDIALIVE_API ListInputDeviceTransfersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListInputDeviceTransfersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The list of devices that you are transferring or are being transferred to you.
     */
    inline const Aws::Vector<TransferringInputDeviceSummary>& GetInputDeviceTransfers() const{ return m_inputDeviceTransfers; }

    /**
     * The list of devices that you are transferring or are being transferred to you.
     */
    inline void SetInputDeviceTransfers(const Aws::Vector<TransferringInputDeviceSummary>& value) { m_inputDeviceTransfers = value; }

    /**
     * The list of devices that you are transferring or are being transferred to you.
     */
    inline void SetInputDeviceTransfers(Aws::Vector<TransferringInputDeviceSummary>&& value) { m_inputDeviceTransfers = std::move(value); }

    /**
     * The list of devices that you are transferring or are being transferred to you.
     */
    inline ListInputDeviceTransfersResult& WithInputDeviceTransfers(const Aws::Vector<TransferringInputDeviceSummary>& value) { SetInputDeviceTransfers(value); return *this;}

    /**
     * The list of devices that you are transferring or are being transferred to you.
     */
    inline ListInputDeviceTransfersResult& WithInputDeviceTransfers(Aws::Vector<TransferringInputDeviceSummary>&& value) { SetInputDeviceTransfers(std::move(value)); return *this;}

    /**
     * The list of devices that you are transferring or are being transferred to you.
     */
    inline ListInputDeviceTransfersResult& AddInputDeviceTransfers(const TransferringInputDeviceSummary& value) { m_inputDeviceTransfers.push_back(value); return *this; }

    /**
     * The list of devices that you are transferring or are being transferred to you.
     */
    inline ListInputDeviceTransfersResult& AddInputDeviceTransfers(TransferringInputDeviceSummary&& value) { m_inputDeviceTransfers.push_back(std::move(value)); return *this; }


    /**
     * A token to get additional list results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token to get additional list results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A token to get additional list results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A token to get additional list results.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A token to get additional list results.
     */
    inline ListInputDeviceTransfersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token to get additional list results.
     */
    inline ListInputDeviceTransfersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token to get additional list results.
     */
    inline ListInputDeviceTransfersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TransferringInputDeviceSummary> m_inputDeviceTransfers;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
