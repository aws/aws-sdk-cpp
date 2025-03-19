/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The Output data type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/Output">AWS
   * API Reference</a></p>
   */
  class Output
  {
  public:
    AWS_CLOUDFORMATION_API Output() = default;
    AWS_CLOUDFORMATION_API Output(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API Output& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The key associated with the output.</p>
     */
    inline const Aws::String& GetOutputKey() const { return m_outputKey; }
    inline bool OutputKeyHasBeenSet() const { return m_outputKeyHasBeenSet; }
    template<typename OutputKeyT = Aws::String>
    void SetOutputKey(OutputKeyT&& value) { m_outputKeyHasBeenSet = true; m_outputKey = std::forward<OutputKeyT>(value); }
    template<typename OutputKeyT = Aws::String>
    Output& WithOutputKey(OutputKeyT&& value) { SetOutputKey(std::forward<OutputKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value associated with the output.</p>
     */
    inline const Aws::String& GetOutputValue() const { return m_outputValue; }
    inline bool OutputValueHasBeenSet() const { return m_outputValueHasBeenSet; }
    template<typename OutputValueT = Aws::String>
    void SetOutputValue(OutputValueT&& value) { m_outputValueHasBeenSet = true; m_outputValue = std::forward<OutputValueT>(value); }
    template<typename OutputValueT = Aws::String>
    Output& WithOutputValue(OutputValueT&& value) { SetOutputValue(std::forward<OutputValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User defined description associated with the output.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Output& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the export associated with the output.</p>
     */
    inline const Aws::String& GetExportName() const { return m_exportName; }
    inline bool ExportNameHasBeenSet() const { return m_exportNameHasBeenSet; }
    template<typename ExportNameT = Aws::String>
    void SetExportName(ExportNameT&& value) { m_exportNameHasBeenSet = true; m_exportName = std::forward<ExportNameT>(value); }
    template<typename ExportNameT = Aws::String>
    Output& WithExportName(ExportNameT&& value) { SetExportName(std::forward<ExportNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outputKey;
    bool m_outputKeyHasBeenSet = false;

    Aws::String m_outputValue;
    bool m_outputValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_exportName;
    bool m_exportNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
