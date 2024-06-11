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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>The GET request to get a usage plan of a given plan identifier.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GetUsagePlanRequest">AWS
   * API Reference</a></p>
   */
  class GetUsagePlanRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API GetUsagePlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUsagePlan"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the UsagePlan resource to be retrieved.</p>
     */
    inline const Aws::String& GetUsagePlanId() const{ return m_usagePlanId; }
    inline bool UsagePlanIdHasBeenSet() const { return m_usagePlanIdHasBeenSet; }
    inline void SetUsagePlanId(const Aws::String& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = value; }
    inline void SetUsagePlanId(Aws::String&& value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId = std::move(value); }
    inline void SetUsagePlanId(const char* value) { m_usagePlanIdHasBeenSet = true; m_usagePlanId.assign(value); }
    inline GetUsagePlanRequest& WithUsagePlanId(const Aws::String& value) { SetUsagePlanId(value); return *this;}
    inline GetUsagePlanRequest& WithUsagePlanId(Aws::String&& value) { SetUsagePlanId(std::move(value)); return *this;}
    inline GetUsagePlanRequest& WithUsagePlanId(const char* value) { SetUsagePlanId(value); return *this;}
    ///@}
  private:

    Aws::String m_usagePlanId;
    bool m_usagePlanIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
