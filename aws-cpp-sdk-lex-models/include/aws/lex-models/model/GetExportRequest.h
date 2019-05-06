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
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lex-models/model/ResourceType.h>
#include <aws/lex-models/model/ExportType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELBUILDINGSERVICE_API GetExportRequest : public LexModelBuildingServiceRequest
  {
  public:
    GetExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExport"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the bot to export.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the bot to export.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the bot to export.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the bot to export.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the bot to export.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the bot to export.</p>
     */
    inline GetExportRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the bot to export.</p>
     */
    inline GetExportRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot to export.</p>
     */
    inline GetExportRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of the bot to export.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the bot to export.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the bot to export.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the bot to export.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the bot to export.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the bot to export.</p>
     */
    inline GetExportRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the bot to export.</p>
     */
    inline GetExportRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot to export.</p>
     */
    inline GetExportRequest& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The type of resource to export. </p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource to export. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource to export. </p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource to export. </p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource to export. </p>
     */
    inline GetExportRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource to export. </p>
     */
    inline GetExportRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The format of the exported data.</p>
     */
    inline const ExportType& GetExportType() const{ return m_exportType; }

    /**
     * <p>The format of the exported data.</p>
     */
    inline bool ExportTypeHasBeenSet() const { return m_exportTypeHasBeenSet; }

    /**
     * <p>The format of the exported data.</p>
     */
    inline void SetExportType(const ExportType& value) { m_exportTypeHasBeenSet = true; m_exportType = value; }

    /**
     * <p>The format of the exported data.</p>
     */
    inline void SetExportType(ExportType&& value) { m_exportTypeHasBeenSet = true; m_exportType = std::move(value); }

    /**
     * <p>The format of the exported data.</p>
     */
    inline GetExportRequest& WithExportType(const ExportType& value) { SetExportType(value); return *this;}

    /**
     * <p>The format of the exported data.</p>
     */
    inline GetExportRequest& WithExportType(ExportType&& value) { SetExportType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    ExportType m_exportType;
    bool m_exportTypeHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
