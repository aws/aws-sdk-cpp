/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ELASTICSEARCHSERVICE_API AcceptInboundCrossClusterSearchConnectionResult
  {
  public:
    AcceptInboundCrossClusterSearchConnectionResult();
    AcceptInboundCrossClusterSearchConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AcceptInboundCrossClusterSearchConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
