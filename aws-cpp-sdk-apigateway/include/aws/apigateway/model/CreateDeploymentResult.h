﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/MethodSnapshot.h>

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
   * <p>An immutable representation of a <a>RestApi</a> resource that can be called
   * by users using <a>Stages</a>. A deployment must be associated with a
   * <a>Stage</a> for it to be callable over the Internet.</p> <div
   * class="remarks">To create a deployment, call <code>POST</code> on the
   * <a>Deployments</a> resource of a <a>RestApi</a>. To view, update, or delete a
   * deployment, call <code>GET</code>, <code>PATCH</code>, or <code>DELETE</code> on
   * the specified deployment resource
   * (<code>/restapis/{restapi_id}/deployments/{deployment_id}</code>).</div> <div
   * class="seeAlso"><a>RestApi</a>, <a>Deployments</a>, <a>Stage</a>, <a
   * href="http://docs.aws.amazon.com/cli/latest/reference/apigateway/get-deployment.html">AWS
   * CLI</a>, <a href="https://aws.amazon.com/tools/">AWS SDKs</a> </div><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Deployment">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API CreateDeploymentResult
  {
  public:
    CreateDeploymentResult();
    CreateDeploymentResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDeploymentResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = value; }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline CreateDeploymentResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline CreateDeploymentResult& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the deployment resource.</p>
     */
    inline CreateDeploymentResult& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline CreateDeploymentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline CreateDeploymentResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the deployment resource.</p>
     */
    inline CreateDeploymentResult& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = value; }

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline CreateDeploymentResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time that the deployment resource was created.</p>
     */
    inline CreateDeploymentResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>A summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& GetApiSummary() const{ return m_apiSummary; }

    /**
     * <p>A summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline void SetApiSummary(const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& value) { m_apiSummary = value; }

    /**
     * <p>A summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline void SetApiSummary(Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>&& value) { m_apiSummary = value; }

    /**
     * <p>A summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline CreateDeploymentResult& WithApiSummary(const Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>& value) { SetApiSummary(value); return *this;}

    /**
     * <p>A summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline CreateDeploymentResult& WithApiSummary(Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>>&& value) { SetApiSummary(value); return *this;}

    /**
     * <p>A summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline CreateDeploymentResult& AddApiSummary(const Aws::String& key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummary[key] = value; return *this; }

    /**
     * <p>A summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline CreateDeploymentResult& AddApiSummary(Aws::String&& key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummary[key] = value; return *this; }

    /**
     * <p>A summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline CreateDeploymentResult& AddApiSummary(const Aws::String& key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummary[key] = value; return *this; }

    /**
     * <p>A summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline CreateDeploymentResult& AddApiSummary(Aws::String&& key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummary[key] = value; return *this; }

    /**
     * <p>A summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline CreateDeploymentResult& AddApiSummary(const char* key, Aws::Map<Aws::String, MethodSnapshot>&& value) { m_apiSummary[key] = value; return *this; }

    /**
     * <p>A summary of the <a>RestApi</a> at the date and time that the deployment
     * resource was created.</p>
     */
    inline CreateDeploymentResult& AddApiSummary(const char* key, const Aws::Map<Aws::String, MethodSnapshot>& value) { m_apiSummary[key] = value; return *this; }

  private:
    Aws::String m_id;
    Aws::String m_description;
    Aws::Utils::DateTime m_createdDate;
    Aws::Map<Aws::String, Aws::Map<Aws::String, MethodSnapshot>> m_apiSummary;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
