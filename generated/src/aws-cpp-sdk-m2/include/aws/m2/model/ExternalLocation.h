/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>Defines an external storage location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/ExternalLocation">AWS
   * API Reference</a></p>
   */
  class ExternalLocation
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ExternalLocation();
    AWS_MAINFRAMEMODERNIZATION_API ExternalLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API ExternalLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The URI of the Amazon S3 bucket.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>The URI of the Amazon S3 bucket.</p>
     */
    inline void SetS3Location(const Aws::String& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>The URI of the Amazon S3 bucket.</p>
     */
    inline void SetS3Location(Aws::String&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>The URI of the Amazon S3 bucket.</p>
     */
    inline void SetS3Location(const char* value) { m_s3LocationHasBeenSet = true; m_s3Location.assign(value); }

    /**
     * <p>The URI of the Amazon S3 bucket.</p>
     */
    inline ExternalLocation& WithS3Location(const Aws::String& value) { SetS3Location(value); return *this;}

    /**
     * <p>The URI of the Amazon S3 bucket.</p>
     */
    inline ExternalLocation& WithS3Location(Aws::String&& value) { SetS3Location(std::move(value)); return *this;}

    /**
     * <p>The URI of the Amazon S3 bucket.</p>
     */
    inline ExternalLocation& WithS3Location(const char* value) { SetS3Location(value); return *this;}

  private:

    Aws::String m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
