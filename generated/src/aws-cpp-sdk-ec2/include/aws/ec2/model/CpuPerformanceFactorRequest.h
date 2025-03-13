/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PerformanceFactorReferenceRequest.h>
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
   * <p>The CPU performance to consider, using an instance family as the baseline
   * reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CpuPerformanceFactorRequest">AWS
   * API Reference</a></p>
   */
  class CpuPerformanceFactorRequest
  {
  public:
    AWS_EC2_API CpuPerformanceFactorRequest() = default;
    AWS_EC2_API CpuPerformanceFactorRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CpuPerformanceFactorRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specify an instance family to use as the baseline reference for CPU
     * performance. All instance types that match your specified attributes will be
     * compared against the CPU performance of the referenced instance family,
     * regardless of CPU manufacturer or architecture differences.</p> 
     * <p>Currently, only one instance family can be specified in the list.</p> 
     */
    inline const Aws::Vector<PerformanceFactorReferenceRequest>& GetReferences() const { return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    template<typename ReferencesT = Aws::Vector<PerformanceFactorReferenceRequest>>
    void SetReferences(ReferencesT&& value) { m_referencesHasBeenSet = true; m_references = std::forward<ReferencesT>(value); }
    template<typename ReferencesT = Aws::Vector<PerformanceFactorReferenceRequest>>
    CpuPerformanceFactorRequest& WithReferences(ReferencesT&& value) { SetReferences(std::forward<ReferencesT>(value)); return *this;}
    template<typename ReferencesT = PerformanceFactorReferenceRequest>
    CpuPerformanceFactorRequest& AddReferences(ReferencesT&& value) { m_referencesHasBeenSet = true; m_references.emplace_back(std::forward<ReferencesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PerformanceFactorReferenceRequest> m_references;
    bool m_referencesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
