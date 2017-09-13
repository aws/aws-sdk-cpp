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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents status information for a VPC peering connection. Status is
   * associated with a <a>VpcPeeringConnection</a> object. Status codes and messages
   * are provided from EC2 (<a
   * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_VpcPeeringConnectionStateReason.html">).</a>
   * Connection status information is also communicated as a fleet
   * <a>Event</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/VpcPeeringConnectionStatus">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API VpcPeeringConnectionStatus
  {
  public:
    VpcPeeringConnectionStatus();
    VpcPeeringConnectionStatus(const Aws::Utils::Json::JsonValue& jsonValue);
    VpcPeeringConnectionStatus& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Code indicating the status of a VPC peering connection.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>Code indicating the status of a VPC peering connection.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>Code indicating the status of a VPC peering connection.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>Code indicating the status of a VPC peering connection.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>Code indicating the status of a VPC peering connection.</p>
     */
    inline VpcPeeringConnectionStatus& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>Code indicating the status of a VPC peering connection.</p>
     */
    inline VpcPeeringConnectionStatus& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>Code indicating the status of a VPC peering connection.</p>
     */
    inline VpcPeeringConnectionStatus& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>Additional messaging associated with the connection status. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Additional messaging associated with the connection status. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Additional messaging associated with the connection status. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Additional messaging associated with the connection status. </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Additional messaging associated with the connection status. </p>
     */
    inline VpcPeeringConnectionStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Additional messaging associated with the connection status. </p>
     */
    inline VpcPeeringConnectionStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Additional messaging associated with the connection status. </p>
     */
    inline VpcPeeringConnectionStatus& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
