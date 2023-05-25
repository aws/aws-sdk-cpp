/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/Deployment.h>
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
   * <p>Represents a collection resource that contains zero or more references to
   * your existing deployments, and links that guide you on how to interact with your
   * collection. The collection offers a paginated view of the contained
   * deployments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Deployments">AWS
   * API Reference</a></p>
   */
  class GetDeploymentsResult
  {
  public:
    AWS_APIGATEWAY_API GetDeploymentsResult();
    AWS_APIGATEWAY_API GetDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAY_API GetDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_position = std::move(value); }

    
    inline void SetPosition(const char* value) { m_position.assign(value); }

    
    inline GetDeploymentsResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetDeploymentsResult& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}

    
    inline GetDeploymentsResult& WithPosition(const char* value) { SetPosition(value); return *this;}


    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline const Aws::Vector<Deployment>& GetItems() const{ return m_items; }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline void SetItems(const Aws::Vector<Deployment>& value) { m_items = value; }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline void SetItems(Aws::Vector<Deployment>&& value) { m_items = std::move(value); }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetDeploymentsResult& WithItems(const Aws::Vector<Deployment>& value) { SetItems(value); return *this;}

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetDeploymentsResult& WithItems(Aws::Vector<Deployment>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetDeploymentsResult& AddItems(const Deployment& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The current page of elements from this collection.</p>
     */
    inline GetDeploymentsResult& AddItems(Deployment&& value) { m_items.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDeploymentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDeploymentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDeploymentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_position;

    Aws::Vector<Deployment> m_items;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
