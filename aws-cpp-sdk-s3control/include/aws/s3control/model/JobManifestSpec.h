/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/JobManifestFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/JobManifestFieldName.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>Describes the format of a manifest. If the manifest is in CSV format, also
   * describes the columns contained within the manifest.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobManifestSpec">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API JobManifestSpec
  {
  public:
    JobManifestSpec();
    JobManifestSpec(const Aws::Utils::Xml::XmlNode& xmlNode);
    JobManifestSpec& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Indicates which of the available formats the specified manifest uses.</p>
     */
    inline const JobManifestFormat& GetFormat() const{ return m_format; }

    /**
     * <p>Indicates which of the available formats the specified manifest uses.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>Indicates which of the available formats the specified manifest uses.</p>
     */
    inline void SetFormat(const JobManifestFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>Indicates which of the available formats the specified manifest uses.</p>
     */
    inline void SetFormat(JobManifestFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>Indicates which of the available formats the specified manifest uses.</p>
     */
    inline JobManifestSpec& WithFormat(const JobManifestFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>Indicates which of the available formats the specified manifest uses.</p>
     */
    inline JobManifestSpec& WithFormat(JobManifestFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>If the specified manifest object is in the
     * <code>S3BatchOperations_CSV_20180820</code> format, this element describes which
     * columns contain the required data.</p>
     */
    inline const Aws::Vector<JobManifestFieldName>& GetFields() const{ return m_fields; }

    /**
     * <p>If the specified manifest object is in the
     * <code>S3BatchOperations_CSV_20180820</code> format, this element describes which
     * columns contain the required data.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>If the specified manifest object is in the
     * <code>S3BatchOperations_CSV_20180820</code> format, this element describes which
     * columns contain the required data.</p>
     */
    inline void SetFields(const Aws::Vector<JobManifestFieldName>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>If the specified manifest object is in the
     * <code>S3BatchOperations_CSV_20180820</code> format, this element describes which
     * columns contain the required data.</p>
     */
    inline void SetFields(Aws::Vector<JobManifestFieldName>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>If the specified manifest object is in the
     * <code>S3BatchOperations_CSV_20180820</code> format, this element describes which
     * columns contain the required data.</p>
     */
    inline JobManifestSpec& WithFields(const Aws::Vector<JobManifestFieldName>& value) { SetFields(value); return *this;}

    /**
     * <p>If the specified manifest object is in the
     * <code>S3BatchOperations_CSV_20180820</code> format, this element describes which
     * columns contain the required data.</p>
     */
    inline JobManifestSpec& WithFields(Aws::Vector<JobManifestFieldName>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>If the specified manifest object is in the
     * <code>S3BatchOperations_CSV_20180820</code> format, this element describes which
     * columns contain the required data.</p>
     */
    inline JobManifestSpec& AddFields(const JobManifestFieldName& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>If the specified manifest object is in the
     * <code>S3BatchOperations_CSV_20180820</code> format, this element describes which
     * columns contain the required data.</p>
     */
    inline JobManifestSpec& AddFields(JobManifestFieldName&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }

  private:

    JobManifestFormat m_format;
    bool m_formatHasBeenSet;

    Aws::Vector<JobManifestFieldName> m_fields;
    bool m_fieldsHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
