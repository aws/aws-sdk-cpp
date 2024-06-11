/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/RegistryStatus.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure containing the details for a registry.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RegistryListItem">AWS
   * API Reference</a></p>
   */
  class RegistryListItem
  {
  public:
    AWS_GLUE_API RegistryListItem();
    AWS_GLUE_API RegistryListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API RegistryListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the registry.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }
    inline bool RegistryNameHasBeenSet() const { return m_registryNameHasBeenSet; }
    inline void SetRegistryName(const Aws::String& value) { m_registryNameHasBeenSet = true; m_registryName = value; }
    inline void SetRegistryName(Aws::String&& value) { m_registryNameHasBeenSet = true; m_registryName = std::move(value); }
    inline void SetRegistryName(const char* value) { m_registryNameHasBeenSet = true; m_registryName.assign(value); }
    inline RegistryListItem& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}
    inline RegistryListItem& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}
    inline RegistryListItem& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }
    inline bool RegistryArnHasBeenSet() const { return m_registryArnHasBeenSet; }
    inline void SetRegistryArn(const Aws::String& value) { m_registryArnHasBeenSet = true; m_registryArn = value; }
    inline void SetRegistryArn(Aws::String&& value) { m_registryArnHasBeenSet = true; m_registryArn = std::move(value); }
    inline void SetRegistryArn(const char* value) { m_registryArnHasBeenSet = true; m_registryArn.assign(value); }
    inline RegistryListItem& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}
    inline RegistryListItem& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}
    inline RegistryListItem& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the registry.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RegistryListItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RegistryListItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RegistryListItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the registry.</p>
     */
    inline const RegistryStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RegistryStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RegistryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RegistryListItem& WithStatus(const RegistryStatus& value) { SetStatus(value); return *this;}
    inline RegistryListItem& WithStatus(RegistryStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data the registry was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::String& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::String&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline void SetCreatedTime(const char* value) { m_createdTimeHasBeenSet = true; m_createdTime.assign(value); }
    inline RegistryListItem& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}
    inline RegistryListItem& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}
    inline RegistryListItem& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the registry was updated.</p>
     */
    inline const Aws::String& GetUpdatedTime() const{ return m_updatedTime; }
    inline bool UpdatedTimeHasBeenSet() const { return m_updatedTimeHasBeenSet; }
    inline void SetUpdatedTime(const Aws::String& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = value; }
    inline void SetUpdatedTime(Aws::String&& value) { m_updatedTimeHasBeenSet = true; m_updatedTime = std::move(value); }
    inline void SetUpdatedTime(const char* value) { m_updatedTimeHasBeenSet = true; m_updatedTime.assign(value); }
    inline RegistryListItem& WithUpdatedTime(const Aws::String& value) { SetUpdatedTime(value); return *this;}
    inline RegistryListItem& WithUpdatedTime(Aws::String&& value) { SetUpdatedTime(std::move(value)); return *this;}
    inline RegistryListItem& WithUpdatedTime(const char* value) { SetUpdatedTime(value); return *this;}
    ///@}
  private:

    Aws::String m_registryName;
    bool m_registryNameHasBeenSet = false;

    Aws::String m_registryArn;
    bool m_registryArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RegistryStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_updatedTime;
    bool m_updatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
