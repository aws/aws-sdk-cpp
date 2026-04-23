/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Reserved for future use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/SessionManagerOutputUrl">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API SessionManagerOutputUrl
  {
  public:
    SessionManagerOutputUrl();
    SessionManagerOutputUrl(Aws::Utils::Json::JsonView jsonValue);
    SessionManagerOutputUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetS3OutputUrl() const{ return m_s3OutputUrl; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool S3OutputUrlHasBeenSet() const { return m_s3OutputUrlHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetS3OutputUrl(const Aws::String& value) { m_s3OutputUrlHasBeenSet = true; m_s3OutputUrl = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetS3OutputUrl(Aws::String&& value) { m_s3OutputUrlHasBeenSet = true; m_s3OutputUrl = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetS3OutputUrl(const char* value) { m_s3OutputUrlHasBeenSet = true; m_s3OutputUrl.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline SessionManagerOutputUrl& WithS3OutputUrl(const Aws::String& value) { SetS3OutputUrl(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline SessionManagerOutputUrl& WithS3OutputUrl(Aws::String&& value) { SetS3OutputUrl(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline SessionManagerOutputUrl& WithS3OutputUrl(const char* value) { SetS3OutputUrl(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetCloudWatchOutputUrl() const{ return m_cloudWatchOutputUrl; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool CloudWatchOutputUrlHasBeenSet() const { return m_cloudWatchOutputUrlHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetCloudWatchOutputUrl(const Aws::String& value) { m_cloudWatchOutputUrlHasBeenSet = true; m_cloudWatchOutputUrl = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetCloudWatchOutputUrl(Aws::String&& value) { m_cloudWatchOutputUrlHasBeenSet = true; m_cloudWatchOutputUrl = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetCloudWatchOutputUrl(const char* value) { m_cloudWatchOutputUrlHasBeenSet = true; m_cloudWatchOutputUrl.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline SessionManagerOutputUrl& WithCloudWatchOutputUrl(const Aws::String& value) { SetCloudWatchOutputUrl(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline SessionManagerOutputUrl& WithCloudWatchOutputUrl(Aws::String&& value) { SetCloudWatchOutputUrl(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline SessionManagerOutputUrl& WithCloudWatchOutputUrl(const char* value) { SetCloudWatchOutputUrl(value); return *this;}

  private:

    Aws::String m_s3OutputUrl;
    bool m_s3OutputUrlHasBeenSet;

    Aws::String m_cloudWatchOutputUrl;
    bool m_cloudWatchOutputUrlHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
