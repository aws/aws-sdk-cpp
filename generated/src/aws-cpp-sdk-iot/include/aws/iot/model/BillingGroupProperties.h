/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The properties of a billing group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/BillingGroupProperties">AWS
   * API Reference</a></p>
   */
  class BillingGroupProperties
  {
  public:
    AWS_IOT_API BillingGroupProperties() = default;
    AWS_IOT_API BillingGroupProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API BillingGroupProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupDescription() const { return m_billingGroupDescription; }
    inline bool BillingGroupDescriptionHasBeenSet() const { return m_billingGroupDescriptionHasBeenSet; }
    template<typename BillingGroupDescriptionT = Aws::String>
    void SetBillingGroupDescription(BillingGroupDescriptionT&& value) { m_billingGroupDescriptionHasBeenSet = true; m_billingGroupDescription = std::forward<BillingGroupDescriptionT>(value); }
    template<typename BillingGroupDescriptionT = Aws::String>
    BillingGroupProperties& WithBillingGroupDescription(BillingGroupDescriptionT&& value) { SetBillingGroupDescription(std::forward<BillingGroupDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_billingGroupDescription;
    bool m_billingGroupDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
