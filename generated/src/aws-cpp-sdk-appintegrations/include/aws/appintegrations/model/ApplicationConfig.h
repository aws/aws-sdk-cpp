/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/model/ContactHandling.h>
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
   * <p>The configuration settings for the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ApplicationConfig">AWS
   * API Reference</a></p>
   */
  class ApplicationConfig
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ApplicationConfig() = default;
    AWS_APPINTEGRATIONSSERVICE_API ApplicationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API ApplicationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The contact handling configuration for the application.</p>
     */
    inline const ContactHandling& GetContactHandling() const { return m_contactHandling; }
    inline bool ContactHandlingHasBeenSet() const { return m_contactHandlingHasBeenSet; }
    template<typename ContactHandlingT = ContactHandling>
    void SetContactHandling(ContactHandlingT&& value) { m_contactHandlingHasBeenSet = true; m_contactHandling = std::forward<ContactHandlingT>(value); }
    template<typename ContactHandlingT = ContactHandling>
    ApplicationConfig& WithContactHandling(ContactHandlingT&& value) { SetContactHandling(std::forward<ContactHandlingT>(value)); return *this;}
    ///@}
  private:

    ContactHandling m_contactHandling;
    bool m_contactHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
