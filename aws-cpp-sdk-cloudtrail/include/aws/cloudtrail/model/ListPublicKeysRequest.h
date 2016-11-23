/*
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
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>Requests the public keys for a specified time range.</p>
   */
  class AWS_CLOUDTRAIL_API ListPublicKeysRequest : public CloudTrailRequest
  {
  public:
    ListPublicKeysRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Optionally specifies, in UTC, the start of the time range to look up public
     * keys for CloudTrail digest files. If not specified, the current time is used,
     * and the current public key is returned.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Optionally specifies, in UTC, the start of the time range to look up public
     * keys for CloudTrail digest files. If not specified, the current time is used,
     * and the current public key is returned.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Optionally specifies, in UTC, the start of the time range to look up public
     * keys for CloudTrail digest files. If not specified, the current time is used,
     * and the current public key is returned.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Optionally specifies, in UTC, the start of the time range to look up public
     * keys for CloudTrail digest files. If not specified, the current time is used,
     * and the current public key is returned.</p>
     */
    inline ListPublicKeysRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Optionally specifies, in UTC, the start of the time range to look up public
     * keys for CloudTrail digest files. If not specified, the current time is used,
     * and the current public key is returned.</p>
     */
    inline ListPublicKeysRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(value); return *this;}

    /**
     * <p>Optionally specifies, in UTC, the end of the time range to look up public
     * keys for CloudTrail digest files. If not specified, the current time is
     * used.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Optionally specifies, in UTC, the end of the time range to look up public
     * keys for CloudTrail digest files. If not specified, the current time is
     * used.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>Optionally specifies, in UTC, the end of the time range to look up public
     * keys for CloudTrail digest files. If not specified, the current time is
     * used.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>Optionally specifies, in UTC, the end of the time range to look up public
     * keys for CloudTrail digest files. If not specified, the current time is
     * used.</p>
     */
    inline ListPublicKeysRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Optionally specifies, in UTC, the end of the time range to look up public
     * keys for CloudTrail digest files. If not specified, the current time is
     * used.</p>
     */
    inline ListPublicKeysRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListPublicKeysRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListPublicKeysRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListPublicKeysRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
