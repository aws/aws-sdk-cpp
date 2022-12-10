/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Contains the scaling configuration of a Neptune Serverless DB cluster.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-serverless-using.html">Using
   * Amazon Neptune Serverless</a> in the <i>Amazon Neptune User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ServerlessV2ScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class ServerlessV2ScalingConfiguration
  {
  public:
    AWS_NEPTUNE_API ServerlessV2ScalingConfiguration();
    AWS_NEPTUNE_API ServerlessV2ScalingConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API ServerlessV2ScalingConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum number of Neptune capacity units (NCUs) for a DB instance in a
     * Neptune Serverless cluster. You can specify NCU values in half-step increments,
     * such as 8, 8.5, 9, and so on.</p>
     */
    inline double GetMinCapacity() const{ return m_minCapacity; }

    /**
     * <p>The minimum number of Neptune capacity units (NCUs) for a DB instance in a
     * Neptune Serverless cluster. You can specify NCU values in half-step increments,
     * such as 8, 8.5, 9, and so on.</p>
     */
    inline bool MinCapacityHasBeenSet() const { return m_minCapacityHasBeenSet; }

    /**
     * <p>The minimum number of Neptune capacity units (NCUs) for a DB instance in a
     * Neptune Serverless cluster. You can specify NCU values in half-step increments,
     * such as 8, 8.5, 9, and so on.</p>
     */
    inline void SetMinCapacity(double value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }

    /**
     * <p>The minimum number of Neptune capacity units (NCUs) for a DB instance in a
     * Neptune Serverless cluster. You can specify NCU values in half-step increments,
     * such as 8, 8.5, 9, and so on.</p>
     */
    inline ServerlessV2ScalingConfiguration& WithMinCapacity(double value) { SetMinCapacity(value); return *this;}


    /**
     * <p>The maximum number of Neptune capacity units (NCUs) for a DB instance in a
     * Neptune Serverless cluster. You can specify NCU values in half-step increments,
     * such as 40, 40.5, 41, and so on.</p>
     */
    inline double GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum number of Neptune capacity units (NCUs) for a DB instance in a
     * Neptune Serverless cluster. You can specify NCU values in half-step increments,
     * such as 40, 40.5, 41, and so on.</p>
     */
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }

    /**
     * <p>The maximum number of Neptune capacity units (NCUs) for a DB instance in a
     * Neptune Serverless cluster. You can specify NCU values in half-step increments,
     * such as 40, 40.5, 41, and so on.</p>
     */
    inline void SetMaxCapacity(double value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum number of Neptune capacity units (NCUs) for a DB instance in a
     * Neptune Serverless cluster. You can specify NCU values in half-step increments,
     * such as 40, 40.5, 41, and so on.</p>
     */
    inline ServerlessV2ScalingConfiguration& WithMaxCapacity(double value) { SetMaxCapacity(value); return *this;}

  private:

    double m_minCapacity;
    bool m_minCapacityHasBeenSet = false;

    double m_maxCapacity;
    bool m_maxCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
