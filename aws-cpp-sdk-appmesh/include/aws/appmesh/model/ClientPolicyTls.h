/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/TlsValidationContext.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>A reference to an object that represents a Transport Layer Security (TLS)
   * client policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ClientPolicyTls">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API ClientPolicyTls
  {
  public:
    ClientPolicyTls();
    ClientPolicyTls(Aws::Utils::Json::JsonView jsonValue);
    ClientPolicyTls& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the policy is enforced. The default is <code>True</code>, if a value
     * isn't specified.</p>
     */
    inline bool GetEnforce() const{ return m_enforce; }

    /**
     * <p>Whether the policy is enforced. The default is <code>True</code>, if a value
     * isn't specified.</p>
     */
    inline bool EnforceHasBeenSet() const { return m_enforceHasBeenSet; }

    /**
     * <p>Whether the policy is enforced. The default is <code>True</code>, if a value
     * isn't specified.</p>
     */
    inline void SetEnforce(bool value) { m_enforceHasBeenSet = true; m_enforce = value; }

    /**
     * <p>Whether the policy is enforced. The default is <code>True</code>, if a value
     * isn't specified.</p>
     */
    inline ClientPolicyTls& WithEnforce(bool value) { SetEnforce(value); return *this;}


    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline const Aws::Vector<int>& GetPorts() const{ return m_ports; }

    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline bool PortsHasBeenSet() const { return m_portsHasBeenSet; }

    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline void SetPorts(const Aws::Vector<int>& value) { m_portsHasBeenSet = true; m_ports = value; }

    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline void SetPorts(Aws::Vector<int>&& value) { m_portsHasBeenSet = true; m_ports = std::move(value); }

    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline ClientPolicyTls& WithPorts(const Aws::Vector<int>& value) { SetPorts(value); return *this;}

    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline ClientPolicyTls& WithPorts(Aws::Vector<int>&& value) { SetPorts(std::move(value)); return *this;}

    /**
     * <p>One or more ports that the policy is enforced for.</p>
     */
    inline ClientPolicyTls& AddPorts(int value) { m_portsHasBeenSet = true; m_ports.push_back(value); return *this; }


    /**
     * <p>A reference to an object that represents a TLS validation context.</p>
     */
    inline const TlsValidationContext& GetValidation() const{ return m_validation; }

    /**
     * <p>A reference to an object that represents a TLS validation context.</p>
     */
    inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }

    /**
     * <p>A reference to an object that represents a TLS validation context.</p>
     */
    inline void SetValidation(const TlsValidationContext& value) { m_validationHasBeenSet = true; m_validation = value; }

    /**
     * <p>A reference to an object that represents a TLS validation context.</p>
     */
    inline void SetValidation(TlsValidationContext&& value) { m_validationHasBeenSet = true; m_validation = std::move(value); }

    /**
     * <p>A reference to an object that represents a TLS validation context.</p>
     */
    inline ClientPolicyTls& WithValidation(const TlsValidationContext& value) { SetValidation(value); return *this;}

    /**
     * <p>A reference to an object that represents a TLS validation context.</p>
     */
    inline ClientPolicyTls& WithValidation(TlsValidationContext&& value) { SetValidation(std::move(value)); return *this;}

  private:

    bool m_enforce;
    bool m_enforceHasBeenSet;

    Aws::Vector<int> m_ports;
    bool m_portsHasBeenSet;

    TlsValidationContext m_validation;
    bool m_validationHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
