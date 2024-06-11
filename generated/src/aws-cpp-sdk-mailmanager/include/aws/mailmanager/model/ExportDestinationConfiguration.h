﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/S3ExportDestinationConfiguration.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The destination configuration for delivering exported email
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ExportDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class ExportDestinationConfiguration
  {
  public:
    AWS_MAILMANAGER_API ExportDestinationConfiguration();
    AWS_MAILMANAGER_API ExportDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ExportDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration for delivering to an Amazon S3 bucket.</p>
     */
    inline const S3ExportDestinationConfiguration& GetS3() const{ return m_s3; }
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
    inline void SetS3(const S3ExportDestinationConfiguration& value) { m_s3HasBeenSet = true; m_s3 = value; }
    inline void SetS3(S3ExportDestinationConfiguration&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }
    inline ExportDestinationConfiguration& WithS3(const S3ExportDestinationConfiguration& value) { SetS3(value); return *this;}
    inline ExportDestinationConfiguration& WithS3(S3ExportDestinationConfiguration&& value) { SetS3(std::move(value)); return *this;}
    ///@}
  private:

    S3ExportDestinationConfiguration m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
