/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Provides timing details for the job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobTimers">AWS
   * API Reference</a></p>
   */
  class JobTimers
  {
  public:
    AWS_S3CONTROL_API JobTimers();
    AWS_S3CONTROL_API JobTimers(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobTimers& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Indicates the elapsed time in seconds the job has been in the Active job
     * state.</p>
     */
    inline long long GetElapsedTimeInActiveSeconds() const{ return m_elapsedTimeInActiveSeconds; }

    /**
     * <p>Indicates the elapsed time in seconds the job has been in the Active job
     * state.</p>
     */
    inline bool ElapsedTimeInActiveSecondsHasBeenSet() const { return m_elapsedTimeInActiveSecondsHasBeenSet; }

    /**
     * <p>Indicates the elapsed time in seconds the job has been in the Active job
     * state.</p>
     */
    inline void SetElapsedTimeInActiveSeconds(long long value) { m_elapsedTimeInActiveSecondsHasBeenSet = true; m_elapsedTimeInActiveSeconds = value; }

    /**
     * <p>Indicates the elapsed time in seconds the job has been in the Active job
     * state.</p>
     */
    inline JobTimers& WithElapsedTimeInActiveSeconds(long long value) { SetElapsedTimeInActiveSeconds(value); return *this;}

  private:

    long long m_elapsedTimeInActiveSeconds;
    bool m_elapsedTimeInActiveSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
