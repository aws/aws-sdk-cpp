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
  class AWS_OUTPOSTS_API DeleteSiteRequest : public OutpostsRequest
  {
  public:
    DeleteSiteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSite"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    
    inline DeleteSiteRequest& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    
    inline DeleteSiteRequest& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    
    inline DeleteSiteRequest& WithSiteId(const char* value) { SetSiteId(value); return *this;}

  private:

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
