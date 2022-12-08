/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> Evidence that's uploaded to Audit Manager manually. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/ManualEvidence">AWS
   * API Reference</a></p>
   */
  class ManualEvidence
  {
  public:
    AWS_AUDITMANAGER_API ManualEvidence();
    AWS_AUDITMANAGER_API ManualEvidence(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API ManualEvidence& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon S3 URL that points to a manual evidence object. </p>
     */
    inline const Aws::String& GetS3ResourcePath() const{ return m_s3ResourcePath; }

    /**
     * <p> The Amazon S3 URL that points to a manual evidence object. </p>
     */
    inline bool S3ResourcePathHasBeenSet() const { return m_s3ResourcePathHasBeenSet; }

    /**
     * <p> The Amazon S3 URL that points to a manual evidence object. </p>
     */
    inline void SetS3ResourcePath(const Aws::String& value) { m_s3ResourcePathHasBeenSet = true; m_s3ResourcePath = value; }

    /**
     * <p> The Amazon S3 URL that points to a manual evidence object. </p>
     */
    inline void SetS3ResourcePath(Aws::String&& value) { m_s3ResourcePathHasBeenSet = true; m_s3ResourcePath = std::move(value); }

    /**
     * <p> The Amazon S3 URL that points to a manual evidence object. </p>
     */
    inline void SetS3ResourcePath(const char* value) { m_s3ResourcePathHasBeenSet = true; m_s3ResourcePath.assign(value); }

    /**
     * <p> The Amazon S3 URL that points to a manual evidence object. </p>
     */
    inline ManualEvidence& WithS3ResourcePath(const Aws::String& value) { SetS3ResourcePath(value); return *this;}

    /**
     * <p> The Amazon S3 URL that points to a manual evidence object. </p>
     */
    inline ManualEvidence& WithS3ResourcePath(Aws::String&& value) { SetS3ResourcePath(std::move(value)); return *this;}

    /**
     * <p> The Amazon S3 URL that points to a manual evidence object. </p>
     */
    inline ManualEvidence& WithS3ResourcePath(const char* value) { SetS3ResourcePath(value); return *this;}

  private:

    Aws::String m_s3ResourcePath;
    bool m_s3ResourcePathHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
