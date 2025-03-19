/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>The configuration settings for a specific serverless cache.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ServerlessCacheConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerlessCacheConfiguration
  {
  public:
    AWS_ELASTICACHE_API ServerlessCacheConfiguration() = default;
    AWS_ELASTICACHE_API ServerlessCacheConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ServerlessCacheConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of a serverless cache.</p>
     */
    inline const Aws::String& GetServerlessCacheName() const { return m_serverlessCacheName; }
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }
    template<typename ServerlessCacheNameT = Aws::String>
    void SetServerlessCacheName(ServerlessCacheNameT&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::forward<ServerlessCacheNameT>(value); }
    template<typename ServerlessCacheNameT = Aws::String>
    ServerlessCacheConfiguration& WithServerlessCacheName(ServerlessCacheNameT&& value) { SetServerlessCacheName(std::forward<ServerlessCacheNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine that the serverless cache is configured with.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    ServerlessCacheConfiguration& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version number that the serverless cache is configured with.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const { return m_majorEngineVersion; }
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }
    template<typename MajorEngineVersionT = Aws::String>
    void SetMajorEngineVersion(MajorEngineVersionT&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::forward<MajorEngineVersionT>(value); }
    template<typename MajorEngineVersionT = Aws::String>
    ServerlessCacheConfiguration& WithMajorEngineVersion(MajorEngineVersionT&& value) { SetMajorEngineVersion(std::forward<MajorEngineVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverlessCacheName;
    bool m_serverlessCacheNameHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
