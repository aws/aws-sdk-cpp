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
    AWS_CONTROLTOWER_API LandingZoneOperationSummary();
    AWS_CONTROLTOWER_API LandingZoneOperationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API LandingZoneOperationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>operationIdentifier</code> of the landing zone operation.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const{ return m_operationIdentifier; }
    inline bool OperationIdentifierHasBeenSet() const { return m_operationIdentifierHasBeenSet; }
    inline void SetOperationIdentifier(const Aws::String& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = value; }
    inline void SetOperationIdentifier(Aws::String&& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = std::move(value); }
    inline void SetOperationIdentifier(const char* value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier.assign(value); }
    inline LandingZoneOperationSummary& WithOperationIdentifier(const Aws::String& value) { SetOperationIdentifier(value); return *this;}
    inline LandingZoneOperationSummary& WithOperationIdentifier(Aws::String&& value) { SetOperationIdentifier(std::move(value)); return *this;}
    inline LandingZoneOperationSummary& WithOperationIdentifier(const char* value) { SetOperationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the landing zone operation.</p>
     */
    inline const LandingZoneOperationType& GetOperationType() const{ return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(const LandingZoneOperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline void SetOperationType(LandingZoneOperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }
    inline LandingZoneOperationSummary& WithOperationType(const LandingZoneOperationType& value) { SetOperationType(value); return *this;}
    inline LandingZoneOperationSummary& WithOperationType(LandingZoneOperationType&& value) { SetOperationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the landing zone operation.</p>
     */
    inline const LandingZoneOperationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LandingZoneOperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LandingZoneOperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline LandingZoneOperationSummary& WithStatus(const LandingZoneOperationStatus& value) { SetStatus(value); return *this;}
    inline LandingZoneOperationSummary& WithStatus(LandingZoneOperationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_operationIdentifier;
    bool m_operationIdentifierHasBeenSet = false;

    LandingZoneOperationType m_operationType;
    bool m_operationTypeHasBeenSet = false;

    LandingZoneOperationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
