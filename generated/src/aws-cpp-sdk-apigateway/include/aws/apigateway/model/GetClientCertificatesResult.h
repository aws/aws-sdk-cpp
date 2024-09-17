/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/ClientCertificate.h>
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
namespace APIGateway
{
namespace Model
{
  /**
   * <p>Represents a collection of ClientCertificate resources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/ClientCertificates">AWS
   * API Reference</a></p>
   */
  class GetClientCertificatesResult
  {
  public:
    AWS_APIGATEWAY_API GetClientCertificatesResult();
    AWS_APIGATEWAY_API GetClientCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetClientCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetPosition() const{ return m_position; }
    inline void SetPosition(const Aws::String& value) { m_position = value; }
    inline void SetPosition(Aws::String&& value) { m_position = std::move(value); }
    inline void SetPosition(const char* value) { m_position.assign(value); }
    inline GetClientCertificatesResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}
    inline GetClientCertificatesResult& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}
    inline GetClientCertificatesResult& WithPosition(const char* value) { SetPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline const Aws::Vector<ClientCertificate>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<ClientCertificate>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<ClientCertificate>&& value) { m_items = std::move(value); }
    inline GetClientCertificatesResult& WithItems(const Aws::Vector<ClientCertificate>& value) { SetItems(value); return *this;}
    inline GetClientCertificatesResult& WithItems(Aws::Vector<ClientCertificate>&& value) { SetItems(std::move(value)); return *this;}
    inline GetClientCertificatesResult& AddItems(const ClientCertificate& value) { m_items.push_back(value); return *this; }
    inline GetClientCertificatesResult& AddItems(ClientCertificate&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetClientCertificatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetClientCertificatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetClientCertificatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_position;

    Aws::Vector<ClientCertificate> m_items;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
