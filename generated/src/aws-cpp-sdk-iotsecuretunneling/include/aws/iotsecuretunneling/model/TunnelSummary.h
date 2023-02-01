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
    AWS_IOTSECURETUNNELING_API TunnelSummary();
    AWS_IOTSECURETUNNELING_API TunnelSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API TunnelSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSECURETUNNELING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique alpha-numeric identifier for the tunnel.</p>
     */
    inline const Aws::String& GetTunnelId() const{ return m_tunnelId; }

    /**
     * <p>The unique alpha-numeric identifier for the tunnel.</p>
     */
    inline bool TunnelIdHasBeenSet() const { return m_tunnelIdHasBeenSet; }

    /**
     * <p>The unique alpha-numeric identifier for the tunnel.</p>
     */
    inline void SetTunnelId(const Aws::String& value) { m_tunnelIdHasBeenSet = true; m_tunnelId = value; }

    /**
     * <p>The unique alpha-numeric identifier for the tunnel.</p>
     */
    inline void SetTunnelId(Aws::String&& value) { m_tunnelIdHasBeenSet = true; m_tunnelId = std::move(value); }

    /**
     * <p>The unique alpha-numeric identifier for the tunnel.</p>
     */
    inline void SetTunnelId(const char* value) { m_tunnelIdHasBeenSet = true; m_tunnelId.assign(value); }

    /**
     * <p>The unique alpha-numeric identifier for the tunnel.</p>
     */
    inline TunnelSummary& WithTunnelId(const Aws::String& value) { SetTunnelId(value); return *this;}

    /**
     * <p>The unique alpha-numeric identifier for the tunnel.</p>
     */
    inline TunnelSummary& WithTunnelId(Aws::String&& value) { SetTunnelId(std::move(value)); return *this;}

    /**
     * <p>The unique alpha-numeric identifier for the tunnel.</p>
     */
    inline TunnelSummary& WithTunnelId(const char* value) { SetTunnelId(value); return *this;}


    /**
     * <p>The Amazon Resource Name of the tunnel. </p>
     */
    inline const Aws::String& GetTunnelArn() const{ return m_tunnelArn; }

    /**
     * <p>The Amazon Resource Name of the tunnel. </p>
     */
    inline bool TunnelArnHasBeenSet() const { return m_tunnelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name of the tunnel. </p>
     */
    inline void SetTunnelArn(const Aws::String& value) { m_tunnelArnHasBeenSet = true; m_tunnelArn = value; }

    /**
     * <p>The Amazon Resource Name of the tunnel. </p>
     */
    inline void SetTunnelArn(Aws::String&& value) { m_tunnelArnHasBeenSet = true; m_tunnelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the tunnel. </p>
     */
    inline void SetTunnelArn(const char* value) { m_tunnelArnHasBeenSet = true; m_tunnelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the tunnel. </p>
     */
    inline TunnelSummary& WithTunnelArn(const Aws::String& value) { SetTunnelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the tunnel. </p>
     */
    inline TunnelSummary& WithTunnelArn(Aws::String&& value) { SetTunnelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the tunnel. </p>
     */
    inline TunnelSummary& WithTunnelArn(const char* value) { SetTunnelArn(value); return *this;}


    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline const TunnelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline void SetStatus(const TunnelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline void SetStatus(TunnelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline TunnelSummary& WithStatus(const TunnelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a tunnel. Valid values are: Open and Closed.</p>
     */
    inline TunnelSummary& WithStatus(TunnelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the tunnel.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the tunnel.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the tunnel.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the tunnel.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the tunnel.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the tunnel.</p>
     */
    inline TunnelSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the tunnel.</p>
     */
    inline TunnelSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the tunnel.</p>
     */
    inline TunnelSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The time the tunnel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time the tunnel was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time the tunnel was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time the tunnel was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time the tunnel was created.</p>
     */
    inline TunnelSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time the tunnel was created.</p>
     */
    inline TunnelSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time the tunnel was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time the tunnel was last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The time the tunnel was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time the tunnel was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time the tunnel was last updated.</p>
     */
    inline TunnelSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time the tunnel was last updated.</p>
     */
    inline TunnelSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_tunnelId;
    bool m_tunnelIdHasBeenSet = false;

    Aws::String m_tunnelArn;
    bool m_tunnelArnHasBeenSet = false;

    TunnelStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
