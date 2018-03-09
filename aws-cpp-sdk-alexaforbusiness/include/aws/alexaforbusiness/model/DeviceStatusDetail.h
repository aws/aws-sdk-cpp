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
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/DeviceStatusDetailCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>Details of a device’s status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/DeviceStatusDetail">AWS
   * API Reference</a></p>
   */
  class AWS_ALEXAFORBUSINESS_API DeviceStatusDetail
  {
  public:
    DeviceStatusDetail();
    DeviceStatusDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    DeviceStatusDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The device status detail code.</p>
     */
    inline const DeviceStatusDetailCode& GetCode() const{ return m_code; }

    /**
     * <p>The device status detail code.</p>
     */
    inline void SetCode(const DeviceStatusDetailCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The device status detail code.</p>
     */
    inline void SetCode(DeviceStatusDetailCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The device status detail code.</p>
     */
    inline DeviceStatusDetail& WithCode(const DeviceStatusDetailCode& value) { SetCode(value); return *this;}

    /**
     * <p>The device status detail code.</p>
     */
    inline DeviceStatusDetail& WithCode(DeviceStatusDetailCode&& value) { SetCode(std::move(value)); return *this;}

  private:

    DeviceStatusDetailCode m_code;
    bool m_codeHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
