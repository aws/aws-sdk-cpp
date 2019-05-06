/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class AWS_REDSHIFT_API AcceptReservedNodeExchangeRequest : public RedshiftRequest
  {
  public:
    AcceptReservedNodeExchangeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptReservedNodeExchange"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A string representing the node identifier of the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline const Aws::String& GetReservedNodeId() const{ return m_reservedNodeId; }

    /**
     * <p>A string representing the node identifier of the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline bool ReservedNodeIdHasBeenSet() const { return m_reservedNodeIdHasBeenSet; }

    /**
     * <p>A string representing the node identifier of the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline void SetReservedNodeId(const Aws::String& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = value; }

    /**
     * <p>A string representing the node identifier of the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline void SetReservedNodeId(Aws::String&& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = std::move(value); }

    /**
     * <p>A string representing the node identifier of the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline void SetReservedNodeId(const char* value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId.assign(value); }

    /**
     * <p>A string representing the node identifier of the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline AcceptReservedNodeExchangeRequest& WithReservedNodeId(const Aws::String& value) { SetReservedNodeId(value); return *this;}

    /**
     * <p>A string representing the node identifier of the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline AcceptReservedNodeExchangeRequest& WithReservedNodeId(Aws::String&& value) { SetReservedNodeId(std::move(value)); return *this;}

    /**
     * <p>A string representing the node identifier of the DC1 Reserved Node to be
     * exchanged.</p>
     */
    inline AcceptReservedNodeExchangeRequest& WithReservedNodeId(const char* value) { SetReservedNodeId(value); return *this;}


    /**
     * <p>The unique identifier of the DC2 Reserved Node offering to be used for the
     * exchange. You can obtain the value for the parameter by calling
     * <a>GetReservedNodeExchangeOfferings</a> </p>
     */
    inline const Aws::String& GetTargetReservedNodeOfferingId() const{ return m_targetReservedNodeOfferingId; }

    /**
     * <p>The unique identifier of the DC2 Reserved Node offering to be used for the
     * exchange. You can obtain the value for the parameter by calling
     * <a>GetReservedNodeExchangeOfferings</a> </p>
     */
    inline bool TargetReservedNodeOfferingIdHasBeenSet() const { return m_targetReservedNodeOfferingIdHasBeenSet; }

    /**
     * <p>The unique identifier of the DC2 Reserved Node offering to be used for the
     * exchange. You can obtain the value for the parameter by calling
     * <a>GetReservedNodeExchangeOfferings</a> </p>
     */
    inline void SetTargetReservedNodeOfferingId(const Aws::String& value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId = value; }

    /**
     * <p>The unique identifier of the DC2 Reserved Node offering to be used for the
     * exchange. You can obtain the value for the parameter by calling
     * <a>GetReservedNodeExchangeOfferings</a> </p>
     */
    inline void SetTargetReservedNodeOfferingId(Aws::String&& value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId = std::move(value); }

    /**
     * <p>The unique identifier of the DC2 Reserved Node offering to be used for the
     * exchange. You can obtain the value for the parameter by calling
     * <a>GetReservedNodeExchangeOfferings</a> </p>
     */
    inline void SetTargetReservedNodeOfferingId(const char* value) { m_targetReservedNodeOfferingIdHasBeenSet = true; m_targetReservedNodeOfferingId.assign(value); }

    /**
     * <p>The unique identifier of the DC2 Reserved Node offering to be used for the
     * exchange. You can obtain the value for the parameter by calling
     * <a>GetReservedNodeExchangeOfferings</a> </p>
     */
    inline AcceptReservedNodeExchangeRequest& WithTargetReservedNodeOfferingId(const Aws::String& value) { SetTargetReservedNodeOfferingId(value); return *this;}

    /**
     * <p>The unique identifier of the DC2 Reserved Node offering to be used for the
     * exchange. You can obtain the value for the parameter by calling
     * <a>GetReservedNodeExchangeOfferings</a> </p>
     */
    inline AcceptReservedNodeExchangeRequest& WithTargetReservedNodeOfferingId(Aws::String&& value) { SetTargetReservedNodeOfferingId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the DC2 Reserved Node offering to be used for the
     * exchange. You can obtain the value for the parameter by calling
     * <a>GetReservedNodeExchangeOfferings</a> </p>
     */
    inline AcceptReservedNodeExchangeRequest& WithTargetReservedNodeOfferingId(const char* value) { SetTargetReservedNodeOfferingId(value); return *this;}

  private:

    Aws::String m_reservedNodeId;
    bool m_reservedNodeIdHasBeenSet;

    Aws::String m_targetReservedNodeOfferingId;
    bool m_targetReservedNodeOfferingIdHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
