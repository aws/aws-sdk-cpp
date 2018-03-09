﻿/*
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
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class AWS_APPSYNC_API CreateResolverRequest : public AppSyncRequest
  {
  public:
    CreateResolverRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResolver"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID for the GraphQL API for which the resolver is being created.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The ID for the GraphQL API for which the resolver is being created.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The ID for the GraphQL API for which the resolver is being created.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The ID for the GraphQL API for which the resolver is being created.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The ID for the GraphQL API for which the resolver is being created.</p>
     */
    inline CreateResolverRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The ID for the GraphQL API for which the resolver is being created.</p>
     */
    inline CreateResolverRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The ID for the GraphQL API for which the resolver is being created.</p>
     */
    inline CreateResolverRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The name of the <code>Type</code>.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The name of the <code>Type</code>.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The name of the <code>Type</code>.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The name of the <code>Type</code>.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The name of the <code>Type</code>.</p>
     */
    inline CreateResolverRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The name of the <code>Type</code>.</p>
     */
    inline CreateResolverRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the <code>Type</code>.</p>
     */
    inline CreateResolverRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The name of the field to attach the resolver to.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>The name of the field to attach the resolver to.</p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>The name of the field to attach the resolver to.</p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>The name of the field to attach the resolver to.</p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>The name of the field to attach the resolver to.</p>
     */
    inline CreateResolverRequest& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>The name of the field to attach the resolver to.</p>
     */
    inline CreateResolverRequest& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the field to attach the resolver to.</p>
     */
    inline CreateResolverRequest& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    /**
     * <p>The name of the data source for which the resolver is being created.</p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }

    /**
     * <p>The name of the data source for which the resolver is being created.</p>
     */
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }

    /**
     * <p>The name of the data source for which the resolver is being created.</p>
     */
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }

    /**
     * <p>The name of the data source for which the resolver is being created.</p>
     */
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }

    /**
     * <p>The name of the data source for which the resolver is being created.</p>
     */
    inline CreateResolverRequest& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}

    /**
     * <p>The name of the data source for which the resolver is being created.</p>
     */
    inline CreateResolverRequest& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the data source for which the resolver is being created.</p>
     */
    inline CreateResolverRequest& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}


    /**
     * <p>The mapping template to be used for requests.</p> <p>A resolver uses a
     * request mapping template to convert a GraphQL expression into a format that a
     * data source can understand. Mapping templates are written in Apache Velocity
     * Template Language (VTL).</p>
     */
    inline const Aws::String& GetRequestMappingTemplate() const{ return m_requestMappingTemplate; }

    /**
     * <p>The mapping template to be used for requests.</p> <p>A resolver uses a
     * request mapping template to convert a GraphQL expression into a format that a
     * data source can understand. Mapping templates are written in Apache Velocity
     * Template Language (VTL).</p>
     */
    inline void SetRequestMappingTemplate(const Aws::String& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = value; }

    /**
     * <p>The mapping template to be used for requests.</p> <p>A resolver uses a
     * request mapping template to convert a GraphQL expression into a format that a
     * data source can understand. Mapping templates are written in Apache Velocity
     * Template Language (VTL).</p>
     */
    inline void SetRequestMappingTemplate(Aws::String&& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = std::move(value); }

    /**
     * <p>The mapping template to be used for requests.</p> <p>A resolver uses a
     * request mapping template to convert a GraphQL expression into a format that a
     * data source can understand. Mapping templates are written in Apache Velocity
     * Template Language (VTL).</p>
     */
    inline void SetRequestMappingTemplate(const char* value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate.assign(value); }

    /**
     * <p>The mapping template to be used for requests.</p> <p>A resolver uses a
     * request mapping template to convert a GraphQL expression into a format that a
     * data source can understand. Mapping templates are written in Apache Velocity
     * Template Language (VTL).</p>
     */
    inline CreateResolverRequest& WithRequestMappingTemplate(const Aws::String& value) { SetRequestMappingTemplate(value); return *this;}

    /**
     * <p>The mapping template to be used for requests.</p> <p>A resolver uses a
     * request mapping template to convert a GraphQL expression into a format that a
     * data source can understand. Mapping templates are written in Apache Velocity
     * Template Language (VTL).</p>
     */
    inline CreateResolverRequest& WithRequestMappingTemplate(Aws::String&& value) { SetRequestMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>The mapping template to be used for requests.</p> <p>A resolver uses a
     * request mapping template to convert a GraphQL expression into a format that a
     * data source can understand. Mapping templates are written in Apache Velocity
     * Template Language (VTL).</p>
     */
    inline CreateResolverRequest& WithRequestMappingTemplate(const char* value) { SetRequestMappingTemplate(value); return *this;}


    /**
     * <p>The mapping template to be used for responses from the data source.</p>
     */
    inline const Aws::String& GetResponseMappingTemplate() const{ return m_responseMappingTemplate; }

    /**
     * <p>The mapping template to be used for responses from the data source.</p>
     */
    inline void SetResponseMappingTemplate(const Aws::String& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = value; }

    /**
     * <p>The mapping template to be used for responses from the data source.</p>
     */
    inline void SetResponseMappingTemplate(Aws::String&& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = std::move(value); }

    /**
     * <p>The mapping template to be used for responses from the data source.</p>
     */
    inline void SetResponseMappingTemplate(const char* value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate.assign(value); }

    /**
     * <p>The mapping template to be used for responses from the data source.</p>
     */
    inline CreateResolverRequest& WithResponseMappingTemplate(const Aws::String& value) { SetResponseMappingTemplate(value); return *this;}

    /**
     * <p>The mapping template to be used for responses from the data source.</p>
     */
    inline CreateResolverRequest& WithResponseMappingTemplate(Aws::String&& value) { SetResponseMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>The mapping template to be used for responses from the data source.</p>
     */
    inline CreateResolverRequest& WithResponseMappingTemplate(const char* value) { SetResponseMappingTemplate(value); return *this;}

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
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
