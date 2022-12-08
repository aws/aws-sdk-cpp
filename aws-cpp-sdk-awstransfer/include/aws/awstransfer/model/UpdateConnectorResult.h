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
  class UpdateConnectorResult
  {
  public:
    AWS_TRANSFER_API UpdateConnectorResult();
    AWS_TRANSFER_API UpdateConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API UpdateConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the identifier of the connector object that you are updating.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }

    /**
     * <p>Returns the identifier of the connector object that you are updating.</p>
     */
    inline void SetConnectorId(const Aws::String& value) { m_connectorId = value; }

    /**
     * <p>Returns the identifier of the connector object that you are updating.</p>
     */
    inline void SetConnectorId(Aws::String&& value) { m_connectorId = std::move(value); }

    /**
     * <p>Returns the identifier of the connector object that you are updating.</p>
     */
    inline void SetConnectorId(const char* value) { m_connectorId.assign(value); }

    /**
     * <p>Returns the identifier of the connector object that you are updating.</p>
     */
    inline UpdateConnectorResult& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}

    /**
     * <p>Returns the identifier of the connector object that you are updating.</p>
     */
    inline UpdateConnectorResult& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}

    /**
     * <p>Returns the identifier of the connector object that you are updating.</p>
     */
    inline UpdateConnectorResult& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}

  private:

    Aws::String m_connectorId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
