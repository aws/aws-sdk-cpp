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
#include <aws/s3control/model/JobManifestSpec.h>
#include <aws/s3control/model/JobManifestLocation.h>
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
   * <p>Contains the configuration information for a job's manifest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobManifest">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API JobManifest
  {
  public:
    JobManifest();
    JobManifest(const Aws::Utils::Xml::XmlNode& xmlNode);
    JobManifest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Describes the format of the specified job's manifest. If the manifest is in
     * CSV format, also describes the columns contained within the manifest.</p>
     */
    inline const JobManifestSpec& GetSpec() const{ return m_spec; }

    /**
     * <p>Describes the format of the specified job's manifest. If the manifest is in
     * CSV format, also describes the columns contained within the manifest.</p>
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * <p>Describes the format of the specified job's manifest. If the manifest is in
     * CSV format, also describes the columns contained within the manifest.</p>
     */
    inline void SetSpec(const JobManifestSpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * <p>Describes the format of the specified job's manifest. If the manifest is in
     * CSV format, also describes the columns contained within the manifest.</p>
     */
    inline void SetSpec(JobManifestSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * <p>Describes the format of the specified job's manifest. If the manifest is in
     * CSV format, also describes the columns contained within the manifest.</p>
     */
    inline JobManifest& WithSpec(const JobManifestSpec& value) { SetSpec(value); return *this;}

    /**
     * <p>Describes the format of the specified job's manifest. If the manifest is in
     * CSV format, also describes the columns contained within the manifest.</p>
     */
    inline JobManifest& WithSpec(JobManifestSpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * <p>Contains the information required to locate the specified job's manifest.</p>
     */
    inline const JobManifestLocation& GetLocation() const{ return m_location; }

    /**
     * <p>Contains the information required to locate the specified job's manifest.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>Contains the information required to locate the specified job's manifest.</p>
     */
    inline void SetLocation(const JobManifestLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>Contains the information required to locate the specified job's manifest.</p>
     */
    inline void SetLocation(JobManifestLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>Contains the information required to locate the specified job's manifest.</p>
     */
    inline JobManifest& WithLocation(const JobManifestLocation& value) { SetLocation(value); return *this;}

    /**
     * <p>Contains the information required to locate the specified job's manifest.</p>
     */
    inline JobManifest& WithLocation(JobManifestLocation&& value) { SetLocation(std::move(value)); return *this;}

  private:

    JobManifestSpec m_spec;
    bool m_specHasBeenSet;

    JobManifestLocation m_location;
    bool m_locationHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
