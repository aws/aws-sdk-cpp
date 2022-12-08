/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/AmazonCodeGuruProfilerIntegration.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p>Information about the integration of DevOps Guru as consumer with another AWS
   * service, such as AWS CodeGuru Profiler via EventBridge.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/EventSourcesConfig">AWS
   * API Reference</a></p>
   */
  class EventSourcesConfig
  {
  public:
    AWS_DEVOPSGURU_API EventSourcesConfig();
    AWS_DEVOPSGURU_API EventSourcesConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API EventSourcesConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about whether DevOps Guru is configured to consume
     * recommendations which are generated from AWS CodeGuru Profiler.</p>
     */
    inline const AmazonCodeGuruProfilerIntegration& GetAmazonCodeGuruProfiler() const{ return m_amazonCodeGuruProfiler; }

    /**
     * <p>Information about whether DevOps Guru is configured to consume
     * recommendations which are generated from AWS CodeGuru Profiler.</p>
     */
    inline bool AmazonCodeGuruProfilerHasBeenSet() const { return m_amazonCodeGuruProfilerHasBeenSet; }

    /**
     * <p>Information about whether DevOps Guru is configured to consume
     * recommendations which are generated from AWS CodeGuru Profiler.</p>
     */
    inline void SetAmazonCodeGuruProfiler(const AmazonCodeGuruProfilerIntegration& value) { m_amazonCodeGuruProfilerHasBeenSet = true; m_amazonCodeGuruProfiler = value; }

    /**
     * <p>Information about whether DevOps Guru is configured to consume
     * recommendations which are generated from AWS CodeGuru Profiler.</p>
     */
    inline void SetAmazonCodeGuruProfiler(AmazonCodeGuruProfilerIntegration&& value) { m_amazonCodeGuruProfilerHasBeenSet = true; m_amazonCodeGuruProfiler = std::move(value); }

    /**
     * <p>Information about whether DevOps Guru is configured to consume
     * recommendations which are generated from AWS CodeGuru Profiler.</p>
     */
    inline EventSourcesConfig& WithAmazonCodeGuruProfiler(const AmazonCodeGuruProfilerIntegration& value) { SetAmazonCodeGuruProfiler(value); return *this;}

    /**
     * <p>Information about whether DevOps Guru is configured to consume
     * recommendations which are generated from AWS CodeGuru Profiler.</p>
     */
    inline EventSourcesConfig& WithAmazonCodeGuruProfiler(AmazonCodeGuruProfilerIntegration&& value) { SetAmazonCodeGuruProfiler(std::move(value)); return *this;}

  private:

    AmazonCodeGuruProfilerIntegration m_amazonCodeGuruProfiler;
    bool m_amazonCodeGuruProfilerHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
