/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_IOT_API BillingGroupProperties
  {
  public:
    BillingGroupProperties();
    BillingGroupProperties(Aws::Utils::Json::JsonView jsonValue);
    BillingGroupProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the billing group.</p>
     */
    inline const Aws::String& GetBillingGroupDescription() const{ return m_billingGroupDescription; }

    /**
     * <p>The description of the billing group.</p>
     */
    inline bool BillingGroupDescriptionHasBeenSet() const { return m_billingGroupDescriptionHasBeenSet; }

    /**
     * <p>The description of the billing group.</p>
     */
    inline void SetBillingGroupDescription(const Aws::String& value) { m_billingGroupDescriptionHasBeenSet = true; m_billingGroupDescription = value; }

    /**
     * <p>The description of the billing group.</p>
     */
    inline void SetBillingGroupDescription(Aws::String&& value) { m_billingGroupDescriptionHasBeenSet = true; m_billingGroupDescription = std::move(value); }

    /**
     * <p>The description of the billing group.</p>
     */
    inline void SetBillingGroupDescription(const char* value) { m_billingGroupDescriptionHasBeenSet = true; m_billingGroupDescription.assign(value); }

    /**
     * <p>The description of the billing group.</p>
     */
    inline BillingGroupProperties& WithBillingGroupDescription(const Aws::String& value) { SetBillingGroupDescription(value); return *this;}

    /**
     * <p>The description of the billing group.</p>
     */
    inline BillingGroupProperties& WithBillingGroupDescription(Aws::String&& value) { SetBillingGroupDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the billing group.</p>
     */
    inline BillingGroupProperties& WithBillingGroupDescription(const char* value) { SetBillingGroupDescription(value); return *this;}

  private:

    Aws::String m_billingGroupDescription;
    bool m_billingGroupDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
