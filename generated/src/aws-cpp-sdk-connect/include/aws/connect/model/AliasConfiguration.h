/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Configuration information of an email alias.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AliasConfiguration">AWS
   * API Reference</a></p>
   */
  class AliasConfiguration
  {
  public:
    AWS_CONNECT_API AliasConfiguration() = default;
    AWS_CONNECT_API AliasConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AliasConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email address ID.</p>
     */
    inline const Aws::String& GetEmailAddressId() const { return m_emailAddressId; }
    inline bool EmailAddressIdHasBeenSet() const { return m_emailAddressIdHasBeenSet; }
    template<typename EmailAddressIdT = Aws::String>
    void SetEmailAddressId(EmailAddressIdT&& value) { m_emailAddressIdHasBeenSet = true; m_emailAddressId = std::forward<EmailAddressIdT>(value); }
    template<typename EmailAddressIdT = Aws::String>
    AliasConfiguration& WithEmailAddressId(EmailAddressIdT&& value) { SetEmailAddressId(std::forward<EmailAddressIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_emailAddressId;
    bool m_emailAddressIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
