/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AnalysisComponent.h>
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
   * <p>Describes an additional detail for a path analysis.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AdditionalDetail">AWS
   * API Reference</a></p>
   */
  class AdditionalDetail
  {
  public:
    AWS_EC2_API AdditionalDetail();
    AWS_EC2_API AdditionalDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AdditionalDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The information type.</p>
     */
    inline const Aws::String& GetAdditionalDetailType() const{ return m_additionalDetailType; }

    /**
     * <p>The information type.</p>
     */
    inline bool AdditionalDetailTypeHasBeenSet() const { return m_additionalDetailTypeHasBeenSet; }

    /**
     * <p>The information type.</p>
     */
    inline void SetAdditionalDetailType(const Aws::String& value) { m_additionalDetailTypeHasBeenSet = true; m_additionalDetailType = value; }

    /**
     * <p>The information type.</p>
     */
    inline void SetAdditionalDetailType(Aws::String&& value) { m_additionalDetailTypeHasBeenSet = true; m_additionalDetailType = std::move(value); }

    /**
     * <p>The information type.</p>
     */
    inline void SetAdditionalDetailType(const char* value) { m_additionalDetailTypeHasBeenSet = true; m_additionalDetailType.assign(value); }

    /**
     * <p>The information type.</p>
     */
    inline AdditionalDetail& WithAdditionalDetailType(const Aws::String& value) { SetAdditionalDetailType(value); return *this;}

    /**
     * <p>The information type.</p>
     */
    inline AdditionalDetail& WithAdditionalDetailType(Aws::String&& value) { SetAdditionalDetailType(std::move(value)); return *this;}

    /**
     * <p>The information type.</p>
     */
    inline AdditionalDetail& WithAdditionalDetailType(const char* value) { SetAdditionalDetailType(value); return *this;}


    /**
     * <p>The path component.</p>
     */
    inline const AnalysisComponent& GetComponent() const{ return m_component; }

    /**
     * <p>The path component.</p>
     */
    inline bool ComponentHasBeenSet() const { return m_componentHasBeenSet; }

    /**
     * <p>The path component.</p>
     */
    inline void SetComponent(const AnalysisComponent& value) { m_componentHasBeenSet = true; m_component = value; }

    /**
     * <p>The path component.</p>
     */
    inline void SetComponent(AnalysisComponent&& value) { m_componentHasBeenSet = true; m_component = std::move(value); }

    /**
     * <p>The path component.</p>
     */
    inline AdditionalDetail& WithComponent(const AnalysisComponent& value) { SetComponent(value); return *this;}

    /**
     * <p>The path component.</p>
     */
    inline AdditionalDetail& WithComponent(AnalysisComponent&& value) { SetComponent(std::move(value)); return *this;}

  private:

    Aws::String m_additionalDetailType;
    bool m_additionalDetailTypeHasBeenSet = false;

    AnalysisComponent m_component;
    bool m_componentHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
