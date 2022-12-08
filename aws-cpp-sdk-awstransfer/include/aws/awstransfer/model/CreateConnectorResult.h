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
  class CreateConnectorResult
  {
  public:
    AWS_TRANSFER_API CreateConnectorResult();
    AWS_TRANSFER_API CreateConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API CreateConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the connector, returned after the API call
     * succeeds.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }

    /**
     * <p>The unique identifier for the connector, returned after the API call
     * succeeds.</p>
     */
    inline void SetConnectorId(const Aws::String& value) { m_connectorId = value; }

    /**
     * <p>The unique identifier for the connector, returned after the API call
     * succeeds.</p>
     */
    inline void SetConnectorId(Aws::String&& value) { m_connectorId = std::move(value); }

    /**
     * <p>The unique identifier for the connector, returned after the API call
     * succeeds.</p>
     */
    inline void SetConnectorId(const char* value) { m_connectorId.assign(value); }

    /**
     * <p>The unique identifier for the connector, returned after the API call
     * succeeds.</p>
     */
    inline CreateConnectorResult& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}

    /**
     * <p>The unique identifier for the connector, returned after the API call
     * succeeds.</p>
     */
    inline CreateConnectorResult& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the connector, returned after the API call
     * succeeds.</p>
     */
    inline CreateConnectorResult& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}

  private:

    Aws::String m_connectorId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
