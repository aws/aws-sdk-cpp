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
    AWS_CLOUDFORMATION_API Output();
    AWS_CLOUDFORMATION_API Output(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API Output& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The key associated with the output.</p>
     */
    inline const Aws::String& GetOutputKey() const{ return m_outputKey; }

    /**
     * <p>The key associated with the output.</p>
     */
    inline bool OutputKeyHasBeenSet() const { return m_outputKeyHasBeenSet; }

    /**
     * <p>The key associated with the output.</p>
     */
    inline void SetOutputKey(const Aws::String& value) { m_outputKeyHasBeenSet = true; m_outputKey = value; }

    /**
     * <p>The key associated with the output.</p>
     */
    inline void SetOutputKey(Aws::String&& value) { m_outputKeyHasBeenSet = true; m_outputKey = std::move(value); }

    /**
     * <p>The key associated with the output.</p>
     */
    inline void SetOutputKey(const char* value) { m_outputKeyHasBeenSet = true; m_outputKey.assign(value); }

    /**
     * <p>The key associated with the output.</p>
     */
    inline Output& WithOutputKey(const Aws::String& value) { SetOutputKey(value); return *this;}

    /**
     * <p>The key associated with the output.</p>
     */
    inline Output& WithOutputKey(Aws::String&& value) { SetOutputKey(std::move(value)); return *this;}

    /**
     * <p>The key associated with the output.</p>
     */
    inline Output& WithOutputKey(const char* value) { SetOutputKey(value); return *this;}


    /**
     * <p>The value associated with the output.</p>
     */
    inline const Aws::String& GetOutputValue() const{ return m_outputValue; }

    /**
     * <p>The value associated with the output.</p>
     */
    inline bool OutputValueHasBeenSet() const { return m_outputValueHasBeenSet; }

    /**
     * <p>The value associated with the output.</p>
     */
    inline void SetOutputValue(const Aws::String& value) { m_outputValueHasBeenSet = true; m_outputValue = value; }

    /**
     * <p>The value associated with the output.</p>
     */
    inline void SetOutputValue(Aws::String&& value) { m_outputValueHasBeenSet = true; m_outputValue = std::move(value); }

    /**
     * <p>The value associated with the output.</p>
     */
    inline void SetOutputValue(const char* value) { m_outputValueHasBeenSet = true; m_outputValue.assign(value); }

    /**
     * <p>The value associated with the output.</p>
     */
    inline Output& WithOutputValue(const Aws::String& value) { SetOutputValue(value); return *this;}

    /**
     * <p>The value associated with the output.</p>
     */
    inline Output& WithOutputValue(Aws::String&& value) { SetOutputValue(std::move(value)); return *this;}

    /**
     * <p>The value associated with the output.</p>
     */
    inline Output& WithOutputValue(const char* value) { SetOutputValue(value); return *this;}


    /**
     * <p>User defined description associated with the output.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline Output& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline Output& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>User defined description associated with the output.</p>
     */
    inline Output& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the export associated with the output.</p>
     */
    inline const Aws::String& GetExportName() const{ return m_exportName; }

    /**
     * <p>The name of the export associated with the output.</p>
     */
    inline bool ExportNameHasBeenSet() const { return m_exportNameHasBeenSet; }

    /**
     * <p>The name of the export associated with the output.</p>
     */
    inline void SetExportName(const Aws::String& value) { m_exportNameHasBeenSet = true; m_exportName = value; }

    /**
     * <p>The name of the export associated with the output.</p>
     */
    inline void SetExportName(Aws::String&& value) { m_exportNameHasBeenSet = true; m_exportName = std::move(value); }

    /**
     * <p>The name of the export associated with the output.</p>
     */
    inline void SetExportName(const char* value) { m_exportNameHasBeenSet = true; m_exportName.assign(value); }

    /**
     * <p>The name of the export associated with the output.</p>
     */
    inline Output& WithExportName(const Aws::String& value) { SetExportName(value); return *this;}

    /**
     * <p>The name of the export associated with the output.</p>
     */
    inline Output& WithExportName(Aws::String&& value) { SetExportName(std::move(value)); return *this;}

    /**
     * <p>The name of the export associated with the output.</p>
     */
    inline Output& WithExportName(const char* value) { SetExportName(value); return *this;}

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
