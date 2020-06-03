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
#include <aws/es/model/OutboundCrossClusterSearchConnection.h>
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
   * <p>The result of a
   * <code><a>DeleteOutboundCrossClusterSearchConnection</a></code> operation.
   * Contains details of deleted outbound connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DeleteOutboundCrossClusterSearchConnectionResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API DeleteOutboundCrossClusterSearchConnectionResult
  {
  public:
    DeleteOutboundCrossClusterSearchConnectionResult();
    DeleteOutboundCrossClusterSearchConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteOutboundCrossClusterSearchConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnection</a></code> of
     * deleted outbound connection. </p>
     */
    inline const OutboundCrossClusterSearchConnection& GetCrossClusterSearchConnection() const{ return m_crossClusterSearchConnection; }

    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnection</a></code> of
     * deleted outbound connection. </p>
     */
    inline void SetCrossClusterSearchConnection(const OutboundCrossClusterSearchConnection& value) { m_crossClusterSearchConnection = value; }

    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnection</a></code> of
     * deleted outbound connection. </p>
     */
    inline void SetCrossClusterSearchConnection(OutboundCrossClusterSearchConnection&& value) { m_crossClusterSearchConnection = std::move(value); }

    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnection</a></code> of
     * deleted outbound connection. </p>
     */
    inline DeleteOutboundCrossClusterSearchConnectionResult& WithCrossClusterSearchConnection(const OutboundCrossClusterSearchConnection& value) { SetCrossClusterSearchConnection(value); return *this;}

    /**
     * <p>Specifies the <code><a>OutboundCrossClusterSearchConnection</a></code> of
     * deleted outbound connection. </p>
     */
    inline DeleteOutboundCrossClusterSearchConnectionResult& WithCrossClusterSearchConnection(OutboundCrossClusterSearchConnection&& value) { SetCrossClusterSearchConnection(std::move(value)); return *this;}

  private:

    OutboundCrossClusterSearchConnection m_crossClusterSearchConnection;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
