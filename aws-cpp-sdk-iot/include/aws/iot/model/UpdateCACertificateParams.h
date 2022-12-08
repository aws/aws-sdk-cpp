/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/CACertificateUpdateAction.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Parameters to define a mitigation action that changes the state of the CA
   * certificate to inactive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCACertificateParams">AWS
   * API Reference</a></p>
   */
  class UpdateCACertificateParams
  {
  public:
    AWS_IOT_API UpdateCACertificateParams();
    AWS_IOT_API UpdateCACertificateParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API UpdateCACertificateParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action that you want to apply to the CA certificate. The only supported
     * value is <code>DEACTIVATE</code>.</p>
     */
    inline const CACertificateUpdateAction& GetAction() const{ return m_action; }

    /**
     * <p>The action that you want to apply to the CA certificate. The only supported
     * value is <code>DEACTIVATE</code>.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action that you want to apply to the CA certificate. The only supported
     * value is <code>DEACTIVATE</code>.</p>
     */
    inline void SetAction(const CACertificateUpdateAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action that you want to apply to the CA certificate. The only supported
     * value is <code>DEACTIVATE</code>.</p>
     */
    inline void SetAction(CACertificateUpdateAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action that you want to apply to the CA certificate. The only supported
     * value is <code>DEACTIVATE</code>.</p>
     */
    inline UpdateCACertificateParams& WithAction(const CACertificateUpdateAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action that you want to apply to the CA certificate. The only supported
     * value is <code>DEACTIVATE</code>.</p>
     */
    inline UpdateCACertificateParams& WithAction(CACertificateUpdateAction&& value) { SetAction(std::move(value)); return *this;}

  private:

    CACertificateUpdateAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
