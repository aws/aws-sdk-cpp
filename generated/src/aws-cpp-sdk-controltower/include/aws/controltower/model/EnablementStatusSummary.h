/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/EnablementStatus.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>The deployment summary of the enabled control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnablementStatusSummary">AWS
   * API Reference</a></p>
   */
  class EnablementStatusSummary
  {
  public:
    AWS_CONTROLTOWER_API EnablementStatusSummary();
    AWS_CONTROLTOWER_API EnablementStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnablementStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The last operation identifier for the enabled control.</p>
     */
    inline const Aws::String& GetLastOperationIdentifier() const{ return m_lastOperationIdentifier; }

    /**
     * <p>The last operation identifier for the enabled control.</p>
     */
    inline bool LastOperationIdentifierHasBeenSet() const { return m_lastOperationIdentifierHasBeenSet; }

    /**
     * <p>The last operation identifier for the enabled control.</p>
     */
    inline void SetLastOperationIdentifier(const Aws::String& value) { m_lastOperationIdentifierHasBeenSet = true; m_lastOperationIdentifier = value; }

    /**
     * <p>The last operation identifier for the enabled control.</p>
     */
    inline void SetLastOperationIdentifier(Aws::String&& value) { m_lastOperationIdentifierHasBeenSet = true; m_lastOperationIdentifier = std::move(value); }

    /**
     * <p>The last operation identifier for the enabled control.</p>
     */
    inline void SetLastOperationIdentifier(const char* value) { m_lastOperationIdentifierHasBeenSet = true; m_lastOperationIdentifier.assign(value); }

    /**
     * <p>The last operation identifier for the enabled control.</p>
     */
    inline EnablementStatusSummary& WithLastOperationIdentifier(const Aws::String& value) { SetLastOperationIdentifier(value); return *this;}

    /**
     * <p>The last operation identifier for the enabled control.</p>
     */
    inline EnablementStatusSummary& WithLastOperationIdentifier(Aws::String&& value) { SetLastOperationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The last operation identifier for the enabled control.</p>
     */
    inline EnablementStatusSummary& WithLastOperationIdentifier(const char* value) { SetLastOperationIdentifier(value); return *this;}


    /**
     * <p> The deployment status of the enabled control.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>SUCCEEDED</code>: The <code>enabledControl</code> configuration
     * was deployed successfully.</p> </li> <li> <p> <code>UNDER_CHANGE</code>: The
     * <code>enabledControl</code> configuration is changing. </p> </li> <li> <p>
     * <code>FAILED</code>: The <code>enabledControl</code> configuration failed to
     * deploy.</p> </li> </ul>
     */
    inline const EnablementStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The deployment status of the enabled control.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>SUCCEEDED</code>: The <code>enabledControl</code> configuration
     * was deployed successfully.</p> </li> <li> <p> <code>UNDER_CHANGE</code>: The
     * <code>enabledControl</code> configuration is changing. </p> </li> <li> <p>
     * <code>FAILED</code>: The <code>enabledControl</code> configuration failed to
     * deploy.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The deployment status of the enabled control.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>SUCCEEDED</code>: The <code>enabledControl</code> configuration
     * was deployed successfully.</p> </li> <li> <p> <code>UNDER_CHANGE</code>: The
     * <code>enabledControl</code> configuration is changing. </p> </li> <li> <p>
     * <code>FAILED</code>: The <code>enabledControl</code> configuration failed to
     * deploy.</p> </li> </ul>
     */
    inline void SetStatus(const EnablementStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The deployment status of the enabled control.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>SUCCEEDED</code>: The <code>enabledControl</code> configuration
     * was deployed successfully.</p> </li> <li> <p> <code>UNDER_CHANGE</code>: The
     * <code>enabledControl</code> configuration is changing. </p> </li> <li> <p>
     * <code>FAILED</code>: The <code>enabledControl</code> configuration failed to
     * deploy.</p> </li> </ul>
     */
    inline void SetStatus(EnablementStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The deployment status of the enabled control.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>SUCCEEDED</code>: The <code>enabledControl</code> configuration
     * was deployed successfully.</p> </li> <li> <p> <code>UNDER_CHANGE</code>: The
     * <code>enabledControl</code> configuration is changing. </p> </li> <li> <p>
     * <code>FAILED</code>: The <code>enabledControl</code> configuration failed to
     * deploy.</p> </li> </ul>
     */
    inline EnablementStatusSummary& WithStatus(const EnablementStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The deployment status of the enabled control.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>SUCCEEDED</code>: The <code>enabledControl</code> configuration
     * was deployed successfully.</p> </li> <li> <p> <code>UNDER_CHANGE</code>: The
     * <code>enabledControl</code> configuration is changing. </p> </li> <li> <p>
     * <code>FAILED</code>: The <code>enabledControl</code> configuration failed to
     * deploy.</p> </li> </ul>
     */
    inline EnablementStatusSummary& WithStatus(EnablementStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_lastOperationIdentifier;
    bool m_lastOperationIdentifierHasBeenSet = false;

    EnablementStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
