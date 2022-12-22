/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Information about the target Capacity Reservation or Capacity Reservation
   * group in which to run an Amazon EC2 instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the Capacity Reservation in which to run the instance. </p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }

    /**
     * <p> The ID of the Capacity Reservation in which to run the instance. </p>
     */
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }

    /**
     * <p> The ID of the Capacity Reservation in which to run the instance. </p>
     */
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = value; }

    /**
     * <p> The ID of the Capacity Reservation in which to run the instance. </p>
     */
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::move(value); }

    /**
     * <p> The ID of the Capacity Reservation in which to run the instance. </p>
     */
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId.assign(value); }

    /**
     * <p> The ID of the Capacity Reservation in which to run the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}

    /**
     * <p> The ID of the Capacity Reservation in which to run the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Capacity Reservation in which to run the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the Capacity Reservation resource group in
     * which to run the instance. </p>
     */
    inline const Aws::String& GetCapacityReservationResourceGroupArn() const{ return m_capacityReservationResourceGroupArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Capacity Reservation resource group in
     * which to run the instance. </p>
     */
    inline bool CapacityReservationResourceGroupArnHasBeenSet() const { return m_capacityReservationResourceGroupArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Capacity Reservation resource group in
     * which to run the instance. </p>
     */
    inline void SetCapacityReservationResourceGroupArn(const Aws::String& value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Capacity Reservation resource group in
     * which to run the instance. </p>
     */
    inline void SetCapacityReservationResourceGroupArn(Aws::String&& value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Capacity Reservation resource group in
     * which to run the instance. </p>
     */
    inline void SetCapacityReservationResourceGroupArn(const char* value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Capacity Reservation resource group in
     * which to run the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& WithCapacityReservationResourceGroupArn(const Aws::String& value) { SetCapacityReservationResourceGroupArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Capacity Reservation resource group in
     * which to run the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& WithCapacityReservationResourceGroupArn(Aws::String&& value) { SetCapacityReservationResourceGroupArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Capacity Reservation resource group in
     * which to run the instance. </p>
     */
    inline AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& WithCapacityReservationResourceGroupArn(const char* value) { SetCapacityReservationResourceGroupArn(value); return *this;}

  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_capacityReservationResourceGroupArn;
    bool m_capacityReservationResourceGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
