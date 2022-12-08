/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/EndpointStatus.h>
#include <aws/chime-sdk-identity/model/EndpointStatusReason.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   * <p>A read-only field that represents the state of an
   * <code>AppInstanceUserEndpoint</code>. Supported values:</p> <ul> <li> <p>
   * <code>ACTIVE</code>: The <code>AppInstanceUserEndpoint</code> is active and able
   * to receive messages. When <code>ACTIVE</code>, the
   * <code>EndpointStatusReason</code> remains empty.</p> </li> <li> <p>
   * <code>INACTIVE</code>: The <code>AppInstanceUserEndpoint</code> is inactive and
   * can't receive message. When INACTIVE, the corresponding reason will be conveyed
   * through EndpointStatusReason.</p> </li> <li> <p>
   * <code>INVALID_DEVICE_TOKEN</code> indicates that an
   * <code>AppInstanceUserEndpoint</code> is <code>INACTIVE</code> due to invalid
   * device token</p> </li> <li> <p> <code>INVALID_PINPOINT_ARN</code> indicates that
   * an <code>AppInstanceUserEndpoint</code> is <code>INACTIVE</code> due to an
   * invalid pinpoint ARN that was input through the <code>ResourceArn</code>
   * field.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/EndpointState">AWS
   * API Reference</a></p>
   */
  class EndpointState
  {
  public:
    AWS_CHIMESDKIDENTITY_API EndpointState();
    AWS_CHIMESDKIDENTITY_API EndpointState(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API EndpointState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enum that indicates the Status of an
     * <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline const EndpointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Enum that indicates the Status of an
     * <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Enum that indicates the Status of an
     * <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline void SetStatus(const EndpointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Enum that indicates the Status of an
     * <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline void SetStatus(EndpointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Enum that indicates the Status of an
     * <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline EndpointState& WithStatus(const EndpointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Enum that indicates the Status of an
     * <code>AppInstanceUserEndpoint</code>.</p>
     */
    inline EndpointState& WithStatus(EndpointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the <code>EndpointStatus</code>.</p>
     */
    inline const EndpointStatusReason& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the <code>EndpointStatus</code>.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason for the <code>EndpointStatus</code>.</p>
     */
    inline void SetStatusReason(const EndpointStatusReason& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason for the <code>EndpointStatus</code>.</p>
     */
    inline void SetStatusReason(EndpointStatusReason&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason for the <code>EndpointStatus</code>.</p>
     */
    inline EndpointState& WithStatusReason(const EndpointStatusReason& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the <code>EndpointStatus</code>.</p>
     */
    inline EndpointState& WithStatusReason(EndpointStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}

  private:

    EndpointStatus m_status;
    bool m_statusHasBeenSet = false;

    EndpointStatusReason m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
