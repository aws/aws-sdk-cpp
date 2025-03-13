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
   * <p>A summary report for the attribute for a Region.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RegionalSummary">AWS
   * API Reference</a></p>
   */
  class RegionalSummary
  {
  public:
    AWS_EC2_API RegionalSummary() = default;
    AWS_EC2_API RegionalSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RegionalSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    RegionalSummary& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of accounts in the Region with the same configuration value for
     * the attribute that is most frequently observed.</p>
     */
    inline int GetNumberOfMatchedAccounts() const { return m_numberOfMatchedAccounts; }
    inline bool NumberOfMatchedAccountsHasBeenSet() const { return m_numberOfMatchedAccountsHasBeenSet; }
    inline void SetNumberOfMatchedAccounts(int value) { m_numberOfMatchedAccountsHasBeenSet = true; m_numberOfMatchedAccounts = value; }
    inline RegionalSummary& WithNumberOfMatchedAccounts(int value) { SetNumberOfMatchedAccounts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of accounts in the Region with a configuration value different
     * from the most frequently observed value for the attribute.</p>
     */
    inline int GetNumberOfUnmatchedAccounts() const { return m_numberOfUnmatchedAccounts; }
    inline bool NumberOfUnmatchedAccountsHasBeenSet() const { return m_numberOfUnmatchedAccountsHasBeenSet; }
    inline void SetNumberOfUnmatchedAccounts(int value) { m_numberOfUnmatchedAccountsHasBeenSet = true; m_numberOfUnmatchedAccounts = value; }
    inline RegionalSummary& WithNumberOfUnmatchedAccounts(int value) { SetNumberOfUnmatchedAccounts(value); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;

    int m_numberOfMatchedAccounts{0};
    bool m_numberOfMatchedAccountsHasBeenSet = false;

    int m_numberOfUnmatchedAccounts{0};
    bool m_numberOfUnmatchedAccountsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
