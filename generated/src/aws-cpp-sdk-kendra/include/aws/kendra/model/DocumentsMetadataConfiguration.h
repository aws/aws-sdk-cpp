﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Document metadata files that contain information such as the document access
   * control information, source URI, document author, and custom attributes. Each
   * metadata file contains metadata about a single document.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DocumentsMetadataConfiguration">AWS
   * API Reference</a></p>
   */
  class DocumentsMetadataConfiguration
  {
  public:
    AWS_KENDRA_API DocumentsMetadataConfiguration() = default;
    AWS_KENDRA_API DocumentsMetadataConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DocumentsMetadataConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A prefix used to filter metadata configuration files in the Amazon Web
     * Services S3 bucket. The S3 bucket might contain multiple metadata files. Use
     * <code>S3Prefix</code> to include only the desired metadata files.</p>
     */
    inline const Aws::String& GetS3Prefix() const { return m_s3Prefix; }
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }
    template<typename S3PrefixT = Aws::String>
    void SetS3Prefix(S3PrefixT&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::forward<S3PrefixT>(value); }
    template<typename S3PrefixT = Aws::String>
    DocumentsMetadataConfiguration& WithS3Prefix(S3PrefixT&& value) { SetS3Prefix(std::forward<S3PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
