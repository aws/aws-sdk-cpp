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
    AWS_EC2_API InstanceUsage() = default;
    AWS_EC2_API InstanceUsage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceUsage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that is making use of the Capacity
     * Reservation.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    InstanceUsage& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances the Amazon Web Services account currently has in the
     * Capacity Reservation.</p>
     */
    inline int GetUsedInstanceCount() const { return m_usedInstanceCount; }
    inline bool UsedInstanceCountHasBeenSet() const { return m_usedInstanceCountHasBeenSet; }
    inline void SetUsedInstanceCount(int value) { m_usedInstanceCountHasBeenSet = true; m_usedInstanceCount = value; }
    inline InstanceUsage& WithUsedInstanceCount(int value) { SetUsedInstanceCount(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    int m_usedInstanceCount{0};
    bool m_usedInstanceCountHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
