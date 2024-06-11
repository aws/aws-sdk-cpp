﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The configuration for exporting email data to an Amazon S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/S3ExportDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class S3ExportDestinationConfiguration
  {
  public:
    AWS_MAILMANAGER_API S3ExportDestinationConfiguration();
    AWS_MAILMANAGER_API S3ExportDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API S3ExportDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 location to deliver the exported email data.</p>
     */
    inline const Aws::String& GetS3Location() const{ return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    inline void SetS3Location(const Aws::String& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }
    inline void SetS3Location(Aws::String&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }
    inline void SetS3Location(const char* value) { m_s3LocationHasBeenSet = true; m_s3Location.assign(value); }
    inline S3ExportDestinationConfiguration& WithS3Location(const Aws::String& value) { SetS3Location(value); return *this;}
    inline S3ExportDestinationConfiguration& WithS3Location(Aws::String&& value) { SetS3Location(std::move(value)); return *this;}
    inline S3ExportDestinationConfiguration& WithS3Location(const char* value) { SetS3Location(value); return *this;}
    ///@}
  private:

    Aws::String m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
