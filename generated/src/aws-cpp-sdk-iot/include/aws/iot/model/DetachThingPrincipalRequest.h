/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the DetachThingPrincipal operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetachThingPrincipalRequest">AWS
   * API Reference</a></p>
   */
  class DetachThingPrincipalRequest : public IoTRequest
  {
  public:
    AWS_IOT_API DetachThingPrincipalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachThingPrincipal"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing.</p>
     */
    inline DetachThingPrincipalRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline DetachThingPrincipalRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline DetachThingPrincipalRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>If the principal is a certificate, this value must be ARN of the certificate.
     * If the principal is an Amazon Cognito identity, this value must be the ID of the
     * Amazon Cognito identity.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>If the principal is a certificate, this value must be ARN of the certificate.
     * If the principal is an Amazon Cognito identity, this value must be the ID of the
     * Amazon Cognito identity.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>If the principal is a certificate, this value must be ARN of the certificate.
     * If the principal is an Amazon Cognito identity, this value must be the ID of the
     * Amazon Cognito identity.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>If the principal is a certificate, this value must be ARN of the certificate.
     * If the principal is an Amazon Cognito identity, this value must be the ID of the
     * Amazon Cognito identity.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>If the principal is a certificate, this value must be ARN of the certificate.
     * If the principal is an Amazon Cognito identity, this value must be the ID of the
     * Amazon Cognito identity.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>If the principal is a certificate, this value must be ARN of the certificate.
     * If the principal is an Amazon Cognito identity, this value must be the ID of the
     * Amazon Cognito identity.</p>
     */
    inline DetachThingPrincipalRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>If the principal is a certificate, this value must be ARN of the certificate.
     * If the principal is an Amazon Cognito identity, this value must be the ID of the
     * Amazon Cognito identity.</p>
     */
    inline DetachThingPrincipalRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>If the principal is a certificate, this value must be ARN of the certificate.
     * If the principal is an Amazon Cognito identity, this value must be the ID of the
     * Amazon Cognito identity.</p>
     */
    inline DetachThingPrincipalRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
