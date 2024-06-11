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
    AWS_APPFLOW_API PardotConnectorProfileProperties();
    AWS_APPFLOW_API PardotConnectorProfileProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API PardotConnectorProfileProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location of the Salesforce Pardot resource.</p>
     */
    inline const Aws::String& GetInstanceUrl() const{ return m_instanceUrl; }
    inline bool InstanceUrlHasBeenSet() const { return m_instanceUrlHasBeenSet; }
    inline void SetInstanceUrl(const Aws::String& value) { m_instanceUrlHasBeenSet = true; m_instanceUrl = value; }
    inline void SetInstanceUrl(Aws::String&& value) { m_instanceUrlHasBeenSet = true; m_instanceUrl = std::move(value); }
    inline void SetInstanceUrl(const char* value) { m_instanceUrlHasBeenSet = true; m_instanceUrl.assign(value); }
    inline PardotConnectorProfileProperties& WithInstanceUrl(const Aws::String& value) { SetInstanceUrl(value); return *this;}
    inline PardotConnectorProfileProperties& WithInstanceUrl(Aws::String&& value) { SetInstanceUrl(std::move(value)); return *this;}
    inline PardotConnectorProfileProperties& WithInstanceUrl(const char* value) { SetInstanceUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the connector profile applies to a sandbox or production
     * environment.</p>
     */
    inline bool GetIsSandboxEnvironment() const{ return m_isSandboxEnvironment; }
    inline bool IsSandboxEnvironmentHasBeenSet() const { return m_isSandboxEnvironmentHasBeenSet; }
    inline void SetIsSandboxEnvironment(bool value) { m_isSandboxEnvironmentHasBeenSet = true; m_isSandboxEnvironment = value; }
    inline PardotConnectorProfileProperties& WithIsSandboxEnvironment(bool value) { SetIsSandboxEnvironment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The business unit id of Salesforce Pardot instance.</p>
     */
    inline const Aws::String& GetBusinessUnitId() const{ return m_businessUnitId; }
    inline bool BusinessUnitIdHasBeenSet() const { return m_businessUnitIdHasBeenSet; }
    inline void SetBusinessUnitId(const Aws::String& value) { m_businessUnitIdHasBeenSet = true; m_businessUnitId = value; }
    inline void SetBusinessUnitId(Aws::String&& value) { m_businessUnitIdHasBeenSet = true; m_businessUnitId = std::move(value); }
    inline void SetBusinessUnitId(const char* value) { m_businessUnitIdHasBeenSet = true; m_businessUnitId.assign(value); }
    inline PardotConnectorProfileProperties& WithBusinessUnitId(const Aws::String& value) { SetBusinessUnitId(value); return *this;}
    inline PardotConnectorProfileProperties& WithBusinessUnitId(Aws::String&& value) { SetBusinessUnitId(std::move(value)); return *this;}
    inline PardotConnectorProfileProperties& WithBusinessUnitId(const char* value) { SetBusinessUnitId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceUrl;
    bool m_instanceUrlHasBeenSet = false;

    bool m_isSandboxEnvironment;
    bool m_isSandboxEnvironmentHasBeenSet = false;

    Aws::String m_businessUnitId;
    bool m_businessUnitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
