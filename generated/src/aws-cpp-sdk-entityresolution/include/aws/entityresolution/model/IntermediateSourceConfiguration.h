/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>The Amazon S3 location that temporarily stores your data while it processes.
   * Your information won't be saved permanently.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IntermediateSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class IntermediateSourceConfiguration
  {
  public:
    AWS_ENTITYRESOLUTION_API IntermediateSourceConfiguration();
    AWS_ENTITYRESOLUTION_API IntermediateSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IntermediateSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location (bucket and prefix). For example:
     * <code>s3://provider_bucket/DOC-EXAMPLE-BUCKET</code> </p>
     */
    inline const Aws::String& GetIntermediateS3Path() const{ return m_intermediateS3Path; }

    /**
     * <p>The Amazon S3 location (bucket and prefix). For example:
     * <code>s3://provider_bucket/DOC-EXAMPLE-BUCKET</code> </p>
     */
    inline bool IntermediateS3PathHasBeenSet() const { return m_intermediateS3PathHasBeenSet; }

    /**
     * <p>The Amazon S3 location (bucket and prefix). For example:
     * <code>s3://provider_bucket/DOC-EXAMPLE-BUCKET</code> </p>
     */
    inline void SetIntermediateS3Path(const Aws::String& value) { m_intermediateS3PathHasBeenSet = true; m_intermediateS3Path = value; }

    /**
     * <p>The Amazon S3 location (bucket and prefix). For example:
     * <code>s3://provider_bucket/DOC-EXAMPLE-BUCKET</code> </p>
     */
    inline void SetIntermediateS3Path(Aws::String&& value) { m_intermediateS3PathHasBeenSet = true; m_intermediateS3Path = std::move(value); }

    /**
     * <p>The Amazon S3 location (bucket and prefix). For example:
     * <code>s3://provider_bucket/DOC-EXAMPLE-BUCKET</code> </p>
     */
    inline void SetIntermediateS3Path(const char* value) { m_intermediateS3PathHasBeenSet = true; m_intermediateS3Path.assign(value); }

    /**
     * <p>The Amazon S3 location (bucket and prefix). For example:
     * <code>s3://provider_bucket/DOC-EXAMPLE-BUCKET</code> </p>
     */
    inline IntermediateSourceConfiguration& WithIntermediateS3Path(const Aws::String& value) { SetIntermediateS3Path(value); return *this;}

    /**
     * <p>The Amazon S3 location (bucket and prefix). For example:
     * <code>s3://provider_bucket/DOC-EXAMPLE-BUCKET</code> </p>
     */
    inline IntermediateSourceConfiguration& WithIntermediateS3Path(Aws::String&& value) { SetIntermediateS3Path(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location (bucket and prefix). For example:
     * <code>s3://provider_bucket/DOC-EXAMPLE-BUCKET</code> </p>
     */
    inline IntermediateSourceConfiguration& WithIntermediateS3Path(const char* value) { SetIntermediateS3Path(value); return *this;}

  private:

    Aws::String m_intermediateS3Path;
    bool m_intermediateS3PathHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
