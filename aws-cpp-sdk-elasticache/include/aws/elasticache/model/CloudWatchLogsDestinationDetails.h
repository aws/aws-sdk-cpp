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
   * <p>The configuration details of the CloudWatch Logs destination.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/CloudWatchLogsDestinationDetails">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogsDestinationDetails
  {
  public:
    AWS_ELASTICACHE_API CloudWatchLogsDestinationDetails();
    AWS_ELASTICACHE_API CloudWatchLogsDestinationDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API CloudWatchLogsDestinationDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the CloudWatch Logs log group.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }

    /**
     * <p>The name of the CloudWatch Logs log group.</p>
     */
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }

    /**
     * <p>The name of the CloudWatch Logs log group.</p>
     */
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }

    /**
     * <p>The name of the CloudWatch Logs log group.</p>
     */
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }

    /**
     * <p>The name of the CloudWatch Logs log group.</p>
     */
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }

    /**
     * <p>The name of the CloudWatch Logs log group.</p>
     */
    inline CloudWatchLogsDestinationDetails& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}

    /**
     * <p>The name of the CloudWatch Logs log group.</p>
     */
    inline CloudWatchLogsDestinationDetails& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch Logs log group.</p>
     */
    inline CloudWatchLogsDestinationDetails& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}

  private:

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
