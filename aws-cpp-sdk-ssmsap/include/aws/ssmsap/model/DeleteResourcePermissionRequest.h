﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssmsap/SsmSap_EXPORTS.h>
#include <aws/ssmsap/SsmSapRequest.h>
#include <aws/ssmsap/model/PermissionActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SsmSap
{
namespace Model
{

  /**
   */
  class AWS_SSMSAP_API DeleteResourcePermissionRequest : public SsmSapRequest
  {
  public:
    DeleteResourcePermissionRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<DeleteResourcePermissionRequest> Clone() const
    {
      return Aws::MakeUnique<DeleteResourcePermissionRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePermission"; }

    Aws::String SerializePayload() const override;


    /**
     * <p/>
     */
    inline const PermissionActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p/>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetActionType(const PermissionActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p/>
     */
    inline void SetActionType(PermissionActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p/>
     */
    inline DeleteResourcePermissionRequest& WithActionType(const PermissionActionType& value) { SetActionType(value); return *this;}

    /**
     * <p/>
     */
    inline DeleteResourcePermissionRequest& WithActionType(PermissionActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetSourceResourceArn() const{ return m_sourceResourceArn; }

    /**
     * <p/>
     */
    inline bool SourceResourceArnHasBeenSet() const { return m_sourceResourceArnHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSourceResourceArn(const Aws::String& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = value; }

    /**
     * <p/>
     */
    inline void SetSourceResourceArn(Aws::String&& value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn = std::move(value); }

    /**
     * <p/>
     */
    inline void SetSourceResourceArn(const char* value) { m_sourceResourceArnHasBeenSet = true; m_sourceResourceArn.assign(value); }

    /**
     * <p/>
     */
    inline DeleteResourcePermissionRequest& WithSourceResourceArn(const Aws::String& value) { SetSourceResourceArn(value); return *this;}

    /**
     * <p/>
     */
    inline DeleteResourcePermissionRequest& WithSourceResourceArn(Aws::String&& value) { SetSourceResourceArn(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DeleteResourcePermissionRequest& WithSourceResourceArn(const char* value) { SetSourceResourceArn(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p/>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p/>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p/>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p/>
     */
    inline DeleteResourcePermissionRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p/>
     */
    inline DeleteResourcePermissionRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DeleteResourcePermissionRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    PermissionActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    Aws::String m_sourceResourceArn;
    bool m_sourceResourceArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
