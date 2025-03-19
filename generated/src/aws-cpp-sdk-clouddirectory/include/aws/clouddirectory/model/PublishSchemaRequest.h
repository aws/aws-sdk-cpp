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
  class PublishSchemaRequest : public CloudDirectoryRequest
  {
  public:
    AWS_CLOUDDIRECTORY_API PublishSchemaRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PublishSchema"; }

    AWS_CLOUDDIRECTORY_API Aws::String SerializePayload() const override;

    AWS_CLOUDDIRECTORY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the development
     * schema. For more information, see <a>arns</a>.</p>
     */
    inline const Aws::String& GetDevelopmentSchemaArn() const { return m_developmentSchemaArn; }
    inline bool DevelopmentSchemaArnHasBeenSet() const { return m_developmentSchemaArnHasBeenSet; }
    template<typename DevelopmentSchemaArnT = Aws::String>
    void SetDevelopmentSchemaArn(DevelopmentSchemaArnT&& value) { m_developmentSchemaArnHasBeenSet = true; m_developmentSchemaArn = std::forward<DevelopmentSchemaArnT>(value); }
    template<typename DevelopmentSchemaArnT = Aws::String>
    PublishSchemaRequest& WithDevelopmentSchemaArn(DevelopmentSchemaArnT&& value) { SetDevelopmentSchemaArn(std::forward<DevelopmentSchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major version under which the schema will be published. Schemas have both
     * a major and minor version associated with them.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    PublishSchemaRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minor version under which the schema will be published. This parameter is
     * recommended. Schemas have both a major and minor version associated with
     * them.</p>
     */
    inline const Aws::String& GetMinorVersion() const { return m_minorVersion; }
    inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }
    template<typename MinorVersionT = Aws::String>
    void SetMinorVersion(MinorVersionT&& value) { m_minorVersionHasBeenSet = true; m_minorVersion = std::forward<MinorVersionT>(value); }
    template<typename MinorVersionT = Aws::String>
    PublishSchemaRequest& WithMinorVersion(MinorVersionT&& value) { SetMinorVersion(std::forward<MinorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name under which the schema will be published. If this is not
     * provided, the development schema is considered.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PublishSchemaRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_developmentSchemaArn;
    bool m_developmentSchemaArnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_minorVersion;
    bool m_minorVersionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
