/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/GeneratedManifestFormat.h>
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
   * <p>Describes the specified job's generated manifest. Batch Operations jobs
   * created with a ManifestGenerator populate details of this descriptor after
   * execution of the ManifestGenerator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3GeneratedManifestDescriptor">AWS
   * API Reference</a></p>
   */
  class S3GeneratedManifestDescriptor
  {
  public:
    AWS_S3CONTROL_API S3GeneratedManifestDescriptor();
    AWS_S3CONTROL_API S3GeneratedManifestDescriptor(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API S3GeneratedManifestDescriptor& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The format of the generated manifest.</p>
     */
    inline const GeneratedManifestFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the generated manifest.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the generated manifest.</p>
     */
    inline void SetFormat(const GeneratedManifestFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the generated manifest.</p>
     */
    inline void SetFormat(GeneratedManifestFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the generated manifest.</p>
     */
    inline S3GeneratedManifestDescriptor& WithFormat(const GeneratedManifestFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the generated manifest.</p>
     */
    inline S3GeneratedManifestDescriptor& WithFormat(GeneratedManifestFormat&& value) { SetFormat(std::move(value)); return *this;}


    
    inline const JobManifestLocation& GetLocation() const{ return m_location; }

    
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    
    inline void SetLocation(const JobManifestLocation& value) { m_locationHasBeenSet = true; m_location = value; }

    
    inline void SetLocation(JobManifestLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    
    inline S3GeneratedManifestDescriptor& WithLocation(const JobManifestLocation& value) { SetLocation(value); return *this;}

    
    inline S3GeneratedManifestDescriptor& WithLocation(JobManifestLocation&& value) { SetLocation(std::move(value)); return *this;}

  private:

    GeneratedManifestFormat m_format;
    bool m_formatHasBeenSet = false;

    JobManifestLocation m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
