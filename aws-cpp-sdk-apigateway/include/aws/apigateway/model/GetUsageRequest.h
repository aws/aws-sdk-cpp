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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The GET request to get the usage data of a usage plan in a specified time
   * interval.</p>
   */
  class AWS_APIGATEWAY_API GetUsageRequest : public APIGatewayRequest
  {
  public:
    GetUsageRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The Id of the usage plan associated with the usage data.</p>
     */
    inline const Aws::String& GetUsagePlanId() const{ return m_usagePlanId; }

    /**
     * <p>The Id of the usage plan associated with the usage data.</p>
     */
    inline void SetUsagePlanId(const Aws::String& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }

    /**
     * <p>The Id of the usage plan associated with the usage data.</p>
     */
    inline void SetUsagePlanId(Aws::String&& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }

    /**
     * <p>The Id of the usage plan associated with the usage data.</p>
     */
    inline void SetUsagePlanId(const char* value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId.assign(value); }

    /**
     * <p>The Id of the usage plan associated with the usage data.</p>
     */
    inline GetUsageRequest& WithUsagePlanId(const Aws::String& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The Id of the usage plan associated with the usage data.</p>
     */
    inline GetUsageRequest& WithUsagePlanId(Aws::String&& value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The Id of the usage plan associated with the usage data.</p>
     */
    inline GetUsageRequest& WithUsagePlanId(const char* value) { SetUsagePlanId(value); return *this;}

    /**
     * <p>The Id of the API key associated with the resultant usage data.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The Id of the API key associated with the resultant usage data.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The Id of the API key associated with the resultant usage data.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The Id of the API key associated with the resultant usage data.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The Id of the API key associated with the resultant usage data.</p>
     */
    inline GetUsageRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Id of the API key associated with the resultant usage data.</p>
     */
    inline GetUsageRequest& WithKeyId(Aws::String&& value) { SetKeyId(value); return *this;}

    /**
     * <p>The Id of the API key associated with the resultant usage data.</p>
     */
    inline GetUsageRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}

    /**
     * <p>The starting date (e.g., 2016-01-01) of the usage data.</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The starting date (e.g., 2016-01-01) of the usage data.</p>
     */
    inline void SetStartDate(const Aws::String& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The starting date (e.g., 2016-01-01) of the usage data.</p>
     */
    inline void SetStartDate(Aws::String&& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The starting date (e.g., 2016-01-01) of the usage data.</p>
     */
    inline void SetStartDate(const char* value) { m_startDateHasBeenSet = true; m_startDate.assign(value); }

    /**
     * <p>The starting date (e.g., 2016-01-01) of the usage data.</p>
     */
    inline GetUsageRequest& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}

    /**
     * <p>The starting date (e.g., 2016-01-01) of the usage data.</p>
     */
    inline GetUsageRequest& WithStartDate(Aws::String&& value) { SetStartDate(value); return *this;}

    /**
     * <p>The starting date (e.g., 2016-01-01) of the usage data.</p>
     */
    inline GetUsageRequest& WithStartDate(const char* value) { SetStartDate(value); return *this;}

    /**
     * <p>The ending date (e.g., 2016-12-31) of the usage data.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The ending date (e.g., 2016-12-31) of the usage data.</p>
     */
    inline void SetEndDate(const Aws::String& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The ending date (e.g., 2016-12-31) of the usage data.</p>
     */
    inline void SetEndDate(Aws::String&& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The ending date (e.g., 2016-12-31) of the usage data.</p>
     */
    inline void SetEndDate(const char* value) { m_endDateHasBeenSet = true; m_endDate.assign(value); }

    /**
     * <p>The ending date (e.g., 2016-12-31) of the usage data.</p>
     */
    inline GetUsageRequest& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}

    /**
     * <p>The ending date (e.g., 2016-12-31) of the usage data.</p>
     */
    inline GetUsageRequest& WithEndDate(Aws::String&& value) { SetEndDate(value); return *this;}

    /**
     * <p>The ending date (e.g., 2016-12-31) of the usage data.</p>
     */
    inline GetUsageRequest& WithEndDate(const char* value) { SetEndDate(value); return *this;}

    /**
     * <p>Position</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }

    /**
     * <p>Position</p>
     */
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>Position</p>
     */
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>Position</p>
     */
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    /**
     * <p>Position</p>
     */
    inline GetUsageRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    /**
     * <p>Position</p>
     */
    inline GetUsageRequest& WithPosition(Aws::String&& value) { SetPosition(value); return *this;}

    /**
     * <p>Position</p>
     */
    inline GetUsageRequest& WithPosition(const char* value) { SetPosition(value); return *this;}

    /**
     * <p>The maximum number of results to be returned.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of results to be returned.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of results to be returned.</p>
     */
    inline GetUsageRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:
    Aws::String m_usagePlanId;
    bool m_usagePlanIdHasBeenSet;
    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;
    Aws::String m_startDate;
    bool m_startDateHasBeenSet;
    Aws::String m_endDate;
    bool m_endDateHasBeenSet;
    Aws::String m_position;
    bool m_positionHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
