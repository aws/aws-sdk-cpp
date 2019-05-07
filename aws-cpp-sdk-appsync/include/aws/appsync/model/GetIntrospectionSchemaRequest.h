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
#include <aws/appsync/model/OutputType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppSync
{
namespace Model
{

  /**
   */
  class AWS_APPSYNC_API GetIntrospectionSchemaRequest : public AppSyncRequest
  {
  public:
    GetIntrospectionSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIntrospectionSchema"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline GetIntrospectionSchemaRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline GetIntrospectionSchemaRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API ID.</p>
     */
    inline GetIntrospectionSchemaRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The schema format: SDL or JSON.</p>
     */
    inline const OutputType& GetFormat() const{ return m_format; }

    /**
     * <p>The schema format: SDL or JSON.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The schema format: SDL or JSON.</p>
     */
    inline void SetFormat(const OutputType& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The schema format: SDL or JSON.</p>
     */
    inline void SetFormat(OutputType&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The schema format: SDL or JSON.</p>
     */
    inline GetIntrospectionSchemaRequest& WithFormat(const OutputType& value) { SetFormat(value); return *this;}

    /**
     * <p>The schema format: SDL or JSON.</p>
     */
    inline GetIntrospectionSchemaRequest& WithFormat(OutputType&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>A flag that specifies whether the schema introspection should contain
     * directives.</p>
     */
    inline bool GetIncludeDirectives() const{ return m_includeDirectives; }

    /**
     * <p>A flag that specifies whether the schema introspection should contain
     * directives.</p>
     */
    inline bool IncludeDirectivesHasBeenSet() const { return m_includeDirectivesHasBeenSet; }

    /**
     * <p>A flag that specifies whether the schema introspection should contain
     * directives.</p>
     */
    inline void SetIncludeDirectives(bool value) { m_includeDirectivesHasBeenSet = true; m_includeDirectives = value; }

    /**
     * <p>A flag that specifies whether the schema introspection should contain
     * directives.</p>
     */
    inline GetIntrospectionSchemaRequest& WithIncludeDirectives(bool value) { SetIncludeDirectives(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    OutputType m_format;
    bool m_formatHasBeenSet;

    bool m_includeDirectives;
    bool m_includeDirectivesHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
