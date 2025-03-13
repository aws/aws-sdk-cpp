/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
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
namespace Glacier
{
namespace Model
{

  /**
   * <p>The definition for a provisioned capacity unit.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ProvisionedCapacityDescription">AWS
   * API Reference</a></p>
   */
  class ProvisionedCapacityDescription
  {
  public:
    AWS_GLACIER_API ProvisionedCapacityDescription() = default;
    AWS_GLACIER_API ProvisionedCapacityDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API ProvisionedCapacityDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLACIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID that identifies the provisioned capacity unit.</p>
     */
    inline const Aws::String& GetCapacityId() const { return m_capacityId; }
    inline bool CapacityIdHasBeenSet() const { return m_capacityIdHasBeenSet; }
    template<typename CapacityIdT = Aws::String>
    void SetCapacityId(CapacityIdT&& value) { m_capacityIdHasBeenSet = true; m_capacityId = std::forward<CapacityIdT>(value); }
    template<typename CapacityIdT = Aws::String>
    ProvisionedCapacityDescription& WithCapacityId(CapacityIdT&& value) { SetCapacityId(std::forward<CapacityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the provisioned capacity unit was purchased, in Universal
     * Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::String>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::String>
    ProvisionedCapacityDescription& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the provisioned capacity unit expires, in Universal Coordinated
     * Time (UTC).</p>
     */
    inline const Aws::String& GetExpirationDate() const { return m_expirationDate; }
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }
    template<typename ExpirationDateT = Aws::String>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::String>
    ProvisionedCapacityDescription& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityId;
    bool m_capacityIdHasBeenSet = false;

    Aws::String m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::String m_expirationDate;
    bool m_expirationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
