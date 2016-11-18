﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class AWS_DIRECTORYSERVICE_API CancelSchemaExtensionRequest : public DirectoryServiceRequest
  {
  public:
    CancelSchemaExtensionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The identifier of the directory whose schema extension will be canceled.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory whose schema extension will be canceled.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory whose schema extension will be canceled.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory whose schema extension will be canceled.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory whose schema extension will be canceled.</p>
     */
    inline CancelSchemaExtensionRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory whose schema extension will be canceled.</p>
     */
    inline CancelSchemaExtensionRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory whose schema extension will be canceled.</p>
     */
    inline CancelSchemaExtensionRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the schema extension that will be canceled.</p>
     */
    inline const Aws::String& GetSchemaExtensionId() const{ return m_schemaExtensionId; }

    /**
     * <p>The identifier of the schema extension that will be canceled.</p>
     */
    inline void SetSchemaExtensionId(const Aws::String& value) { m_schemaExtensionIdHasBeenSet = true; m_schemaExtensionId = value; }

    /**
     * <p>The identifier of the schema extension that will be canceled.</p>
     */
    inline void SetSchemaExtensionId(Aws::String&& value) { m_schemaExtensionIdHasBeenSet = true; m_schemaExtensionId = value; }

    /**
     * <p>The identifier of the schema extension that will be canceled.</p>
     */
    inline void SetSchemaExtensionId(const char* value) { m_schemaExtensionIdHasBeenSet = true; m_schemaExtensionId.assign(value); }

    /**
     * <p>The identifier of the schema extension that will be canceled.</p>
     */
    inline CancelSchemaExtensionRequest& WithSchemaExtensionId(const Aws::String& value) { SetSchemaExtensionId(value); return *this;}

    /**
     * <p>The identifier of the schema extension that will be canceled.</p>
     */
    inline CancelSchemaExtensionRequest& WithSchemaExtensionId(Aws::String&& value) { SetSchemaExtensionId(value); return *this;}

    /**
     * <p>The identifier of the schema extension that will be canceled.</p>
     */
    inline CancelSchemaExtensionRequest& WithSchemaExtensionId(const char* value) { SetSchemaExtensionId(value); return *this;}

  private:
    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;
    Aws::String m_schemaExtensionId;
    bool m_schemaExtensionIdHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
