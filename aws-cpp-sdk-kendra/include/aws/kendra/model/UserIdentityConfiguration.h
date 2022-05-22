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
  class AWS_KENDRA_API UserIdentityConfiguration
  {
  public:
    UserIdentityConfiguration();
    UserIdentityConfiguration(Aws::Utils::Json::JsonView jsonValue);
    UserIdentityConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services SSO field name that contains the identifiers of your
     * users, such as their emails. This is used for <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">user
     * context filtering</a> and for granting access to your Amazon Kendra experience.
     * You must set up Amazon Web Services SSO with Amazon Kendra. You must include
     * your users and groups in your Access Control List when you ingest documents into
     * your index. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/getting-started-aws-sso.html">Getting
     * started with an Amazon Web Services SSO identity source</a>.</p>
     */
    inline const Aws::String& GetIdentityAttributeName() const{ return m_identityAttributeName; }

    /**
     * <p>The Amazon Web Services SSO field name that contains the identifiers of your
     * users, such as their emails. This is used for <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">user
     * context filtering</a> and for granting access to your Amazon Kendra experience.
     * You must set up Amazon Web Services SSO with Amazon Kendra. You must include
     * your users and groups in your Access Control List when you ingest documents into
     * your index. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/getting-started-aws-sso.html">Getting
     * started with an Amazon Web Services SSO identity source</a>.</p>
     */
    inline bool IdentityAttributeNameHasBeenSet() const { return m_identityAttributeNameHasBeenSet; }

    /**
     * <p>The Amazon Web Services SSO field name that contains the identifiers of your
     * users, such as their emails. This is used for <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">user
     * context filtering</a> and for granting access to your Amazon Kendra experience.
     * You must set up Amazon Web Services SSO with Amazon Kendra. You must include
     * your users and groups in your Access Control List when you ingest documents into
     * your index. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/getting-started-aws-sso.html">Getting
     * started with an Amazon Web Services SSO identity source</a>.</p>
     */
    inline void SetIdentityAttributeName(const Aws::String& value) { m_identityAttributeNameHasBeenSet = true; m_identityAttributeName = value; }

    /**
     * <p>The Amazon Web Services SSO field name that contains the identifiers of your
     * users, such as their emails. This is used for <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">user
     * context filtering</a> and for granting access to your Amazon Kendra experience.
     * You must set up Amazon Web Services SSO with Amazon Kendra. You must include
     * your users and groups in your Access Control List when you ingest documents into
     * your index. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/getting-started-aws-sso.html">Getting
     * started with an Amazon Web Services SSO identity source</a>.</p>
     */
    inline void SetIdentityAttributeName(Aws::String&& value) { m_identityAttributeNameHasBeenSet = true; m_identityAttributeName = std::move(value); }

    /**
     * <p>The Amazon Web Services SSO field name that contains the identifiers of your
     * users, such as their emails. This is used for <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">user
     * context filtering</a> and for granting access to your Amazon Kendra experience.
     * You must set up Amazon Web Services SSO with Amazon Kendra. You must include
     * your users and groups in your Access Control List when you ingest documents into
     * your index. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/getting-started-aws-sso.html">Getting
     * started with an Amazon Web Services SSO identity source</a>.</p>
     */
    inline void SetIdentityAttributeName(const char* value) { m_identityAttributeNameHasBeenSet = true; m_identityAttributeName.assign(value); }

    /**
     * <p>The Amazon Web Services SSO field name that contains the identifiers of your
     * users, such as their emails. This is used for <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">user
     * context filtering</a> and for granting access to your Amazon Kendra experience.
     * You must set up Amazon Web Services SSO with Amazon Kendra. You must include
     * your users and groups in your Access Control List when you ingest documents into
     * your index. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/getting-started-aws-sso.html">Getting
     * started with an Amazon Web Services SSO identity source</a>.</p>
     */
    inline UserIdentityConfiguration& WithIdentityAttributeName(const Aws::String& value) { SetIdentityAttributeName(value); return *this;}

    /**
     * <p>The Amazon Web Services SSO field name that contains the identifiers of your
     * users, such as their emails. This is used for <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">user
     * context filtering</a> and for granting access to your Amazon Kendra experience.
     * You must set up Amazon Web Services SSO with Amazon Kendra. You must include
     * your users and groups in your Access Control List when you ingest documents into
     * your index. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/getting-started-aws-sso.html">Getting
     * started with an Amazon Web Services SSO identity source</a>.</p>
     */
    inline UserIdentityConfiguration& WithIdentityAttributeName(Aws::String&& value) { SetIdentityAttributeName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services SSO field name that contains the identifiers of your
     * users, such as their emails. This is used for <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/user-context-filter.html">user
     * context filtering</a> and for granting access to your Amazon Kendra experience.
     * You must set up Amazon Web Services SSO with Amazon Kendra. You must include
     * your users and groups in your Access Control List when you ingest documents into
     * your index. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/getting-started-aws-sso.html">Getting
     * started with an Amazon Web Services SSO identity source</a>.</p>
     */
    inline UserIdentityConfiguration& WithIdentityAttributeName(const char* value) { SetIdentityAttributeName(value); return *this;}

  private:

    Aws::String m_identityAttributeName;
    bool m_identityAttributeNameHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
