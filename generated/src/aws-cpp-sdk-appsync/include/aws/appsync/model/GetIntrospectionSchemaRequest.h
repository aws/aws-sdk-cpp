/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetIntrospectionSchemaRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API GetIntrospectionSchemaRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetIntrospectionSchema"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;

    AWS_APPSYNC_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    GetIntrospectionSchemaRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema format: SDL or JSON.</p>
     */
    inline OutputType GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(OutputType value) { m_formatHasBeenSet = true; m_format = value; }
    inline GetIntrospectionSchemaRequest& WithFormat(OutputType value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that specifies whether the schema introspection should contain
     * directives.</p>
     */
    inline bool GetIncludeDirectives() const { return m_includeDirectives; }
    inline bool IncludeDirectivesHasBeenSet() const { return m_includeDirectivesHasBeenSet; }
    inline void SetIncludeDirectives(bool value) { m_includeDirectivesHasBeenSet = true; m_includeDirectives = value; }
    inline GetIntrospectionSchemaRequest& WithIncludeDirectives(bool value) { SetIncludeDirectives(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    OutputType m_format{OutputType::NOT_SET};
    bool m_formatHasBeenSet = false;

    bool m_includeDirectives{false};
    bool m_includeDirectivesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
