/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/S3Target.h>
#include <aws/glue/model/JdbcTarget.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies data stores to crawl.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CrawlerTargets">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API CrawlerTargets
  {
  public:
    CrawlerTargets();
    CrawlerTargets(const Aws::Utils::Json::JsonValue& jsonValue);
    CrawlerTargets& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies Amazon S3 targets.</p>
     */
    inline const Aws::Vector<S3Target>& GetS3Targets() const{ return m_s3Targets; }

    /**
     * <p>Specifies Amazon S3 targets.</p>
     */
    inline void SetS3Targets(const Aws::Vector<S3Target>& value) { m_s3TargetsHasBeenSet = true; m_s3Targets = value; }

    /**
     * <p>Specifies Amazon S3 targets.</p>
     */
    inline void SetS3Targets(Aws::Vector<S3Target>&& value) { m_s3TargetsHasBeenSet = true; m_s3Targets = std::move(value); }

    /**
     * <p>Specifies Amazon S3 targets.</p>
     */
    inline CrawlerTargets& WithS3Targets(const Aws::Vector<S3Target>& value) { SetS3Targets(value); return *this;}

    /**
     * <p>Specifies Amazon S3 targets.</p>
     */
    inline CrawlerTargets& WithS3Targets(Aws::Vector<S3Target>&& value) { SetS3Targets(std::move(value)); return *this;}

    /**
     * <p>Specifies Amazon S3 targets.</p>
     */
    inline CrawlerTargets& AddS3Targets(const S3Target& value) { m_s3TargetsHasBeenSet = true; m_s3Targets.push_back(value); return *this; }

    /**
     * <p>Specifies Amazon S3 targets.</p>
     */
    inline CrawlerTargets& AddS3Targets(S3Target&& value) { m_s3TargetsHasBeenSet = true; m_s3Targets.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies JDBC targets.</p>
     */
    inline const Aws::Vector<JdbcTarget>& GetJdbcTargets() const{ return m_jdbcTargets; }

    /**
     * <p>Specifies JDBC targets.</p>
     */
    inline void SetJdbcTargets(const Aws::Vector<JdbcTarget>& value) { m_jdbcTargetsHasBeenSet = true; m_jdbcTargets = value; }

    /**
     * <p>Specifies JDBC targets.</p>
     */
    inline void SetJdbcTargets(Aws::Vector<JdbcTarget>&& value) { m_jdbcTargetsHasBeenSet = true; m_jdbcTargets = std::move(value); }

    /**
     * <p>Specifies JDBC targets.</p>
     */
    inline CrawlerTargets& WithJdbcTargets(const Aws::Vector<JdbcTarget>& value) { SetJdbcTargets(value); return *this;}

    /**
     * <p>Specifies JDBC targets.</p>
     */
    inline CrawlerTargets& WithJdbcTargets(Aws::Vector<JdbcTarget>&& value) { SetJdbcTargets(std::move(value)); return *this;}

    /**
     * <p>Specifies JDBC targets.</p>
     */
    inline CrawlerTargets& AddJdbcTargets(const JdbcTarget& value) { m_jdbcTargetsHasBeenSet = true; m_jdbcTargets.push_back(value); return *this; }

    /**
     * <p>Specifies JDBC targets.</p>
     */
    inline CrawlerTargets& AddJdbcTargets(JdbcTarget&& value) { m_jdbcTargetsHasBeenSet = true; m_jdbcTargets.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<S3Target> m_s3Targets;
    bool m_s3TargetsHasBeenSet;

    Aws::Vector<JdbcTarget> m_jdbcTargets;
    bool m_jdbcTargetsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
