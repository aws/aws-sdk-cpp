/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/BCMDataExportsRequest.h>
#include <aws/bcm-data-exports/model/Export.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bcm-data-exports/model/ResourceTag.h>
#include <utility>

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

  /**
   */
  class CreateExportRequest : public BCMDataExportsRequest
  {
  public:
    AWS_BCMDATAEXPORTS_API CreateExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExport"; }

    AWS_BCMDATAEXPORTS_API Aws::String SerializePayload() const override;

    AWS_BCMDATAEXPORTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The details of the export, including data query, name, description, and
     * destination configuration.</p>
     */
    inline const Export& GetExport() const{ return m_export; }

    /**
     * <p>The details of the export, including data query, name, description, and
     * destination configuration.</p>
     */
    inline bool ExportHasBeenSet() const { return m_exportHasBeenSet; }

    /**
     * <p>The details of the export, including data query, name, description, and
     * destination configuration.</p>
     */
    inline void SetExport(const Export& value) { m_exportHasBeenSet = true; m_export = value; }

    /**
     * <p>The details of the export, including data query, name, description, and
     * destination configuration.</p>
     */
    inline void SetExport(Export&& value) { m_exportHasBeenSet = true; m_export = std::move(value); }

    /**
     * <p>The details of the export, including data query, name, description, and
     * destination configuration.</p>
     */
    inline CreateExportRequest& WithExport(const Export& value) { SetExport(value); return *this;}

    /**
     * <p>The details of the export, including data query, name, description, and
     * destination configuration.</p>
     */
    inline CreateExportRequest& WithExport(Export&& value) { SetExport(std::move(value)); return *this;}


    /**
     * <p>An optional list of tags to associate with the specified export. Each tag
     * consists of a key and a value, and each key must be unique for the resource.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const{ return m_resourceTags; }

    /**
     * <p>An optional list of tags to associate with the specified export. Each tag
     * consists of a key and a value, and each key must be unique for the resource.</p>
     */
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }

    /**
     * <p>An optional list of tags to associate with the specified export. Each tag
     * consists of a key and a value, and each key must be unique for the resource.</p>
     */
    inline void SetResourceTags(const Aws::Vector<ResourceTag>& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = value; }

    /**
     * <p>An optional list of tags to associate with the specified export. Each tag
     * consists of a key and a value, and each key must be unique for the resource.</p>
     */
    inline void SetResourceTags(Aws::Vector<ResourceTag>&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::move(value); }

    /**
     * <p>An optional list of tags to associate with the specified export. Each tag
     * consists of a key and a value, and each key must be unique for the resource.</p>
     */
    inline CreateExportRequest& WithResourceTags(const Aws::Vector<ResourceTag>& value) { SetResourceTags(value); return *this;}

    /**
     * <p>An optional list of tags to associate with the specified export. Each tag
     * consists of a key and a value, and each key must be unique for the resource.</p>
     */
    inline CreateExportRequest& WithResourceTags(Aws::Vector<ResourceTag>&& value) { SetResourceTags(std::move(value)); return *this;}

    /**
     * <p>An optional list of tags to associate with the specified export. Each tag
     * consists of a key and a value, and each key must be unique for the resource.</p>
     */
    inline CreateExportRequest& AddResourceTags(const ResourceTag& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(value); return *this; }

    /**
     * <p>An optional list of tags to associate with the specified export. Each tag
     * consists of a key and a value, and each key must be unique for the resource.</p>
     */
    inline CreateExportRequest& AddResourceTags(ResourceTag&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.push_back(std::move(value)); return *this; }

  private:

    Export m_export;
    bool m_exportHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
