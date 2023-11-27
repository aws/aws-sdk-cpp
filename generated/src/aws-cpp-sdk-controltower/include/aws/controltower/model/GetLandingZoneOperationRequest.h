/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ControlTower
{
namespace Model
{

  /**
   */
  class GetLandingZoneOperationRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API GetLandingZoneOperationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLandingZoneOperation"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier assigned to a landing zone operation.</p>
     */
    inline const Aws::String& GetOperationIdentifier() const{ return m_operationIdentifier; }

    /**
     * <p>A unique identifier assigned to a landing zone operation.</p>
     */
    inline bool OperationIdentifierHasBeenSet() const { return m_operationIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier assigned to a landing zone operation.</p>
     */
    inline void SetOperationIdentifier(const Aws::String& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = value; }

    /**
     * <p>A unique identifier assigned to a landing zone operation.</p>
     */
    inline void SetOperationIdentifier(Aws::String&& value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier = std::move(value); }

    /**
     * <p>A unique identifier assigned to a landing zone operation.</p>
     */
    inline void SetOperationIdentifier(const char* value) { m_operationIdentifierHasBeenSet = true; m_operationIdentifier.assign(value); }

    /**
     * <p>A unique identifier assigned to a landing zone operation.</p>
     */
    inline GetLandingZoneOperationRequest& WithOperationIdentifier(const Aws::String& value) { SetOperationIdentifier(value); return *this;}

    /**
     * <p>A unique identifier assigned to a landing zone operation.</p>
     */
    inline GetLandingZoneOperationRequest& WithOperationIdentifier(Aws::String&& value) { SetOperationIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier assigned to a landing zone operation.</p>
     */
    inline GetLandingZoneOperationRequest& WithOperationIdentifier(const char* value) { SetOperationIdentifier(value); return *this;}

  private:

    Aws::String m_operationIdentifier;
    bool m_operationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
