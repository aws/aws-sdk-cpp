/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/PerformanceFactorReferenceRequest.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p> The CPU performance to consider, using an instance family as the baseline
   * reference. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/CpuPerformanceFactorRequest">AWS
   * API Reference</a></p>
   */
  class CpuPerformanceFactorRequest
  {
  public:
    AWS_AUTOSCALING_API CpuPerformanceFactorRequest();
    AWS_AUTOSCALING_API CpuPerformanceFactorRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API CpuPerformanceFactorRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> Specify an instance family to use as the baseline reference for CPU
     * performance. All instance types that match your specified attributes will be
     * compared against the CPU performance of the referenced instance family,
     * regardless of CPU manufacturer or architecture differences. </p> 
     * <p>Currently only one instance family can be specified in the list.</p> 
     */
    inline const Aws::Vector<PerformanceFactorReferenceRequest>& GetReferences() const{ return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    inline void SetReferences(const Aws::Vector<PerformanceFactorReferenceRequest>& value) { m_referencesHasBeenSet = true; m_references = value; }
    inline void SetReferences(Aws::Vector<PerformanceFactorReferenceRequest>&& value) { m_referencesHasBeenSet = true; m_references = std::move(value); }
    inline CpuPerformanceFactorRequest& WithReferences(const Aws::Vector<PerformanceFactorReferenceRequest>& value) { SetReferences(value); return *this;}
    inline CpuPerformanceFactorRequest& WithReferences(Aws::Vector<PerformanceFactorReferenceRequest>&& value) { SetReferences(std::move(value)); return *this;}
    inline CpuPerformanceFactorRequest& AddReferences(const PerformanceFactorReferenceRequest& value) { m_referencesHasBeenSet = true; m_references.push_back(value); return *this; }
    inline CpuPerformanceFactorRequest& AddReferences(PerformanceFactorReferenceRequest&& value) { m_referencesHasBeenSet = true; m_references.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PerformanceFactorReferenceRequest> m_references;
    bool m_referencesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
