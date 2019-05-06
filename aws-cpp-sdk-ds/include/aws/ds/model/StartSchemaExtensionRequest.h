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
  class AWS_DIRECTORYSERVICE_API StartSchemaExtensionRequest : public DirectoryServiceRequest
  {
  public:
    StartSchemaExtensionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSchemaExtension"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory for which the schema extension will be
     * applied to.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory for which the schema extension will be
     * applied to.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory for which the schema extension will be
     * applied to.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory for which the schema extension will be
     * applied to.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory for which the schema extension will be
     * applied to.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory for which the schema extension will be
     * applied to.</p>
     */
    inline StartSchemaExtensionRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory for which the schema extension will be
     * applied to.</p>
     */
    inline StartSchemaExtensionRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory for which the schema extension will be
     * applied to.</p>
     */
    inline StartSchemaExtensionRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>If true, creates a snapshot of the directory before applying the schema
     * extension.</p>
     */
    inline bool GetCreateSnapshotBeforeSchemaExtension() const{ return m_createSnapshotBeforeSchemaExtension; }

    /**
     * <p>If true, creates a snapshot of the directory before applying the schema
     * extension.</p>
     */
    inline bool CreateSnapshotBeforeSchemaExtensionHasBeenSet() const { return m_createSnapshotBeforeSchemaExtensionHasBeenSet; }

    /**
     * <p>If true, creates a snapshot of the directory before applying the schema
     * extension.</p>
     */
    inline void SetCreateSnapshotBeforeSchemaExtension(bool value) { m_createSnapshotBeforeSchemaExtensionHasBeenSet = true; m_createSnapshotBeforeSchemaExtension = value; }

    /**
     * <p>If true, creates a snapshot of the directory before applying the schema
     * extension.</p>
     */
    inline StartSchemaExtensionRequest& WithCreateSnapshotBeforeSchemaExtension(bool value) { SetCreateSnapshotBeforeSchemaExtension(value); return *this;}


    /**
     * <p>The LDIF file represented as a string. To construct the LdifContent string,
     * precede each line as it would be formatted in an ldif file with \n. See the
     * example request below for more details. The file size can be no larger than
     * 1MB.</p>
     */
    inline const Aws::String& GetLdifContent() const{ return m_ldifContent; }

    /**
     * <p>The LDIF file represented as a string. To construct the LdifContent string,
     * precede each line as it would be formatted in an ldif file with \n. See the
     * example request below for more details. The file size can be no larger than
     * 1MB.</p>
     */
    inline bool LdifContentHasBeenSet() const { return m_ldifContentHasBeenSet; }

    /**
     * <p>The LDIF file represented as a string. To construct the LdifContent string,
     * precede each line as it would be formatted in an ldif file with \n. See the
     * example request below for more details. The file size can be no larger than
     * 1MB.</p>
     */
    inline void SetLdifContent(const Aws::String& value) { m_ldifContentHasBeenSet = true; m_ldifContent = value; }

    /**
     * <p>The LDIF file represented as a string. To construct the LdifContent string,
     * precede each line as it would be formatted in an ldif file with \n. See the
     * example request below for more details. The file size can be no larger than
     * 1MB.</p>
     */
    inline void SetLdifContent(Aws::String&& value) { m_ldifContentHasBeenSet = true; m_ldifContent = std::move(value); }

    /**
     * <p>The LDIF file represented as a string. To construct the LdifContent string,
     * precede each line as it would be formatted in an ldif file with \n. See the
     * example request below for more details. The file size can be no larger than
     * 1MB.</p>
     */
    inline void SetLdifContent(const char* value) { m_ldifContentHasBeenSet = true; m_ldifContent.assign(value); }

    /**
     * <p>The LDIF file represented as a string. To construct the LdifContent string,
     * precede each line as it would be formatted in an ldif file with \n. See the
     * example request below for more details. The file size can be no larger than
     * 1MB.</p>
     */
    inline StartSchemaExtensionRequest& WithLdifContent(const Aws::String& value) { SetLdifContent(value); return *this;}

    /**
     * <p>The LDIF file represented as a string. To construct the LdifContent string,
     * precede each line as it would be formatted in an ldif file with \n. See the
     * example request below for more details. The file size can be no larger than
     * 1MB.</p>
     */
    inline StartSchemaExtensionRequest& WithLdifContent(Aws::String&& value) { SetLdifContent(std::move(value)); return *this;}

    /**
     * <p>The LDIF file represented as a string. To construct the LdifContent string,
     * precede each line as it would be formatted in an ldif file with \n. See the
     * example request below for more details. The file size can be no larger than
     * 1MB.</p>
     */
    inline StartSchemaExtensionRequest& WithLdifContent(const char* value) { SetLdifContent(value); return *this;}


    /**
     * <p>A description of the schema extension.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the schema extension.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the schema extension.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the schema extension.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the schema extension.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the schema extension.</p>
     */
    inline StartSchemaExtensionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the schema extension.</p>
     */
    inline StartSchemaExtensionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the schema extension.</p>
     */
    inline StartSchemaExtensionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    bool m_createSnapshotBeforeSchemaExtension;
    bool m_createSnapshotBeforeSchemaExtensionHasBeenSet;

    Aws::String m_ldifContent;
    bool m_ldifContentHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
