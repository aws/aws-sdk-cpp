/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsecuretunneling/model/TunnelStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTSecureTunneling
{
namespace Model
{

  /**
   * <p>Information about the tunnel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsecuretunneling-2018-10-05/TunnelSummary">AWS
   * API Reference</a></p>
   */
  class TunnelSummary
  {
  public:
    AWS_IOTSECURETUNNELING_API TunnelSummary() = default;
    AWS_IOTSECURETUNNELING_API TunnelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API TunnelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique alpha-numeric identifier for the tunnel.</p>
     */
    inline const Aws::String& GetTunnelId() const { return m_tunnelId; }
    inline bool TunnelIdHasBeenSet() const { return m_tunnelIdHasBeenSet; }
    template<typename TunnelIdT = Aws::String>
    void SetTunnelId(TunnelIdT&& value) { m_tunnelIdHasBeenSet = true; m_tunnelId = std::forward<TunnelIdT>(value); }
    template<typename TunnelIdT = Aws::String>
    TunnelSummary& WithTunnelId(TunnelIdT&& value) { SetTunnelId(std::forward<TunnelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the tunnel. </p>
     */
    inline const Aws::String& GetTunnelArn() const { return m_tunnelArn; }
    inline bool TunnelArnHasBeenSet() const { return m_tunnelArnHasBeenSet; }
    template<typename TunnelArnT = Aws::String>
    void SetTunnelArn(TunnelArnT&& value) { m_tunnelArnHasBeenSet = true; m_tunnelArn = std::forward<TunnelArnT>(value); }
    template<typename TunnelArnT = Aws::String>
    TunnelSummary& WithTunnelArn(TunnelArnT&& value) { SetTunnelArn(std::forward<TunnelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline TunnelStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TunnelStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TunnelSummary& WithStatus(TunnelStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the tunnel.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TunnelSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the tunnel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    TunnelSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the tunnel was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    TunnelSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tunnelId;
    bool m_tunnelIdHasBeenSet = false;

    Aws::String m_tunnelArn;
    bool m_tunnelArnHasBeenSet = false;

    TunnelStatus m_status{TunnelStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
