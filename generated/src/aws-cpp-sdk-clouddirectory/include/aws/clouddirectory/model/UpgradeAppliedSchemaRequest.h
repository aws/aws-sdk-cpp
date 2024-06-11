/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/CloudDirectoryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

  /**
   */
  class UpgradeAppliedSchemaRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API UpgradeAppliedSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpgradeAppliedSchema"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The revision of the published schema to upgrade the directory to.</p>
     */
    inline const Aws::String& GetPublishedSchemaArn() const{ return m_publishedSchemaArn; }
    inline bool PublishedSchemaArnHasBeenSet() const { return m_publishedSchemaArnHasBeenSet; }
    inline void SetPublishedSchemaArn(const Aws::String& value) { m_publishedSchemaArnHasBeenSet = true; m_publishedSchemaArn = value; }
    inline void SetPublishedSchemaArn(Aws::String&& value) { m_publishedSchemaArnHasBeenSet = true; m_publishedSchemaArn = std::move(value); }
    inline void SetPublishedSchemaArn(const char* value) { m_publishedSchemaArnHasBeenSet = true; m_publishedSchemaArn.assign(value); }
    inline UpgradeAppliedSchemaRequest& WithPublishedSchemaArn(const Aws::String& value) { SetPublishedSchemaArn(value); return *this;}
    inline UpgradeAppliedSchemaRequest& WithPublishedSchemaArn(Aws::String&& value) { SetPublishedSchemaArn(std::move(value)); return *this;}
    inline UpgradeAppliedSchemaRequest& WithPublishedSchemaArn(const char* value) { SetPublishedSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the directory to which the upgraded schema will be applied.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }
    inline bool DirectoryArnHasBeenSet() const { return m_directoryArnHasBeenSet; }
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArnHasBeenSet = true; m_directoryArn = value; }
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArnHasBeenSet = true; m_directoryArn = std::move(value); }
    inline void SetDirectoryArn(const char* value) { m_directoryArnHasBeenSet = true; m_directoryArn.assign(value); }
    inline UpgradeAppliedSchemaRequest& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}
    inline UpgradeAppliedSchemaRequest& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}
    inline UpgradeAppliedSchemaRequest& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used for testing whether the major version schemas are backward compatible or
     * not. If schema compatibility fails, an exception would be thrown else the call
     * would succeed but no changes will be saved. This parameter is optional.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline UpgradeAppliedSchemaRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_publishedSchemaArn;
    bool m_publishedSchemaArnHasBeenSet = false;

    Aws::String m_directoryArn;
    bool m_directoryArnHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
