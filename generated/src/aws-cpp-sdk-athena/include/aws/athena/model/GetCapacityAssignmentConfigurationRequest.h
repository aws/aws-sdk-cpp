/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class GetCapacityAssignmentConfigurationRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API GetCapacityAssignmentConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCapacityAssignmentConfiguration"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the capacity reservation to retrieve the capacity assignment
     * configuration for.</p>
     */
    inline const Aws::String& GetCapacityReservationName() const { return m_capacityReservationName; }
    inline bool CapacityReservationNameHasBeenSet() const { return m_capacityReservationNameHasBeenSet; }
    template<typename CapacityReservationNameT = Aws::String>
    void SetCapacityReservationName(CapacityReservationNameT&& value) { m_capacityReservationNameHasBeenSet = true; m_capacityReservationName = std::forward<CapacityReservationNameT>(value); }
    template<typename CapacityReservationNameT = Aws::String>
    GetCapacityAssignmentConfigurationRequest& WithCapacityReservationName(CapacityReservationNameT&& value) { SetCapacityReservationName(std::forward<CapacityReservationNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationName;
    bool m_capacityReservationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
