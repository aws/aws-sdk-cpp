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
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/ResolverKind.h>
#include <aws/appsync/model/PipelineConfig.h>
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class AWS_APPSYNC_API UpdateResolverRequest : public AppSyncRequest
  {
  public:
    UpdateResolverRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResolver"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API ID.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API ID.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API ID.</p>
     */
    inline UpdateResolverRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline UpdateResolverRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline UpdateResolverRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The new type name.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The new type name.</p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The new type name.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The new type name.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The new type name.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The new type name.</p>
     */
    inline UpdateResolverRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The new type name.</p>
     */
    inline UpdateResolverRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The new type name.</p>
     */
    inline UpdateResolverRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The new field name.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>The new field name.</p>
     */
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    /**
     * <p>The new field name.</p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>The new field name.</p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>The new field name.</p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>The new field name.</p>
     */
    inline UpdateResolverRequest& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>The new field name.</p>
     */
    inline UpdateResolverRequest& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>The new field name.</p>
     */
    inline UpdateResolverRequest& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    /**
     * <p>The new data source name.</p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }

    /**
     * <p>The new data source name.</p>
     */
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }

    /**
     * <p>The new data source name.</p>
     */
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }

    /**
     * <p>The new data source name.</p>
     */
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }

    /**
     * <p>The new data source name.</p>
     */
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }

    /**
     * <p>The new data source name.</p>
     */
    inline UpdateResolverRequest& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}

    /**
     * <p>The new data source name.</p>
     */
    inline UpdateResolverRequest& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}

    /**
     * <p>The new data source name.</p>
     */
    inline UpdateResolverRequest& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}


    /**
     * <p>The new request mapping template.</p>
     */
    inline const Aws::String& GetRequestMappingTemplate() const{ return m_requestMappingTemplate; }

    /**
     * <p>The new request mapping template.</p>
     */
    inline bool RequestMappingTemplateHasBeenSet() const { return m_requestMappingTemplateHasBeenSet; }

    /**
     * <p>The new request mapping template.</p>
     */
    inline void SetRequestMappingTemplate(const Aws::String& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = value; }

    /**
     * <p>The new request mapping template.</p>
     */
    inline void SetRequestMappingTemplate(Aws::String&& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = std::move(value); }

    /**
     * <p>The new request mapping template.</p>
     */
    inline void SetRequestMappingTemplate(const char* value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate.assign(value); }

    /**
     * <p>The new request mapping template.</p>
     */
    inline UpdateResolverRequest& WithRequestMappingTemplate(const Aws::String& value) { SetRequestMappingTemplate(value); return *this;}

    /**
     * <p>The new request mapping template.</p>
     */
    inline UpdateResolverRequest& WithRequestMappingTemplate(Aws::String&& value) { SetRequestMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>The new request mapping template.</p>
     */
    inline UpdateResolverRequest& WithRequestMappingTemplate(const char* value) { SetRequestMappingTemplate(value); return *this;}


    /**
     * <p>The new response mapping template.</p>
     */
    inline const Aws::String& GetResponseMappingTemplate() const{ return m_responseMappingTemplate; }

    /**
     * <p>The new response mapping template.</p>
     */
    inline bool ResponseMappingTemplateHasBeenSet() const { return m_responseMappingTemplateHasBeenSet; }

    /**
     * <p>The new response mapping template.</p>
     */
    inline void SetResponseMappingTemplate(const Aws::String& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = value; }

    /**
     * <p>The new response mapping template.</p>
     */
    inline void SetResponseMappingTemplate(Aws::String&& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = std::move(value); }

    /**
     * <p>The new response mapping template.</p>
     */
    inline void SetResponseMappingTemplate(const char* value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate.assign(value); }

    /**
     * <p>The new response mapping template.</p>
     */
    inline UpdateResolverRequest& WithResponseMappingTemplate(const Aws::String& value) { SetResponseMappingTemplate(value); return *this;}

    /**
     * <p>The new response mapping template.</p>
     */
    inline UpdateResolverRequest& WithResponseMappingTemplate(Aws::String&& value) { SetResponseMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>The new response mapping template.</p>
     */
    inline UpdateResolverRequest& WithResponseMappingTemplate(const char* value) { SetResponseMappingTemplate(value); return *this;}


    /**
     * <p>The resolver type.</p> <ul> <li> <p> <b>UNIT</b>: A UNIT resolver type. A
     * UNIT resolver is the default resolver type. A UNIT resolver enables you to
     * execute a GraphQL query against a single data source.</p> </li> <li> <p>
     * <b>PIPELINE</b>: A PIPELINE resolver type. A PIPELINE resolver enables you to
     * execute a series of <code>Function</code> in a serial manner. You can use a
     * pipeline resolver to execute a GraphQL query against multiple data sources.</p>
     * </li> </ul>
     */
    inline const ResolverKind& GetKind() const{ return m_kind; }

    /**
     * <p>The resolver type.</p> <ul> <li> <p> <b>UNIT</b>: A UNIT resolver type. A
     * UNIT resolver is the default resolver type. A UNIT resolver enables you to
     * execute a GraphQL query against a single data source.</p> </li> <li> <p>
     * <b>PIPELINE</b>: A PIPELINE resolver type. A PIPELINE resolver enables you to
     * execute a series of <code>Function</code> in a serial manner. You can use a
     * pipeline resolver to execute a GraphQL query against multiple data sources.</p>
     * </li> </ul>
     */
    inline bool KindHasBeenSet() const { return m_kindHasBeenSet; }

    /**
     * <p>The resolver type.</p> <ul> <li> <p> <b>UNIT</b>: A UNIT resolver type. A
     * UNIT resolver is the default resolver type. A UNIT resolver enables you to
     * execute a GraphQL query against a single data source.</p> </li> <li> <p>
     * <b>PIPELINE</b>: A PIPELINE resolver type. A PIPELINE resolver enables you to
     * execute a series of <code>Function</code> in a serial manner. You can use a
     * pipeline resolver to execute a GraphQL query against multiple data sources.</p>
     * </li> </ul>
     */
    inline void SetKind(const ResolverKind& value) { m_kindHasBeenSet = true; m_kind = value; }

    /**
     * <p>The resolver type.</p> <ul> <li> <p> <b>UNIT</b>: A UNIT resolver type. A
     * UNIT resolver is the default resolver type. A UNIT resolver enables you to
     * execute a GraphQL query against a single data source.</p> </li> <li> <p>
     * <b>PIPELINE</b>: A PIPELINE resolver type. A PIPELINE resolver enables you to
     * execute a series of <code>Function</code> in a serial manner. You can use a
     * pipeline resolver to execute a GraphQL query against multiple data sources.</p>
     * </li> </ul>
     */
    inline void SetKind(ResolverKind&& value) { m_kindHasBeenSet = true; m_kind = std::move(value); }

    /**
     * <p>The resolver type.</p> <ul> <li> <p> <b>UNIT</b>: A UNIT resolver type. A
     * UNIT resolver is the default resolver type. A UNIT resolver enables you to
     * execute a GraphQL query against a single data source.</p> </li> <li> <p>
     * <b>PIPELINE</b>: A PIPELINE resolver type. A PIPELINE resolver enables you to
     * execute a series of <code>Function</code> in a serial manner. You can use a
     * pipeline resolver to execute a GraphQL query against multiple data sources.</p>
     * </li> </ul>
     */
    inline UpdateResolverRequest& WithKind(const ResolverKind& value) { SetKind(value); return *this;}

    /**
     * <p>The resolver type.</p> <ul> <li> <p> <b>UNIT</b>: A UNIT resolver type. A
     * UNIT resolver is the default resolver type. A UNIT resolver enables you to
     * execute a GraphQL query against a single data source.</p> </li> <li> <p>
     * <b>PIPELINE</b>: A PIPELINE resolver type. A PIPELINE resolver enables you to
     * execute a series of <code>Function</code> in a serial manner. You can use a
     * pipeline resolver to execute a GraphQL query against multiple data sources.</p>
     * </li> </ul>
     */
    inline UpdateResolverRequest& WithKind(ResolverKind&& value) { SetKind(std::move(value)); return *this;}


    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline const PipelineConfig& GetPipelineConfig() const{ return m_pipelineConfig; }

    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline bool PipelineConfigHasBeenSet() const { return m_pipelineConfigHasBeenSet; }

    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline void SetPipelineConfig(const PipelineConfig& value) { m_pipelineConfigHasBeenSet = true; m_pipelineConfig = value; }

    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline void SetPipelineConfig(PipelineConfig&& value) { m_pipelineConfigHasBeenSet = true; m_pipelineConfig = std::move(value); }

    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline UpdateResolverRequest& WithPipelineConfig(const PipelineConfig& value) { SetPipelineConfig(value); return *this;}

    /**
     * <p>The <code>PipelineConfig</code>.</p>
     */
    inline UpdateResolverRequest& WithPipelineConfig(PipelineConfig&& value) { SetPipelineConfig(std::move(value)); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet;

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet;

    Aws::String m_requestMappingTemplate;
    bool m_requestMappingTemplateHasBeenSet;

    Aws::String m_responseMappingTemplate;
    bool m_responseMappingTemplateHasBeenSet;

    ResolverKind m_kind;
    bool m_kindHasBeenSet;

    PipelineConfig m_pipelineConfig;
    bool m_pipelineConfigHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
