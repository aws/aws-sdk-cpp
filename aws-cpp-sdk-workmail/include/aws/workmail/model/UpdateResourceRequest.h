/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/BookingOptions.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class AWS_WORKMAIL_API UpdateResourceRequest : public WorkMailRequest
  {
  public:
    UpdateResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResource"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline UpdateResourceRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline UpdateResourceRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier associated with the organization for which the resource is
     * updated.</p>
     */
    inline UpdateResourceRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The identifier of the resource to be updated.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the resource to be updated.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier of the resource to be updated.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the resource to be updated.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the resource to be updated.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the resource to be updated.</p>
     */
    inline UpdateResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the resource to be updated.</p>
     */
    inline UpdateResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource to be updated.</p>
     */
    inline UpdateResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline UpdateResourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline UpdateResourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource to be updated.</p>
     */
    inline UpdateResourceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The resource's booking options to be updated.</p>
     */
    inline const BookingOptions& GetBookingOptions() const{ return m_bookingOptions; }

    /**
     * <p>The resource's booking options to be updated.</p>
     */
    inline bool BookingOptionsHasBeenSet() const { return m_bookingOptionsHasBeenSet; }

    /**
     * <p>The resource's booking options to be updated.</p>
     */
    inline void SetBookingOptions(const BookingOptions& value) { m_bookingOptionsHasBeenSet = true; m_bookingOptions = value; }

    /**
     * <p>The resource's booking options to be updated.</p>
     */
    inline void SetBookingOptions(BookingOptions&& value) { m_bookingOptionsHasBeenSet = true; m_bookingOptions = std::move(value); }

    /**
     * <p>The resource's booking options to be updated.</p>
     */
    inline UpdateResourceRequest& WithBookingOptions(const BookingOptions& value) { SetBookingOptions(value); return *this;}

    /**
     * <p>The resource's booking options to be updated.</p>
     */
    inline UpdateResourceRequest& WithBookingOptions(BookingOptions&& value) { SetBookingOptions(std::move(value)); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    BookingOptions m_bookingOptions;
    bool m_bookingOptionsHasBeenSet;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
