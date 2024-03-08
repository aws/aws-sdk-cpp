/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/FileBatchJobIdentifier.h>
#include <aws/m2/model/S3BatchJobIdentifier.h>
#include <aws/m2/model/ScriptBatchJobIdentifier.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Identifies a specific batch job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/BatchJobIdentifier">AWS
   * API Reference</a></p>
   */
  class BatchJobIdentifier
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API BatchJobIdentifier();
    AWS_MAINFRAMEMODERNIZATION_API BatchJobIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API BatchJobIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies a file associated with a specific batch job.</p>
     */
    inline const FileBatchJobIdentifier& GetFileBatchJobIdentifier() const{ return m_fileBatchJobIdentifier; }

    /**
     * <p>Specifies a file associated with a specific batch job.</p>
     */
    inline bool FileBatchJobIdentifierHasBeenSet() const { return m_fileBatchJobIdentifierHasBeenSet; }

    /**
     * <p>Specifies a file associated with a specific batch job.</p>
     */
    inline void SetFileBatchJobIdentifier(const FileBatchJobIdentifier& value) { m_fileBatchJobIdentifierHasBeenSet = true; m_fileBatchJobIdentifier = value; }

    /**
     * <p>Specifies a file associated with a specific batch job.</p>
     */
    inline void SetFileBatchJobIdentifier(FileBatchJobIdentifier&& value) { m_fileBatchJobIdentifierHasBeenSet = true; m_fileBatchJobIdentifier = std::move(value); }

    /**
     * <p>Specifies a file associated with a specific batch job.</p>
     */
    inline BatchJobIdentifier& WithFileBatchJobIdentifier(const FileBatchJobIdentifier& value) { SetFileBatchJobIdentifier(value); return *this;}

    /**
     * <p>Specifies a file associated with a specific batch job.</p>
     */
    inline BatchJobIdentifier& WithFileBatchJobIdentifier(FileBatchJobIdentifier&& value) { SetFileBatchJobIdentifier(std::move(value)); return *this;}


    /**
     * <p>Specifies an Amazon S3 location that identifies the batch jobs that you want
     * to run. Use this identifier to run ad hoc batch jobs.</p>
     */
    inline const S3BatchJobIdentifier& GetS3BatchJobIdentifier() const{ return m_s3BatchJobIdentifier; }

    /**
     * <p>Specifies an Amazon S3 location that identifies the batch jobs that you want
     * to run. Use this identifier to run ad hoc batch jobs.</p>
     */
    inline bool S3BatchJobIdentifierHasBeenSet() const { return m_s3BatchJobIdentifierHasBeenSet; }

    /**
     * <p>Specifies an Amazon S3 location that identifies the batch jobs that you want
     * to run. Use this identifier to run ad hoc batch jobs.</p>
     */
    inline void SetS3BatchJobIdentifier(const S3BatchJobIdentifier& value) { m_s3BatchJobIdentifierHasBeenSet = true; m_s3BatchJobIdentifier = value; }

    /**
     * <p>Specifies an Amazon S3 location that identifies the batch jobs that you want
     * to run. Use this identifier to run ad hoc batch jobs.</p>
     */
    inline void SetS3BatchJobIdentifier(S3BatchJobIdentifier&& value) { m_s3BatchJobIdentifierHasBeenSet = true; m_s3BatchJobIdentifier = std::move(value); }

    /**
     * <p>Specifies an Amazon S3 location that identifies the batch jobs that you want
     * to run. Use this identifier to run ad hoc batch jobs.</p>
     */
    inline BatchJobIdentifier& WithS3BatchJobIdentifier(const S3BatchJobIdentifier& value) { SetS3BatchJobIdentifier(value); return *this;}

    /**
     * <p>Specifies an Amazon S3 location that identifies the batch jobs that you want
     * to run. Use this identifier to run ad hoc batch jobs.</p>
     */
    inline BatchJobIdentifier& WithS3BatchJobIdentifier(S3BatchJobIdentifier&& value) { SetS3BatchJobIdentifier(std::move(value)); return *this;}


    /**
     * <p>A batch job identifier in which the batch job to run is identified by the
     * script name.</p>
     */
    inline const ScriptBatchJobIdentifier& GetScriptBatchJobIdentifier() const{ return m_scriptBatchJobIdentifier; }

    /**
     * <p>A batch job identifier in which the batch job to run is identified by the
     * script name.</p>
     */
    inline bool ScriptBatchJobIdentifierHasBeenSet() const { return m_scriptBatchJobIdentifierHasBeenSet; }

    /**
     * <p>A batch job identifier in which the batch job to run is identified by the
     * script name.</p>
     */
    inline void SetScriptBatchJobIdentifier(const ScriptBatchJobIdentifier& value) { m_scriptBatchJobIdentifierHasBeenSet = true; m_scriptBatchJobIdentifier = value; }

    /**
     * <p>A batch job identifier in which the batch job to run is identified by the
     * script name.</p>
     */
    inline void SetScriptBatchJobIdentifier(ScriptBatchJobIdentifier&& value) { m_scriptBatchJobIdentifierHasBeenSet = true; m_scriptBatchJobIdentifier = std::move(value); }

    /**
     * <p>A batch job identifier in which the batch job to run is identified by the
     * script name.</p>
     */
    inline BatchJobIdentifier& WithScriptBatchJobIdentifier(const ScriptBatchJobIdentifier& value) { SetScriptBatchJobIdentifier(value); return *this;}

    /**
     * <p>A batch job identifier in which the batch job to run is identified by the
     * script name.</p>
     */
    inline BatchJobIdentifier& WithScriptBatchJobIdentifier(ScriptBatchJobIdentifier&& value) { SetScriptBatchJobIdentifier(std::move(value)); return *this;}

  private:

    FileBatchJobIdentifier m_fileBatchJobIdentifier;
    bool m_fileBatchJobIdentifierHasBeenSet = false;

    S3BatchJobIdentifier m_s3BatchJobIdentifier;
    bool m_s3BatchJobIdentifierHasBeenSet = false;

    ScriptBatchJobIdentifier m_scriptBatchJobIdentifier;
    bool m_scriptBatchJobIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
