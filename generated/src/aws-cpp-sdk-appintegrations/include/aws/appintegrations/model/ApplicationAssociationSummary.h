/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
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
namespace AppIntegrationsService
{
namespace Model
{

  /**
   * <p>Summary information about the Application Association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ApplicationAssociationSummary">AWS
   * API Reference</a></p>
   */
  class ApplicationAssociationSummary
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ApplicationAssociationSummary() = default;
    AWS_APPINTEGRATIONSSERVICE_API ApplicationAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API ApplicationAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Application Association.</p>
     */
    inline const Aws::String& GetApplicationAssociationArn() const { return m_applicationAssociationArn; }
    inline bool ApplicationAssociationArnHasBeenSet() const { return m_applicationAssociationArnHasBeenSet; }
    template<typename ApplicationAssociationArnT = Aws::String>
    void SetApplicationAssociationArn(ApplicationAssociationArnT&& value) { m_applicationAssociationArnHasBeenSet = true; m_applicationAssociationArn = std::forward<ApplicationAssociationArnT>(value); }
    template<typename ApplicationAssociationArnT = Aws::String>
    ApplicationAssociationSummary& WithApplicationAssociationArn(ApplicationAssociationArnT&& value) { SetApplicationAssociationArn(std::forward<ApplicationAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Application.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    ApplicationAssociationSummary& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the client that is associated with the Application
     * Association.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    ApplicationAssociationSummary& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationAssociationArn;
    bool m_applicationAssociationArnHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
