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
    AWS_DIRECTORYSERVICE_API StartSchemaExtensionRequest() = default;

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
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    StartSchemaExtensionRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, creates a snapshot of the directory before applying the schema
     * extension.</p>
     */
    inline bool GetCreateSnapshotBeforeSchemaExtension() const { return m_createSnapshotBeforeSchemaExtension; }
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
    inline const Aws::String& GetLdifContent() const { return m_ldifContent; }
    inline bool LdifContentHasBeenSet() const { return m_ldifContentHasBeenSet; }
    template<typename LdifContentT = Aws::String>
    void SetLdifContent(LdifContentT&& value) { m_ldifContentHasBeenSet = true; m_ldifContent = std::forward<LdifContentT>(value); }
    template<typename LdifContentT = Aws::String>
    StartSchemaExtensionRequest& WithLdifContent(LdifContentT&& value) { SetLdifContent(std::forward<LdifContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the schema extension.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartSchemaExtensionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    bool m_createSnapshotBeforeSchemaExtension{false};
    bool m_createSnapshotBeforeSchemaExtensionHasBeenSet = false;

    Aws::String m_ldifContent;
    bool m_ldifContentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
