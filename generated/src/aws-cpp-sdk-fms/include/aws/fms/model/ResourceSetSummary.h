﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/fms/model/ResourceSetStatus.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Summarizes the resource sets used in a policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ResourceSetSummary">AWS
   * API Reference</a></p>
   */
  class ResourceSetSummary
  {
  public:
    AWS_FMS_API ResourceSetSummary();
    AWS_FMS_API ResourceSetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API ResourceSetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ResourceSetSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ResourceSetSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ResourceSetSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ResourceSetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ResourceSetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ResourceSetSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the resource set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ResourceSetSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ResourceSetSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ResourceSetSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline ResourceSetSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline ResourceSetSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the resource set is in or out of an admin's Region
     * scope.</p> <ul> <li> <p> <code>ACTIVE</code> - The administrator can manage and
     * delete the resource set.</p> </li> <li> <p> <code>OUT_OF_ADMIN_SCOPE</code> -
     * The administrator can view the resource set, but they can't edit or delete the
     * resource set. Existing protections stay in place. Any new resource that come
     * into scope of the resource set won't be protected.</p> </li> </ul>
     */
    inline const ResourceSetStatus& GetResourceSetStatus() const{ return m_resourceSetStatus; }
    inline bool ResourceSetStatusHasBeenSet() const { return m_resourceSetStatusHasBeenSet; }
    inline void SetResourceSetStatus(const ResourceSetStatus& value) { m_resourceSetStatusHasBeenSet = true; m_resourceSetStatus = value; }
    inline void SetResourceSetStatus(ResourceSetStatus&& value) { m_resourceSetStatusHasBeenSet = true; m_resourceSetStatus = std::move(value); }
    inline ResourceSetSummary& WithResourceSetStatus(const ResourceSetStatus& value) { SetResourceSetStatus(value); return *this;}
    inline ResourceSetSummary& WithResourceSetStatus(ResourceSetStatus&& value) { SetResourceSetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    ResourceSetStatus m_resourceSetStatus;
    bool m_resourceSetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
