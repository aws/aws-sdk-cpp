/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/NetworkDirection.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the network connection.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/NetworkConnection">AWS
   * API Reference</a></p>
   */
  class NetworkConnection
  {
  public:
    AWS_GUARDDUTY_API NetworkConnection();
    AWS_GUARDDUTY_API NetworkConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API NetworkConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The direction in which the network traffic is flowing.</p>
     */
    inline const NetworkDirection& GetDirection() const{ return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(const NetworkDirection& value) { m_directionHasBeenSet = true; m_direction = value; }
    inline void SetDirection(NetworkDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }
    inline NetworkConnection& WithDirection(const NetworkDirection& value) { SetDirection(value); return *this;}
    inline NetworkConnection& WithDirection(NetworkDirection&& value) { SetDirection(std::move(value)); return *this;}
    ///@}
  private:

    NetworkDirection m_direction;
    bool m_directionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
