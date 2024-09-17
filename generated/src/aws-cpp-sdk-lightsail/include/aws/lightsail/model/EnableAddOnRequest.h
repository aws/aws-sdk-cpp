/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/AddOnRequest.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class EnableAddOnRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API EnableAddOnRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableAddOn"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the source resource for which to enable or modify the add-on.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline EnableAddOnRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline EnableAddOnRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline EnableAddOnRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings representing the add-on to enable or modify.</p>
     */
    inline const AddOnRequest& GetAddOnRequest() const{ return m_addOnRequest; }
    inline bool AddOnRequestHasBeenSet() const { return m_addOnRequestHasBeenSet; }
    inline void SetAddOnRequest(const AddOnRequest& value) { m_addOnRequestHasBeenSet = true; m_addOnRequest = value; }
    inline void SetAddOnRequest(AddOnRequest&& value) { m_addOnRequestHasBeenSet = true; m_addOnRequest = std::move(value); }
    inline EnableAddOnRequest& WithAddOnRequest(const AddOnRequest& value) { SetAddOnRequest(value); return *this;}
    inline EnableAddOnRequest& WithAddOnRequest(AddOnRequest&& value) { SetAddOnRequest(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    AddOnRequest m_addOnRequest;
    bool m_addOnRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
