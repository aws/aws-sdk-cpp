/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/RegionalSummary.h>
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
   * <p>A summary report for the attribute across all Regions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AttributeSummary">AWS
   * API Reference</a></p>
   */
  class AttributeSummary
  {
  public:
    AWS_EC2_API AttributeSummary();
    AWS_EC2_API AttributeSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AttributeSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the attribute.</p>
     */
    inline const Aws::String& GetAttributeName() const{ return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    inline void SetAttributeName(const Aws::String& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }
    inline void SetAttributeName(Aws::String&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }
    inline void SetAttributeName(const char* value) { m_attributeNameHasBeenSet = true; m_attributeName.assign(value); }
    inline AttributeSummary& WithAttributeName(const Aws::String& value) { SetAttributeName(value); return *this;}
    inline AttributeSummary& WithAttributeName(Aws::String&& value) { SetAttributeName(std::move(value)); return *this;}
    inline AttributeSummary& WithAttributeName(const char* value) { SetAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration value that is most frequently observed for the
     * attribute.</p>
     */
    inline const Aws::String& GetMostFrequentValue() const{ return m_mostFrequentValue; }
    inline bool MostFrequentValueHasBeenSet() const { return m_mostFrequentValueHasBeenSet; }
    inline void SetMostFrequentValue(const Aws::String& value) { m_mostFrequentValueHasBeenSet = true; m_mostFrequentValue = value; }
    inline void SetMostFrequentValue(Aws::String&& value) { m_mostFrequentValueHasBeenSet = true; m_mostFrequentValue = std::move(value); }
    inline void SetMostFrequentValue(const char* value) { m_mostFrequentValueHasBeenSet = true; m_mostFrequentValue.assign(value); }
    inline AttributeSummary& WithMostFrequentValue(const Aws::String& value) { SetMostFrequentValue(value); return *this;}
    inline AttributeSummary& WithMostFrequentValue(Aws::String&& value) { SetMostFrequentValue(std::move(value)); return *this;}
    inline AttributeSummary& WithMostFrequentValue(const char* value) { SetMostFrequentValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of accounts with the same configuration value for the attribute
     * that is most frequently observed.</p>
     */
    inline int GetNumberOfMatchedAccounts() const{ return m_numberOfMatchedAccounts; }
    inline bool NumberOfMatchedAccountsHasBeenSet() const { return m_numberOfMatchedAccountsHasBeenSet; }
    inline void SetNumberOfMatchedAccounts(int value) { m_numberOfMatchedAccountsHasBeenSet = true; m_numberOfMatchedAccounts = value; }
    inline AttributeSummary& WithNumberOfMatchedAccounts(int value) { SetNumberOfMatchedAccounts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of accounts with a configuration value different from the most
     * frequently observed value for the attribute.</p>
     */
    inline int GetNumberOfUnmatchedAccounts() const{ return m_numberOfUnmatchedAccounts; }
    inline bool NumberOfUnmatchedAccountsHasBeenSet() const { return m_numberOfUnmatchedAccountsHasBeenSet; }
    inline void SetNumberOfUnmatchedAccounts(int value) { m_numberOfUnmatchedAccountsHasBeenSet = true; m_numberOfUnmatchedAccounts = value; }
    inline AttributeSummary& WithNumberOfUnmatchedAccounts(int value) { SetNumberOfUnmatchedAccounts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary report for each Region for the attribute.</p>
     */
    inline const Aws::Vector<RegionalSummary>& GetRegionalSummaries() const{ return m_regionalSummaries; }
    inline bool RegionalSummariesHasBeenSet() const { return m_regionalSummariesHasBeenSet; }
    inline void SetRegionalSummaries(const Aws::Vector<RegionalSummary>& value) { m_regionalSummariesHasBeenSet = true; m_regionalSummaries = value; }
    inline void SetRegionalSummaries(Aws::Vector<RegionalSummary>&& value) { m_regionalSummariesHasBeenSet = true; m_regionalSummaries = std::move(value); }
    inline AttributeSummary& WithRegionalSummaries(const Aws::Vector<RegionalSummary>& value) { SetRegionalSummaries(value); return *this;}
    inline AttributeSummary& WithRegionalSummaries(Aws::Vector<RegionalSummary>&& value) { SetRegionalSummaries(std::move(value)); return *this;}
    inline AttributeSummary& AddRegionalSummaries(const RegionalSummary& value) { m_regionalSummariesHasBeenSet = true; m_regionalSummaries.push_back(value); return *this; }
    inline AttributeSummary& AddRegionalSummaries(RegionalSummary&& value) { m_regionalSummariesHasBeenSet = true; m_regionalSummaries.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_mostFrequentValue;
    bool m_mostFrequentValueHasBeenSet = false;

    int m_numberOfMatchedAccounts;
    bool m_numberOfMatchedAccountsHasBeenSet = false;

    int m_numberOfUnmatchedAccounts;
    bool m_numberOfUnmatchedAccountsHasBeenSet = false;

    Aws::Vector<RegionalSummary> m_regionalSummaries;
    bool m_regionalSummariesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
