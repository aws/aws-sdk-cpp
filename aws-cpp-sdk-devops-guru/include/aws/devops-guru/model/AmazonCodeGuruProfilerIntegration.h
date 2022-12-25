/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/EventSourceOptInStatus.h>
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
   * <p>Information about your account's integration with Amazon CodeGuru Profiler.
   * This returns whether DevOps Guru is configured to consume recommendations
   * generated from Amazon CodeGuru Profiler.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AmazonCodeGuruProfilerIntegration">AWS
   * API Reference</a></p>
   */
  class AmazonCodeGuruProfilerIntegration
  {
  public:
    AWS_DEVOPSGURU_API AmazonCodeGuruProfilerIntegration();
    AWS_DEVOPSGURU_API AmazonCodeGuruProfilerIntegration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API AmazonCodeGuruProfilerIntegration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the CodeGuru Profiler integration. Specifies if DevOps Guru is
     * enabled to consume recommendations that are generated from Amazon CodeGuru
     * Profiler.</p>
     */
    inline const EventSourceOptInStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the CodeGuru Profiler integration. Specifies if DevOps Guru is
     * enabled to consume recommendations that are generated from Amazon CodeGuru
     * Profiler.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the CodeGuru Profiler integration. Specifies if DevOps Guru is
     * enabled to consume recommendations that are generated from Amazon CodeGuru
     * Profiler.</p>
     */
    inline void SetStatus(const EventSourceOptInStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the CodeGuru Profiler integration. Specifies if DevOps Guru is
     * enabled to consume recommendations that are generated from Amazon CodeGuru
     * Profiler.</p>
     */
    inline void SetStatus(EventSourceOptInStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the CodeGuru Profiler integration. Specifies if DevOps Guru is
     * enabled to consume recommendations that are generated from Amazon CodeGuru
     * Profiler.</p>
     */
    inline AmazonCodeGuruProfilerIntegration& WithStatus(const EventSourceOptInStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the CodeGuru Profiler integration. Specifies if DevOps Guru is
     * enabled to consume recommendations that are generated from Amazon CodeGuru
     * Profiler.</p>
     */
    inline AmazonCodeGuruProfilerIntegration& WithStatus(EventSourceOptInStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    EventSourceOptInStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
