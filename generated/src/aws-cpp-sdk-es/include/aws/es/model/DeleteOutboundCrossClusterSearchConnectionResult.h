﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/OutboundCrossClusterSearchConnection.h>
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
  class DeleteOutboundCrossClusterSearchConnectionResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DeleteOutboundCrossClusterSearchConnectionResult();
    AWS_ELASTICSEARCHSERVICE_API DeleteOutboundCrossClusterSearchConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API DeleteOutboundCrossClusterSearchConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteOutboundCrossClusterSearchConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteOutboundCrossClusterSearchConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteOutboundCrossClusterSearchConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    OutboundCrossClusterSearchConnection m_crossClusterSearchConnection;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
