/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/SeedUrl.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>The configuration of web URLs that you want to crawl. You should be
   * authorized to crawl the URLs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/UrlConfiguration">AWS
   * API Reference</a></p>
   */
  class UrlConfiguration
  {
  public:
    AWS_BEDROCKAGENT_API UrlConfiguration();
    AWS_BEDROCKAGENT_API UrlConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API UrlConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>One or more seed or starting point URLs.</p>
     */
    inline const Aws::Vector<SeedUrl>& GetSeedUrls() const{ return m_seedUrls; }
    inline bool SeedUrlsHasBeenSet() const { return m_seedUrlsHasBeenSet; }
    inline void SetSeedUrls(const Aws::Vector<SeedUrl>& value) { m_seedUrlsHasBeenSet = true; m_seedUrls = value; }
    inline void SetSeedUrls(Aws::Vector<SeedUrl>&& value) { m_seedUrlsHasBeenSet = true; m_seedUrls = std::move(value); }
    inline UrlConfiguration& WithSeedUrls(const Aws::Vector<SeedUrl>& value) { SetSeedUrls(value); return *this;}
    inline UrlConfiguration& WithSeedUrls(Aws::Vector<SeedUrl>&& value) { SetSeedUrls(std::move(value)); return *this;}
    inline UrlConfiguration& AddSeedUrls(const SeedUrl& value) { m_seedUrlsHasBeenSet = true; m_seedUrls.push_back(value); return *this; }
    inline UrlConfiguration& AddSeedUrls(SeedUrl&& value) { m_seedUrlsHasBeenSet = true; m_seedUrls.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SeedUrl> m_seedUrls;
    bool m_seedUrlsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
