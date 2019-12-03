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
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class AWS_OUTPOSTS_API CreateOutpostRequest : public OutpostsRequest
  {
  public:
    CreateOutpostRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOutpost"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CreateOutpostRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CreateOutpostRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CreateOutpostRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline CreateOutpostRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline CreateOutpostRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline CreateOutpostRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    
    inline CreateOutpostRequest& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    
    inline CreateOutpostRequest& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    
    inline CreateOutpostRequest& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    
    inline CreateOutpostRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    
    inline CreateOutpostRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    
    inline CreateOutpostRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    
    inline CreateOutpostRequest& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    
    inline CreateOutpostRequest& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    
    inline CreateOutpostRequest& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
