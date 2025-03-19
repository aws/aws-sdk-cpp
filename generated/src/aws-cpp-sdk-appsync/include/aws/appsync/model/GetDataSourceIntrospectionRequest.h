/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/AppSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetDataSourceIntrospectionRequest : public AppSyncRequest
  {
  public:
    AWS_APPSYNC_API GetDataSourceIntrospectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataSourceIntrospection"; }

    AWS_APPSYNC_API Aws::String SerializePayload() const override;

    AWS_APPSYNC_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The introspection ID. Each introspection contains a unique ID that can be
     * used to reference the instrospection record.</p>
     */
    inline const Aws::String& GetIntrospectionId() const { return m_introspectionId; }
    inline bool IntrospectionIdHasBeenSet() const { return m_introspectionIdHasBeenSet; }
    template<typename IntrospectionIdT = Aws::String>
    void SetIntrospectionId(IntrospectionIdT&& value) { m_introspectionIdHasBeenSet = true; m_introspectionId = std::forward<IntrospectionIdT>(value); }
    template<typename IntrospectionIdT = Aws::String>
    GetDataSourceIntrospectionRequest& WithIntrospectionId(IntrospectionIdT&& value) { SetIntrospectionId(std::forward<IntrospectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean flag that determines whether SDL should be generated for
     * introspected types. If set to <code>true</code>, each model will contain an
     * <code>sdl</code> property that contains the SDL for that type. The SDL only
     * contains the type data and no additional metadata or directives. </p>
     */
    inline bool GetIncludeModelsSDL() const { return m_includeModelsSDL; }
    inline bool IncludeModelsSDLHasBeenSet() const { return m_includeModelsSDLHasBeenSet; }
    inline void SetIncludeModelsSDL(bool value) { m_includeModelsSDLHasBeenSet = true; m_includeModelsSDL = value; }
    inline GetDataSourceIntrospectionRequest& WithIncludeModelsSDL(bool value) { SetIncludeModelsSDL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the number of types to be returned in a single response before
     * paginating. This value is typically taken from <code>nextToken</code> value from
     * the previous response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetDataSourceIntrospectionRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of introspected types that will be returned in a single
     * response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetDataSourceIntrospectionRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_introspectionId;
    bool m_introspectionIdHasBeenSet = false;

    bool m_includeModelsSDL{false};
    bool m_includeModelsSDLHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
