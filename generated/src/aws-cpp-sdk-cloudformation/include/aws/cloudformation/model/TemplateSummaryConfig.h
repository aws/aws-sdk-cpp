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
   * <p>Options for the <code>GetTemplateSummary</code> API action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/TemplateSummaryConfig">AWS
   * API Reference</a></p>
   */
  class TemplateSummaryConfig
  {
  public:
    AWS_CLOUDFORMATION_API TemplateSummaryConfig();
    AWS_CLOUDFORMATION_API TemplateSummaryConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API TemplateSummaryConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>If set to <code>True</code>, any unrecognized resource types generate
     * warnings and not an error. Any unrecognized resource types are returned in the
     * <code>Warnings</code> output parameter.</p>
     */
    inline bool GetTreatUnrecognizedResourceTypesAsWarnings() const{ return m_treatUnrecognizedResourceTypesAsWarnings; }
    inline bool TreatUnrecognizedResourceTypesAsWarningsHasBeenSet() const { return m_treatUnrecognizedResourceTypesAsWarningsHasBeenSet; }
    inline void SetTreatUnrecognizedResourceTypesAsWarnings(bool value) { m_treatUnrecognizedResourceTypesAsWarningsHasBeenSet = true; m_treatUnrecognizedResourceTypesAsWarnings = value; }
    inline TemplateSummaryConfig& WithTreatUnrecognizedResourceTypesAsWarnings(bool value) { SetTreatUnrecognizedResourceTypesAsWarnings(value); return *this;}
    ///@}
  private:

    bool m_treatUnrecognizedResourceTypesAsWarnings;
    bool m_treatUnrecognizedResourceTypesAsWarningsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
