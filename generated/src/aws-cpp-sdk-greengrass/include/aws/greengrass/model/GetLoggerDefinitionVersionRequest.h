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
  class GetLoggerDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetLoggerDefinitionVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLoggerDefinitionVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * The ID of the logger definition.
     */
    inline const Aws::String& GetLoggerDefinitionId() const { return m_loggerDefinitionId; }
    inline bool LoggerDefinitionIdHasBeenSet() const { return m_loggerDefinitionIdHasBeenSet; }
    template<typename LoggerDefinitionIdT = Aws::String>
    void SetLoggerDefinitionId(LoggerDefinitionIdT&& value) { m_loggerDefinitionIdHasBeenSet = true; m_loggerDefinitionId = std::forward<LoggerDefinitionIdT>(value); }
    template<typename LoggerDefinitionIdT = Aws::String>
    GetLoggerDefinitionVersionRequest& WithLoggerDefinitionId(LoggerDefinitionIdT&& value) { SetLoggerDefinitionId(std::forward<LoggerDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the logger definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListLoggerDefinitionVersions'' requests. If the version is the last one
     * that was associated with a logger definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline const Aws::String& GetLoggerDefinitionVersionId() const { return m_loggerDefinitionVersionId; }
    inline bool LoggerDefinitionVersionIdHasBeenSet() const { return m_loggerDefinitionVersionIdHasBeenSet; }
    template<typename LoggerDefinitionVersionIdT = Aws::String>
    void SetLoggerDefinitionVersionId(LoggerDefinitionVersionIdT&& value) { m_loggerDefinitionVersionIdHasBeenSet = true; m_loggerDefinitionVersionId = std::forward<LoggerDefinitionVersionIdT>(value); }
    template<typename LoggerDefinitionVersionIdT = Aws::String>
    GetLoggerDefinitionVersionRequest& WithLoggerDefinitionVersionId(LoggerDefinitionVersionIdT&& value) { SetLoggerDefinitionVersionId(std::forward<LoggerDefinitionVersionIdT>(value)); return *this;}
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
    GetLoggerDefinitionVersionRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_loggerDefinitionId;
    bool m_loggerDefinitionIdHasBeenSet = false;

    Aws::String m_loggerDefinitionVersionId;
    bool m_loggerDefinitionVersionIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
