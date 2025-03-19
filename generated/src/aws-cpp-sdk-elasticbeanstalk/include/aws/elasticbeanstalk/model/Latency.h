/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Represents the average latency for the slowest X percent of requests over the
   * last 10 seconds.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/Latency">AWS
   * API Reference</a></p>
   */
  class Latency
  {
  public:
    AWS_ELASTICBEANSTALK_API Latency() = default;
    AWS_ELASTICBEANSTALK_API Latency(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API Latency& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The average latency for the slowest 0.1 percent of requests over the last 10
     * seconds.</p>
     */
    inline double GetP999() const { return m_p999; }
    inline bool P999HasBeenSet() const { return m_p999HasBeenSet; }
    inline void SetP999(double value) { m_p999HasBeenSet = true; m_p999 = value; }
    inline Latency& WithP999(double value) { SetP999(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average latency for the slowest 1 percent of requests over the last 10
     * seconds.</p>
     */
    inline double GetP99() const { return m_p99; }
    inline bool P99HasBeenSet() const { return m_p99HasBeenSet; }
    inline void SetP99(double value) { m_p99HasBeenSet = true; m_p99 = value; }
    inline Latency& WithP99(double value) { SetP99(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average latency for the slowest 5 percent of requests over the last 10
     * seconds.</p>
     */
    inline double GetP95() const { return m_p95; }
    inline bool P95HasBeenSet() const { return m_p95HasBeenSet; }
    inline void SetP95(double value) { m_p95HasBeenSet = true; m_p95 = value; }
    inline Latency& WithP95(double value) { SetP95(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average latency for the slowest 10 percent of requests over the last 10
     * seconds.</p>
     */
    inline double GetP90() const { return m_p90; }
    inline bool P90HasBeenSet() const { return m_p90HasBeenSet; }
    inline void SetP90(double value) { m_p90HasBeenSet = true; m_p90 = value; }
    inline Latency& WithP90(double value) { SetP90(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average latency for the slowest 15 percent of requests over the last 10
     * seconds.</p>
     */
    inline double GetP85() const { return m_p85; }
    inline bool P85HasBeenSet() const { return m_p85HasBeenSet; }
    inline void SetP85(double value) { m_p85HasBeenSet = true; m_p85 = value; }
    inline Latency& WithP85(double value) { SetP85(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average latency for the slowest 25 percent of requests over the last 10
     * seconds.</p>
     */
    inline double GetP75() const { return m_p75; }
    inline bool P75HasBeenSet() const { return m_p75HasBeenSet; }
    inline void SetP75(double value) { m_p75HasBeenSet = true; m_p75 = value; }
    inline Latency& WithP75(double value) { SetP75(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average latency for the slowest 50 percent of requests over the last 10
     * seconds.</p>
     */
    inline double GetP50() const { return m_p50; }
    inline bool P50HasBeenSet() const { return m_p50HasBeenSet; }
    inline void SetP50(double value) { m_p50HasBeenSet = true; m_p50 = value; }
    inline Latency& WithP50(double value) { SetP50(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The average latency for the slowest 90 percent of requests over the last 10
     * seconds.</p>
     */
    inline double GetP10() const { return m_p10; }
    inline bool P10HasBeenSet() const { return m_p10HasBeenSet; }
    inline void SetP10(double value) { m_p10HasBeenSet = true; m_p10 = value; }
    inline Latency& WithP10(double value) { SetP10(value); return *this;}
    ///@}
  private:

    double m_p999{0.0};
    bool m_p999HasBeenSet = false;

    double m_p99{0.0};
    bool m_p99HasBeenSet = false;

    double m_p95{0.0};
    bool m_p95HasBeenSet = false;

    double m_p90{0.0};
    bool m_p90HasBeenSet = false;

    double m_p85{0.0};
    bool m_p85HasBeenSet = false;

    double m_p75{0.0};
    bool m_p75HasBeenSet = false;

    double m_p50{0.0};
    bool m_p50HasBeenSet = false;

    double m_p10{0.0};
    bool m_p10HasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
