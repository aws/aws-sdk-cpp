/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{
  class StartFileTransferResult
  {
  public:
    AWS_TRANSFER_API StartFileTransferResult();
    AWS_TRANSFER_API StartFileTransferResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API StartFileTransferResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the unique identifier for this file transfer. </p>
     */
    inline const Aws::String& GetTransferId() const{ return m_transferId; }

    /**
     * <p>Returns the unique identifier for this file transfer. </p>
     */
    inline void SetTransferId(const Aws::String& value) { m_transferId = value; }

    /**
     * <p>Returns the unique identifier for this file transfer. </p>
     */
    inline void SetTransferId(Aws::String&& value) { m_transferId = std::move(value); }

    /**
     * <p>Returns the unique identifier for this file transfer. </p>
     */
    inline void SetTransferId(const char* value) { m_transferId.assign(value); }

    /**
     * <p>Returns the unique identifier for this file transfer. </p>
     */
    inline StartFileTransferResult& WithTransferId(const Aws::String& value) { SetTransferId(value); return *this;}

    /**
     * <p>Returns the unique identifier for this file transfer. </p>
     */
    inline StartFileTransferResult& WithTransferId(Aws::String&& value) { SetTransferId(std::move(value)); return *this;}

    /**
     * <p>Returns the unique identifier for this file transfer. </p>
     */
    inline StartFileTransferResult& WithTransferId(const char* value) { SetTransferId(value); return *this;}

  private:

    Aws::String m_transferId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
