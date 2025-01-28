/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class CreateLimitRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API CreateLimitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLimit"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateLimitRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateLimitRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateLimitRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the limit.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateLimitRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateLimitRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateLimitRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specify as the <code>name</code> in the
     * <code>amounts</code> field of the <code>hostRequirements</code> in a step of a
     * job template to declare the limit requirement.</p>
     */
    inline const Aws::String& GetAmountRequirementName() const{ return m_amountRequirementName; }
    inline bool AmountRequirementNameHasBeenSet() const { return m_amountRequirementNameHasBeenSet; }
    inline void SetAmountRequirementName(const Aws::String& value) { m_amountRequirementNameHasBeenSet = true; m_amountRequirementName = value; }
    inline void SetAmountRequirementName(Aws::String&& value) { m_amountRequirementNameHasBeenSet = true; m_amountRequirementName = std::move(value); }
    inline void SetAmountRequirementName(const char* value) { m_amountRequirementNameHasBeenSet = true; m_amountRequirementName.assign(value); }
    inline CreateLimitRequest& WithAmountRequirementName(const Aws::String& value) { SetAmountRequirementName(value); return *this;}
    inline CreateLimitRequest& WithAmountRequirementName(Aws::String&& value) { SetAmountRequirementName(std::move(value)); return *this;}
    inline CreateLimitRequest& WithAmountRequirementName(const char* value) { SetAmountRequirementName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of resources constrained by this limit. When all of the
     * resources are in use, steps that require the limit won't be scheduled until the
     * resource is available.</p> <p>The <code>maxCount</code> must not be 0. If the
     * value is -1, there is no restriction on the number of resources that can be
     * acquired for this limit.</p>
     */
    inline int GetMaxCount() const{ return m_maxCount; }
    inline bool MaxCountHasBeenSet() const { return m_maxCountHasBeenSet; }
    inline void SetMaxCount(int value) { m_maxCountHasBeenSet = true; m_maxCount = value; }
    inline CreateLimitRequest& WithMaxCount(int value) { SetMaxCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID of the farm that contains the limit.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline CreateLimitRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline CreateLimitRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline CreateLimitRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the limit. A description helps you identify the purpose of
     * the limit.</p>  <p>This field can store any content. Escape or encode
     * this content before displaying it on a webpage or any other system that might
     * interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateLimitRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateLimitRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateLimitRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_amountRequirementName;
    bool m_amountRequirementNameHasBeenSet = false;

    int m_maxCount;
    bool m_maxCountHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
