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
    AWS_ELASTICACHE_API ServerlessCacheConfiguration();
    AWS_ELASTICACHE_API ServerlessCacheConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ServerlessCacheConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The identifier of a serverless cache.</p>
     */
    inline const Aws::String& GetServerlessCacheName() const{ return m_serverlessCacheName; }
    inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }
    inline void SetServerlessCacheName(const Aws::String& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = value; }
    inline void SetServerlessCacheName(Aws::String&& value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName = std::move(value); }
    inline void SetServerlessCacheName(const char* value) { m_serverlessCacheNameHasBeenSet = true; m_serverlessCacheName.assign(value); }
    inline ServerlessCacheConfiguration& WithServerlessCacheName(const Aws::String& value) { SetServerlessCacheName(value); return *this;}
    inline ServerlessCacheConfiguration& WithServerlessCacheName(Aws::String&& value) { SetServerlessCacheName(std::move(value)); return *this;}
    inline ServerlessCacheConfiguration& WithServerlessCacheName(const char* value) { SetServerlessCacheName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine that the serverless cache is configured with.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline ServerlessCacheConfiguration& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline ServerlessCacheConfiguration& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline ServerlessCacheConfiguration& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version number that the serverless cache is configured with.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const{ return m_majorEngineVersion; }
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }
    inline void SetMajorEngineVersion(const Aws::String& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = value; }
    inline void SetMajorEngineVersion(Aws::String&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::move(value); }
    inline void SetMajorEngineVersion(const char* value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion.assign(value); }
    inline ServerlessCacheConfiguration& WithMajorEngineVersion(const Aws::String& value) { SetMajorEngineVersion(value); return *this;}
    inline ServerlessCacheConfiguration& WithMajorEngineVersion(Aws::String&& value) { SetMajorEngineVersion(std::move(value)); return *this;}
    inline ServerlessCacheConfiguration& WithMajorEngineVersion(const char* value) { SetMajorEngineVersion(value); return *this;}
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
