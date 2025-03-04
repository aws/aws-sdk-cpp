/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class DeleteManagedThingRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API DeleteManagedThingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteManagedThing"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;

    AWS_IOTMANAGEDINTEGRATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The id of the managed thing.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline DeleteManagedThingRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline DeleteManagedThingRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline DeleteManagedThingRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When set to <code>TRUE</code>, a forceful deteletion of the managed thing
     * will occur. When set to <code>FALSE</code>, a non-forceful deletion of the
     * managed thing will occur.</p>
     */
    inline bool GetForce() const{ return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline DeleteManagedThingRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
