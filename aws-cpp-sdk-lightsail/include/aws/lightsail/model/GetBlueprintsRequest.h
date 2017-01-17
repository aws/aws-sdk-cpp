﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API GetBlueprintsRequest : public LightsailRequest
  {
  public:
    GetBlueprintsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>A Boolean value indicating whether to include inactive results in your
     * request.</p>
     */
    inline bool GetIncludeInactive() const{ return m_includeInactive; }

    /**
     * <p>A Boolean value indicating whether to include inactive results in your
     * request.</p>
     */
    inline void SetIncludeInactive(bool value) { m_includeInactiveHasBeenSet = true; m_includeInactive = value; }

    /**
     * <p>A Boolean value indicating whether to include inactive results in your
     * request.</p>
     */
    inline GetBlueprintsRequest& WithIncludeInactive(bool value) { SetIncludeInactive(value); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline GetBlueprintsRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline GetBlueprintsRequest& WithPageToken(Aws::String&& value) { SetPageToken(value); return *this;}

    /**
     * <p>A token used for advancing to the next page of results from your get
     * blueprints request.</p>
     */
    inline GetBlueprintsRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}

  private:
    bool m_includeInactive;
    bool m_includeInactiveHasBeenSet;
    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
