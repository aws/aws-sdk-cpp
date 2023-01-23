/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECRPublic
{
namespace Model
{

  /**
   * <p>The metadata for a public registry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-public-2020-10-30/RegistryCatalogData">AWS
   * API Reference</a></p>
   */
  class RegistryCatalogData
  {
  public:
    AWS_ECRPUBLIC_API RegistryCatalogData();
    AWS_ECRPUBLIC_API RegistryCatalogData(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API RegistryCatalogData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECRPUBLIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The display name for a public registry. This appears on the Amazon ECR Public
     * Gallery.</p>  <p>Only accounts that have the verified account badge
     * can have a registry display name.</p> 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name for a public registry. This appears on the Amazon ECR Public
     * Gallery.</p>  <p>Only accounts that have the verified account badge
     * can have a registry display name.</p> 
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name for a public registry. This appears on the Amazon ECR Public
     * Gallery.</p>  <p>Only accounts that have the verified account badge
     * can have a registry display name.</p> 
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name for a public registry. This appears on the Amazon ECR Public
     * Gallery.</p>  <p>Only accounts that have the verified account badge
     * can have a registry display name.</p> 
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name for a public registry. This appears on the Amazon ECR Public
     * Gallery.</p>  <p>Only accounts that have the verified account badge
     * can have a registry display name.</p> 
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name for a public registry. This appears on the Amazon ECR Public
     * Gallery.</p>  <p>Only accounts that have the verified account badge
     * can have a registry display name.</p> 
     */
    inline RegistryCatalogData& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name for a public registry. This appears on the Amazon ECR Public
     * Gallery.</p>  <p>Only accounts that have the verified account badge
     * can have a registry display name.</p> 
     */
    inline RegistryCatalogData& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name for a public registry. This appears on the Amazon ECR Public
     * Gallery.</p>  <p>Only accounts that have the verified account badge
     * can have a registry display name.</p> 
     */
    inline RegistryCatalogData& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
