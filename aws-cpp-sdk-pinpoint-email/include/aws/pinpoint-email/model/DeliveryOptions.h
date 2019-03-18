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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Used to associate a configuration set with a dedicated IP pool.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/DeliveryOptions">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API DeliveryOptions
  {
  public:
    DeliveryOptions();
    DeliveryOptions(Aws::Utils::Json::JsonView jsonValue);
    DeliveryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline const Aws::String& GetSendingPoolName() const{ return m_sendingPoolName; }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline bool SendingPoolNameHasBeenSet() const { return m_sendingPoolNameHasBeenSet; }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline void SetSendingPoolName(const Aws::String& value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName = value; }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline void SetSendingPoolName(Aws::String&& value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName = std::move(value); }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline void SetSendingPoolName(const char* value) { m_sendingPoolNameHasBeenSet = true; m_sendingPoolName.assign(value); }

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline DeliveryOptions& WithSendingPoolName(const Aws::String& value) { SetSendingPoolName(value); return *this;}

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline DeliveryOptions& WithSendingPoolName(Aws::String&& value) { SetSendingPoolName(std::move(value)); return *this;}

    /**
     * <p>The name of the dedicated IP pool that you want to associate with the
     * configuration set.</p>
     */
    inline DeliveryOptions& WithSendingPoolName(const char* value) { SetSendingPoolName(value); return *this;}

  private:

    Aws::String m_sendingPoolName;
    bool m_sendingPoolNameHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
