/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/ContentSourceConfiguration.h>
#include <aws/kendra/model/UserIdentityConfiguration.h>
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
   * <p>Provides the configuration information for your Amazon Kendra experience.
   * This includes the data source IDs and/or FAQ IDs, and user or group information
   * to grant access to your Amazon Kendra experience.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ExperienceConfiguration">AWS
   * API Reference</a></p>
   */
  class ExperienceConfiguration
  {
  public:
    AWS_KENDRA_API ExperienceConfiguration() = default;
    AWS_KENDRA_API ExperienceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ExperienceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifiers of your data sources and FAQs. Or, you can specify that you
     * want to use documents indexed via the <code>BatchPutDocument</code> API. This is
     * the content you want to use for your Amazon Kendra experience.</p>
     */
    inline const ContentSourceConfiguration& GetContentSourceConfiguration() const { return m_contentSourceConfiguration; }
    inline bool ContentSourceConfigurationHasBeenSet() const { return m_contentSourceConfigurationHasBeenSet; }
    template<typename ContentSourceConfigurationT = ContentSourceConfiguration>
    void SetContentSourceConfiguration(ContentSourceConfigurationT&& value) { m_contentSourceConfigurationHasBeenSet = true; m_contentSourceConfiguration = std::forward<ContentSourceConfigurationT>(value); }
    template<typename ContentSourceConfigurationT = ContentSourceConfiguration>
    ExperienceConfiguration& WithContentSourceConfiguration(ContentSourceConfigurationT&& value) { SetContentSourceConfiguration(std::forward<ContentSourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center field name that contains the identifiers of your
     * users, such as their emails.</p>
     */
    inline const UserIdentityConfiguration& GetUserIdentityConfiguration() const { return m_userIdentityConfiguration; }
    inline bool UserIdentityConfigurationHasBeenSet() const { return m_userIdentityConfigurationHasBeenSet; }
    template<typename UserIdentityConfigurationT = UserIdentityConfiguration>
    void SetUserIdentityConfiguration(UserIdentityConfigurationT&& value) { m_userIdentityConfigurationHasBeenSet = true; m_userIdentityConfiguration = std::forward<UserIdentityConfigurationT>(value); }
    template<typename UserIdentityConfigurationT = UserIdentityConfiguration>
    ExperienceConfiguration& WithUserIdentityConfiguration(UserIdentityConfigurationT&& value) { SetUserIdentityConfiguration(std::forward<UserIdentityConfigurationT>(value)); return *this;}
    ///@}
  private:

    ContentSourceConfiguration m_contentSourceConfiguration;
    bool m_contentSourceConfigurationHasBeenSet = false;

    UserIdentityConfiguration m_userIdentityConfiguration;
    bool m_userIdentityConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
