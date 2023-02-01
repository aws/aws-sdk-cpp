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
namespace Greengrass
{
namespace Model
{

  /**
   */
  class GetResourceDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API GetResourceDefinitionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceDefinitionVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    /**
     * The ID of the resource definition.
     */
    inline const Aws::String& GetResourceDefinitionId() const{ return m_resourceDefinitionId; }

    /**
     * The ID of the resource definition.
     */
    inline bool ResourceDefinitionIdHasBeenSet() const { return m_resourceDefinitionIdHasBeenSet; }

    /**
     * The ID of the resource definition.
     */
    inline void SetResourceDefinitionId(const Aws::String& value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId = value; }

    /**
     * The ID of the resource definition.
     */
    inline void SetResourceDefinitionId(Aws::String&& value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId = std::move(value); }

    /**
     * The ID of the resource definition.
     */
    inline void SetResourceDefinitionId(const char* value) { m_resourceDefinitionIdHasBeenSet = true; m_resourceDefinitionId.assign(value); }

    /**
     * The ID of the resource definition.
     */
    inline GetResourceDefinitionVersionRequest& WithResourceDefinitionId(const Aws::String& value) { SetResourceDefinitionId(value); return *this;}

    /**
     * The ID of the resource definition.
     */
    inline GetResourceDefinitionVersionRequest& WithResourceDefinitionId(Aws::String&& value) { SetResourceDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the resource definition.
     */
    inline GetResourceDefinitionVersionRequest& WithResourceDefinitionId(const char* value) { SetResourceDefinitionId(value); return *this;}


    /**
     * The ID of the resource definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListResourceDefinitionVersions'' requests. If the version is the last one
     * that was associated with a resource definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline const Aws::String& GetResourceDefinitionVersionId() const{ return m_resourceDefinitionVersionId; }

    /**
     * The ID of the resource definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListResourceDefinitionVersions'' requests. If the version is the last one
     * that was associated with a resource definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline bool ResourceDefinitionVersionIdHasBeenSet() const { return m_resourceDefinitionVersionIdHasBeenSet; }

    /**
     * The ID of the resource definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListResourceDefinitionVersions'' requests. If the version is the last one
     * that was associated with a resource definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline void SetResourceDefinitionVersionId(const Aws::String& value) { m_resourceDefinitionVersionIdHasBeenSet = true; m_resourceDefinitionVersionId = value; }

    /**
     * The ID of the resource definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListResourceDefinitionVersions'' requests. If the version is the last one
     * that was associated with a resource definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline void SetResourceDefinitionVersionId(Aws::String&& value) { m_resourceDefinitionVersionIdHasBeenSet = true; m_resourceDefinitionVersionId = std::move(value); }

    /**
     * The ID of the resource definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListResourceDefinitionVersions'' requests. If the version is the last one
     * that was associated with a resource definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline void SetResourceDefinitionVersionId(const char* value) { m_resourceDefinitionVersionIdHasBeenSet = true; m_resourceDefinitionVersionId.assign(value); }

    /**
     * The ID of the resource definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListResourceDefinitionVersions'' requests. If the version is the last one
     * that was associated with a resource definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline GetResourceDefinitionVersionRequest& WithResourceDefinitionVersionId(const Aws::String& value) { SetResourceDefinitionVersionId(value); return *this;}

    /**
     * The ID of the resource definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListResourceDefinitionVersions'' requests. If the version is the last one
     * that was associated with a resource definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline GetResourceDefinitionVersionRequest& WithResourceDefinitionVersionId(Aws::String&& value) { SetResourceDefinitionVersionId(std::move(value)); return *this;}

    /**
     * The ID of the resource definition version. This value maps to the ''Version''
     * property of the corresponding ''VersionInformation'' object, which is returned
     * by ''ListResourceDefinitionVersions'' requests. If the version is the last one
     * that was associated with a resource definition, the value also maps to the
     * ''LatestVersion'' property of the corresponding ''DefinitionInformation''
     * object.
     */
    inline GetResourceDefinitionVersionRequest& WithResourceDefinitionVersionId(const char* value) { SetResourceDefinitionVersionId(value); return *this;}

  private:

    Aws::String m_resourceDefinitionId;
    bool m_resourceDefinitionIdHasBeenSet = false;

    Aws::String m_resourceDefinitionVersionId;
    bool m_resourceDefinitionVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
