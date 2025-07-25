/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/model/ContactHandlingScope.h>
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
   * <p>The contact handling configuration for the application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appintegrations-2020-07-29/ContactHandling">AWS
   * API Reference</a></p>
   */
  class ContactHandling
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ContactHandling() = default;
    AWS_APPINTEGRATIONSSERVICE_API ContactHandling(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API ContactHandling& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPINTEGRATIONSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the application refreshes for each contact or refreshes
     * only with each new browser session.</p>
     */
    inline ContactHandlingScope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(ContactHandlingScope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline ContactHandling& WithScope(ContactHandlingScope value) { SetScope(value); return *this;}
    ///@}
  private:

    ContactHandlingScope m_scope{ContactHandlingScope::NOT_SET};
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
