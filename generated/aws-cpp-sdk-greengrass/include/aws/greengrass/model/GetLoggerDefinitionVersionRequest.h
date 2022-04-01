﻿/**
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
  class AWS_GREENGRASS_API GetLoggerDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    GetLoggerDefinitionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLoggerDefinitionVersion"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * The ID of the logger definition.
     */
    inline const Aws::String& GetLoggerDefinitionId() const{ return m_loggerDefinitionId; }

    /**
     * The ID of the logger definition.
     */
    inline bool LoggerDefinitionIdHasBeenSet() const { return m_loggerDefinitionIdHasBeenSet; }

    /**
     * The ID of the logger definition.
     */
    inline void SetLoggerDefinitionId(const Aws::String& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = value; }

    /**
     * The ID of the logger definition.
     */
    inline void SetLoggerDefinitionId(Aws::String&& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = std::move(value); }

    /**
     * The ID of the logger definition.
     */
    inline void SetLoggerDefinitionId(const char* value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId.assign(value); }

    /**
     * The ID of the logger definition.
     */
    inline GetLoggerDefinitionVersionRequest& WithLoggerDefinitionId(const Aws::String& value) { SetLoggerDefinitionId(value); return *this;}

    /**
     * The ID of the logger definition.
     */
    inline GetLoggerDefinitionVersionRequest& WithLoggerDefinitionId(Aws::String&& value) { SetLoggerDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the logger definition.
     */
    inline GetLoggerDefinitionVersionRequest& WithLoggerDefinitionId(const char* value) { SetLoggerDefinitionId(value); return *this;}


    /**
     * The ID of the logger definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListLoggerDefinitionVersions'' requests. If the version is the last one
     * that was associated with a logger definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline const Aws::String& GetLoggerDefinitionVersionId() const{ return m_loggerDefinitionVersionId; }

    /**
     * The ID of the logger definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListLoggerDefinitionVersions'' requests. If the version is the last one
     * that was associated with a logger definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline bool LoggerDefinitionVersionIdHasBeenSet() const { return m_loggerDefinitionVersionIdHasBeenSet; }

    /**
     * The ID of the logger definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListLoggerDefinitionVersions'' requests. If the version is the last one
     * that was associated with a logger definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline void SetLoggerDefinitionVersionId(const Aws::String& value) { m_loggerDefinitionVersionIdHasBeenSet = true; m_loggerDefinitionVersionId = value; }

    /**
     * The ID of the logger definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListLoggerDefinitionVersions'' requests. If the version is the last one
     * that was associated with a logger definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline void SetLoggerDefinitionVersionId(Aws::String&& value) { m_loggerDefinitionVersionIdHasBeenSet = true; m_loggerDefinitionVersionId = std::move(value); }

    /**
     * The ID of the logger definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListLoggerDefinitionVersions'' requests. If the version is the last one
     * that was associated with a logger definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline void SetLoggerDefinitionVersionId(const char* value) { m_loggerDefinitionVersionIdHasBeenSet = true; m_loggerDefinitionVersionId.assign(value); }

    /**
     * The ID of the logger definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListLoggerDefinitionVersions'' requests. If the version is the last one
     * that was associated with a logger definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline GetLoggerDefinitionVersionRequest& WithLoggerDefinitionVersionId(const Aws::String& value) { SetLoggerDefinitionVersionId(value); return *this;}

    /**
     * The ID of the logger definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListLoggerDefinitionVersions'' requests. If the version is the last one
     * that was associated with a logger definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline GetLoggerDefinitionVersionRequest& WithLoggerDefinitionVersionId(Aws::String&& value) { SetLoggerDefinitionVersionId(std::move(value)); return *this;}

    /**
     * The ID of the logger definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListLoggerDefinitionVersions'' requests. If the version is the last one
     * that was associated with a logger definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline GetLoggerDefinitionVersionRequest& WithLoggerDefinitionVersionId(const char* value) { SetLoggerDefinitionVersionId(value); return *this;}


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
    inline GetLoggerDefinitionVersionRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetLoggerDefinitionVersionRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline GetLoggerDefinitionVersionRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_loggerDefinitionId;
    bool m_loggerDefinitionIdHasBeenSet;

    Aws::String m_loggerDefinitionVersionId;
    bool m_loggerDefinitionVersionIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
