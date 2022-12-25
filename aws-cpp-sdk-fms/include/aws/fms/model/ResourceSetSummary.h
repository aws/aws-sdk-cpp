/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline ResourceSetSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline ResourceSetSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the resource set. This ID is returned in the
     * responses to create and list commands. You provide it to operations like update
     * and delete.</p>
     */
    inline ResourceSetSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline ResourceSetSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline ResourceSetSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the resource set. You can't change the name of a
     * resource set after you create it.</p>
     */
    inline ResourceSetSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the resource set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the resource set.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the resource set.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the resource set.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the resource set.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the resource set.</p>
     */
    inline ResourceSetSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the resource set.</p>
     */
    inline ResourceSetSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the resource set.</p>
     */
    inline ResourceSetSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline ResourceSetSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The last time that the resource set was changed.</p>
     */
    inline ResourceSetSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
