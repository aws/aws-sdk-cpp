/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information for the identifiers of your
   * users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/UserIdentityConfiguration">AWS
   * API Reference</a></p>
   */
  class UserIdentityConfiguration
  {
  public:
    AWS_KENDRA_API UserIdentityConfiguration() = default;
    AWS_KENDRA_API UserIdentityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API UserIdentityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IAM Identity Center field name that contains the identifiers of your
     * users, such as their emails. This is used for <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">user
     * context filtering</a> and for granting access to your Amazon Kendra experience.
     * You must set up IAM Identity Center with Amazon Kendra. You must include your
     * users and groups in your Access Control List when you ingest documents into your
     * index. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/getting-started-aws-sso.html">Getting
     * started with an IAM Identity Center identity source</a>.</p>
     */
    inline const Aws::String& GetIdentityAttributeName() const { return m_identityAttributeName; }
    inline bool IdentityAttributeNameHasBeenSet() const { return m_identityAttributeNameHasBeenSet; }
    template<typename IdentityAttributeNameT = Aws::String>
    void SetIdentityAttributeName(IdentityAttributeNameT&& value) { m_identityAttributeNameHasBeenSet = true; m_identityAttributeName = std::forward<IdentityAttributeNameT>(value); }
    template<typename IdentityAttributeNameT = Aws::String>
    UserIdentityConfiguration& WithIdentityAttributeName(IdentityAttributeNameT&& value) { SetIdentityAttributeName(std::forward<IdentityAttributeNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityAttributeName;
    bool m_identityAttributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
