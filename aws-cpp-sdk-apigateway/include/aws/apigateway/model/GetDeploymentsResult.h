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
   * deployments.</p> <div class="remarks">To create a new deployment of a
   * <a>RestApi</a>, make a <code>POST</code> request against this resource. To view,
   * update, or delete an existing deployment, make a <code>GET</code>,
   * <code>PATCH</code>, or <code>DELETE</code> request, respectively, on a specified
   * <a>Deployment</a> resource.</div> <div class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-deploy-api.html">Deploying
   * an API</a>, <a
   * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-deployment.html">AWS
   * CLI</a>, <a href="https://aws.amazon.com/tools/">AWS SDKs</a> </div><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Deployments">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetDeploymentsResult
  {
  public:
    GetDeploymentsResult();
    GetDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
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

  private:

    Aws::String m_position;

    Aws::Vector<Deployment> m_items;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
