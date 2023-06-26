/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/EndpointIdentifier.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class RemoveEndpointsRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API RemoveEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveEndpoints"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifiers of the endpoints that you want to remove.</p>
     */
    inline const Aws::Vector<EndpointIdentifier>& GetEndpointIdentifiers() const{ return m_endpointIdentifiers; }

    /**
     * <p>The identifiers of the endpoints that you want to remove.</p>
     */
    inline bool EndpointIdentifiersHasBeenSet() const { return m_endpointIdentifiersHasBeenSet; }

    /**
     * <p>The identifiers of the endpoints that you want to remove.</p>
     */
    inline void SetEndpointIdentifiers(const Aws::Vector<EndpointIdentifier>& value) { m_endpointIdentifiersHasBeenSet = true; m_endpointIdentifiers = value; }

    /**
     * <p>The identifiers of the endpoints that you want to remove.</p>
     */
    inline void SetEndpointIdentifiers(Aws::Vector<EndpointIdentifier>&& value) { m_endpointIdentifiersHasBeenSet = true; m_endpointIdentifiers = std::move(value); }

    /**
     * <p>The identifiers of the endpoints that you want to remove.</p>
     */
    inline RemoveEndpointsRequest& WithEndpointIdentifiers(const Aws::Vector<EndpointIdentifier>& value) { SetEndpointIdentifiers(value); return *this;}

    /**
     * <p>The identifiers of the endpoints that you want to remove.</p>
     */
    inline RemoveEndpointsRequest& WithEndpointIdentifiers(Aws::Vector<EndpointIdentifier>&& value) { SetEndpointIdentifiers(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the endpoints that you want to remove.</p>
     */
    inline RemoveEndpointsRequest& AddEndpointIdentifiers(const EndpointIdentifier& value) { m_endpointIdentifiersHasBeenSet = true; m_endpointIdentifiers.push_back(value); return *this; }

    /**
     * <p>The identifiers of the endpoints that you want to remove.</p>
     */
    inline RemoveEndpointsRequest& AddEndpointIdentifiers(EndpointIdentifier&& value) { m_endpointIdentifiersHasBeenSet = true; m_endpointIdentifiers.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const{ return m_endpointGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline bool EndpointGroupArnHasBeenSet() const { return m_endpointGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(const Aws::String& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(Aws::String&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(const char* value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline RemoveEndpointsRequest& WithEndpointGroupArn(const Aws::String& value) { SetEndpointGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline RemoveEndpointsRequest& WithEndpointGroupArn(Aws::String&& value) { SetEndpointGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline RemoveEndpointsRequest& WithEndpointGroupArn(const char* value) { SetEndpointGroupArn(value); return *this;}

  private:

    Aws::Vector<EndpointIdentifier> m_endpointIdentifiers;
    bool m_endpointIdentifiersHasBeenSet = false;

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
