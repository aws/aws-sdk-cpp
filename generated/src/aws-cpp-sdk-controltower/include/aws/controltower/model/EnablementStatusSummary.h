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
   * <p>The deployment summary of an <code>EnabledControl</code> or
   * <code>EnabledBaseline</code> resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnablementStatusSummary">AWS
   * API Reference</a></p>
   */
  class EnablementStatusSummary
  {
  public:
    AWS_CONTROLTOWER_API EnablementStatusSummary() = default;
    AWS_CONTROLTOWER_API EnablementStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API EnablementStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The last operation identifier for the enabled resource.</p>
     */
    inline const Aws::String& GetLastOperationIdentifier() const { return m_lastOperationIdentifier; }
    inline bool LastOperationIdentifierHasBeenSet() const { return m_lastOperationIdentifierHasBeenSet; }
    template<typename LastOperationIdentifierT = Aws::String>
    void SetLastOperationIdentifier(LastOperationIdentifierT&& value) { m_lastOperationIdentifierHasBeenSet = true; m_lastOperationIdentifier = std::forward<LastOperationIdentifierT>(value); }
    template<typename LastOperationIdentifierT = Aws::String>
    EnablementStatusSummary& WithLastOperationIdentifier(LastOperationIdentifierT&& value) { SetLastOperationIdentifier(std::forward<LastOperationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The deployment status of the enabled resource.</p> <p>Valid values:</p> <ul>
     * <li> <p> <code>SUCCEEDED</code>: The <code>EnabledControl</code> or
     * <code>EnabledBaseline</code> configuration was deployed successfully.</p> </li>
     * <li> <p> <code>UNDER_CHANGE</code>: The <code>EnabledControl</code> or
     * <code>EnabledBaseline</code> configuration is changing. </p> </li> <li> <p>
     * <code>FAILED</code>: The <code>EnabledControl</code> or
     * <code>EnabledBaseline</code> configuration failed to deploy.</p> </li> </ul>
     */
    inline EnablementStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EnablementStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EnablementStatusSummary& WithStatus(EnablementStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_lastOperationIdentifier;
    bool m_lastOperationIdentifierHasBeenSet = false;

    EnablementStatus m_status{EnablementStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
