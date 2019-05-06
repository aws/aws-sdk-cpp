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
#include <utility>

namespace Aws
{
namespace AppSync
{
namespace Model
{

  /**
   */
  class AWS_APPSYNC_API UpdateFunctionRequest : public AppSyncRequest
  {
  public:
    UpdateFunctionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFunction"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The GraphQL API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline UpdateFunctionRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline UpdateFunctionRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The GraphQL API ID.</p>
     */
    inline UpdateFunctionRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The <code>Function</code> name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The <code>Function</code> name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The <code>Function</code> name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The <code>Function</code> name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The <code>Function</code> name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The <code>Function</code> name.</p>
     */
    inline UpdateFunctionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The <code>Function</code> name.</p>
     */
    inline UpdateFunctionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The <code>Function</code> name.</p>
     */
    inline UpdateFunctionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline UpdateFunctionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline UpdateFunctionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The <code>Function</code> description.</p>
     */
    inline UpdateFunctionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The function ID.</p>
     */
    inline const Aws::String& GetFunctionId() const{ return m_functionId; }

    /**
     * <p>The function ID.</p>
     */
    inline bool FunctionIdHasBeenSet() const { return m_functionIdHasBeenSet; }

    /**
     * <p>The function ID.</p>
     */
    inline void SetFunctionId(const Aws::String& value) { m_functionIdHasBeenSet = true; m_functionId = value; }

    /**
     * <p>The function ID.</p>
     */
    inline void SetFunctionId(Aws::String&& value) { m_functionIdHasBeenSet = true; m_functionId = std::move(value); }

    /**
     * <p>The function ID.</p>
     */
    inline void SetFunctionId(const char* value) { m_functionIdHasBeenSet = true; m_functionId.assign(value); }

    /**
     * <p>The function ID.</p>
     */
    inline UpdateFunctionRequest& WithFunctionId(const Aws::String& value) { SetFunctionId(value); return *this;}

    /**
     * <p>The function ID.</p>
     */
    inline UpdateFunctionRequest& WithFunctionId(Aws::String&& value) { SetFunctionId(std::move(value)); return *this;}

    /**
     * <p>The function ID.</p>
     */
    inline UpdateFunctionRequest& WithFunctionId(const char* value) { SetFunctionId(value); return *this;}


    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline UpdateFunctionRequest& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline UpdateFunctionRequest& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}

    /**
     * <p>The <code>Function</code> <code>DataSource</code> name.</p>
     */
    inline UpdateFunctionRequest& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}


    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline const Aws::String& GetRequestMappingTemplate() const{ return m_requestMappingTemplate; }

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline bool RequestMappingTemplateHasBeenSet() const { return m_requestMappingTemplateHasBeenSet; }

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline void SetRequestMappingTemplate(const Aws::String& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = value; }

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline void SetRequestMappingTemplate(Aws::String&& value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate = std::move(value); }

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline void SetRequestMappingTemplate(const char* value) { m_requestMappingTemplateHasBeenSet = true; m_requestMappingTemplate.assign(value); }

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline UpdateFunctionRequest& WithRequestMappingTemplate(const Aws::String& value) { SetRequestMappingTemplate(value); return *this;}

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline UpdateFunctionRequest& WithRequestMappingTemplate(Aws::String&& value) { SetRequestMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>The <code>Function</code> request mapping template. Functions support only
     * the 2018-05-29 version of the request mapping template.</p>
     */
    inline UpdateFunctionRequest& WithRequestMappingTemplate(const char* value) { SetRequestMappingTemplate(value); return *this;}


    /**
     * <p>The <code>Function</code> request mapping template. </p>
     */
    inline const Aws::String& GetResponseMappingTemplate() const{ return m_responseMappingTemplate; }

    /**
     * <p>The <code>Function</code> request mapping template. </p>
     */
    inline bool ResponseMappingTemplateHasBeenSet() const { return m_responseMappingTemplateHasBeenSet; }

    /**
     * <p>The <code>Function</code> request mapping template. </p>
     */
    inline void SetResponseMappingTemplate(const Aws::String& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = value; }

    /**
     * <p>The <code>Function</code> request mapping template. </p>
     */
    inline void SetResponseMappingTemplate(Aws::String&& value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate = std::move(value); }

    /**
     * <p>The <code>Function</code> request mapping template. </p>
     */
    inline void SetResponseMappingTemplate(const char* value) { m_responseMappingTemplateHasBeenSet = true; m_responseMappingTemplate.assign(value); }

    /**
     * <p>The <code>Function</code> request mapping template. </p>
     */
    inline UpdateFunctionRequest& WithResponseMappingTemplate(const Aws::String& value) { SetResponseMappingTemplate(value); return *this;}

    /**
     * <p>The <code>Function</code> request mapping template. </p>
     */
    inline UpdateFunctionRequest& WithResponseMappingTemplate(Aws::String&& value) { SetResponseMappingTemplate(std::move(value)); return *this;}

    /**
     * <p>The <code>Function</code> request mapping template. </p>
     */
    inline UpdateFunctionRequest& WithResponseMappingTemplate(const char* value) { SetResponseMappingTemplate(value); return *this;}


    /**
     * <p>The <code>version</code> of the request mapping template. Currently the
     * supported value is 2018-05-29. </p>
     */
    inline const Aws::String& GetFunctionVersion() const{ return m_functionVersion; }

    /**
     * <p>The <code>version</code> of the request mapping template. Currently the
     * supported value is 2018-05-29. </p>
     */
    inline bool FunctionVersionHasBeenSet() const { return m_functionVersionHasBeenSet; }

    /**
     * <p>The <code>version</code> of the request mapping template. Currently the
     * supported value is 2018-05-29. </p>
     */
    inline void SetFunctionVersion(const Aws::String& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>The <code>version</code> of the request mapping template. Currently the
     * supported value is 2018-05-29. </p>
     */
    inline void SetFunctionVersion(Aws::String&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = std::move(value); }

    /**
     * <p>The <code>version</code> of the request mapping template. Currently the
     * supported value is 2018-05-29. </p>
     */
    inline void SetFunctionVersion(const char* value) { m_functionVersionHasBeenSet = true; m_functionVersion.assign(value); }

    /**
     * <p>The <code>version</code> of the request mapping template. Currently the
     * supported value is 2018-05-29. </p>
     */
    inline UpdateFunctionRequest& WithFunctionVersion(const Aws::String& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>The <code>version</code> of the request mapping template. Currently the
     * supported value is 2018-05-29. </p>
     */
    inline UpdateFunctionRequest& WithFunctionVersion(Aws::String&& value) { SetFunctionVersion(std::move(value)); return *this;}

    /**
     * <p>The <code>version</code> of the request mapping template. Currently the
     * supported value is 2018-05-29. </p>
     */
    inline UpdateFunctionRequest& WithFunctionVersion(const char* value) { SetFunctionVersion(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_functionId;
    bool m_functionIdHasBeenSet;

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet;

    Aws::String m_requestMappingTemplate;
    bool m_requestMappingTemplateHasBeenSet;

    Aws::String m_responseMappingTemplate;
    bool m_responseMappingTemplateHasBeenSet;

    Aws::String m_functionVersion;
    bool m_functionVersionHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
