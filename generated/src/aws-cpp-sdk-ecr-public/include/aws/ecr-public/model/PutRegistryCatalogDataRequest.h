/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/ECRPublicRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

  /**
   */
  class PutRegistryCatalogDataRequest : public ECRPublicRequest
  {
  public:
    AWS_ECRPUBLIC_API PutRegistryCatalogDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRegistryCatalogData"; }

    AWS_ECRPUBLIC_API Aws::String SerializePayload() const override;

    AWS_ECRPUBLIC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The display name for a public registry. The display name is shown as the
     * repository author in the Amazon ECR Public Gallery.</p>  <p>The registry
     * display name is only publicly visible in the Amazon ECR Public Gallery for
     * verified accounts.</p> 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name for a public registry. The display name is shown as the
     * repository author in the Amazon ECR Public Gallery.</p>  <p>The registry
     * display name is only publicly visible in the Amazon ECR Public Gallery for
     * verified accounts.</p> 
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name for a public registry. The display name is shown as the
     * repository author in the Amazon ECR Public Gallery.</p>  <p>The registry
     * display name is only publicly visible in the Amazon ECR Public Gallery for
     * verified accounts.</p> 
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name for a public registry. The display name is shown as the
     * repository author in the Amazon ECR Public Gallery.</p>  <p>The registry
     * display name is only publicly visible in the Amazon ECR Public Gallery for
     * verified accounts.</p> 
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name for a public registry. The display name is shown as the
     * repository author in the Amazon ECR Public Gallery.</p>  <p>The registry
     * display name is only publicly visible in the Amazon ECR Public Gallery for
     * verified accounts.</p> 
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name for a public registry. The display name is shown as the
     * repository author in the Amazon ECR Public Gallery.</p>  <p>The registry
     * display name is only publicly visible in the Amazon ECR Public Gallery for
     * verified accounts.</p> 
     */
    inline PutRegistryCatalogDataRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name for a public registry. The display name is shown as the
     * repository author in the Amazon ECR Public Gallery.</p>  <p>The registry
     * display name is only publicly visible in the Amazon ECR Public Gallery for
     * verified accounts.</p> 
     */
    inline PutRegistryCatalogDataRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name for a public registry. The display name is shown as the
     * repository author in the Amazon ECR Public Gallery.</p>  <p>The registry
     * display name is only publicly visible in the Amazon ECR Public Gallery for
     * verified accounts.</p> 
     */
    inline PutRegistryCatalogDataRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
