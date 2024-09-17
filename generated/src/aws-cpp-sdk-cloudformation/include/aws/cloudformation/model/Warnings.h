/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Contains any warnings returned by the <code>GetTemplateSummary</code> API
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/Warnings">AWS
   * API Reference</a></p>
   */
  class Warnings
  {
  public:
    AWS_CLOUDFORMATION_API Warnings();
    AWS_CLOUDFORMATION_API Warnings(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API Warnings& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A list of all of the unrecognized resource types. This is only returned if
     * the <code>TemplateSummaryConfig</code> parameter has the
     * <code>TreatUnrecognizedResourceTypesAsWarning</code> configuration set to
     * <code>True</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUnrecognizedResourceTypes() const{ return m_unrecognizedResourceTypes; }
    inline bool UnrecognizedResourceTypesHasBeenSet() const { return m_unrecognizedResourceTypesHasBeenSet; }
    inline void SetUnrecognizedResourceTypes(const Aws::Vector<Aws::String>& value) { m_unrecognizedResourceTypesHasBeenSet = true; m_unrecognizedResourceTypes = value; }
    inline void SetUnrecognizedResourceTypes(Aws::Vector<Aws::String>&& value) { m_unrecognizedResourceTypesHasBeenSet = true; m_unrecognizedResourceTypes = std::move(value); }
    inline Warnings& WithUnrecognizedResourceTypes(const Aws::Vector<Aws::String>& value) { SetUnrecognizedResourceTypes(value); return *this;}
    inline Warnings& WithUnrecognizedResourceTypes(Aws::Vector<Aws::String>&& value) { SetUnrecognizedResourceTypes(std::move(value)); return *this;}
    inline Warnings& AddUnrecognizedResourceTypes(const Aws::String& value) { m_unrecognizedResourceTypesHasBeenSet = true; m_unrecognizedResourceTypes.push_back(value); return *this; }
    inline Warnings& AddUnrecognizedResourceTypes(Aws::String&& value) { m_unrecognizedResourceTypesHasBeenSet = true; m_unrecognizedResourceTypes.push_back(std::move(value)); return *this; }
    inline Warnings& AddUnrecognizedResourceTypes(const char* value) { m_unrecognizedResourceTypesHasBeenSet = true; m_unrecognizedResourceTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_unrecognizedResourceTypes;
    bool m_unrecognizedResourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
