/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/BasicAuthenticationConfiguration.h>
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
   * <p>Provides the configuration information to connect to websites that require
   * user authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/AuthenticationConfiguration">AWS
   * API Reference</a></p>
   */
  class AuthenticationConfiguration
  {
  public:
    AWS_KENDRA_API AuthenticationConfiguration() = default;
    AWS_KENDRA_API AuthenticationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AuthenticationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of configuration information that's required to connect to and crawl
     * a website host using basic authentication credentials.</p> <p>The list includes
     * the name and port number of the website host.</p>
     */
    inline const Aws::Vector<BasicAuthenticationConfiguration>& GetBasicAuthentication() const { return m_basicAuthentication; }
    inline bool BasicAuthenticationHasBeenSet() const { return m_basicAuthenticationHasBeenSet; }
    template<typename BasicAuthenticationT = Aws::Vector<BasicAuthenticationConfiguration>>
    void SetBasicAuthentication(BasicAuthenticationT&& value) { m_basicAuthenticationHasBeenSet = true; m_basicAuthentication = std::forward<BasicAuthenticationT>(value); }
    template<typename BasicAuthenticationT = Aws::Vector<BasicAuthenticationConfiguration>>
    AuthenticationConfiguration& WithBasicAuthentication(BasicAuthenticationT&& value) { SetBasicAuthentication(std::forward<BasicAuthenticationT>(value)); return *this;}
    template<typename BasicAuthenticationT = BasicAuthenticationConfiguration>
    AuthenticationConfiguration& AddBasicAuthentication(BasicAuthenticationT&& value) { m_basicAuthenticationHasBeenSet = true; m_basicAuthentication.emplace_back(std::forward<BasicAuthenticationT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<BasicAuthenticationConfiguration> m_basicAuthentication;
    bool m_basicAuthenticationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
