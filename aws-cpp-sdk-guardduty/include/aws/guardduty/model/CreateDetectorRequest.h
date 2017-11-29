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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

  /**
   * CreateDetector request body.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CreateDetectorRequest">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API CreateDetectorRequest : public GuardDutyRequest
  {
  public:
    CreateDetectorRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDetector"; }

    Aws::String SerializePayload() const override;


    /**
     * A boolean value that specifies whether the detector is to be enabled.
     */
    inline bool GetEnable() const{ return m_enable; }

    /**
     * A boolean value that specifies whether the detector is to be enabled.
     */
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }

    /**
     * A boolean value that specifies whether the detector is to be enabled.
     */
    inline CreateDetectorRequest& WithEnable(bool value) { SetEnable(value); return *this;}

  private:

    bool m_enable;
    bool m_enableHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
