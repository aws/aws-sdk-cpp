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
   * <p>Describes the event sources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/EventSourcesConfig">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API EventSourcesConfig
  {
  public:
    EventSourcesConfig();
    EventSourcesConfig(Aws::Utils::Json::JsonView jsonValue);
    EventSourcesConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const AmazonCodeGuruProfilerIntegration& GetAmazonCodeGuruProfiler() const{ return m_amazonCodeGuruProfiler; }

    /**
     * <p/>
     */
    inline bool AmazonCodeGuruProfilerHasBeenSet() const { return m_amazonCodeGuruProfilerHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAmazonCodeGuruProfiler(const AmazonCodeGuruProfilerIntegration& value) { m_amazonCodeGuruProfilerHasBeenSet = true; m_amazonCodeGuruProfiler = value; }

    /**
     * <p/>
     */
    inline void SetAmazonCodeGuruProfiler(AmazonCodeGuruProfilerIntegration&& value) { m_amazonCodeGuruProfilerHasBeenSet = true; m_amazonCodeGuruProfiler = std::move(value); }

    /**
     * <p/>
     */
    inline EventSourcesConfig& WithAmazonCodeGuruProfiler(const AmazonCodeGuruProfilerIntegration& value) { SetAmazonCodeGuruProfiler(value); return *this;}

    /**
     * <p/>
     */
    inline EventSourcesConfig& WithAmazonCodeGuruProfiler(AmazonCodeGuruProfilerIntegration&& value) { SetAmazonCodeGuruProfiler(std::move(value)); return *this;}

  private:

    AmazonCodeGuruProfilerIntegration m_amazonCodeGuruProfiler;
    bool m_amazonCodeGuruProfilerHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
