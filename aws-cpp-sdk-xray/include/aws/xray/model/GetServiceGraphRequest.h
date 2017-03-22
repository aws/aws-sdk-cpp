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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class AWS_XRAY_API GetServiceGraphRequest : public XRayRequest
  {
  public:
    GetServiceGraphRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>The start of the time frame for which to generate a graph.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time frame for which to generate a graph.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time frame for which to generate a graph.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time frame for which to generate a graph.</p>
     */
    inline GetServiceGraphRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time frame for which to generate a graph.</p>
     */
    inline GetServiceGraphRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(value); return *this;}

    /**
     * <p>The end of the time frame for which to generate a graph.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time frame for which to generate a graph.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time frame for which to generate a graph.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time frame for which to generate a graph.</p>
     */
    inline GetServiceGraphRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time frame for which to generate a graph.</p>
     */
    inline GetServiceGraphRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(value); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetServiceGraphRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetServiceGraphRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token. Not used.</p>
     */
    inline GetServiceGraphRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;
    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
