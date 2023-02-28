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
    AWS_COMPREHEND_API DescribeFlywheelIterationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFlywheelIteration"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p/>
     */
    inline const Aws::String& GetFlywheelArn() const{ return m_flywheelArn; }

    /**
     * <p/>
     */
    inline bool FlywheelArnHasBeenSet() const { return m_flywheelArnHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetFlywheelArn(const Aws::String& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = value; }

    /**
     * <p/>
     */
    inline void SetFlywheelArn(Aws::String&& value) { m_flywheelArnHasBeenSet = true; m_flywheelArn = std::move(value); }

    /**
     * <p/>
     */
    inline void SetFlywheelArn(const char* value) { m_flywheelArnHasBeenSet = true; m_flywheelArn.assign(value); }

    /**
     * <p/>
     */
    inline DescribeFlywheelIterationRequest& WithFlywheelArn(const Aws::String& value) { SetFlywheelArn(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeFlywheelIterationRequest& WithFlywheelArn(Aws::String&& value) { SetFlywheelArn(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DescribeFlywheelIterationRequest& WithFlywheelArn(const char* value) { SetFlywheelArn(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetFlywheelIterationId() const{ return m_flywheelIterationId; }

    /**
     * <p/>
     */
    inline bool FlywheelIterationIdHasBeenSet() const { return m_flywheelIterationIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetFlywheelIterationId(const Aws::String& value) { m_flywheelIterationIdHasBeenSet = true; m_flywheelIterationId = value; }

    /**
     * <p/>
     */
    inline void SetFlywheelIterationId(Aws::String&& value) { m_flywheelIterationIdHasBeenSet = true; m_flywheelIterationId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetFlywheelIterationId(const char* value) { m_flywheelIterationIdHasBeenSet = true; m_flywheelIterationId.assign(value); }

    /**
     * <p/>
     */
    inline DescribeFlywheelIterationRequest& WithFlywheelIterationId(const Aws::String& value) { SetFlywheelIterationId(value); return *this;}

    /**
     * <p/>
     */
    inline DescribeFlywheelIterationRequest& WithFlywheelIterationId(Aws::String&& value) { SetFlywheelIterationId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DescribeFlywheelIterationRequest& WithFlywheelIterationId(const char* value) { SetFlywheelIterationId(value); return *this;}

  private:

    Aws::String m_flywheelArn;
    bool m_flywheelArnHasBeenSet = false;

    Aws::String m_flywheelIterationId;
    bool m_flywheelIterationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
