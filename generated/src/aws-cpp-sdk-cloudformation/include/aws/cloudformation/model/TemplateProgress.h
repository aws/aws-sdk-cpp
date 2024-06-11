/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>A summary of the progress of the template generation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/TemplateProgress">AWS
   * API Reference</a></p>
   */
  class TemplateProgress
  {
  public:
    AWS_CLOUDFORMATION_API TemplateProgress();
    AWS_CLOUDFORMATION_API TemplateProgress(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API TemplateProgress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of resources that succeeded the template generation.</p>
     */
    inline int GetResourcesSucceeded() const{ return m_resourcesSucceeded; }
    inline bool ResourcesSucceededHasBeenSet() const { return m_resourcesSucceededHasBeenSet; }
    inline void SetResourcesSucceeded(int value) { m_resourcesSucceededHasBeenSet = true; m_resourcesSucceeded = value; }
    inline TemplateProgress& WithResourcesSucceeded(int value) { SetResourcesSucceeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources that failed the template generation.</p>
     */
    inline int GetResourcesFailed() const{ return m_resourcesFailed; }
    inline bool ResourcesFailedHasBeenSet() const { return m_resourcesFailedHasBeenSet; }
    inline void SetResourcesFailed(int value) { m_resourcesFailedHasBeenSet = true; m_resourcesFailed = value; }
    inline TemplateProgress& WithResourcesFailed(int value) { SetResourcesFailed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources that are in-process for the template generation.</p>
     */
    inline int GetResourcesProcessing() const{ return m_resourcesProcessing; }
    inline bool ResourcesProcessingHasBeenSet() const { return m_resourcesProcessingHasBeenSet; }
    inline void SetResourcesProcessing(int value) { m_resourcesProcessingHasBeenSet = true; m_resourcesProcessing = value; }
    inline TemplateProgress& WithResourcesProcessing(int value) { SetResourcesProcessing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources that are still pending the template generation.</p>
     */
    inline int GetResourcesPending() const{ return m_resourcesPending; }
    inline bool ResourcesPendingHasBeenSet() const { return m_resourcesPendingHasBeenSet; }
    inline void SetResourcesPending(int value) { m_resourcesPendingHasBeenSet = true; m_resourcesPending = value; }
    inline TemplateProgress& WithResourcesPending(int value) { SetResourcesPending(value); return *this;}
    ///@}
  private:

    int m_resourcesSucceeded;
    bool m_resourcesSucceededHasBeenSet = false;

    int m_resourcesFailed;
    bool m_resourcesFailedHasBeenSet = false;

    int m_resourcesProcessing;
    bool m_resourcesProcessingHasBeenSet = false;

    int m_resourcesPending;
    bool m_resourcesPendingHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
