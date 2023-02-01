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
    AWS_BRAKET_API ScriptModeConfig();
    AWS_BRAKET_API ScriptModeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API ScriptModeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of compression used by the Python scripts for an Amazon Braket
     * job.</p>
     */
    inline const CompressionType& GetCompressionType() const{ return m_compressionType; }

    /**
     * <p>The type of compression used by the Python scripts for an Amazon Braket
     * job.</p>
     */
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }

    /**
     * <p>The type of compression used by the Python scripts for an Amazon Braket
     * job.</p>
     */
    inline void SetCompressionType(const CompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }

    /**
     * <p>The type of compression used by the Python scripts for an Amazon Braket
     * job.</p>
     */
    inline void SetCompressionType(CompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }

    /**
     * <p>The type of compression used by the Python scripts for an Amazon Braket
     * job.</p>
     */
    inline ScriptModeConfig& WithCompressionType(const CompressionType& value) { SetCompressionType(value); return *this;}

    /**
     * <p>The type of compression used by the Python scripts for an Amazon Braket
     * job.</p>
     */
    inline ScriptModeConfig& WithCompressionType(CompressionType&& value) { SetCompressionType(std::move(value)); return *this;}


    /**
     * <p>The path to the Python script that serves as the entry point for an Amazon
     * Braket job.</p>
     */
    inline const Aws::String& GetEntryPoint() const{ return m_entryPoint; }

    /**
     * <p>The path to the Python script that serves as the entry point for an Amazon
     * Braket job.</p>
     */
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }

    /**
     * <p>The path to the Python script that serves as the entry point for an Amazon
     * Braket job.</p>
     */
    inline void SetEntryPoint(const Aws::String& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }

    /**
     * <p>The path to the Python script that serves as the entry point for an Amazon
     * Braket job.</p>
     */
    inline void SetEntryPoint(Aws::String&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::move(value); }

    /**
     * <p>The path to the Python script that serves as the entry point for an Amazon
     * Braket job.</p>
     */
    inline void SetEntryPoint(const char* value) { m_entryPointHasBeenSet = true; m_entryPoint.assign(value); }

    /**
     * <p>The path to the Python script that serves as the entry point for an Amazon
     * Braket job.</p>
     */
    inline ScriptModeConfig& WithEntryPoint(const Aws::String& value) { SetEntryPoint(value); return *this;}

    /**
     * <p>The path to the Python script that serves as the entry point for an Amazon
     * Braket job.</p>
     */
    inline ScriptModeConfig& WithEntryPoint(Aws::String&& value) { SetEntryPoint(std::move(value)); return *this;}

    /**
     * <p>The path to the Python script that serves as the entry point for an Amazon
     * Braket job.</p>
     */
    inline ScriptModeConfig& WithEntryPoint(const char* value) { SetEntryPoint(value); return *this;}


    /**
     * <p>The URI that specifies the S3 path to the Python script module that contains
     * the training script used by an Amazon Braket job.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The URI that specifies the S3 path to the Python script module that contains
     * the training script used by an Amazon Braket job.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The URI that specifies the S3 path to the Python script module that contains
     * the training script used by an Amazon Braket job.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The URI that specifies the S3 path to the Python script module that contains
     * the training script used by an Amazon Braket job.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The URI that specifies the S3 path to the Python script module that contains
     * the training script used by an Amazon Braket job.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The URI that specifies the S3 path to the Python script module that contains
     * the training script used by an Amazon Braket job.</p>
     */
    inline ScriptModeConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The URI that specifies the S3 path to the Python script module that contains
     * the training script used by an Amazon Braket job.</p>
     */
    inline ScriptModeConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The URI that specifies the S3 path to the Python script module that contains
     * the training script used by an Amazon Braket job.</p>
     */
    inline ScriptModeConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    CompressionType m_compressionType;
    bool m_compressionTypeHasBeenSet = false;

    Aws::String m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
