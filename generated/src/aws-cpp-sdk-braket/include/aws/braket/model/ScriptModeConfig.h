/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/CompressionType.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Contains information about the Python scripts used for entry and by an Amazon
   * Braket job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/ScriptModeConfig">AWS
   * API Reference</a></p>
   */
  class ScriptModeConfig
  {
  public:
    AWS_BRAKET_API ScriptModeConfig() = default;
    AWS_BRAKET_API ScriptModeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API ScriptModeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of compression used by the Python scripts for an Amazon Braket
     * job.</p>
     */
    inline CompressionType GetCompressionType() const { return m_compressionType; }
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
    inline void SetCompressionType(CompressionType value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }
    inline ScriptModeConfig& WithCompressionType(CompressionType value) { SetCompressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the Python script that serves as the entry point for an Amazon
     * Braket job.</p>
     */
    inline const Aws::String& GetEntryPoint() const { return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    template<typename EntryPointT = Aws::String>
    void SetEntryPoint(EntryPointT&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::forward<EntryPointT>(value); }
    template<typename EntryPointT = Aws::String>
    ScriptModeConfig& WithEntryPoint(EntryPointT&& value) { SetEntryPoint(std::forward<EntryPointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI that specifies the S3 path to the Python script module that contains
     * the training script used by an Amazon Braket job.</p>
     */
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    ScriptModeConfig& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
    ///@}
  private:

    CompressionType m_compressionType{CompressionType::NOT_SET};
    bool m_compressionTypeHasBeenSet = false;

    Aws::String m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
