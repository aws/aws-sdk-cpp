/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class DescribeFlywheelIterationRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API DescribeFlywheelIterationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFlywheelIteration"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetFlywheelArn() const { return m_flywheelArn; }
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }
    template<typename FlywheelArnT = Aws::String>
    void SetFlywheelArn(FlywheelArnT&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::forward<FlywheelArnT>(value); }
    template<typename FlywheelArnT = Aws::String>
    DescribeFlywheelIterationRequest& WithFlywheelArn(FlywheelArnT&& value) { SetFlywheelArn(std::forward<FlywheelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetFlywheelIterationId() const { return m_flywheelIterationId; }
    inline bool FlywheelIterationIdHasBeenSet() const { return m_flywheelIterationIdHasBeenSet; }
    template<typename FlywheelIterationIdT = Aws::String>
    void SetFlywheelIterationId(FlywheelIterationIdT&& value) { m_flywheelIterationIdHasBeenSet = true; m_flywheelIterationId = std::forward<FlywheelIterationIdT>(value); }
    template<typename FlywheelIterationIdT = Aws::String>
    DescribeFlywheelIterationRequest& WithFlywheelIterationId(FlywheelIterationIdT&& value) { SetFlywheelIterationId(std::forward<FlywheelIterationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flywheelArn;
    bool m_flywheelArnHasBeenSet = false;

    Aws::String m_flywheelIterationId;
    bool m_flywheelIterationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
