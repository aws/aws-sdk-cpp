/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/LandingZoneOperationType.h>
#include <aws/controltower/model/LandingZoneOperationStatus.h>
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
   * <p>Returns a summary of information about a landing zone
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/LandingZoneOperationSummary">AWS
   * API Reference</a></p>
   */
  class LandingZoneOperationSummary
  {
  public:
    AWS_CONTROLTOWER_API LandingZoneOperationSummary() = default;
    AWS_CONTROLTOWER_API LandingZoneOperationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API LandingZoneOperationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>operationIdentifier</code> of the landing zone operation.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const { return m_operationIdentifier; }
    inline bool OperationIdentifierHasBeenSet() const { return m_operationIdentifierHasBeenSet; }
    template<typename OperationIdentifierT = Aws::String>
    void SetOperationIdentifier(OperationIdentifierT&& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = std::forward<OperationIdentifierT>(value); }
    template<typename OperationIdentifierT = Aws::String>
    LandingZoneOperationSummary& WithOperationIdentifier(OperationIdentifierT&& value) { SetOperationIdentifier(std::forward<OperationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the landing zone operation.</p>
     */
    inline LandingZoneOperationType GetOperationType() const { return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(LandingZoneOperationType value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline LandingZoneOperationSummary& WithOperationType(LandingZoneOperationType value) { SetOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the landing zone operation.</p>
     */
    inline LandingZoneOperationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LandingZoneOperationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LandingZoneOperationSummary& WithStatus(LandingZoneOperationStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_operationIdentifier;
    bool m_operationIdentifierHasBeenSet = false;

    LandingZoneOperationType m_operationType{LandingZoneOperationType::NOT_SET};
    bool m_operationTypeHasBeenSet = false;

    LandingZoneOperationStatus m_status{LandingZoneOperationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
