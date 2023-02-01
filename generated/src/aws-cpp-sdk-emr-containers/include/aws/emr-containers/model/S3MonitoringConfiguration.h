/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p> Amazon S3 configuration for monitoring log publishing. You can configure
   * your jobs to send log information to Amazon S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/S3MonitoringConfiguration">AWS
   * API Reference</a></p>
   */
  class S3MonitoringConfiguration
  {
  public:
    AWS_EMRCONTAINERS_API S3MonitoringConfiguration();
    AWS_EMRCONTAINERS_API S3MonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API S3MonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon S3 destination URI for log publishing.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }

    /**
     * <p>Amazon S3 destination URI for log publishing.</p>
     */
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }

    /**
     * <p>Amazon S3 destination URI for log publishing.</p>
     */
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }

    /**
     * <p>Amazon S3 destination URI for log publishing.</p>
     */
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = std::move(value); }

    /**
     * <p>Amazon S3 destination URI for log publishing.</p>
     */
    inline void SetLogUri(const char* value) { m_logUriHasBeenSet = true; m_logUri.assign(value); }

    /**
     * <p>Amazon S3 destination URI for log publishing.</p>
     */
    inline S3MonitoringConfiguration& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}

    /**
     * <p>Amazon S3 destination URI for log publishing.</p>
     */
    inline S3MonitoringConfiguration& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}

    /**
     * <p>Amazon S3 destination URI for log publishing.</p>
     */
    inline S3MonitoringConfiguration& WithLogUri(const char* value) { SetLogUri(value); return *this;}

  private:

    Aws::String m_logUri;
    bool m_logUriHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
