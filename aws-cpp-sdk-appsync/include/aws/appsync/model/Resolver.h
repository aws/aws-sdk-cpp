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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes a resolver.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/Resolver">AWS
   * API Reference</a></p>
   */
  class AWS_APPSYNC_API Resolver
  {
  public:
    Resolver();
    Resolver(const Aws::Utils::Json::JsonValue& jsonValue);
    Resolver& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resolver type name.</p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The resolver type name.</p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The resolver type name.</p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The resolver type name.</p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The resolver type name.</p>
     */
    inline Resolver& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The resolver type name.</p>
     */
    inline Resolver& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The resolver type name.</p>
     */
    inline Resolver& WithTypeName(const char* value) { SetTypeName(value); return *this;}


    /**
     * <p>The resolver field name.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>The resolver field name.</p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>The resolver field name.</p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>The resolver field name.</p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>The resolver field name.</p>
     */
    inline Resolver& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>The resolver field name.</p>
     */
    inline Resolver& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>The resolver field name.</p>
     */
    inline Resolver& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    /**
     * <p>The resolver data source name.</p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }

    /**
     * <p>The resolver data source name.</p>
     */
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }

    /**
     * <p>The resolver data source name.</p>
     */
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }

    /**
     * <p>The resolver data source name.</p>
     */
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }

    /**
     * <p>The resolver data source name.</p>
     */
    inline Resolver& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}

    /**
     * <p>The resolver data source name.</p>
     */
    inline Resolver& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}

    /**
     * <p>The resolver data source name.</p>
     */
    inline Resolver& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}


    /**
     * <p>The resolver ARN.</p>
     */
    inline const Aws::String& GetResolverArn() const{ return m_resolverArn; }

    /**
     * <p>The resolver ARN.</p>
     */
    inline void SetResolverArn(const Aws::String& value) { m_resolverArnHasBeenSet = true; m_resolverArn = value; }

    /**
     * <p>The resolver ARN.</p>
     */
    inline void SetResolverArn(Aws::String&& value) { m_resolverArnHasBeenSet = true; m_resolverArn = std::move(value); }

    /**
     * <p>The resolver ARN.</p>
     */
    inline void SetResolverArn(const char* value) { m_resolverArnHasBeenSet = true; m_resolverArn.assign(value); }

    /**
     * <p>The resolver ARN.</p>
     */
    inline Resolver& WithResolverArn(const Aws::String& value) { SetResolverArn(value); return *this;}

    /**
     * <p>The resolver ARN.</p>
     */
    inline Resolver& WithResolverArn(Aws::String&& value) { SetResolverArn(std::move(value)); return *this;}

    /**
     * <p>The resolver ARN.</p>
     */
    inline Resolver& WithResolverArn(const char* value) { SetResolverArn(value); return *this;}


    /**
     * <p>The request mapping template.</p>
     */
    inline const Aws::String& GetRequestMappingTemplate() const{ return m_requestMappingTemplate; }

    /**
     * <p>The request mapping template.</p>
     */
    inline void SetRequestMappingTemplate(const Aws::String& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = value; }

    /**
     * <p>The request mapping template.</p>
     */
    inline void SetRequestMappingTemplate(Aws::String&& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = std::move(value); }

    /**
     * <p>The request mapping template.</p>
     */
    inline void SetRequestMappingTemplate(const char* value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate.assign(value); }

    /**
     * <p>The request mapping template.</p>
     */
    inline Resolver& WithRequestMappingTemplate(const Aws::String& value) { SetRequestMappingTemplate(value); return *this;}

    /**
     * <p>The request mapping template.</p>
     */
    inline Resolver& WithRequestMappingTemplate(Aws::String&& value) { SetRequestMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>The request mapping template.</p>
     */
    inline Resolver& WithRequestMappingTemplate(const char* value) { SetRequestMappingTemplate(value); return *this;}


    /**
     * <p>The response mapping template.</p>
     */
    inline const Aws::String& GetResponseMappingTemplate() const{ return m_responseMappingTemplate; }

    /**
     * <p>The response mapping template.</p>
     */
    inline void SetResponseMappingTemplate(const Aws::String& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = value; }

    /**
     * <p>The response mapping template.</p>
     */
    inline void SetResponseMappingTemplate(Aws::String&& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = std::move(value); }

    /**
     * <p>The response mapping template.</p>
     */
    inline void SetResponseMappingTemplate(const char* value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate.assign(value); }

    /**
     * <p>The response mapping template.</p>
     */
    inline Resolver& WithResponseMappingTemplate(const Aws::String& value) { SetResponseMappingTemplate(value); return *this;}

    /**
     * <p>The response mapping template.</p>
     */
    inline Resolver& WithResponseMappingTemplate(Aws::String&& value) { SetResponseMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>The response mapping template.</p>
     */
    inline Resolver& WithResponseMappingTemplate(const char* value) { SetResponseMappingTemplate(value); return *this;}

  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet;

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet;

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet;

    Aws::String m_resolverArn;
    bool m_resolverArnHasBeenSet;

    Aws::String m_requestMappingTemplate;
    bool m_requestMappingTemplateHasBeenSet;

    Aws::String m_responseMappingTemplate;
    bool m_responseMappingTemplateHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
