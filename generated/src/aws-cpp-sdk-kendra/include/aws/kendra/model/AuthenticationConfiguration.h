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
    AWS_KENDRA_API AuthenticationConfiguration();
    AWS_KENDRA_API AuthenticationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API AuthenticationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of configuration information that's required to connect to and crawl
     * a website host using basic authentication credentials.</p> <p>The list includes
     * the name and port number of the website host.</p>
     */
    inline const Aws::Vector<BasicAuthenticationConfiguration>& GetBasicAuthentication() const{ return m_basicAuthentication; }

    /**
     * <p>The list of configuration information that's required to connect to and crawl
     * a website host using basic authentication credentials.</p> <p>The list includes
     * the name and port number of the website host.</p>
     */
    inline bool BasicAuthenticationHasBeenSet() const { return m_basicAuthenticationHasBeenSet; }

    /**
     * <p>The list of configuration information that's required to connect to and crawl
     * a website host using basic authentication credentials.</p> <p>The list includes
     * the name and port number of the website host.</p>
     */
    inline void SetBasicAuthentication(const Aws::Vector<BasicAuthenticationConfiguration>& value) { m_basicAuthenticationHasBeenSet = true; m_basicAuthentication = value; }

    /**
     * <p>The list of configuration information that's required to connect to and crawl
     * a website host using basic authentication credentials.</p> <p>The list includes
     * the name and port number of the website host.</p>
     */
    inline void SetBasicAuthentication(Aws::Vector<BasicAuthenticationConfiguration>&& value) { m_basicAuthenticationHasBeenSet = true; m_basicAuthentication = std::move(value); }

    /**
     * <p>The list of configuration information that's required to connect to and crawl
     * a website host using basic authentication credentials.</p> <p>The list includes
     * the name and port number of the website host.</p>
     */
    inline AuthenticationConfiguration& WithBasicAuthentication(const Aws::Vector<BasicAuthenticationConfiguration>& value) { SetBasicAuthentication(value); return *this;}

    /**
     * <p>The list of configuration information that's required to connect to and crawl
     * a website host using basic authentication credentials.</p> <p>The list includes
     * the name and port number of the website host.</p>
     */
    inline AuthenticationConfiguration& WithBasicAuthentication(Aws::Vector<BasicAuthenticationConfiguration>&& value) { SetBasicAuthentication(std::move(value)); return *this;}

    /**
     * <p>The list of configuration information that's required to connect to and crawl
     * a website host using basic authentication credentials.</p> <p>The list includes
     * the name and port number of the website host.</p>
     */
    inline AuthenticationConfiguration& AddBasicAuthentication(const BasicAuthenticationConfiguration& value) { m_basicAuthenticationHasBeenSet = true; m_basicAuthentication.push_back(value); return *this; }

    /**
     * <p>The list of configuration information that's required to connect to and crawl
     * a website host using basic authentication credentials.</p> <p>The list includes
     * the name and port number of the website host.</p>
     */
    inline AuthenticationConfiguration& AddBasicAuthentication(BasicAuthenticationConfiguration&& value) { m_basicAuthenticationHasBeenSet = true; m_basicAuthentication.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BasicAuthenticationConfiguration> m_basicAuthentication;
    bool m_basicAuthenticationHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
