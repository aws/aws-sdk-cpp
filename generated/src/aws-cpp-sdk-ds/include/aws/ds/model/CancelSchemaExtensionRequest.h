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
  class CancelSchemaExtensionRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API CancelSchemaExtensionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelSchemaExtension"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the directory whose schema extension will be canceled.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline CancelSchemaExtensionRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline CancelSchemaExtensionRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline CancelSchemaExtensionRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the schema extension that will be canceled.</p>
     */
    inline const Aws::String& GetSchemaExtensionId() const{ return m_schemaExtensionId; }
    inline bool SchemaExtensionIdHasBeenSet() const { return m_schemaExtensionIdHasBeenSet; }
    inline void SetSchemaExtensionId(const Aws::String& value) { m_schemaExtensionIdHasBeenSet = true; m_schemaExtensionId = value; }
    inline void SetSchemaExtensionId(Aws::String&& value) { m_schemaExtensionIdHasBeenSet = true; m_schemaExtensionId = std::move(value); }
    inline void SetSchemaExtensionId(const char* value) { m_schemaExtensionIdHasBeenSet = true; m_schemaExtensionId.assign(value); }
    inline CancelSchemaExtensionRequest& WithSchemaExtensionId(const Aws::String& value) { SetSchemaExtensionId(value); return *this;}
    inline CancelSchemaExtensionRequest& WithSchemaExtensionId(Aws::String&& value) { SetSchemaExtensionId(std::move(value)); return *this;}
    inline CancelSchemaExtensionRequest& WithSchemaExtensionId(const char* value) { SetSchemaExtensionId(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_schemaExtensionId;
    bool m_schemaExtensionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
