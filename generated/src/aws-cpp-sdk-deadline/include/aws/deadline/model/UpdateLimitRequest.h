/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class UpdateLimitRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API UpdateLimitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLimit"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the farm that contains the limit.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline UpdateLimitRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline UpdateLimitRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline UpdateLimitRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the limit to update.</p>
     */
    inline const Aws::String& GetLimitId() const{ return m_limitId; }
    inline bool LimitIdHasBeenSet() const { return m_limitIdHasBeenSet; }
    inline void SetLimitId(const Aws::String& value) { m_limitIdHasBeenSet = true; m_limitId = value; }
    inline void SetLimitId(Aws::String&& value) { m_limitIdHasBeenSet = true; m_limitId = std::move(value); }
    inline void SetLimitId(const char* value) { m_limitIdHasBeenSet = true; m_limitId.assign(value); }
    inline UpdateLimitRequest& WithLimitId(const Aws::String& value) { SetLimitId(value); return *this;}
    inline UpdateLimitRequest& WithLimitId(Aws::String&& value) { SetLimitId(std::move(value)); return *this;}
    inline UpdateLimitRequest& WithLimitId(const char* value) { SetLimitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new display name of the limit.</p>  <p>This field can store
     * any content. Escape or encode this content before displaying it on a webpage or
     * any other system that might interpret the content of this field.</p>
     * 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateLimitRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateLimitRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateLimitRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description of the limit.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateLimitRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateLimitRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateLimitRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of resources constrained by this limit. When all of the
     * resources are in use, steps that require the limit won't be scheduled until the
     * resource is available.</p> <p>If more than the new maximum number is currently
     * in use, running jobs finish but no new jobs are started until the number of
     * resources in use is below the new maximum number.</p> <p>The
     * <code>maxCount</code> must not be 0. If the value is -1, there is no restriction
     * on the number of resources that can be acquired for this limit.</p>
     */
    inline int GetMaxCount() const{ return m_maxCount; }
    inline bool MaxCountHasBeenSet() const { return m_maxCountHasBeenSet; }
    inline void SetMaxCount(int value) { m_maxCountHasBeenSet = true; m_maxCount = value; }
    inline UpdateLimitRequest& WithMaxCount(int value) { SetMaxCount(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_limitId;
    bool m_limitIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_maxCount;
    bool m_maxCountHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
