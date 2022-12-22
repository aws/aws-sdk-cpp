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
   * <p>The input for the AttachThingPrincipal operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttachThingPrincipalRequest">AWS
   * API Reference</a></p>
   */
  class AttachThingPrincipalRequest : public IoTRequest
  {
  public:
    AWS_IOT_API AttachThingPrincipalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachThingPrincipal"; }

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
    inline AttachThingPrincipalRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline AttachThingPrincipalRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline AttachThingPrincipalRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline AttachThingPrincipalRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline AttachThingPrincipalRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The principal, which can be a certificate ARN (as returned from the
     * CreateCertificate operation) or an Amazon Cognito ID.</p>
     */
    inline AttachThingPrincipalRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
