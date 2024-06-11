/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
   * interval.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsageRequest">AWS
   * API Reference</a></p>
   */
  class GetUsageRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetUsageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUsage"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Id of the usage plan associated with the usage data.</p>
     */
    inline const Aws::String& GetUsagePlanId() const{ return m_usagePlanId; }
    inline bool UsagePlanIdHasBeenSet() const { return m_usagePlanIdHasBeenSet; }
    inline void SetUsagePlanId(const Aws::String& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }
    inline void SetUsagePlanId(Aws::String&& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = std::move(value); }
    inline void SetUsagePlanId(const char* value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId.assign(value); }
    inline GetUsageRequest& WithUsagePlanId(const Aws::String& value) { SetUsagePlanId(value); return *this;}
    inline GetUsageRequest& WithUsagePlanId(Aws::String&& value) { SetUsagePlanId(std::move(value)); return *this;}
    inline GetUsageRequest& WithUsagePlanId(const char* value) { SetUsagePlanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Id of the API key associated with the resultant usage data.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }
    inline GetUsageRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}
    inline GetUsageRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}
    inline GetUsageRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The starting date (e.g., 2016-01-01) of the usage data.</p>
     */
    inline const Aws::String& GetStartDate() const{ return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    inline void SetStartDate(const Aws::String& value) { m_startDateHasBeenSet = true; m_startDate = value; }
    inline void SetStartDate(Aws::String&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }
    inline void SetStartDate(const char* value) { m_startDateHasBeenSet = true; m_startDate.assign(value); }
    inline GetUsageRequest& WithStartDate(const Aws::String& value) { SetStartDate(value); return *this;}
    inline GetUsageRequest& WithStartDate(Aws::String&& value) { SetStartDate(std::move(value)); return *this;}
    inline GetUsageRequest& WithStartDate(const char* value) { SetStartDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ending date (e.g., 2016-12-31) of the usage data.</p>
     */
    inline const Aws::String& GetEndDate() const{ return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    inline void SetEndDate(const Aws::String& value) { m_endDateHasBeenSet = true; m_endDate = value; }
    inline void SetEndDate(Aws::String&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }
    inline void SetEndDate(const char* value) { m_endDateHasBeenSet = true; m_endDate.assign(value); }
    inline GetUsageRequest& WithEndDate(const Aws::String& value) { SetEndDate(value); return *this;}
    inline GetUsageRequest& WithEndDate(Aws::String&& value) { SetEndDate(std::move(value)); return *this;}
    inline GetUsageRequest& WithEndDate(const char* value) { SetEndDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current pagination position in the paged result set.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }
    inline GetUsageRequest& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}
    inline GetUsageRequest& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}
    inline GetUsageRequest& WithPosition(const char* value) { SetPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of returned results per page. The default value is 25 and
     * the maximum value is 500.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline GetUsageRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}
  private:

    Aws::String m_usagePlanId;
    bool m_usagePlanIdHasBeenSet = false;

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::String m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::String m_endDate;
    bool m_endDateHasBeenSet = false;

    Aws::String m_position;
    bool m_positionHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
