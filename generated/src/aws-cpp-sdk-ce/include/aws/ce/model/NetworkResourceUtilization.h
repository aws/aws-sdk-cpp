/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The network field that contains a list of network metrics that are associated
   * with the current instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/NetworkResourceUtilization">AWS
   * API Reference</a></p>
   */
  class NetworkResourceUtilization
  {
  public:
    AWS_COSTEXPLORER_API NetworkResourceUtilization();
    AWS_COSTEXPLORER_API NetworkResourceUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API NetworkResourceUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The network inbound throughput utilization measured in Bytes per second
     * (Bps). </p>
     */
    inline const Aws::String& GetNetworkInBytesPerSecond() const{ return m_networkInBytesPerSecond; }
    inline bool NetworkInBytesPerSecondHasBeenSet() const { return m_networkInBytesPerSecondHasBeenSet; }
    inline void SetNetworkInBytesPerSecond(const Aws::String& value) { m_networkInBytesPerSecondHasBeenSet = true; m_networkInBytesPerSecond = value; }
    inline void SetNetworkInBytesPerSecond(Aws::String&& value) { m_networkInBytesPerSecondHasBeenSet = true; m_networkInBytesPerSecond = std::move(value); }
    inline void SetNetworkInBytesPerSecond(const char* value) { m_networkInBytesPerSecondHasBeenSet = true; m_networkInBytesPerSecond.assign(value); }
    inline NetworkResourceUtilization& WithNetworkInBytesPerSecond(const Aws::String& value) { SetNetworkInBytesPerSecond(value); return *this;}
    inline NetworkResourceUtilization& WithNetworkInBytesPerSecond(Aws::String&& value) { SetNetworkInBytesPerSecond(std::move(value)); return *this;}
    inline NetworkResourceUtilization& WithNetworkInBytesPerSecond(const char* value) { SetNetworkInBytesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network outbound throughput utilization measured in Bytes per second
     * (Bps). </p>
     */
    inline const Aws::String& GetNetworkOutBytesPerSecond() const{ return m_networkOutBytesPerSecond; }
    inline bool NetworkOutBytesPerSecondHasBeenSet() const { return m_networkOutBytesPerSecondHasBeenSet; }
    inline void SetNetworkOutBytesPerSecond(const Aws::String& value) { m_networkOutBytesPerSecondHasBeenSet = true; m_networkOutBytesPerSecond = value; }
    inline void SetNetworkOutBytesPerSecond(Aws::String&& value) { m_networkOutBytesPerSecondHasBeenSet = true; m_networkOutBytesPerSecond = std::move(value); }
    inline void SetNetworkOutBytesPerSecond(const char* value) { m_networkOutBytesPerSecondHasBeenSet = true; m_networkOutBytesPerSecond.assign(value); }
    inline NetworkResourceUtilization& WithNetworkOutBytesPerSecond(const Aws::String& value) { SetNetworkOutBytesPerSecond(value); return *this;}
    inline NetworkResourceUtilization& WithNetworkOutBytesPerSecond(Aws::String&& value) { SetNetworkOutBytesPerSecond(std::move(value)); return *this;}
    inline NetworkResourceUtilization& WithNetworkOutBytesPerSecond(const char* value) { SetNetworkOutBytesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network inbound packets that are measured in packets per second. </p>
     */
    inline const Aws::String& GetNetworkPacketsInPerSecond() const{ return m_networkPacketsInPerSecond; }
    inline bool NetworkPacketsInPerSecondHasBeenSet() const { return m_networkPacketsInPerSecondHasBeenSet; }
    inline void SetNetworkPacketsInPerSecond(const Aws::String& value) { m_networkPacketsInPerSecondHasBeenSet = true; m_networkPacketsInPerSecond = value; }
    inline void SetNetworkPacketsInPerSecond(Aws::String&& value) { m_networkPacketsInPerSecondHasBeenSet = true; m_networkPacketsInPerSecond = std::move(value); }
    inline void SetNetworkPacketsInPerSecond(const char* value) { m_networkPacketsInPerSecondHasBeenSet = true; m_networkPacketsInPerSecond.assign(value); }
    inline NetworkResourceUtilization& WithNetworkPacketsInPerSecond(const Aws::String& value) { SetNetworkPacketsInPerSecond(value); return *this;}
    inline NetworkResourceUtilization& WithNetworkPacketsInPerSecond(Aws::String&& value) { SetNetworkPacketsInPerSecond(std::move(value)); return *this;}
    inline NetworkResourceUtilization& WithNetworkPacketsInPerSecond(const char* value) { SetNetworkPacketsInPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network outbound packets that are measured in packets per second. </p>
     */
    inline const Aws::String& GetNetworkPacketsOutPerSecond() const{ return m_networkPacketsOutPerSecond; }
    inline bool NetworkPacketsOutPerSecondHasBeenSet() const { return m_networkPacketsOutPerSecondHasBeenSet; }
    inline void SetNetworkPacketsOutPerSecond(const Aws::String& value) { m_networkPacketsOutPerSecondHasBeenSet = true; m_networkPacketsOutPerSecond = value; }
    inline void SetNetworkPacketsOutPerSecond(Aws::String&& value) { m_networkPacketsOutPerSecondHasBeenSet = true; m_networkPacketsOutPerSecond = std::move(value); }
    inline void SetNetworkPacketsOutPerSecond(const char* value) { m_networkPacketsOutPerSecondHasBeenSet = true; m_networkPacketsOutPerSecond.assign(value); }
    inline NetworkResourceUtilization& WithNetworkPacketsOutPerSecond(const Aws::String& value) { SetNetworkPacketsOutPerSecond(value); return *this;}
    inline NetworkResourceUtilization& WithNetworkPacketsOutPerSecond(Aws::String&& value) { SetNetworkPacketsOutPerSecond(std::move(value)); return *this;}
    inline NetworkResourceUtilization& WithNetworkPacketsOutPerSecond(const char* value) { SetNetworkPacketsOutPerSecond(value); return *this;}
    ///@}
  private:

    Aws::String m_networkInBytesPerSecond;
    bool m_networkInBytesPerSecondHasBeenSet = false;

    Aws::String m_networkOutBytesPerSecond;
    bool m_networkOutBytesPerSecondHasBeenSet = false;

    Aws::String m_networkPacketsInPerSecond;
    bool m_networkPacketsInPerSecondHasBeenSet = false;

    Aws::String m_networkPacketsOutPerSecond;
    bool m_networkPacketsOutPerSecondHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
