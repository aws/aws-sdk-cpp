/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>The connector-specific profile properties required when using Salesforce
   * Pardot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/PardotConnectorProfileProperties">AWS
   * API Reference</a></p>
   */
  class PardotConnectorProfileProperties
  {
  public:
    AWS_APPFLOW_API PardotConnectorProfileProperties() = default;
    AWS_APPFLOW_API PardotConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API PardotConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location of the Salesforce Pardot resource.</p>
     */
    inline const Aws::String& GetInstanceUrl() const { return m_instanceUrl; }
    inline bool InstanceUrlHasBeenSet() const { return m_instanceUrlHasBeenSet; }
    template<typename InstanceUrlT = Aws::String>
    void SetInstanceUrl(InstanceUrlT&& value) { m_instanceUrlHasBeenSet = true; m_instanceUrl = std::forward<InstanceUrlT>(value); }
    template<typename InstanceUrlT = Aws::String>
    PardotConnectorProfileProperties& WithInstanceUrl(InstanceUrlT&& value) { SetInstanceUrl(std::forward<InstanceUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the connector profile applies to a sandbox or production
     * environment.</p>
     */
    inline bool GetIsSandboxEnvironment() const { return m_isSandboxEnvironment; }
    inline bool IsSandboxEnvironmentHasBeenSet() const { return m_isSandboxEnvironmentHasBeenSet; }
    inline void SetIsSandboxEnvironment(bool value) { m_isSandboxEnvironmentHasBeenSet = true; m_isSandboxEnvironment = value; }
    inline PardotConnectorProfileProperties& WithIsSandboxEnvironment(bool value) { SetIsSandboxEnvironment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The business unit id of Salesforce Pardot instance.</p>
     */
    inline const Aws::String& GetBusinessUnitId() const { return m_businessUnitId; }
    inline bool BusinessUnitIdHasBeenSet() const { return m_businessUnitIdHasBeenSet; }
    template<typename BusinessUnitIdT = Aws::String>
    void SetBusinessUnitId(BusinessUnitIdT&& value) { m_businessUnitIdHasBeenSet = true; m_businessUnitId = std::forward<BusinessUnitIdT>(value); }
    template<typename BusinessUnitIdT = Aws::String>
    PardotConnectorProfileProperties& WithBusinessUnitId(BusinessUnitIdT&& value) { SetBusinessUnitId(std::forward<BusinessUnitIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceUrl;
    bool m_instanceUrlHasBeenSet = false;

    bool m_isSandboxEnvironment{false};
    bool m_isSandboxEnvironmentHasBeenSet = false;

    Aws::String m_businessUnitId;
    bool m_businessUnitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
