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
#include <aws/ssm/model/S3OutputLocation.h>
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
   * <p>An Amazon S3 bucket where you want to store the results of this
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceAssociationOutputLocation">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API InstanceAssociationOutputLocation
  {
  public:
    InstanceAssociationOutputLocation();
    InstanceAssociationOutputLocation(Aws::Utils::Json::JsonView jsonValue);
    InstanceAssociationOutputLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     */
    inline const S3OutputLocation& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     */
    inline void SetS3Location(const S3OutputLocation& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     */
    inline void SetS3Location(S3OutputLocation&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     */
    inline InstanceAssociationOutputLocation& WithS3Location(const S3OutputLocation& value) { SetS3Location(value); return *this;}

    /**
     * <p>An Amazon S3 bucket where you want to store the results of this request.</p>
     */
    inline InstanceAssociationOutputLocation& WithS3Location(S3OutputLocation&& value) { SetS3Location(std::move(value)); return *this;}

  private:

    S3OutputLocation m_s3Location;
    bool m_s3LocationHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
