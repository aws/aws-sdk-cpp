/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace RAM
{
namespace Model
{

  /**
   * <p>Describes a resource associated with a resource share.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/Resource">AWS API
   * Reference</a></p>
   */
  class AWS_RAM_API Resource
  {
  public:
    Resource();
    Resource(Aws::Utils::Json::JsonView jsonValue);
    Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline Resource& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline Resource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline Resource& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The resource type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The resource type.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The resource type.</p>
     */
    inline Resource& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline Resource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline Resource& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline Resource& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline Resource& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource share.</p>
     */
    inline Resource& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}


    /**
     * <p>The ARN of the resource group. This value is returned only if the resource is
     * a resource group.</p>
     */
    inline const Aws::String& GetResourceGroupArn() const{ return m_resourceGroupArn; }

    /**
     * <p>The ARN of the resource group. This value is returned only if the resource is
     * a resource group.</p>
     */
    inline bool ResourceGroupArnHasBeenSet() const { return m_resourceGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the resource group. This value is returned only if the resource is
     * a resource group.</p>
     */
    inline void SetResourceGroupArn(const Aws::String& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = value; }

    /**
     * <p>The ARN of the resource group. This value is returned only if the resource is
     * a resource group.</p>
     */
    inline void SetResourceGroupArn(Aws::String&& value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn = std::move(value); }

    /**
     * <p>The ARN of the resource group. This value is returned only if the resource is
     * a resource group.</p>
     */
    inline void SetResourceGroupArn(const char* value) { m_resourceGroupArnHasBeenSet = true; m_resourceGroupArn.assign(value); }

    /**
     * <p>The ARN of the resource group. This value is returned only if the resource is
     * a resource group.</p>
     */
    inline Resource& WithResourceGroupArn(const Aws::String& value) { SetResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN of the resource group. This value is returned only if the resource is
     * a resource group.</p>
     */
    inline Resource& WithResourceGroupArn(Aws::String&& value) { SetResourceGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource group. This value is returned only if the resource is
     * a resource group.</p>
     */
    inline Resource& WithResourceGroupArn(const char* value) { SetResourceGroupArn(value); return *this;}


    /**
     * <p>The status of the resource.</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the resource.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the resource.</p>
     */
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the resource.</p>
     */
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the resource.</p>
     */
    inline Resource& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the resource.</p>
     */
    inline Resource& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A message about the status of the resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A message about the status of the resource.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A message about the status of the resource.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A message about the status of the resource.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A message about the status of the resource.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A message about the status of the resource.</p>
     */
    inline Resource& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A message about the status of the resource.</p>
     */
    inline Resource& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message about the status of the resource.</p>
     */
    inline Resource& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The time when the resource was associated with the resource share.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the resource was associated with the resource share.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time when the resource was associated with the resource share.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when the resource was associated with the resource share.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when the resource was associated with the resource share.</p>
     */
    inline Resource& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the resource was associated with the resource share.</p>
     */
    inline Resource& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time when the association was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time when the association was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time when the association was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time when the association was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time when the association was last updated.</p>
     */
    inline Resource& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time when the association was last updated.</p>
     */
    inline Resource& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet;

    Aws::String m_resourceGroupArn;
    bool m_resourceGroupArnHasBeenSet;

    ResourceStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
