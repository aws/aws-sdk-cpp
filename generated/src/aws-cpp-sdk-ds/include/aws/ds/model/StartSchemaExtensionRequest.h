/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class StartSchemaExtensionRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API StartSchemaExtensionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSchemaExtension"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the directory for which the schema extension will be
     * applied to.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline StartSchemaExtensionRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline StartSchemaExtensionRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline StartSchemaExtensionRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, creates a snapshot of the directory before applying the schema
     * extension.</p>
     */
    inline bool GetCreateSnapshotBeforeSchemaExtension() const{ return m_createSnapshotBeforeSchemaExtension; }
    inline bool CreateSnapshotBeforeSchemaExtensionHasBeenSet() const { return m_createSnapshotBeforeSchemaExtensionHasBeenSet; }
    inline void SetCreateSnapshotBeforeSchemaExtension(bool value) { m_createSnapshotBeforeSchemaExtensionHasBeenSet = true; m_createSnapshotBeforeSchemaExtension = value; }
    inline StartSchemaExtensionRequest& WithCreateSnapshotBeforeSchemaExtension(bool value) { SetCreateSnapshotBeforeSchemaExtension(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The LDIF file represented as a string. To construct the LdifContent string,
     * precede each line as it would be formatted in an ldif file with \n. See the
     * example request below for more details. The file size can be no larger than
     * 1MB.</p>
     */
    inline const Aws::String& GetLdifContent() const{ return m_ldifContent; }
    inline bool LdifContentHasBeenSet() const { return m_ldifContentHasBeenSet; }
    inline void SetLdifContent(const Aws::String& value) { m_ldifContentHasBeenSet = true; m_ldifContent = value; }
    inline void SetLdifContent(Aws::String&& value) { m_ldifContentHasBeenSet = true; m_ldifContent = std::move(value); }
    inline void SetLdifContent(const char* value) { m_ldifContentHasBeenSet = true; m_ldifContent.assign(value); }
    inline StartSchemaExtensionRequest& WithLdifContent(const Aws::String& value) { SetLdifContent(value); return *this;}
    inline StartSchemaExtensionRequest& WithLdifContent(Aws::String&& value) { SetLdifContent(std::move(value)); return *this;}
    inline StartSchemaExtensionRequest& WithLdifContent(const char* value) { SetLdifContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the schema extension.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StartSchemaExtensionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StartSchemaExtensionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StartSchemaExtensionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    bool m_createSnapshotBeforeSchemaExtension;
    bool m_createSnapshotBeforeSchemaExtensionHasBeenSet = false;

    Aws::String m_ldifContent;
    bool m_ldifContentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
