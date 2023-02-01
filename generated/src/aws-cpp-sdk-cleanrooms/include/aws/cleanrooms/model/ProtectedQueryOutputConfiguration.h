/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedQueryS3OutputConfiguration.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Contains configuration details for protected query output.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryOutputConfiguration
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryOutputConfiguration();
    AWS_CLEANROOMS_API ProtectedQueryOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Required configuration for a protected query with an `S3` output type.</p>
     */
    inline const ProtectedQueryS3OutputConfiguration& GetS3() const{ return m_s3; }

    /**
     * <p>Required configuration for a protected query with an `S3` output type.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>Required configuration for a protected query with an `S3` output type.</p>
     */
    inline void SetS3(const ProtectedQueryS3OutputConfiguration& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>Required configuration for a protected query with an `S3` output type.</p>
     */
    inline void SetS3(ProtectedQueryS3OutputConfiguration&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>Required configuration for a protected query with an `S3` output type.</p>
     */
    inline ProtectedQueryOutputConfiguration& WithS3(const ProtectedQueryS3OutputConfiguration& value) { SetS3(value); return *this;}

    /**
     * <p>Required configuration for a protected query with an `S3` output type.</p>
     */
    inline ProtectedQueryOutputConfiguration& WithS3(ProtectedQueryS3OutputConfiguration&& value) { SetS3(std::move(value)); return *this;}

  private:

    ProtectedQueryS3OutputConfiguration m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
