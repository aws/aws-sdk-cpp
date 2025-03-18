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
    AWS_CLOUDDIRECTORY_API UpgradePublishedSchemaRequest() = default;

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
    inline const Aws::String& GetDevelopmentSchemaArn() const { return m_developmentSchemaArn; }
    inline bool DevelopmentSchemaArnHasBeenSet() const { return m_developmentSchemaArnHasBeenSet; }
    template<typename DevelopmentSchemaArnT = Aws::String>
    void SetDevelopmentSchemaArn(DevelopmentSchemaArnT&& value) { m_developmentSchemaArnHasBeenSet = true; m_developmentSchemaArn = std::forward<DevelopmentSchemaArnT>(value); }
    template<typename DevelopmentSchemaArnT = Aws::String>
    UpgradePublishedSchemaRequest& WithDevelopmentSchemaArn(DevelopmentSchemaArnT&& value) { SetDevelopmentSchemaArn(std::forward<DevelopmentSchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the published schema to be upgraded.</p>
     */
    inline const Aws::String& GetPublishedSchemaArn() const { return m_publishedSchemaArn; }
    inline bool PublishedSchemaArnHasBeenSet() const { return m_publishedSchemaArnHasBeenSet; }
    template<typename PublishedSchemaArnT = Aws::String>
    void SetPublishedSchemaArn(PublishedSchemaArnT&& value) { m_publishedSchemaArnHasBeenSet = true; m_publishedSchemaArn = std::forward<PublishedSchemaArnT>(value); }
    template<typename PublishedSchemaArnT = Aws::String>
    UpgradePublishedSchemaRequest& WithPublishedSchemaArn(PublishedSchemaArnT&& value) { SetPublishedSchemaArn(std::forward<PublishedSchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the minor version of the published schema that will be created.
     * This parameter is NOT optional.</p>
     */
    inline const Aws::String& GetMinorVersion() const { return m_minorVersion; }
    inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }
    template<typename MinorVersionT = Aws::String>
    void SetMinorVersion(MinorVersionT&& value) { m_minorVersionHasBeenSet = true; m_minorVersion = std::forward<MinorVersionT>(value); }
    template<typename MinorVersionT = Aws::String>
    UpgradePublishedSchemaRequest& WithMinorVersion(MinorVersionT&& value) { SetMinorVersion(std::forward<MinorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used for testing whether the Development schema provided is backwards
     * compatible, or not, with the publish schema provided by the user to be upgraded.
     * If schema compatibility fails, an exception would be thrown else the call would
     * succeed. This parameter is optional and defaults to false.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
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

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
