/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Information about the Capacity Reservation usage.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceUsage">AWS
   * API Reference</a></p>
   */
  class InstanceUsage
  {
  public:
    AWS_EC2_API InstanceUsage();
    AWS_EC2_API InstanceUsage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceUsage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the Amazon Web Services account that is making use of the Capacity
     * Reservation.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account that is making use of the Capacity
     * Reservation.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that is making use of the Capacity
     * Reservation.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that is making use of the Capacity
     * Reservation.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that is making use of the Capacity
     * Reservation.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that is making use of the Capacity
     * Reservation.</p>
     */
    inline InstanceUsage& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making use of the Capacity
     * Reservation.</p>
     */
    inline InstanceUsage& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making use of the Capacity
     * Reservation.</p>
     */
    inline InstanceUsage& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The number of instances the Amazon Web Services account currently has in the
     * Capacity Reservation.</p>
     */
    inline int GetUsedInstanceCount() const{ return m_usedInstanceCount; }

    /**
     * <p>The number of instances the Amazon Web Services account currently has in the
     * Capacity Reservation.</p>
     */
    inline bool UsedInstanceCountHasBeenSet() const { return m_usedInstanceCountHasBeenSet; }

    /**
     * <p>The number of instances the Amazon Web Services account currently has in the
     * Capacity Reservation.</p>
     */
    inline void SetUsedInstanceCount(int value) { m_usedInstanceCountHasBeenSet = true; m_usedInstanceCount = value; }

    /**
     * <p>The number of instances the Amazon Web Services account currently has in the
     * Capacity Reservation.</p>
     */
    inline InstanceUsage& WithUsedInstanceCount(int value) { SetUsedInstanceCount(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    int m_usedInstanceCount;
    bool m_usedInstanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
