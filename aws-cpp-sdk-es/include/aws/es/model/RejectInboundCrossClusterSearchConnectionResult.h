/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/InboundCrossClusterSearchConnection.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>The result of a <code><a>RejectInboundCrossClusterSearchConnection</a></code>
   * operation. Contains details of rejected inbound connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RejectInboundCrossClusterSearchConnectionResponse">AWS
   * API Reference</a></p>
   */
  class RejectInboundCrossClusterSearchConnectionResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API RejectInboundCrossClusterSearchConnectionResult();
    AWS_ELASTICSEARCHSERVICE_API RejectInboundCrossClusterSearchConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API RejectInboundCrossClusterSearchConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnection</a></code> of
     * rejected inbound connection. </p>
     */
    inline const InboundCrossClusterSearchConnection& GetCrossClusterSearchConnection() const{ return m_crossClusterSearchConnection; }

    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnection</a></code> of
     * rejected inbound connection. </p>
     */
    inline void SetCrossClusterSearchConnection(const InboundCrossClusterSearchConnection& value) { m_crossClusterSearchConnection = value; }

    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnection</a></code> of
     * rejected inbound connection. </p>
     */
    inline void SetCrossClusterSearchConnection(InboundCrossClusterSearchConnection&& value) { m_crossClusterSearchConnection = std::move(value); }

    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnection</a></code> of
     * rejected inbound connection. </p>
     */
    inline RejectInboundCrossClusterSearchConnectionResult& WithCrossClusterSearchConnection(const InboundCrossClusterSearchConnection& value) { SetCrossClusterSearchConnection(value); return *this;}

    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnection</a></code> of
     * rejected inbound connection. </p>
     */
    inline RejectInboundCrossClusterSearchConnectionResult& WithCrossClusterSearchConnection(InboundCrossClusterSearchConnection&& value) { SetCrossClusterSearchConnection(std::move(value)); return *this;}

  private:

    InboundCrossClusterSearchConnection m_crossClusterSearchConnection;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
