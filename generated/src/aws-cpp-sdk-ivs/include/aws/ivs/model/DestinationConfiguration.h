/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/S3DestinationConfiguration.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>A complex type that describes a location where recorded videos will be
   * stored. Each member represents a type of destination configuration. For
   * recording, you define one and only one type of destination
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class DestinationConfiguration
  {
  public:
    AWS_IVS_API DestinationConfiguration();
    AWS_IVS_API DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An S3 destination configuration where recorded videos will be stored.</p>
     */
    inline const S3DestinationConfiguration& GetS3() const{ return m_s3; }

    /**
     * <p>An S3 destination configuration where recorded videos will be stored.</p>
     */
    inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }

    /**
     * <p>An S3 destination configuration where recorded videos will be stored.</p>
     */
    inline void SetS3(const S3DestinationConfiguration& value) { m_s3HasBeenSet = true; m_s3 = value; }

    /**
     * <p>An S3 destination configuration where recorded videos will be stored.</p>
     */
    inline void SetS3(S3DestinationConfiguration&& value) { m_s3HasBeenSet = true; m_s3 = std::move(value); }

    /**
     * <p>An S3 destination configuration where recorded videos will be stored.</p>
     */
    inline DestinationConfiguration& WithS3(const S3DestinationConfiguration& value) { SetS3(value); return *this;}

    /**
     * <p>An S3 destination configuration where recorded videos will be stored.</p>
     */
    inline DestinationConfiguration& WithS3(S3DestinationConfiguration&& value) { SetS3(std::move(value)); return *this;}

  private:

    S3DestinationConfiguration m_s3;
    bool m_s3HasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
