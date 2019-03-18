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
#include <aws/ssm/model/S3OutputUrl.h>
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
   * <p>The URL of Amazon S3 bucket where you want to store the results of this
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceAssociationOutputUrl">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InstanceAssociationOutputUrl
  {
  public:
    InstanceAssociationOutputUrl();
    InstanceAssociationOutputUrl(Aws::Utils::Json::JsonView jsonValue);
    InstanceAssociationOutputUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL of Amazon S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline const S3OutputUrl& GetS3OutputUrl() const{ return m_s3OutputUrl; }

    /**
     * <p>The URL of Amazon S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline bool S3OutputUrlHasBeenSet() const { return m_s3OutputUrlHasBeenSet; }

    /**
     * <p>The URL of Amazon S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline void SetS3OutputUrl(const S3OutputUrl& value) { m_s3OutputUrlHasBeenSet = true; m_s3OutputUrl = value; }

    /**
     * <p>The URL of Amazon S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline void SetS3OutputUrl(S3OutputUrl&& value) { m_s3OutputUrlHasBeenSet = true; m_s3OutputUrl = std::move(value); }

    /**
     * <p>The URL of Amazon S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline InstanceAssociationOutputUrl& WithS3OutputUrl(const S3OutputUrl& value) { SetS3OutputUrl(value); return *this;}

    /**
     * <p>The URL of Amazon S3 bucket where you want to store the results of this
     * request.</p>
     */
    inline InstanceAssociationOutputUrl& WithS3OutputUrl(S3OutputUrl&& value) { SetS3OutputUrl(std::move(value)); return *this;}

  private:

    S3OutputUrl m_s3OutputUrl;
    bool m_s3OutputUrlHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
