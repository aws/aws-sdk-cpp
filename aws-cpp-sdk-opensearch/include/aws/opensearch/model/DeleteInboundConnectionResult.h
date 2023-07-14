﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/InboundConnection.h>
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
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>The result of a <code> <a>DeleteInboundConnection</a> </code> operation.
   * Contains details about the deleted inbound connection. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DeleteInboundConnectionResponse">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API DeleteInboundConnectionResult
  {
  public:
    DeleteInboundConnectionResult();
    DeleteInboundConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteInboundConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code> <a>InboundConnection</a> </code> of the deleted inbound
     * connection. </p>
     */
    inline const InboundConnection& GetConnection() const{ return m_connection; }

    /**
     * <p>The <code> <a>InboundConnection</a> </code> of the deleted inbound
     * connection. </p>
     */
    inline void SetConnection(const InboundConnection& value) { m_connection = value; }

    /**
     * <p>The <code> <a>InboundConnection</a> </code> of the deleted inbound
     * connection. </p>
     */
    inline void SetConnection(InboundConnection&& value) { m_connection = std::move(value); }

    /**
     * <p>The <code> <a>InboundConnection</a> </code> of the deleted inbound
     * connection. </p>
     */
    inline DeleteInboundConnectionResult& WithConnection(const InboundConnection& value) { SetConnection(value); return *this;}

    /**
     * <p>The <code> <a>InboundConnection</a> </code> of the deleted inbound
     * connection. </p>
     */
    inline DeleteInboundConnectionResult& WithConnection(InboundConnection&& value) { SetConnection(std::move(value)); return *this;}

  private:

    InboundConnection m_connection;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
