/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents status information for a VPC peering connection. Status codes and
   * messages are provided from EC2 (see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_VpcPeeringConnectionStateReason.html">VpcPeeringConnectionStateReason</a>).
   * Connection status information is also communicated as a fleet
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/VpcPeeringConnectionStatus">AWS
   * API Reference</a></p>
   */
  class VpcPeeringConnectionStatus
  {
  public:
    AWS_GAMELIFT_API VpcPeeringConnectionStatus();
    AWS_GAMELIFT_API VpcPeeringConnectionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API VpcPeeringConnectionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Code indicating the status of a VPC peering connection.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline VpcPeeringConnectionStatus& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline VpcPeeringConnectionStatus& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline VpcPeeringConnectionStatus& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional messaging associated with the connection status. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline VpcPeeringConnectionStatus& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline VpcPeeringConnectionStatus& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline VpcPeeringConnectionStatus& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
