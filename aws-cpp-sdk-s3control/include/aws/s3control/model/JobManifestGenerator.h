/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3JobManifestGenerator.h>
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
   * <p>Configures the type of the job's ManifestGenerator.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobManifestGenerator">AWS
   * API Reference</a></p>
   */
  class JobManifestGenerator
  {
  public:
    AWS_S3CONTROL_API JobManifestGenerator();
    AWS_S3CONTROL_API JobManifestGenerator(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobManifestGenerator& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The S3 job ManifestGenerator's configuration details.</p>
     */
    inline const S3JobManifestGenerator& GetS3JobManifestGenerator() const{ return m_s3JobManifestGenerator; }

    /**
     * <p>The S3 job ManifestGenerator's configuration details.</p>
     */
    inline bool S3JobManifestGeneratorHasBeenSet() const { return m_s3JobManifestGeneratorHasBeenSet; }

    /**
     * <p>The S3 job ManifestGenerator's configuration details.</p>
     */
    inline void SetS3JobManifestGenerator(const S3JobManifestGenerator& value) { m_s3JobManifestGeneratorHasBeenSet = true; m_s3JobManifestGenerator = value; }

    /**
     * <p>The S3 job ManifestGenerator's configuration details.</p>
     */
    inline void SetS3JobManifestGenerator(S3JobManifestGenerator&& value) { m_s3JobManifestGeneratorHasBeenSet = true; m_s3JobManifestGenerator = std::move(value); }

    /**
     * <p>The S3 job ManifestGenerator's configuration details.</p>
     */
    inline JobManifestGenerator& WithS3JobManifestGenerator(const S3JobManifestGenerator& value) { SetS3JobManifestGenerator(value); return *this;}

    /**
     * <p>The S3 job ManifestGenerator's configuration details.</p>
     */
    inline JobManifestGenerator& WithS3JobManifestGenerator(S3JobManifestGenerator&& value) { SetS3JobManifestGenerator(std::move(value)); return *this;}

  private:

    S3JobManifestGenerator m_s3JobManifestGenerator;
    bool m_s3JobManifestGeneratorHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
