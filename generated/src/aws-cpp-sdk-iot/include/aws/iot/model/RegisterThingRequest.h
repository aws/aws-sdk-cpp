/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class RegisterThingRequest : public IoTRequest
  {
  public:
    AWS_IOT_API RegisterThingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterThing"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The provisioning template. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-w-cert.html">Provisioning
     * Devices That Have Device Certificates</a> for more information.</p>
     */
    inline const Aws::String& GetTemplateBody() const{ return m_templateBody; }

    /**
     * <p>The provisioning template. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-w-cert.html">Provisioning
     * Devices That Have Device Certificates</a> for more information.</p>
     */
    inline bool TemplateBodyHasBeenSet() const { return m_templateBodyHasBeenSet; }

    /**
     * <p>The provisioning template. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-w-cert.html">Provisioning
     * Devices That Have Device Certificates</a> for more information.</p>
     */
    inline void SetTemplateBody(const Aws::String& value) { m_templateBodyHasBeenSet = true; m_templateBody = value; }

    /**
     * <p>The provisioning template. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-w-cert.html">Provisioning
     * Devices That Have Device Certificates</a> for more information.</p>
     */
    inline void SetTemplateBody(Aws::String&& value) { m_templateBodyHasBeenSet = true; m_templateBody = std::move(value); }

    /**
     * <p>The provisioning template. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-w-cert.html">Provisioning
     * Devices That Have Device Certificates</a> for more information.</p>
     */
    inline void SetTemplateBody(const char* value) { m_templateBodyHasBeenSet = true; m_templateBody.assign(value); }

    /**
     * <p>The provisioning template. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-w-cert.html">Provisioning
     * Devices That Have Device Certificates</a> for more information.</p>
     */
    inline RegisterThingRequest& WithTemplateBody(const Aws::String& value) { SetTemplateBody(value); return *this;}

    /**
     * <p>The provisioning template. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-w-cert.html">Provisioning
     * Devices That Have Device Certificates</a> for more information.</p>
     */
    inline RegisterThingRequest& WithTemplateBody(Aws::String&& value) { SetTemplateBody(std::move(value)); return *this;}

    /**
     * <p>The provisioning template. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-w-cert.html">Provisioning
     * Devices That Have Device Certificates</a> for more information.</p>
     */
    inline RegisterThingRequest& WithTemplateBody(const char* value) { SetTemplateBody(value); return *this;}


    /**
     * <p>The parameters for provisioning a thing. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * Templates</a> for more information.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters for provisioning a thing. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * Templates</a> for more information.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters for provisioning a thing. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * Templates</a> for more information.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters for provisioning a thing. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * Templates</a> for more information.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters for provisioning a thing. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * Templates</a> for more information.</p>
     */
    inline RegisterThingRequest& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for provisioning a thing. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * Templates</a> for more information.</p>
     */
    inline RegisterThingRequest& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for provisioning a thing. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * Templates</a> for more information.</p>
     */
    inline RegisterThingRequest& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters for provisioning a thing. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * Templates</a> for more information.</p>
     */
    inline RegisterThingRequest& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters for provisioning a thing. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * Templates</a> for more information.</p>
     */
    inline RegisterThingRequest& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for provisioning a thing. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * Templates</a> for more information.</p>
     */
    inline RegisterThingRequest& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters for provisioning a thing. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * Templates</a> for more information.</p>
     */
    inline RegisterThingRequest& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters for provisioning a thing. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * Templates</a> for more information.</p>
     */
    inline RegisterThingRequest& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters for provisioning a thing. See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-template.html">Provisioning
     * Templates</a> for more information.</p>
     */
    inline RegisterThingRequest& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    Aws::String m_templateBody;
    bool m_templateBodyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
