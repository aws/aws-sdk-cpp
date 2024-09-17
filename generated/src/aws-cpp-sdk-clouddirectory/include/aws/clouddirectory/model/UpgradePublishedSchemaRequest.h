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
  class UpgradePublishedSchemaRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API UpgradePublishedSchemaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpgradePublishedSchema"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the development schema with the changes used for the upgrade.</p>
     */
    inline const Aws::String& GetDevelopmentSchemaArn() const{ return m_developmentSchemaArn; }
    inline bool DevelopmentSchemaArnHasBeenSet() const { return m_developmentSchemaArnHasBeenSet; }
    inline void SetDevelopmentSchemaArn(const Aws::String& value) { m_developmentSchemaArnHasBeenSet = true; m_developmentSchemaArn = value; }
    inline void SetDevelopmentSchemaArn(Aws::String&& value) { m_developmentSchemaArnHasBeenSet = true; m_developmentSchemaArn = std::move(value); }
    inline void SetDevelopmentSchemaArn(const char* value) { m_developmentSchemaArnHasBeenSet = true; m_developmentSchemaArn.assign(value); }
    inline UpgradePublishedSchemaRequest& WithDevelopmentSchemaArn(const Aws::String& value) { SetDevelopmentSchemaArn(value); return *this;}
    inline UpgradePublishedSchemaRequest& WithDevelopmentSchemaArn(Aws::String&& value) { SetDevelopmentSchemaArn(std::move(value)); return *this;}
    inline UpgradePublishedSchemaRequest& WithDevelopmentSchemaArn(const char* value) { SetDevelopmentSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the published schema to be upgraded.</p>
     */
    inline const Aws::String& GetPublishedSchemaArn() const{ return m_publishedSchemaArn; }
    inline bool PublishedSchemaArnHasBeenSet() const { return m_publishedSchemaArnHasBeenSet; }
    inline void SetPublishedSchemaArn(const Aws::String& value) { m_publishedSchemaArnHasBeenSet = true; m_publishedSchemaArn = value; }
    inline void SetPublishedSchemaArn(Aws::String&& value) { m_publishedSchemaArnHasBeenSet = true; m_publishedSchemaArn = std::move(value); }
    inline void SetPublishedSchemaArn(const char* value) { m_publishedSchemaArnHasBeenSet = true; m_publishedSchemaArn.assign(value); }
    inline UpgradePublishedSchemaRequest& WithPublishedSchemaArn(const Aws::String& value) { SetPublishedSchemaArn(value); return *this;}
    inline UpgradePublishedSchemaRequest& WithPublishedSchemaArn(Aws::String&& value) { SetPublishedSchemaArn(std::move(value)); return *this;}
    inline UpgradePublishedSchemaRequest& WithPublishedSchemaArn(const char* value) { SetPublishedSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the minor version of the published schema that will be created.
     * This parameter is NOT optional.</p>
     */
    inline const Aws::String& GetMinorVersion() const{ return m_minorVersion; }
    inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }
    inline void SetMinorVersion(const Aws::String& value) { m_minorVersionHasBeenSet = true; m_minorVersion = value; }
    inline void SetMinorVersion(Aws::String&& value) { m_minorVersionHasBeenSet = true; m_minorVersion = std::move(value); }
    inline void SetMinorVersion(const char* value) { m_minorVersionHasBeenSet = true; m_minorVersion.assign(value); }
    inline UpgradePublishedSchemaRequest& WithMinorVersion(const Aws::String& value) { SetMinorVersion(value); return *this;}
    inline UpgradePublishedSchemaRequest& WithMinorVersion(Aws::String&& value) { SetMinorVersion(std::move(value)); return *this;}
    inline UpgradePublishedSchemaRequest& WithMinorVersion(const char* value) { SetMinorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used for testing whether the Development schema provided is backwards
     * compatible, or not, with the publish schema provided by the user to be upgraded.
     * If schema compatibility fails, an exception would be thrown else the call would
     * succeed. This parameter is optional and defaults to false.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline UpgradePublishedSchemaRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_developmentSchemaArn;
    bool m_developmentSchemaArnHasBeenSet = false;

    Aws::String m_publishedSchemaArn;
    bool m_publishedSchemaArnHasBeenSet = false;

    Aws::String m_minorVersion;
    bool m_minorVersionHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
