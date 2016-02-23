/*
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
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   */
  class AWS_APIGATEWAY_API GetExportRequest : public APIGatewayRequest
  {
  public:
    GetExportRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    
    inline GetExportRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    
    inline GetExportRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    
    inline GetExportRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    
    inline GetExportRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    
    inline GetExportRequest& WithStageName(Aws::String&& value) { SetStageName(value); return *this;}

    
    inline GetExportRequest& WithStageName(const char* value) { SetStageName(value); return *this;}

    
    inline const Aws::String& GetExportType() const{ return m_exportType; }

    
    inline void SetExportType(const Aws::String& value) { m_exportTypeHasBeenSet = true; m_exportType = value; }

    
    inline void SetExportType(Aws::String&& value) { m_exportTypeHasBeenSet = true; m_exportType = value; }

    
    inline void SetExportType(const char* value) { m_exportTypeHasBeenSet = true; m_exportType.assign(value); }

    
    inline GetExportRequest& WithExportType(const Aws::String& value) { SetExportType(value); return *this;}

    
    inline GetExportRequest& WithExportType(Aws::String&& value) { SetExportType(value); return *this;}

    
    inline GetExportRequest& WithExportType(const char* value) { SetExportType(value); return *this;}

    
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    
    inline GetExportRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    
    inline GetExportRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(value); return *this;}

    
    inline GetExportRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    
    inline GetExportRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    
    inline GetExportRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    
    inline GetExportRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    
    inline GetExportRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    
    inline GetExportRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    
    inline GetExportRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters[key] = value; return *this; }

    
    inline const Aws::String& GetAccepts() const{ return m_accepts; }

    
    inline void SetAccepts(const Aws::String& value) { m_acceptsHasBeenSet = true; m_accepts = value; }

    
    inline void SetAccepts(Aws::String&& value) { m_acceptsHasBeenSet = true; m_accepts = value; }

    
    inline void SetAccepts(const char* value) { m_acceptsHasBeenSet = true; m_accepts.assign(value); }

    
    inline GetExportRequest& WithAccepts(const Aws::String& value) { SetAccepts(value); return *this;}

    
    inline GetExportRequest& WithAccepts(Aws::String&& value) { SetAccepts(value); return *this;}

    
    inline GetExportRequest& WithAccepts(const char* value) { SetAccepts(value); return *this;}

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_stageName;
    bool m_stageNameHasBeenSet;
    Aws::String m_exportType;
    bool m_exportTypeHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet;
    Aws::String m_accepts;
    bool m_acceptsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
