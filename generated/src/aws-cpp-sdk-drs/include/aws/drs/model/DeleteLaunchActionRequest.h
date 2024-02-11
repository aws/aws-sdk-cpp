/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class DeleteLaunchActionRequest : public DrsRequest
  {
  public:
    AWS_DRS_API DeleteLaunchActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLaunchAction"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetActionId() const{ return m_actionId; }

    
    inline bool ActionIdHasBeenSet() const { return m_actionIdHasBeenSet; }

    
    inline void SetActionId(const Aws::String& value) { m_actionIdHasBeenSet = true; m_actionId = value; }

    
    inline void SetActionId(Aws::String&& value) { m_actionIdHasBeenSet = true; m_actionId = std::move(value); }

    
    inline void SetActionId(const char* value) { m_actionIdHasBeenSet = true; m_actionId.assign(value); }

    
    inline DeleteLaunchActionRequest& WithActionId(const Aws::String& value) { SetActionId(value); return *this;}

    
    inline DeleteLaunchActionRequest& WithActionId(Aws::String&& value) { SetActionId(std::move(value)); return *this;}

    
    inline DeleteLaunchActionRequest& WithActionId(const char* value) { SetActionId(value); return *this;}


    
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    
    inline DeleteLaunchActionRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    
    inline DeleteLaunchActionRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    
    inline DeleteLaunchActionRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

  private:

    Aws::String m_actionId;
    bool m_actionIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
