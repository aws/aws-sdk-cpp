/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the DetachThingPrincipal operation.</p>
   */
  class AWS_IOT_API DetachThingPrincipalRequest : public IoTRequest
  {
  public:
    DetachThingPrincipalRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

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
    inline DetachThingPrincipalRequest& WithThingName(Aws::String&& value) { SetThingName(value); return *this;}

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
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>If the principal is a certificate, this value must be ARN of the certificate.
     * If the principal is an Amazon Cognito identity, this value must be the ID of the
     * Amazon Cognito identity.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = value; }

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
    inline DetachThingPrincipalRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(value); return *this;}

    /**
     * <p>If the principal is a certificate, this value must be ARN of the certificate.
     * If the principal is an Amazon Cognito identity, this value must be the ID of the
     * Amazon Cognito identity.</p>
     */
    inline DetachThingPrincipalRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}

  private:
    Aws::String m_thingName;
    bool m_thingNameHasBeenSet;
    Aws::String m_principal;
    bool m_principalHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
