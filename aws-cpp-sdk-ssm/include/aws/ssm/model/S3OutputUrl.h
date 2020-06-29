/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A URL for the S3 bucket where you want to store the results of this
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/S3OutputUrl">AWS API
   * Reference</a></p>
   */
  class AWS_SSM_API S3OutputUrl
  {
  public:
    S3OutputUrl();
    S3OutputUrl(Aws::Utils::Json::JsonView jsonValue);
    S3OutputUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A URL for an S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline const Aws::String& GetOutputUrl() const{ return m_outputUrl; }

    /**
     * <p>A URL for an S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline bool OutputUrlHasBeenSet() const { return m_outputUrlHasBeenSet; }

    /**
     * <p>A URL for an S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline void SetOutputUrl(const Aws::String& value) { m_outputUrlHasBeenSet = true; m_outputUrl = value; }

    /**
     * <p>A URL for an S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline void SetOutputUrl(Aws::String&& value) { m_outputUrlHasBeenSet = true; m_outputUrl = std::move(value); }

    /**
     * <p>A URL for an S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline void SetOutputUrl(const char* value) { m_outputUrlHasBeenSet = true; m_outputUrl.assign(value); }

    /**
     * <p>A URL for an S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline S3OutputUrl& WithOutputUrl(const Aws::String& value) { SetOutputUrl(value); return *this;}

    /**
     * <p>A URL for an S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline S3OutputUrl& WithOutputUrl(Aws::String&& value) { SetOutputUrl(std::move(value)); return *this;}

    /**
     * <p>A URL for an S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline S3OutputUrl& WithOutputUrl(const char* value) { SetOutputUrl(value); return *this;}

  private:

    Aws::String m_outputUrl;
    bool m_outputUrlHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
