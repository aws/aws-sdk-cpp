/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/AutoImportPolicy.h>
#include <aws/fsx/model/AutoExportPolicy.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The configuration for an Amazon S3 data repository linked to an Amazon FSx
   * for Lustre file system with a data repository association. The configuration
   * consists of an <code>AutoImportPolicy</code> that defines which file events on
   * the data repository are automatically imported to the file system and an
   * <code>AutoExportPolicy</code> that defines which file events on the file system
   * are automatically exported to the data repository. File events are when files or
   * directories are added, changed, or deleted on the file system or the data
   * repository.</p>  <p>Data repository associations on Amazon File Cache
   * don't use <code>S3DataRepositoryConfiguration</code> because they don't support
   * automatic import or automatic export.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/S3DataRepositoryConfiguration">AWS
   * API Reference</a></p>
   */
  class S3DataRepositoryConfiguration
  {
  public:
    AWS_FSX_API S3DataRepositoryConfiguration();
    AWS_FSX_API S3DataRepositoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API S3DataRepositoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the type of updated objects (new, changed, deleted) that will be
     * automatically imported from the linked S3 bucket to your file system.</p>
     */
    inline const AutoImportPolicy& GetAutoImportPolicy() const{ return m_autoImportPolicy; }

    /**
     * <p>Specifies the type of updated objects (new, changed, deleted) that will be
     * automatically imported from the linked S3 bucket to your file system.</p>
     */
    inline bool AutoImportPolicyHasBeenSet() const { return m_autoImportPolicyHasBeenSet; }

    /**
     * <p>Specifies the type of updated objects (new, changed, deleted) that will be
     * automatically imported from the linked S3 bucket to your file system.</p>
     */
    inline void SetAutoImportPolicy(const AutoImportPolicy& value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = value; }

    /**
     * <p>Specifies the type of updated objects (new, changed, deleted) that will be
     * automatically imported from the linked S3 bucket to your file system.</p>
     */
    inline void SetAutoImportPolicy(AutoImportPolicy&& value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = std::move(value); }

    /**
     * <p>Specifies the type of updated objects (new, changed, deleted) that will be
     * automatically imported from the linked S3 bucket to your file system.</p>
     */
    inline S3DataRepositoryConfiguration& WithAutoImportPolicy(const AutoImportPolicy& value) { SetAutoImportPolicy(value); return *this;}

    /**
     * <p>Specifies the type of updated objects (new, changed, deleted) that will be
     * automatically imported from the linked S3 bucket to your file system.</p>
     */
    inline S3DataRepositoryConfiguration& WithAutoImportPolicy(AutoImportPolicy&& value) { SetAutoImportPolicy(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of updated objects (new, changed, deleted) that will be
     * automatically exported from your file system to the linked S3 bucket.</p>
     */
    inline const AutoExportPolicy& GetAutoExportPolicy() const{ return m_autoExportPolicy; }

    /**
     * <p>Specifies the type of updated objects (new, changed, deleted) that will be
     * automatically exported from your file system to the linked S3 bucket.</p>
     */
    inline bool AutoExportPolicyHasBeenSet() const { return m_autoExportPolicyHasBeenSet; }

    /**
     * <p>Specifies the type of updated objects (new, changed, deleted) that will be
     * automatically exported from your file system to the linked S3 bucket.</p>
     */
    inline void SetAutoExportPolicy(const AutoExportPolicy& value) { m_autoExportPolicyHasBeenSet = true; m_autoExportPolicy = value; }

    /**
     * <p>Specifies the type of updated objects (new, changed, deleted) that will be
     * automatically exported from your file system to the linked S3 bucket.</p>
     */
    inline void SetAutoExportPolicy(AutoExportPolicy&& value) { m_autoExportPolicyHasBeenSet = true; m_autoExportPolicy = std::move(value); }

    /**
     * <p>Specifies the type of updated objects (new, changed, deleted) that will be
     * automatically exported from your file system to the linked S3 bucket.</p>
     */
    inline S3DataRepositoryConfiguration& WithAutoExportPolicy(const AutoExportPolicy& value) { SetAutoExportPolicy(value); return *this;}

    /**
     * <p>Specifies the type of updated objects (new, changed, deleted) that will be
     * automatically exported from your file system to the linked S3 bucket.</p>
     */
    inline S3DataRepositoryConfiguration& WithAutoExportPolicy(AutoExportPolicy&& value) { SetAutoExportPolicy(std::move(value)); return *this;}

  private:

    AutoImportPolicy m_autoImportPolicy;
    bool m_autoImportPolicyHasBeenSet = false;

    AutoExportPolicy m_autoExportPolicy;
    bool m_autoExportPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
