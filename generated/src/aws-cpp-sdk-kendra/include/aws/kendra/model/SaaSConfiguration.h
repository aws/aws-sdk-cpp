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
   * <p>Provides the configuration information to connect to GitHub Enterprise Cloud
   * (SaaS).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SaaSConfiguration">AWS
   * API Reference</a></p>
   */
  class SaaSConfiguration
  {
  public:
    AWS_KENDRA_API SaaSConfiguration() = default;
    AWS_KENDRA_API SaaSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SaaSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the organization of the GitHub Enterprise Cloud (SaaS) account
     * you want to connect to. You can find your organization name by logging into
     * GitHub desktop and selecting <b>Your organizations</b> under your profile
     * picture dropdown.</p>
     */
    inline const Aws::String& GetOrganizationName() const { return m_organizationName; }
    inline bool OrganizationNameHasBeenSet() const { return m_organizationNameHasBeenSet; }
    template<typename OrganizationNameT = Aws::String>
    void SetOrganizationName(OrganizationNameT&& value) { m_organizationNameHasBeenSet = true; m_organizationName = std::forward<OrganizationNameT>(value); }
    template<typename OrganizationNameT = Aws::String>
    SaaSConfiguration& WithOrganizationName(OrganizationNameT&& value) { SetOrganizationName(std::forward<OrganizationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The GitHub host URL or API endpoint URL. For example,
     * <i>https://api.github.com</i>.</p>
     */
    inline const Aws::String& GetHostUrl() const { return m_hostUrl; }
    inline bool HostUrlHasBeenSet() const { return m_hostUrlHasBeenSet; }
    template<typename HostUrlT = Aws::String>
    void SetHostUrl(HostUrlT&& value) { m_hostUrlHasBeenSet = true; m_hostUrl = std::forward<HostUrlT>(value); }
    template<typename HostUrlT = Aws::String>
    SaaSConfiguration& WithHostUrl(HostUrlT&& value) { SetHostUrl(std::forward<HostUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationName;
    bool m_organizationNameHasBeenSet = false;

    Aws::String m_hostUrl;
    bool m_hostUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
