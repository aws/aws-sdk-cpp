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
   * <p>The result of a <code><a>AcceptInboundCrossClusterSearchConnection</a></code>
   * operation. Contains details of accepted inbound connection.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AcceptInboundCrossClusterSearchConnectionResponse">AWS
   * API Reference</a></p>
   */
  class AcceptInboundCrossClusterSearchConnectionResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AcceptInboundCrossClusterSearchConnectionResult();
    AWS_ELASTICSEARCHSERVICE_API AcceptInboundCrossClusterSearchConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API AcceptInboundCrossClusterSearchConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnection</a></code> of
     * accepted inbound connection. </p>
     */
    inline const InboundCrossClusterSearchConnection& GetCrossClusterSearchConnection() const{ return m_crossClusterSearchConnection; }

    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnection</a></code> of
     * accepted inbound connection. </p>
     */
    inline void SetCrossClusterSearchConnection(const InboundCrossClusterSearchConnection& value) { m_crossClusterSearchConnection = value; }

    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnection</a></code> of
     * accepted inbound connection. </p>
     */
    inline void SetCrossClusterSearchConnection(InboundCrossClusterSearchConnection&& value) { m_crossClusterSearchConnection = std::move(value); }

    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnection</a></code> of
     * accepted inbound connection. </p>
     */
    inline AcceptInboundCrossClusterSearchConnectionResult& WithCrossClusterSearchConnection(const InboundCrossClusterSearchConnection& value) { SetCrossClusterSearchConnection(value); return *this;}

    /**
     * <p>Specifies the <code><a>InboundCrossClusterSearchConnection</a></code> of
     * accepted inbound connection. </p>
     */
    inline AcceptInboundCrossClusterSearchConnectionResult& WithCrossClusterSearchConnection(InboundCrossClusterSearchConnection&& value) { SetCrossClusterSearchConnection(std::move(value)); return *this;}

  private:

    InboundCrossClusterSearchConnection m_crossClusterSearchConnection;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
