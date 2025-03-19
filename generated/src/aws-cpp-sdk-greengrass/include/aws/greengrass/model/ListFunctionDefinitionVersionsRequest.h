/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Greengrass
{
namespace Model
{

  /**
   */
  class ListFunctionDefinitionVersionsRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API ListFunctionDefinitionVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFunctionDefinitionVersions"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * The ID of the Lambda function definition.
     */
    inline const Aws::String& GetFunctionDefinitionId() const { return m_functionDefinitionId; }
    inline bool FunctionDefinitionIdHasBeenSet() const { return m_functionDefinitionIdHasBeenSet; }
    template<typename FunctionDefinitionIdT = Aws::String>
    void SetFunctionDefinitionId(FunctionDefinitionIdT&& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = std::forward<FunctionDefinitionIdT>(value); }
    template<typename FunctionDefinitionIdT = Aws::String>
    ListFunctionDefinitionVersionsRequest& WithFunctionDefinitionId(FunctionDefinitionIdT&& value) { SetFunctionDefinitionId(std::forward<FunctionDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The maximum number of results to be returned per request.
     */
    inline const Aws::String& GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    template<typename MaxResultsT = Aws::String>
    void SetMaxResults(MaxResultsT&& value) { m_maxResultsHasBeenSet = true; m_maxResults = std::forward<MaxResultsT>(value); }
    template<typename MaxResultsT = Aws::String>
    ListFunctionDefinitionVersionsRequest& WithMaxResults(MaxResultsT&& value) { SetMaxResults(std::forward<MaxResultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFunctionDefinitionVersionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionDefinitionId;
    bool m_functionDefinitionIdHasBeenSet = false;

    Aws::String m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
