/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/Platform.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class ImportVmImageRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API ImportVmImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportVmImage"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the base image that is created by the import process.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the base image that is created by the import process.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the base image that is created by the import process.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the base image that is created by the import process.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the base image that is created by the import process.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the base image that is created by the import process.</p>
     */
    inline ImportVmImageRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the base image that is created by the import process.</p>
     */
    inline ImportVmImageRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the base image that is created by the import process.</p>
     */
    inline ImportVmImageRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The semantic version to attach to the base image that was created during the
     * import process. This version follows the semantic version syntax.</p> 
     * <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }

    /**
     * <p>The semantic version to attach to the base image that was created during the
     * import process. This version follows the semantic version syntax.</p> 
     * <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }

    /**
     * <p>The semantic version to attach to the base image that was created during the
     * import process. This version follows the semantic version syntax.</p> 
     * <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }

    /**
     * <p>The semantic version to attach to the base image that was created during the
     * import process. This version follows the semantic version syntax.</p> 
     * <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }

    /**
     * <p>The semantic version to attach to the base image that was created during the
     * import process. This version follows the semantic version syntax.</p> 
     * <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }

    /**
     * <p>The semantic version to attach to the base image that was created during the
     * import process. This version follows the semantic version syntax.</p> 
     * <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline ImportVmImageRequest& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}

    /**
     * <p>The semantic version to attach to the base image that was created during the
     * import process. This version follows the semantic version syntax.</p> 
     * <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline ImportVmImageRequest& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}

    /**
     * <p>The semantic version to attach to the base image that was created during the
     * import process. This version follows the semantic version syntax.</p> 
     * <p>The semantic version has four nodes:
     * &lt;major&gt;.&lt;minor&gt;.&lt;patch&gt;/&lt;build&gt;. You can assign values
     * for the first three, and can filter on all of them.</p> <p> <b>Assignment:</b>
     * For the first three nodes you can assign any positive integer value, including
     * zero, with an upper limit of 2^30-1, or 1073741823 for each node. Image Builder
     * automatically assigns the build number to the fourth node.</p> <p>
     * <b>Patterns:</b> You can use any numeric pattern that adheres to the assignment
     * requirements for the nodes that you can assign. For example, you might choose a
     * software version pattern, such as 1.0.0, or a date, such as 2021.01.01.</p>
     * 
     */
    inline ImportVmImageRequest& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}


    /**
     * <p>The description for the base image that is created by the import process.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the base image that is created by the import process.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description for the base image that is created by the import process.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description for the base image that is created by the import process.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description for the base image that is created by the import process.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description for the base image that is created by the import process.</p>
     */
    inline ImportVmImageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the base image that is created by the import process.</p>
     */
    inline ImportVmImageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the base image that is created by the import process.</p>
     */
    inline ImportVmImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The operating system platform for the imported VM.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }

    /**
     * <p>The operating system platform for the imported VM.</p>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p>The operating system platform for the imported VM.</p>
     */
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p>The operating system platform for the imported VM.</p>
     */
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p>The operating system platform for the imported VM.</p>
     */
    inline ImportVmImageRequest& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}

    /**
     * <p>The operating system platform for the imported VM.</p>
     */
    inline ImportVmImageRequest& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p>The operating system version for the imported VM.</p>
     */
    inline const Aws::String& GetOsVersion() const{ return m_osVersion; }

    /**
     * <p>The operating system version for the imported VM.</p>
     */
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }

    /**
     * <p>The operating system version for the imported VM.</p>
     */
    inline void SetOsVersion(const Aws::String& value) { m_osVersionHasBeenSet = true; m_osVersion = value; }

    /**
     * <p>The operating system version for the imported VM.</p>
     */
    inline void SetOsVersion(Aws::String&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::move(value); }

    /**
     * <p>The operating system version for the imported VM.</p>
     */
    inline void SetOsVersion(const char* value) { m_osVersionHasBeenSet = true; m_osVersion.assign(value); }

    /**
     * <p>The operating system version for the imported VM.</p>
     */
    inline ImportVmImageRequest& WithOsVersion(const Aws::String& value) { SetOsVersion(value); return *this;}

    /**
     * <p>The operating system version for the imported VM.</p>
     */
    inline ImportVmImageRequest& WithOsVersion(Aws::String&& value) { SetOsVersion(std::move(value)); return *this;}

    /**
     * <p>The operating system version for the imported VM.</p>
     */
    inline ImportVmImageRequest& WithOsVersion(const char* value) { SetOsVersion(value); return *this;}


    /**
     * <p>The <code>importTaskId</code> (API) or <code>ImportTaskId</code> (CLI) from
     * the Amazon EC2 VM import process. Image Builder retrieves information from the
     * import process to pull in the AMI that is created from the VM source as the base
     * image for your recipe.</p>
     */
    inline const Aws::String& GetVmImportTaskId() const{ return m_vmImportTaskId; }

    /**
     * <p>The <code>importTaskId</code> (API) or <code>ImportTaskId</code> (CLI) from
     * the Amazon EC2 VM import process. Image Builder retrieves information from the
     * import process to pull in the AMI that is created from the VM source as the base
     * image for your recipe.</p>
     */
    inline bool VmImportTaskIdHasBeenSet() const { return m_vmImportTaskIdHasBeenSet; }

    /**
     * <p>The <code>importTaskId</code> (API) or <code>ImportTaskId</code> (CLI) from
     * the Amazon EC2 VM import process. Image Builder retrieves information from the
     * import process to pull in the AMI that is created from the VM source as the base
     * image for your recipe.</p>
     */
    inline void SetVmImportTaskId(const Aws::String& value) { m_vmImportTaskIdHasBeenSet = true; m_vmImportTaskId = value; }

    /**
     * <p>The <code>importTaskId</code> (API) or <code>ImportTaskId</code> (CLI) from
     * the Amazon EC2 VM import process. Image Builder retrieves information from the
     * import process to pull in the AMI that is created from the VM source as the base
     * image for your recipe.</p>
     */
    inline void SetVmImportTaskId(Aws::String&& value) { m_vmImportTaskIdHasBeenSet = true; m_vmImportTaskId = std::move(value); }

    /**
     * <p>The <code>importTaskId</code> (API) or <code>ImportTaskId</code> (CLI) from
     * the Amazon EC2 VM import process. Image Builder retrieves information from the
     * import process to pull in the AMI that is created from the VM source as the base
     * image for your recipe.</p>
     */
    inline void SetVmImportTaskId(const char* value) { m_vmImportTaskIdHasBeenSet = true; m_vmImportTaskId.assign(value); }

    /**
     * <p>The <code>importTaskId</code> (API) or <code>ImportTaskId</code> (CLI) from
     * the Amazon EC2 VM import process. Image Builder retrieves information from the
     * import process to pull in the AMI that is created from the VM source as the base
     * image for your recipe.</p>
     */
    inline ImportVmImageRequest& WithVmImportTaskId(const Aws::String& value) { SetVmImportTaskId(value); return *this;}

    /**
     * <p>The <code>importTaskId</code> (API) or <code>ImportTaskId</code> (CLI) from
     * the Amazon EC2 VM import process. Image Builder retrieves information from the
     * import process to pull in the AMI that is created from the VM source as the base
     * image for your recipe.</p>
     */
    inline ImportVmImageRequest& WithVmImportTaskId(Aws::String&& value) { SetVmImportTaskId(std::move(value)); return *this;}

    /**
     * <p>The <code>importTaskId</code> (API) or <code>ImportTaskId</code> (CLI) from
     * the Amazon EC2 VM import process. Image Builder retrieves information from the
     * import process to pull in the AMI that is created from the VM source as the base
     * image for your recipe.</p>
     */
    inline ImportVmImageRequest& WithVmImportTaskId(const char* value) { SetVmImportTaskId(value); return *this;}


    /**
     * <p>Tags that are attached to the import resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags that are attached to the import resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags that are attached to the import resources.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags that are attached to the import resources.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags that are attached to the import resources.</p>
     */
    inline ImportVmImageRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags that are attached to the import resources.</p>
     */
    inline ImportVmImageRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags that are attached to the import resources.</p>
     */
    inline ImportVmImageRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags that are attached to the import resources.</p>
     */
    inline ImportVmImageRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags that are attached to the import resources.</p>
     */
    inline ImportVmImageRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags that are attached to the import resources.</p>
     */
    inline ImportVmImageRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags that are attached to the import resources.</p>
     */
    inline ImportVmImageRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags that are attached to the import resources.</p>
     */
    inline ImportVmImageRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags that are attached to the import resources.</p>
     */
    inline ImportVmImageRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline ImportVmImageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline ImportVmImageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline ImportVmImageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_osVersion;
    bool m_osVersionHasBeenSet = false;

    Aws::String m_vmImportTaskId;
    bool m_vmImportTaskIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
