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
    AWS_GREENGRASS_API GetFunctionDefinitionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFunctionDefinitionVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * The ID of the Lambda function definition.
     */
    inline const Aws::String& GetFunctionDefinitionId() const{ return m_functionDefinitionId; }

    /**
     * The ID of the Lambda function definition.
     */
    inline bool FunctionDefinitionIdHasBeenSet() const { return m_functionDefinitionIdHasBeenSet; }

    /**
     * The ID of the Lambda function definition.
     */
    inline void SetFunctionDefinitionId(const Aws::String& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = value; }

    /**
     * The ID of the Lambda function definition.
     */
    inline void SetFunctionDefinitionId(Aws::String&& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = std::move(value); }

    /**
     * The ID of the Lambda function definition.
     */
    inline void SetFunctionDefinitionId(const char* value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId.assign(value); }

    /**
     * The ID of the Lambda function definition.
     */
    inline GetFunctionDefinitionVersionRequest& WithFunctionDefinitionId(const Aws::String& value) { SetFunctionDefinitionId(value); return *this;}

    /**
     * The ID of the Lambda function definition.
     */
    inline GetFunctionDefinitionVersionRequest& WithFunctionDefinitionId(Aws::String&& value) { SetFunctionDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the Lambda function definition.
     */
    inline GetFunctionDefinitionVersionRequest& WithFunctionDefinitionId(const char* value) { SetFunctionDefinitionId(value); return *this;}


    /**
     * The ID of the function definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListFunctionDefinitionVersions'' requests. If the version is the last one
     * that was associated with a function definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline const Aws::String& GetFunctionDefinitionVersionId() const{ return m_functionDefinitionVersionId; }

    /**
     * The ID of the function definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListFunctionDefinitionVersions'' requests. If the version is the last one
     * that was associated with a function definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline bool FunctionDefinitionVersionIdHasBeenSet() const { return m_functionDefinitionVersionIdHasBeenSet; }

    /**
     * The ID of the function definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListFunctionDefinitionVersions'' requests. If the version is the last one
     * that was associated with a function definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline void SetFunctionDefinitionVersionId(const Aws::String& value) { m_functionDefinitionVersionIdHasBeenSet = true; m_functionDefinitionVersionId = value; }

    /**
     * The ID of the function definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListFunctionDefinitionVersions'' requests. If the version is the last one
     * that was associated with a function definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline void SetFunctionDefinitionVersionId(Aws::String&& value) { m_functionDefinitionVersionIdHasBeenSet = true; m_functionDefinitionVersionId = std::move(value); }

    /**
     * The ID of the function definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListFunctionDefinitionVersions'' requests. If the version is the last one
     * that was associated with a function definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline void SetFunctionDefinitionVersionId(const char* value) { m_functionDefinitionVersionIdHasBeenSet = true; m_functionDefinitionVersionId.assign(value); }

    /**
     * The ID of the function definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListFunctionDefinitionVersions'' requests. If the version is the last one
     * that was associated with a function definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline GetFunctionDefinitionVersionRequest& WithFunctionDefinitionVersionId(const Aws::String& value) { SetFunctionDefinitionVersionId(value); return *this;}

    /**
     * The ID of the function definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListFunctionDefinitionVersions'' requests. If the version is the last one
     * that was associated with a function definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline GetFunctionDefinitionVersionRequest& WithFunctionDefinitionVersionId(Aws::String&& value) { SetFunctionDefinitionVersionId(std::move(value)); return *this;}

    /**
     * The ID of the function definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListFunctionDefinitionVersions'' requests. If the version is the last one
     * that was associated with a function definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline GetFunctionDefinitionVersionRequest& WithFunctionDefinitionVersionId(const char* value) { SetFunctionDefinitionVersionId(value); return *this;}


    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetFunctionDefinitionVersionRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetFunctionDefinitionVersionRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetFunctionDefinitionVersionRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

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
