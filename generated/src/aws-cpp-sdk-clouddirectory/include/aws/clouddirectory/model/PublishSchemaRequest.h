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
    AWS_CLOUDDIRECTORY_API PublishSchemaRequest();

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
    inline const Aws::String& GetDevelopmentSchemaArn() const{ return m_developmentSchemaArn; }
    inline bool DevelopmentSchemaArnHasBeenSet() const { return m_developmentSchemaArnHasBeenSet; }
    inline void SetDevelopmentSchemaArn(const Aws::String& value) { m_developmentSchemaArnHasBeenSet = true; m_developmentSchemaArn = value; }
    inline void SetDevelopmentSchemaArn(Aws::String&& value) { m_developmentSchemaArnHasBeenSet = true; m_developmentSchemaArn = std::move(value); }
    inline void SetDevelopmentSchemaArn(const char* value) { m_developmentSchemaArnHasBeenSet = true; m_developmentSchemaArn.assign(value); }
    inline PublishSchemaRequest& WithDevelopmentSchemaArn(const Aws::String& value) { SetDevelopmentSchemaArn(value); return *this;}
    inline PublishSchemaRequest& WithDevelopmentSchemaArn(Aws::String&& value) { SetDevelopmentSchemaArn(std::move(value)); return *this;}
    inline PublishSchemaRequest& WithDevelopmentSchemaArn(const char* value) { SetDevelopmentSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major version under which the schema will be published. Schemas have both
     * a major and minor version associated with them.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline PublishSchemaRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline PublishSchemaRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline PublishSchemaRequest& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minor version under which the schema will be published. This parameter is
     * recommended. Schemas have both a major and minor version associated with
     * them.</p>
     */
    inline const Aws::String& GetMinorVersion() const{ return m_minorVersion; }
    inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }
    inline void SetMinorVersion(const Aws::String& value) { m_minorVersionHasBeenSet = true; m_minorVersion = value; }
    inline void SetMinorVersion(Aws::String&& value) { m_minorVersionHasBeenSet = true; m_minorVersion = std::move(value); }
    inline void SetMinorVersion(const char* value) { m_minorVersionHasBeenSet = true; m_minorVersion.assign(value); }
    inline PublishSchemaRequest& WithMinorVersion(const Aws::String& value) { SetMinorVersion(value); return *this;}
    inline PublishSchemaRequest& WithMinorVersion(Aws::String&& value) { SetMinorVersion(std::move(value)); return *this;}
    inline PublishSchemaRequest& WithMinorVersion(const char* value) { SetMinorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name under which the schema will be published. If this is not
     * provided, the development schema is considered.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PublishSchemaRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PublishSchemaRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PublishSchemaRequest& WithName(const char* value) { SetName(value); return *this;}
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
