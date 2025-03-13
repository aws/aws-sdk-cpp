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
  class GetFunctionDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetFunctionDefinitionVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFunctionDefinitionVersion"; }

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
    GetFunctionDefinitionVersionRequest& WithFunctionDefinitionId(FunctionDefinitionIdT&& value) { SetFunctionDefinitionId(std::forward<FunctionDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the function definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListFunctionDefinitionVersions'' requests. If the version is the last one
     * that was associated with a function definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline const Aws::String& GetFunctionDefinitionVersionId() const { return m_functionDefinitionVersionId; }
    inline bool FunctionDefinitionVersionIdHasBeenSet() const { return m_functionDefinitionVersionIdHasBeenSet; }
    template<typename FunctionDefinitionVersionIdT = Aws::String>
    void SetFunctionDefinitionVersionId(FunctionDefinitionVersionIdT&& value) { m_functionDefinitionVersionIdHasBeenSet = true; m_functionDefinitionVersionId = std::forward<FunctionDefinitionVersionIdT>(value); }
    template<typename FunctionDefinitionVersionIdT = Aws::String>
    GetFunctionDefinitionVersionRequest& WithFunctionDefinitionVersionId(FunctionDefinitionVersionIdT&& value) { SetFunctionDefinitionVersionId(std::forward<FunctionDefinitionVersionIdT>(value)); return *this;}
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
    GetFunctionDefinitionVersionRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_functionDefinitionId;
    bool m_functionDefinitionIdHasBeenSet = false;

    Aws::String m_functionDefinitionVersionId;
    bool m_functionDefinitionVersionIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
