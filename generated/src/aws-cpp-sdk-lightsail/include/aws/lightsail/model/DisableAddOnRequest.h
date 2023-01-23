/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/lightsail/model/AddOnType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class DisableAddOnRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API DisableAddOnRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableAddOn"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The add-on type to disable.</p>
     */
    inline const AddOnType& GetAddOnType() const{ return m_addOnType; }

    /**
     * <p>The add-on type to disable.</p>
     */
    inline bool AddOnTypeHasBeenSet() const { return m_addOnTypeHasBeenSet; }

    /**
     * <p>The add-on type to disable.</p>
     */
    inline void SetAddOnType(const AddOnType& value) { m_addOnTypeHasBeenSet = true; m_addOnType = value; }

    /**
     * <p>The add-on type to disable.</p>
     */
    inline void SetAddOnType(AddOnType&& value) { m_addOnTypeHasBeenSet = true; m_addOnType = std::move(value); }

    /**
     * <p>The add-on type to disable.</p>
     */
    inline DisableAddOnRequest& WithAddOnType(const AddOnType& value) { SetAddOnType(value); return *this;}

    /**
     * <p>The add-on type to disable.</p>
     */
    inline DisableAddOnRequest& WithAddOnType(AddOnType&& value) { SetAddOnType(std::move(value)); return *this;}


    /**
     * <p>The name of the source resource for which to disable the add-on.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the source resource for which to disable the add-on.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the source resource for which to disable the add-on.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the source resource for which to disable the add-on.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the source resource for which to disable the add-on.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the source resource for which to disable the add-on.</p>
     */
    inline DisableAddOnRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the source resource for which to disable the add-on.</p>
     */
    inline DisableAddOnRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the source resource for which to disable the add-on.</p>
     */
    inline DisableAddOnRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    AddOnType m_addOnType;
    bool m_addOnTypeHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
