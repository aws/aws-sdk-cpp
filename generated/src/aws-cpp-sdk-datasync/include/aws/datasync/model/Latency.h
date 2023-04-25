/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>

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
namespace DataSync
{
namespace Model
{

  /**
   * <p>The latency peaks for an on-premises storage system resource. Each data point
   * represents the 95th percentile peak value during a 1-hour
   * interval.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/Latency">AWS
   * API Reference</a></p>
   */
  class Latency
  {
  public:
    AWS_DATASYNC_API Latency();
    AWS_DATASYNC_API Latency(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Latency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Peak latency for read operations.</p>
     */
    inline double GetRead() const{ return m_read; }

    /**
     * <p>Peak latency for read operations.</p>
     */
    inline bool ReadHasBeenSet() const { return m_readHasBeenSet; }

    /**
     * <p>Peak latency for read operations.</p>
     */
    inline void SetRead(double value) { m_readHasBeenSet = true; m_read = value; }

    /**
     * <p>Peak latency for read operations.</p>
     */
    inline Latency& WithRead(double value) { SetRead(value); return *this;}


    /**
     * <p>Peak latency for write operations.</p>
     */
    inline double GetWrite() const{ return m_write; }

    /**
     * <p>Peak latency for write operations.</p>
     */
    inline bool WriteHasBeenSet() const { return m_writeHasBeenSet; }

    /**
     * <p>Peak latency for write operations.</p>
     */
    inline void SetWrite(double value) { m_writeHasBeenSet = true; m_write = value; }

    /**
     * <p>Peak latency for write operations.</p>
     */
    inline Latency& WithWrite(double value) { SetWrite(value); return *this;}


    /**
     * <p>Peak latency for operations unrelated to read and write operations.</p>
     */
    inline double GetOther() const{ return m_other; }

    /**
     * <p>Peak latency for operations unrelated to read and write operations.</p>
     */
    inline bool OtherHasBeenSet() const { return m_otherHasBeenSet; }

    /**
     * <p>Peak latency for operations unrelated to read and write operations.</p>
     */
    inline void SetOther(double value) { m_otherHasBeenSet = true; m_other = value; }

    /**
     * <p>Peak latency for operations unrelated to read and write operations.</p>
     */
    inline Latency& WithOther(double value) { SetOther(value); return *this;}

  private:

    double m_read;
    bool m_readHasBeenSet = false;

    double m_write;
    bool m_writeHasBeenSet = false;

    double m_other;
    bool m_otherHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
